#include "ntuple_MVAJ.h"
#include <string>
#include "Math/Minimizer.h"
#include "Math/Functor.h"
#include "Math/Factory.h"

 ntuple_MVAJ A;
 ntuple_MVAJ A1;

double normS=35.,normB=1e4; //normalization factors for signal and background

double num=5/2; //number in the fom formula

TString decay="MueKst";
TChain * fChain = new TChain(decay);
TChain * fChainMC = new TChain(decay);
double signalWidth=150.;
const int N=40;


TCut dataCut="(abs(B_MM - 5300) > 150) && abs(d2_MM-895.81) < 50";
TCut mcCut="(abs(B_MM - 5300) < 150) && abs(d2_MM-895.81) < 50 && abs(BKGCAT) < 20";





  
double getFoM(const double *par ){
  ostringstream s;
  s <<"MVAJ>"<<par[0]<< "&& l2_ProbNNe>"<<par[1]<< "&& l1_ProbNNmu>"<<par[2] <<"&& h1_ProbNNk>"<<par[3]; 
  TCut cut= s.str().c_str();


  TH1F *hBmassData= new TH1F("hBmassData",  "mass of the B (data)", 100, 4600.,6000.);

  int nEntriesData=fChain->GetEntries();
  int nEntriesMC=fChainMC->GetEntries();
 
  cout<<"cut:"<<s.str().c_str()<<endl;
  fChain->Draw(">>elist",cut && dataCut);
  TEventList *elist = (TEventList*)gDirectory->Get("elist");
  fChain->SetEventList(elist);
  fChain->Project("hBmassData","B_MM");
  
 
  fChainMC->Draw(">>elist1",cut+mcCut);
  TEventList *elist1 = (TEventList*)gDirectory->Get("elist1");


 
  double NS = elist1->GetN()*normS/nEntriesMC;


  hBmassData->Fit("expo");


  TF1 *fit = hBmassData->GetFunction("expo");
 double NB=fit->Integral(5300-signalWidth,5300+signalWidth)/hBmassData->GetBinWidth(1)*normB/nEntriesData;

 
 double fom=NS/sqrt(num+NB);
 cout<<fom<<" fom\n"<<1./fom<<endl;

 delete hBmassData;

 delete elist;
 delete elist1;
 fChain->SetEventList(0);  

 if(fom>0)
   return 1./fom;
  
 return 1e4;

}



void maximize(){
  ROOT::Math::Minimizer *minim =  ROOT::Math::Factory::CreateMinimizer("Genetic");
  minim->SetMaxFunctionCalls(10000000); // for Minuit/Minuit2
  minim->SetMaxIterations(100000);  // for GSL
  minim->SetTolerance(1e-5);
  

  ROOT::Math::Functor func( &getFoM, 4); 
  minim->SetFunction(func); 
 
  minim->SetLimitedVariable(0,"MVA cut", 0.8,.1,0.,.99);
  // minim->SetFixedVariable(0,"MVA cut",0.87);
  minim->SetLimitedVariable(1,"probNNe cut",0.4,.1,0.1,.99);
  minim->SetLimitedVariable(2,"probNNmu cut",0.4,.1,0.1,.99);
  minim->SetLimitedVariable(3,"probNNk cut",0.4,.1,0.,.99);
 

  // minim->SetFixedVariable(1,"probNNe cut",0.2);
  //minim->SetFixedVariable(2,"probNNmu cut",0.1);
  // minim->SetFixedVariable(3,"probNNk cut",0.1);
  /*
    minim->SetLimitedVariable(0,"MVA cut",0.7,0.01,0.,.99);
    minim->SetLimitedVariable(1,"probNNe cut",0.3,0.1,0.,.99);
  minim->SetLimitedVariable(2,"probNNmu cut",0.1,0.1,0.,.99);
  minim->SetLimitedVariable(3,"probNNk cut",0.1,0.1,0.,.99);
  */
  minim->SetPrintLevel(3); 

  minim->Minimize(); 
  delete minim;
}

void optimizeFoM(){


 
  
   TString file1, file2,file3,file4,fileMC;
   
     fileMC="/opt/ppd/lhcb/sds61239/mva/addMva/BDTNW/"+decay+"-mc-xll-new.root";
     file1="/opt/ppd/lhcb/sds61239/mva/addMva/BDTNW/"+decay+"-data-xll-2011U.root";
     file2="/opt/ppd/lhcb/sds61239/mva/addMva/BDTNW/"+decay+"-data-xll-2011D.root";
     file3="/opt/ppd/lhcb/sds61239/mva/addMva/BDTNW/"+decay+"-data-xll-2012D.root";
     file4="/opt/ppd/lhcb/sds61239/mva/addMva/BDTNW/"+decay+"-data-xll-2012U.root";
   
   fChain->Add(file1); 
   fChain->Add(file2);
   fChain->Add(file3);
   fChain->Add(file4);
   fChainMC->Add(fileMC);
   

   maximize();
   
   delete fChain;
   delete fChainMC;
}
