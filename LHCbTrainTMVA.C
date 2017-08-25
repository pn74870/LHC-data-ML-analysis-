// <fold> is a number between 0 and 9 to train on 9/10 of the data 
// > emacs TMVA_input_B02D0Kpi.txt (note "mode" is defined here, used below and to identify the actual ntuple used for training / testing)
// > root -l -q -b "LHCbTrainTMVA.C('<fold>')"
//
// histos get written  to TMVA_<mode><fold>.root
// code get written    to weights/<mode><fold>_LikelihoodD.class.C
// weights get written to weights/<mode><fold>_LikelihoodD.weights.txt
//
// To have a look at the training stuff, try out the following command
// export ROOTSYS="/opt/ppd/root/5.34.34/SL6/"
// root -l $ROOTSYS/tmva/test/TMVAGui.C\(\"TMVA_<mode><fold>.root\"\)
// 
// or in Root6
// root TMVA::TMVAGui("TMVA_<mode><fold>.root")
#include <iostream>
#include <vector>

#include "TROOT.h"
#include "TCut.h"
#include "TFile.h"
#include "TSystem.h"
#include "TTree.h"
#include "TPRegexp.h"
#include "TMVA/Factory.h"
#include "TMVA/Tools.h"
#include "TMVA/Config.h"
#include "TMath.h"
//#include "TMVAGui.C"

//#include "/opt/ppd/root/5.34.34/SL6/tmva/test/TMVAGui.C"

using namespace TMVA;

void LHCbTrainTMVA() 
{
  //TString libTMVA( "libTMVA" );
  //gSystem->Load( libTMVA );

  // read in input file
  
  FILE *pf;
  char line[1024];
  TString mode="unknown";
  TString modeBg="unknown";
  TString option="_2011+2012_MLPCE_1000_N+2_transU_No_l2_PT_No_tracksMinIP_No_alpha_convergenceTest";
  //TString option="NoBmassCut";
  TString dir="/opt/ppd/lhcb/sds61239/mva/";
  
  
  std::vector<TString> category, filename, variable;

  TString input("TMVA_input_xll_1.txt");
  //  TString input("TMVA_input_nw.txt");
  pf = fopen(input.Data(),"r");
  while (fgets(line, sizeof(line), pf) != 0) {
    TString myline = line;
    TPRegexp comment("^#");
    if (myline.Contains(comment)) {continue;}  // skip comments
    char cat[1024], file[1024];
    int nf = sscanf(line,"%s = %s", cat, file);
    if (nf == 2) {
      //cout << nf << " " << cat << " = " << file << endl;
      if (strcmp(cat,"mode") == 0) {
	mode = file;
      }
      else if(strcmp(cat,"modeBg") == 0)
	modeBg=file;
      else if (strcmp(cat,"variable") == 0) { 
	variable.push_back(file);
      } else {
	category.push_back(cat);
	filename.push_back(file);
      }
    }

  }
  fclose(pf);
  cout<< "MODE " << mode << endl;

  if (mode == "unknown") {cout << "Mode not set. exiting." << endl; return;}
  if (category.size() < 2 ) {cout << "Not enough categories. exiting." << category.size() << endl; return;}

  // char test[10] = "ranInt!=";
  // strcat(test, fold);
  // cout << "test " << test <<endl;

  //TString TrainingSample = fold;
  
   
  TString outfileName =  dir+"TMVA_" + mode  +option+".root";
  TFile* outputFile = TFile::Open( outfileName, "RECREATE" );

  // change number of bins used to display MVA output distribution
  // cout << "Nbins (old) " << TMVA::gConfig().GetVariablePlotting().fNbinsMVAoutput << endl;
  // cout << "Nbins (old) " << TMVA::gConfig().GetVariablePlotting().fNbins1D << endl;
  // cout << TMVA::gConfig().GetVariablePlotting().fTimesRMS << endl;

  // create the factory
  TString bookoptions = Form("!V:%sDrawProgressBar:Transformations=I", gROOT->IsBatch()?"!":"");
  cout << "Book options " << bookoptions << endl;
  TMVA::Factory *factory = new TMVA::Factory(mode, outputFile, bookoptions );
  Double_t weight = 1.0;

  // loop over inputs and calculate weights
  Int_t nsig = 0, nbckg = 0;
  //TString tupleName = mode + "/DecayTree";
  TString tupleName = mode;
  TString tupleNameBg = modeBg;
  Double_t sig_weight(1.0), bckg_weight(1.0);
  for (UInt_t j = 0; j <category.size() ; j++) {
    cout << j << " " << filename[j] << endl;
    TFile *nt  = TFile::Open(filename[j]);
    if (nt ==0) {
      cout << "Can not find " << filename[j] << ". Exiting." << endl;
      return;
    }
   
    TTree *tree;  
    if (category[j] == "signal") {
      tree = (TTree*) nt->Get(tupleName);
      nsig += tree->GetEntries();
    } else {
      tree = (TTree*) nt->Get(tupleNameBg);
      nbckg += tree->GetEntries();
    }
    cout<<"log\n";
    nt->Close();
  }
  cout << nsig << " " << nbckg << endl;
  if ((nsig<=0) || (nbckg<=0)) {
    cout << "Not enough events signal/bckg events: " << nsig << "/" << nbckg << endl;
    return;
  }

  //Double_t sig_weight = (nbckg/(1.0*nsig));
  cout << "Weights signal :" << sig_weight << " background : " << bckg_weight << endl;
  //return;

  // loop over inputs and book
  nsig=nbckg=0;
  for (UInt_t j = 0; j <category.size() ; j++) {
    TFile *nt  = TFile::Open(filename[j]);
    TTree *tree; 
    if (category[j] == "signal") {
      tree= (TTree*) nt->Get(tupleName);
      nsig += tree->GetEntries();
      factory->AddSignalTree    (tree, sig_weight );
    } else {
       tree= (TTree*) nt->Get(tupleNameBg);
      nbckg += tree->GetEntries();
      factory->AddBackgroundTree(tree, bckg_weight );
    }
  }

  if ((nsig<=0) || (nbckg<=0)) {
    cout << "Not enough events signal/bckg events: " << nsig << "/" << nbckg << endl;
    return;
  }

  // use half and half in test training (the default = setting signal & bkg sample sizes to 0)
  // char buffer[1024], buffer2[1024];
  // float sig_frac = 0.5;
  // float bkg_frac = 0.2;
  // sprintf(buffer,"nTrain_Signal=%i:nTrain_Background=%i",int(nsig*sig_frac), int(nbckg*bkg_frac)); 
  // TString options = ;
  // cout << "Option: " << options << endl;
  // return;
  // TString options = "V=True:VerboseLevel=Debug";
  TString options = "nTrain_Signal=0:nTrain_Background=0";

  for (UInt_t j = 0; j <variable.size() ; j++) {
    cout << "Variable " << j+1 << " : " << variable[j] << endl;
    //  if(variable[j].Contains("IPCHI2_OWNPV") && !variable[j].Contains("B"))
    //factory->AddVariable("log_"+variable[j]+":= log("+variable[j]+")",'F');
      // else
      factory->AddVariable(variable[j],'F');
  }

  // For the correlations
  factory->AddSpectator("B_MM", "B_MM", "MeV");
  factory->AddSpectator("BKGCAT", "BKGCAT", "");
  factory->AddSpectator("L0Flag", "L0Flag", "");
  factory->AddSpectator("HLT1Flag", "HLT1Flag", "");
  factory->AddSpectator("HLT2Flag", "HLT2Flag", "");
  factory->AddSpectator("h1_ProbNNk",  "h1_ProbNNk",  "");
  factory->AddSpectator("h2_ProbNNk", "h2_ProbNNk", "");
  factory->AddSpectator("l2_ProbNNe",  "l2_ProbNNe",  "");
  factory->AddSpectator("l1_ProbNNmu", "l1_ProbNNmu", "");

  // Apply any additional cuts
  TCut defaultCut =mode == "MuePhi"? "BKGCAT ==20":"BKGCAT ==10";
  TCut triggerCut = "L0Flag ==1 && HLT1Flag ==1 && HLT2Flag==1";
  TCut ghostCut = "l1_TRACK_GhostProb <0.3 && l2_TRACK_GhostProb <0.3 && h1_TRACK_GhostProb <0.3 && h2_TRACK_GhostProb <0.3";
  TCut mySignalCut = defaultCut;
  TCut mySignalCut = mySignalCut && triggerCut && ghostCut; //add after summer 2016 
  if(mode == "MuePhi") mySignalCut = defaultCut && "abs(d2_MM-1019.5) <20  && h1_ProbNNk > 0.1"; //**SR was 0.2
  if(mode == "MueKst") mySignalCut = defaultCut && "abs(d2_MM-895.8)  <100 && h1_ProbNNk > 0.1";
  cout << "====================================================" << endl;
  mySignalCut.Print();
  //TCut myBkgCut = "B_MM>5500.0";
  //TCut myBkgCut =  myBkgCut && triggerCut && ghostCut; //add after summer 2016 
  TCut myBkgCut = triggerCut && ghostCut;
  if(mode == "MueKst") myBkgCut = myBkgCut && "abs(d2_MM-895.8)  <100  && h1_ProbNNk > 0.1"; //**SR was 0.2
  if(mode == "MuePhi") myBkgCut = myBkgCut && "abs(d2_MM-1019.5)  <20 && h1_ProbNNk > 0.1";

  // Allocate training / test samples
  cout << "Option: " << options << endl;
  factory->PrepareTrainingAndTestTree( mySignalCut, myBkgCut, options );

  //
  // The actual trainings done. For the detailed options, see the TMVA users' guide at
  // http://arxiv.org/pdf/physics/0703039
  //

  // Boosted Decision tree : Gradient boost
  //  bookoptions = "!H:!V:NTrees=750:nEventsMin=150:BoostType=Grad:Shrinkage=0.0075:UseBaggedGrad:GradBaggingFraction=0.75:nCuts=15:NNodesMax=15:MaxDepth=7";
  //  factory->BookMethod( TMVA::Types::kBDT, "BDTGrad", bookoptions );

  // // Boosted Decision tree : Gradient boost 2
  //  bookoptions = "!H:!V:NTrees=750:MinNodeSize=0.05:BoostType=Grad:Shrinkage=0.0075:UseBaggedGrad:GradBaggingFraction=0.75:nCuts=15:NNodesMax=15:MaxDepth=7";
  //  factory->BookMethod( TMVA::Types::kBDT, "BDTGrad2", bookoptions );

  // Boosted Decision tree : Gradient boost (default)
  /*
    bookoptions = "H:!V:NTrees=800:VarTransform=U:MinNodeSize=0.05:BoostType=Grad:Shrinkage=0.01:UseBaggedGrad:BaggedSampleFraction=0.5:nCuts=20:MaxDepth=3";
  // bookoptions = "H:!V:NTrees=1000:MinNodeSize=0.05:BoostType=Grad:Shrinkage=0.10:UseBaggedGrad:GradBaggingFraction=0.5:nCuts=20:NNodesMax=5" ;//default
  factory->BookMethod( TMVA::Types::kBDT, "BDTG" , bookoptions );
  
  // the following is the best but significant over training
  //bookoptions = "H:!V:NTrees=1500:MinNodeSize=0.05:BoostType=Grad:Shrinkage=0.10:UseBaggedGrad:GradBaggingFraction=0.5:nCuts=-1:NNodesMax=5" ;
  //factory->BookMethod( TMVA::Types::kBDT, "BDTG1", bookoptions );
  //  bookoptions = "H:!V:NTrees=1000:MinNodeSize=0.05:BoostType=Grad:Shrinkage=0.10:UseBaggedGrad:GradBaggingFraction=0.5:nCuts=-1:NNodesMax=5" ;
  //  factory->BookMethod( TMVA::Types::kBDT, "BDTG1", bookoptions );

  // Boosted Decision tree : Ada boost
  //  bookoptions = "!H:!V:NTrees=900:nEventsMin=100:BoostType=AdaBoost:AdaBoostBeta=0.3:SeparationType=GiniIndex:nCuts=20:NNodesMax=20:MaxDepth=7";
  //  factory->BookMethod( TMVA::Types::kBDT, "BDTAda", bookoptions );

  //Boosted Decision tree : Natasha's Ada boost
  bookoptions = "!H:!V:NTrees=800:MaxDepth=3:VarTransform=U:MinNodeSize=0.05::BoostType=AdaBoost:AdaBoostR2Loss=Quadratic:AdaBoostBeta=0.1:UseYesNoLeaf=True:nCuts=20";
  // bookoptions = "!H:!V:NTrees=700:MaxDepth=4:MinNodeSize=0.05::BoostType=AdaBoost:AdaBoostR2Loss=Quadratic:AdaBoostBeta=0.2:UseYesNoLeaf=True";//default
  factory->BookMethod( TMVA::Types::kBDT, "BDTNW" , bookoptions );
  */
  //***SR try this! Boosted Decision tree : Ada boost (default)
  //  bookoptions = "!H:!V:NTrees=850:nEventsMin=150:MaxDepth=3:BoostType=AdaBoost:AdaBoostBeta=0.5:SeparationType=GiniIndex:nCuts=20:PruneMethod=NoPruning" ;
  //  factory->BookMethod( TMVA::Types::kBDT, "BDTA", bookoptions );

  //******SR Try this! // TMVA ANN: From Chris Jones
  // // bookoptions = 'H:V:EpochMonitoring:HiddenLayers=N+2:VarTransform=Norm:NCycles=750:NeuronType=tanh:TrainingMethod=BP:EstimatorType=CE';
  // bookoptions = "!H:!V:NeuronType=tanh:VarTransform=G:NCycles=500:HiddenLayers=N-1:TestRate=5:!UseRegulator:EstimatorType=CE";
  //VarTransform=N,G:
   bookoptions = "!H:!V:NeuronType=tanh:VarTransform=U:NCycles=1000:HiddenLayers=N+2:TestRate=5:ConvergenceTests=20:UseRegulator=True:EstimatorType=CE";
  // bookoptions = "!H:!V:NeuronType=tanh:VarTransform=N:NCycles=1000:HiddenLayers=N+2:TestRate=5:!UseRegulator:EstimatorType=CE"; //default
  factory->BookMethod( TMVA::Types::kMLP, "MLPCE", bookoptions );
  
  // // TMVA ANN2
  //  bookoptions = "!H:!V:NeuronType=tanh:VarTransform=N:NCycles=500:HiddenLayers=N+3:TestRate=5:!UseRegulator:EstimatorType=CE";
  //  factory->BookMethod( TMVA::Types::kMLP, "MLPCE2", bookoptions );

  // // TMVA ANN3
  //  bookoptions = "!H:!V:NeuronType=tanh:VarTransform=N:NCycles=500:HiddenLayers=N:TestRate=5:!UseRegulator:EstimatorType=CE";
  //  factory->BookMethod( TMVA::Types::kMLP, "MLPCE3", bookoptions );
  
  // // TMVA ANN (default) This does not give good results!
  //factory->BookMethod( TMVA::Types::kMLP, "MLP", "H:!V:NeuronType=tanh:VarTransform=N:NCycles=600:HiddenLayers=N+5:TestRate=5:!UseRegulator" );

  // Train MVAs using the set of training events
  factory->TrainAllMethods();

  // ---- Evaluate all MVAs using the set of test events
  factory->TestAllMethods();

  // ----- Evaluate and compare performance of all configured MVAs
  factory->EvaluateAllMethods();    

  // --------------------------------------------------------------
   
  // Save the output
  outputFile->Close();
 
  std::cout << "==> Wrote root file " << outfileName << std::endl;
  std::cout << "==> TMVAnalysis is done!" << std::endl;      

  // Clean up
  delete factory;
 
  // Launch the GUI for the root macros
  //     if (!gROOT->IsBatch()) TMVAGui( outfileName );

}

//------------------------------------------------------
TString itoa(Int_t i) 
{
  //std::string s;
  std::stringstream out;
  out << i;
  TString s = out.str();
  return (s);
}
