#include "newntuple.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <algorithm> //std::min_element
#include "/home/ppd/sds61239/mva/weights/ref/MueKst_BDTG.class.C"
#include "/home/ppd/ricciars/lhcb/Xemu/mva/weights/2011/MueKst_BDTG0.class.C"
/*#include "/home/ppd/ricciars/lhcb/Xemu/mva/weights/2011/MueKst_BDTG1.class.C"
#include "/home/ppd/ricciars/lhcb/Xemu/mva/weights/2011/MueKst_BDTG2.class.C"
#include "/home/ppd/ricciars/lhcb/Xemu/mva/weights/2011/MueKst_BDTG3.class.C"
#include "/home/ppd/ricciars/lhcb/Xemu/mva/weights/2011/MueKst_BDTG4.class.C"
#include "/home/ppd/ricciars/lhcb/Xemu/mva/weights/2011/MueKst_BDTG5.class.C"
#include "/home/ppd/ricciars/lhcb/Xemu/mva/weights/2011/MueKst_BDTG6.class.C"
#include "/home/ppd/ricciars/lhcb/Xemu/mva/weights/2011/MueKst_BDTG7.class.C"
#include "/home/ppd/ricciars/lhcb/Xemu/mva/weights/2011/MueKst_BDTG8.class.C"
#include "/home/ppd/ricciars/lhcb/Xemu/mva/weights/2011/MueKst_BDTG9.class.C"

#include "/opt/ppd/lhcb/ivw96271/TMVA_folder/weights/MuePhi_MLPCE0.class.C"
#include "/opt/ppd/lhcb/ivw96271/TMVA_folder/weights/MuePhi_MLPCE1.class.C"
#include "/opt/ppd/lhcb/ivw96271/TMVA_folder/weights/MuePhi_MLPCE2.class.C"
#include "/opt/ppd/lhcb/ivw96271/TMVA_folder/weights/MuePhi_MLPCE3.class.C"
#include "/opt/ppd/lhcb/ivw96271/TMVA_folder/weights/MuePhi_MLPCE4.class.C"
#include "/opt/ppd/lhcb/ivw96271/TMVA_folder/weights/MuePhi_MLPCE5.class.C"
#include "/opt/ppd/lhcb/ivw96271/TMVA_folder/weights/MuePhi_MLPCE6.class.C"
#include "/opt/ppd/lhcb/ivw96271/TMVA_folder/weights/MuePhi_MLPCE7.class.C"
#include "/opt/ppd/lhcb/ivw96271/TMVA_folder/weights/MuePhi_MLPCE8.class.C"
#include "/opt/ppd/lhcb/ivw96271/TMVA_folder/weights/MuePhi_MLPCE9.class.C"
#include "/opt/ppd/lhcb/ivw96271/TMVA_folder/weights/MuePhi_MLPCElower0.class.C"
#include "/opt/ppd/lhcb/ivw96271/TMVA_folder/weights/MuePhi_MLPCElower1.class.C"
#include "/opt/ppd/lhcb/ivw96271/TMVA_folder/weights/MuePhi_MLPCElower2.class.C"
#include "/opt/ppd/lhcb/ivw96271/TMVA_folder/weights/MuePhi_MLPCElower3.class.C"
#include "/opt/ppd/lhcb/ivw96271/TMVA_folder/weights/MuePhi_MLPCElower4.class.C"
#include "/opt/ppd/lhcb/ivw96271/TMVA_folder/weights/MuePhi_MLPCElower5.class.C"
#include "/opt/ppd/lhcb/ivw96271/TMVA_folder/weights/MuePhi_MLPCElower6.class.C"
#include "/opt/ppd/lhcb/ivw96271/TMVA_folder/weights/MuePhi_MLPCElower7.class.C"
#include "/opt/ppd/lhcb/ivw96271/TMVA_folder/weights/MuePhi_MLPCElower8.class.C"
#include "/opt/ppd/lhcb/ivw96271/TMVA_folder/weights/MuePhi_MLPCElower9.class.C"
*/
// runs on produced ntuples and make a reduced ntuple with added MVA
// To run : root -l -b -q addMVA.C
TTree *tre;
newntuple A;
float tracks_minPt;
float tracks_minIPchi2;
float tracks_minIP;
float B_isol;
int ranInt;
int BKGCAT;
double MVA, MVAfold0, MVAfold1,  MVAfold2, MVAfold3,  MVAfold4, MVAfold5,  MVAfold6, MVAfold7,  MVAfold8, MVAfold9;
double MVAS, MVAfold0S, MVAfold1S,  MVAfold2S, MVAfold3S,  MVAfold4S, MVAfold5S,  MVAfold6S, MVAfold7S,  MVAfold8S, MVAfold9S;
double MVAlowerS, MVAlowerfold0S, MVAlowerfold1S,  MVAlowerfold2S, MVAlowerfold3S;
double MVAlowerfold4S, MVAlowerfold5S,  MVAlowerfold6S, MVAlowerfold7S,  MVAlowerfold8S, MVAlowerfold9S;
double dofB, ptXe, ptXh, pXh, pXe_X, pXe_Y, pXe_Z, alphaHOP, EXe, BpHOP2, BEHOP, BmassHOP;
TString dir="/opt/ppd/lhcb/sds61239/mva/addMva/";

void treeToFill();

void addMVAShaun() {

  // The actual ntuple (mode) we are looking at
  TString decay = "MueKst"; //"MueKst" or "MuePhi"
  TString option = "data-2011U"; //mc or data-2011D or data-2011U
  TChain *fChain;
  fChain = new TChain(decay + "/DecayTree");
  cout << "----------------------------------here 0000" << endl;

  // input files are the original ntuples (not the reduced one)
  TString file1, file2,file3, file4, file5, file6, file7, file8, file9, file10;
   if (option == "data-2011D"){
    //TString file1 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/background-sample.root";
    file1 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagDown-2011-1.root";;
    file2 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagDown-2011-2.root";
    file3 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagDown-2011-3.root";
    file4 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagDown-2011-4.root";
    file5 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagDown-2011-5.root";
    file6 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagDown-2011-6.root";
    file7 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagDown-2011-7.root";
    file8 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagDown-2011-8.root";
    file9 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagDown-2011-9.root";
    file10 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagDown-2011-10.root";
  }
  if (option == "data-2011U"){
    file1 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagUp-2011-1.root";;
    file2 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagUp-2011-2.root";
    file3 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagUp-2011-3.root";
    file4 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagUp-2011-4.root";
    file5 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagUp-2011-5.root";
    file6 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagUp-2011-6.root";
    file7 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagUp-2011-7.root";
    file8 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagUp-2011-8.root";
    file9 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagUp-2011-9.root";
    file10 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagUp-2011-10.root";
  }
  if (option == "data-2012D"){
    //TString file1 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/background-sample.root";
    file1 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagDown-2012-1.root";;
    file2 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagDown-2012-2.root";
    file3 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagDown-2012-3.root";
    file4 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagDown-2012-4.root";
    file5 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagDown-2012-5.root";
    file6 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagDown-2012-6.root";
    file7 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagDown-2012-7.root";
    file8 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagDown-2012-8.root";
    file9 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagDown-2012-9.root";
    file10 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagDown-2012-10.root";
  }
  if (option == "data-2012U"){
    file1 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagUp-2012-1.root";;
    file2 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagUp-2012-2.root";
    file3 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagUp-2012-3.root";
    file4 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagUp-2012-4.root";
    file5 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagUp-2012-5.root";
    file6 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagUp-2012-6.root";
    file7 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagUp-2012-7.root";
    file8 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagUp-2012-8.root";
    file9 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagUp-2012-9.root";
    file10 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagUp-2012-10.root";
  }
  if (option == "mc"){
    if (decay == "MuePhi"){
      file2 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/MC12-13314000-MagUp-Pythia8.root";
      file1 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/MC12-13314000-MagDown-Pythia8.root";
    }
    if (decay == "MueKst"){
      file1 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/MC12-11314000-MagDown-Pythia8.root";
      file2 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/MC12-11314000-MagUp-Pythia8.root";
    }
  }

  // You chain multiple files this way
  fChain->Add(file1); // Chain the files
  if (option == "mc"){
    fChain->Add(file2);
  }
  if (option == "data-2011D" || option== "data-2011U"){
    fChain->Add(file2);
    fChain->Add(file3);
    fChain->Add(file4);
    fChain->Add(file5);
    fChain->Add(file6);
    fChain->Add(file7);
    fChain->Add(file8);
    fChain->Add(file9);
    fChain->Add(file10);
  }

  cout << "----------------------------------here 000" << endl;

  tre = new TTree(decay,decay);
  treeToFill();

  // MVA setup
  std::vector<std::string> inputVars;
  inputVars.push_back("B_TAU");
  inputVars.push_back("B_ENDVERTEX_CHI2");
  inputVars.push_back("B_P");
  inputVars.push_back("B_PT");
  inputVars.push_back("B_DIRA_OWNPV");
  inputVars.push_back("B_IPCHI2_OWNPV");
  inputVars.push_back("tracks_minIP");
  inputVars.push_back("B_CDF_isol");
  inputVars.push_back("tracks_minIPchi2");
  inputVars.push_back("l1_PT");
  inputVars.push_back("l2_PT");
  inputVars.push_back("h1_PT");
  inputVars.push_back("h2_PT");
  ReadBDTG0  selBDTG0(inputVars);
  /* ReadBDTG1  selBDTG1(inputVars);
  ReadBDTG2  selBDTG2(inputVars);
  ReadBDTG3  selBDTG3(inputVars);
  ReadBDTG4  selBDTG4(inputVars);
  ReadBDTG5  selBDTG5(inputVars);
  ReadBDTG6  selBDTG6(inputVars);
  ReadBDTG7  selBDTG7(inputVars);
  ReadBDTG8  selBDTG8(inputVars);
  ReadBDTG9  selBDTG9(inputVars);*/
  cout << "here 00" << endl;

  std::vector<std::string> inputVarsS;
  inputVarsS.push_back("B_ENDVERTEX_CHI2");
  inputVarsS.push_back("B_IPCHI2_OWNPV");
  inputVarsS.push_back("B_CDF_isol");
  inputVarsS.push_back("B_DIRA_OWNPV");
  inputVarsS.push_back("h1_PT");
  inputVarsS.push_back("h2_PT");
  inputVarsS.push_back("l1_PT");
  inputVarsS.push_back("l2_PT");
  inputVarsS.push_back("B_TAU");
  inputVarsS.push_back("B_P");
  inputVarsS.push_back("B_PT");
  inputVarsS.push_back("log(h1_IPCHI2_OWNPV)");
  inputVarsS.push_back("log(h2_IPCHI2_OWNPV)");
  inputVarsS.push_back("log(l1_IPCHI2_OWNPV)");
  inputVarsS.push_back("log(l2_IPCHI2_OWNPV)");

  /* ReadMLPCE0  selMLPCE0(inputVarsS);
  ReadMLPCE1  selMLPCE1(inputVarsS);
  ReadMLPCE2  selMLPCE2(inputVarsS);
  ReadMLPCE3  selMLPCE3(inputVarsS);
  ReadMLPCE4  selMLPCE4(inputVarsS);
  ReadMLPCE5  selMLPCE5(inputVarsS);
  ReadMLPCE6  selMLPCE6(inputVarsS);
  ReadMLPCE7  selMLPCE7(inputVarsS);
  ReadMLPCE8  selMLPCE8(inputVarsS);
  ReadMLPCE9  selMLPCE9(inputVarsS);
  */
  inputVarsS.push_back("BmassHOP");
    
  /*ReadMLPCElower0  selMLPCElower0(inputVarsS);
  ReadMLPCElower1  selMLPCElower1(inputVarsS);
  ReadMLPCElower2  selMLPCElower2(inputVarsS);
  ReadMLPCElower3  selMLPCElower3(inputVarsS);
  ReadMLPCElower4  selMLPCElower4(inputVarsS);
  ReadMLPCElower5  selMLPCElower5(inputVarsS);
  ReadMLPCElower6  selMLPCElower6(inputVarsS);
  ReadMLPCElower7  selMLPCElower7(inputVarsS);
  ReadMLPCElower8  selMLPCElower8(inputVarsS);
  ReadMLPCElower9  selMLPCElower9(inputVarsS);*/

  cout << "here 0" << endl;
  
  A.Init(fChain); // Initialise the branches and their locations

  Long64_t nentries = fChain->GetEntries(); // The total number of entries in the ntuple
  Long64_t nbytes = 0, nb = 0; // Probably do not need these
  
  cout << " Total Number of entries " << nentries << endl;
  int nTotal = 0; 
  int nBKGCAT = 0;
  TFile fhistos(dir+decay+"-"+option+"Shaun.root", "RECREATE");
  TH1F *hBDTG       = new TH1F("hBDTG",  "BDTG output", 100, -1.,1.);
  TH1F *hBmass       = new TH1F("hBmass",  "mass of the B", 120, 4200.,6200.);
  TH1F *hBmasssel    = new TH1F("hBmasssel","mass of selected B", 120, 4800.,6000.);
  TH1F *hBisol    = new TH1F("hBisol","B isolation", 100, 0.,1.);
  TH1F *hBmult    = new TH1F("hBmult","number of tracks inside cone", 50, 0.,50.);
  TH1F *hBvchi2   = new TH1F("hBvchi2", "B decay vertex chi2", 100, 0.,50.); // stripping divides by the number of degrees of freedom which is 5
  TH1F *hBdira    = new TH1F("hBdira",  "B cos dira", 60, 0.9995,1.0001);
  TH1F *hBipchi2  = new TH1F("hBipchi2","B IP chi2 own PV", 100, 0.,25.);
  TH1F *hBfdchi2  = new TH1F("hBfdchi2","B FD chi2 own PV", 200, 0.,5000.);
  TH1F *hBtau     = new TH1F("hBtau",  "B lifetime", 100, 0., 0.01);
  TH1F *hBp       = new TH1F("hBp",   "B momentum", 100, 0.,500000.); // stripping divides by the number of degrees of freedom which is 5
  TH1F *hBpt      = new TH1F("hBpt",  "B transverse momentum", 100, 0.,50000.);
  TH1F *hBip      = new TH1F("hBip",  "B IP own PV", 100, 0.,0.2);
  TH1F *hd1mass   = new TH1F("hd1mass", "mass of the e mu pair", 100, 0.,5000.);
  TH1F *hd1pT     = new TH1F("hd1pT",   "pT of the e mu pair", 100, 0.,40000.);
  TH1F *hd1vchi2  = new TH1F("hd1vchi2", "vertex chi2 e mu pair", 100, 0.,50.); // stripping divides by the number of degrees of freedom which is 5
  TH1F *hd1ipchi2 = new TH1F("hd1ipchi2","IP chi2 e mu pair", 100, 0.,100.);
  TH1F *hd1fdchi2 = new TH1F("hd1fdchi2","FD chi2 e mu pair", 100, 0.,10000.);
  TH1F *hd2mass   = new TH1F("hd2mass", "mass of the hadron", 100, 500.,1500.);
  TH1F *hd2pT     = new TH1F("hd2pT",   "pT of the hadron", 100, 0.,40000.);
  TH1F *hd2vchi2  = new TH1F("hd2vchi2", "vertex chi2 of hadron", 100, 0.,50.); 
  TH1F *hd2ipchi2 = new TH1F("hd2ipchi2","IP chi2 of hadron", 100, 0.,100.);
  TH1F *hl2pide   = new TH1F("hl2pide", "electron PIDe", 100, 0., 20.);
  TH1F *hl2ipchi2 = new TH1F("hl2ipchi2", "electron IP chi2 own PV", 100, 0., 100.);
  TH1F *hl2pt     = new TH1F("hl2pt", "electron pT", 150, 0., 15000.);
  TH1F *hl1ismuon = new TH1F("hl1ismuon", "ismuon", 3, 0., 3.);
  TH1F *hl1ipchi2 = new TH1F("hl1ipchi2", "muon IP chi2 own PV", 100, 0., 100.);
  TH1F *hl1pt     = new TH1F("hl1pt", "muon pT", 150, 0., 15000.);
  TH1F *hh1pidK   = new TH1F("hh1pidK", "h1 PIDK", 150, -20., 130.);
  TH1F *hh2pidK   = new TH1F("hh2pidK", "h2 PIDK", 150, -20., 130.);
  TH1F *hl1pidmu  = new TH1F("hl1pidmu","l1 PIDmu",80, -20., 20.);
  TH1F *hh1ipchi2     = new TH1F("hh1ipchi2","h1 IP chi2",100, 0., 500.);
  TH1F *hh2ipchi2     = new TH1F("hh2ipchi2","h2 IP chi2",100, 0., 500.);
  TH1F *hl1ip     = new TH1F("hl1ip","l1 IP ",100, 0., 1.);
  TH1F *hl2ip     = new TH1F("hl2ip","l2 IP ",100, 0., 1.);
  TH1F *htracks_minip     = new TH1F("htracks_minip","tracks min IP",100, 0., 1.);
  TH1F *htracks_minipchi2 = new TH1F("htracks_minipchi2","tracks min IP chi2",100, 0., 2000.);
  TH1F *hh1p    = new TH1F("hh1p","h1 P",100, 0., 200000.);
  TH1F *hh2p     = new TH1F("hh2p","h2 P ",100, 0., 200000.);
  TH1F *hl1p     = new TH1F("hl1p","l1 P ",100, 0., 200000.);
  TH1F *hl2p     = new TH1F("hl2p","l2 P ",100, 0., 200000.);
  TH1F *htracks_minpt     = new TH1F("htracks_minpt","tracks min PT",100, 0., 1000.);
  TH1F *hcheckrandom     = new TH1F("hcheckrandom","random number",12, -1., 11.);
  for (Long64_t jentry=0; jentry<nentries;jentry++) {
     //  for (Long64_t jentry=0; jentry<1000;jentry++) { // To run on just the first n events
    //Long64_t ientry = A.LoadTree(jentry);
    //if (ientry < 0) break;
    nTotal = nTotal + 1;
    if (nTotal%1000 ==0) cout << "Looping on event " << nTotal << endl;
    nb = fChain->GetEntry(jentry); nbytes += nb;
    ranInt=A.eventNumber%10;
    hcheckrandom->Fill(ranInt);
    BKGCAT = 999999;
    if(option=="mc"){
      BKGCAT = A.B_BKGCAT;
      if (abs(A.B_BKGCAT) == 10) {
        nBKGCAT = nBKGCAT + 1;
      }
    }
    hBmass->Fill(A.B_MM);      
    hBvchi2->Fill(A.B_ENDVERTEX_CHI2);      
    hBdira->Fill(A.B_DIRA_OWNPV);      
    hBipchi2->Fill(A.B_IPCHI2_OWNPV);      
    hBfdchi2->Fill(A.B_FDCHI2_OWNPV);      
    hd1mass->Fill(A.d1_MM);
    hd1pT->Fill(A.d1_PT);
    hd1vchi2->Fill(A.d1_ORIVX_CHI2);      
    hd1ipchi2->Fill(A.d1_IPCHI2_OWNPV);      
    hd1fdchi2->Fill(A.d1_FDCHI2_OWNPV);            
    hd2mass->Fill(A.d2_MM);
    hd2pT->Fill(A.d2_PT);
    hd2vchi2->Fill(A.d2_ENDVERTEX_CHI2);      
    hd2ipchi2->Fill(A.d2_IPCHI2_OWNPV);            
    hl2pide->Fill(A.l2_PIDe);      
    hl2ipchi2->Fill(A.l2_IPCHI2_OWNPV);      
    hl2pt->Fill(A.l2_PT);      
    hl1ismuon->Fill(A.l1_isMuon);      
    hl1ipchi2->Fill(A.l1_IPCHI2_OWNPV);      
    hl1pt->Fill(A.l1_PT);  
    //add plots of other interesting variables
    hBtau->Fill(A.B_TAU);      
    hBp->Fill(A.B_P);      
    hBpt->Fill(A.B_PT);      
    hBip->Fill(A.B_IP_OWNPV);      
    hh1pidK->Fill(A.h1_PIDK);      
    hh2pidK->Fill(A.h2_PIDK);      
    hl1pidmu->Fill(A.l1_PIDmu);      
    // isolation CDF
    B_isol = A.B_PT/(A.B_PT+A.B_coneiso_PT);
    hBisol->Fill(B_isol);
    hBmult->Fill(A.B_coneiso_mult);
    // * hadron isolation
    // * muon isolation
    double iptracks[] = {A.h1_IP_OWNPV,A.h2_IP_OWNPV,A.l1_IP_OWNPV,A.l2_IP_OWNPV};
    tracks_minIP=*std:: min_element(iptracks,iptracks+4);
    htracks_minip->Fill(tracks_minIP);
    //cout << "IP tracks " << A.h1_IP_OWNPV << " " << A.h2_IP_OWNPV << " " <<  A.l1_IP_OWNPV << " " << A.l2_IP_OWNPV << endl;
    //cout << "min IP tracks " << *std:: min_element(iptracks,iptracks+4) << endl;
    hh1ipchi2->Fill(A.h1_IPCHI2_OWNPV); 
    hh2ipchi2->Fill(A.h2_IPCHI2_OWNPV); 
    hl1ip->Fill(A.l1_IP_OWNPV); 
    hl2ip->Fill(A.l2_IP_OWNPV); 
    double ipchi2tracks[] = {A.h1_IPCHI2_OWNPV,A.h2_IPCHI2_OWNPV,A.l1_IPCHI2_OWNPV,A.l2_IPCHI2_OWNPV};
    tracks_minIPchi2=*std:: min_element(ipchi2tracks,ipchi2tracks+4);
    htracks_minipchi2->Fill(tracks_minIPchi2);
    // track chi2 (cut)
    hh1p->Fill(A.h1_P); 
    hh2p->Fill(A.h2_P); 
    hl1p->Fill(A.l1_P); 
    hl2p->Fill(A.l2_P); 
    double pttracks[] = {A.h1_PT,A.h2_PT,A.l1_PT,A.l2_PT};
    tracks_minPt = *std:: min_element(pttracks,pttracks+4);
    htracks_minpt->Fill(tracks_minPt);
    // track p and pT (cuts)   
    //
   // // Hop variable
     dofB = (A.B_ENDVERTEX_X-A.B_OWNPV_X)*(A.B_ENDVERTEX_X-A.B_OWNPV_X) + 
      (A.B_ENDVERTEX_Y-A.B_OWNPV_Y)*(A.B_ENDVERTEX_Y-A.B_OWNPV_Y) + 
      (A.B_ENDVERTEX_Z-A.B_OWNPV_Z)*(A.B_ENDVERTEX_Z-A.B_OWNPV_Z);
    if(dofB >0) dofB=sqrt(dofB);
    ptXe = A.l2_PX * (A.B_ENDVERTEX_X-A.B_OWNPV_X) +
      A.l2_PY * (A.B_ENDVERTEX_Y-A.B_OWNPV_Y) +
      A.l2_PZ * (A.B_ENDVERTEX_Z-A.B_OWNPV_Z);
    ptXe = A.l2_P*sin(acos(ptXe/(dofB*A.l2_P)));    
    ptXh = (A.l1_PX + A.d2_PX) * (A.B_ENDVERTEX_X-A.B_OWNPV_X) +
           (A.l1_PY + A.d2_PY) * (A.B_ENDVERTEX_Y-A.B_OWNPV_Y) +
           (A.l1_PZ + A.d2_PZ) * (A.B_ENDVERTEX_Z-A.B_OWNPV_Z);
    //    cout << " ptXh 1" << ptXh <<endl;
    pXh = sqrt((A.l1_PX+A.d2_PX)*(A.l1_PX+A.d2_PX)+
               (A.l1_PY+A.d2_PY)*(A.l1_PY+A.d2_PY)+
               (A.l1_PZ+A.d2_PZ)*(A.l1_PZ+A.d2_PZ));
    // cout << " pXh  " << pXh << " pl1 + ph " << A.l1_P+A.d2_P << endl;//ok
    ptXh = pXh * sin(acos(ptXh/(dofB*pXh)));
    alphaHOP = 1.;
    if(abs(ptXe)>0)alphaHOP = ptXh/ptXe;
    //cout << " ptXe  " << ptXe << " " << ptXh << " " << alphaHOP << " " << A.l2_PX << endl;
    pXe_X = alphaHOP * A.l2_PX;
    pXe_Y = alphaHOP * A.l2_PY;
    pXe_Z = alphaHOP * A.l2_PZ;
    //cout << "pXe_X " << pXe_X << " " << pXe_Y << " " << pXe_Z << endl;
    EXe = sqrt(pXe_X*pXe_X + pXe_Y*pXe_Y + pXe_Z*pXe_Z + 0.511*0.511);
    BpHOP2 = (A.d2_PX + A.l1_PX + pXe_X) * (A.d2_PX + A.l1_PX + pXe_X) +
      (A.d2_PY + A.l1_PY + pXe_Y) * (A.d2_PY + A.l1_PY + pXe_Y) +
      (A.d2_PZ + A.l1_PZ + pXe_Z) * (A.d2_PZ + A.l1_PZ + pXe_Z);
    BEHOP = A.d2_PE + A.l1_PE + EXe;
    BmassHOP = BEHOP*BEHOP - BpHOP2;
    if (BmassHOP >0) BmassHOP = sqrt(BmassHOP);


    hBmasssel->Fill(A.B_MM);
    std::vector<double> inputValues;
    inputValues.push_back(A.B_TAU);
    inputValues.push_back(A.B_ENDVERTEX_CHI2);
    inputValues.push_back(A.B_P);
    inputValues.push_back(A.B_PT);
    inputValues.push_back(A.B_DIRA_OWNPV);
    inputValues.push_back(A.B_IPCHI2_OWNPV);
    inputValues.push_back(tracks_minIP);
    inputValues.push_back(B_isol);
    inputValues.push_back(tracks_minIPchi2);
    inputValues.push_back(A.l1_PT);
    inputValues.push_back(A.l2_PT);
    inputValues.push_back(A.h1_PT);
    inputValues.push_back(A.h2_PT);
    MVAfold0 = selBDTG0.GetMvaValue(inputValues);
    MVAfold1 = selBDTG1.GetMvaValue(inputValues);
    MVAfold2 = selBDTG2.GetMvaValue(inputValues);
    MVAfold3 = selBDTG3.GetMvaValue(inputValues);
    MVAfold4 = selBDTG4.GetMvaValue(inputValues);
    MVAfold5 = selBDTG5.GetMvaValue(inputValues);
    MVAfold6 = selBDTG6.GetMvaValue(inputValues);
    MVAfold7 = selBDTG7.GetMvaValue(inputValues);
    MVAfold8 = selBDTG8.GetMvaValue(inputValues);
    MVAfold9 = selBDTG9.GetMvaValue(inputValues);
    if(ranInt==0) MVA=MVAfold0;
    if(ranInt==1) MVA=MVAfold1;
    if(ranInt==2) MVA=MVAfold2;
    if(ranInt==3) MVA=MVAfold3;
    if(ranInt==4) MVA=MVAfold4;
    if(ranInt==5) MVA=MVAfold5;
    if(ranInt==6) MVA=MVAfold6;
    if(ranInt==7) MVA=MVAfold7;
    if(ranInt==8) MVA=MVAfold8;
    if(ranInt==9) MVA=MVAfold9;

    std::vector<double> inputValuesS;
    inputValuesS.push_back(A.B_ENDVERTEX_CHI2);
    inputValuesS.push_back(A.B_IPCHI2_OWNPV);
    inputValuesS.push_back(B_isol);
    inputValuesS.push_back(A.B_DIRA_OWNPV);
    inputValuesS.push_back(A.h1_PT);
    inputValuesS.push_back(A.h2_PT);
    //inputValues.push_back("tracks_minIP");
    inputValuesS.push_back(A.l1_PT);
    //inputValues.push_back("tracks_minIPchi2");
    inputValuesS.push_back(A.l2_PT);
    inputValuesS.push_back(A.B_TAU);
    inputValuesS.push_back(A.B_P);
    inputValuesS.push_back(A.B_PT);
    inputValuesS.push_back(log(A.h1_IPCHI2_OWNPV));
    inputValuesS.push_back(log(A.h2_IPCHI2_OWNPV));
    inputValuesS.push_back(log(A.l1_IPCHI2_OWNPV));
    inputValuesS.push_back(log(A.l2_IPCHI2_OWNPV));
    MVAfold0S = selMLPCE0.GetMvaValue(inputValuesS);
    MVAfold1S = selMLPCE1.GetMvaValue(inputValuesS);
    MVAfold2S = selMLPCE2.GetMvaValue(inputValuesS);
    MVAfold3S = selMLPCE3.GetMvaValue(inputValuesS);
    MVAfold4S = selMLPCE4.GetMvaValue(inputValuesS);
    MVAfold5S = selMLPCE5.GetMvaValue(inputValuesS);
    MVAfold6S = selMLPCE6.GetMvaValue(inputValuesS);
    MVAfold7S = selMLPCE7.GetMvaValue(inputValuesS);
    MVAfold8S = selMLPCE8.GetMvaValue(inputValuesS);
    MVAfold9S = selMLPCE9.GetMvaValue(inputValuesS);
    if(ranInt==0) MVAS=MVAfold0S;
    if(ranInt==1) MVAS=MVAfold1S;
    if(ranInt==2) MVAS=MVAfold2S;
    if(ranInt==3) MVAS=MVAfold3S;
    if(ranInt==4) MVAS=MVAfold4S;
    if(ranInt==5) MVAS=MVAfold5S;
    if(ranInt==6) MVAS=MVAfold6S;
    if(ranInt==7) MVAS=MVAfold7S;
    if(ranInt==8) MVAS=MVAfold8S;
    if(ranInt==9) MVAS=MVAfold9S;
    
    inputValuesS.push_back(BmassHOP);
    
    MVAlowerfold0S = selMLPCElower0.GetMvaValue(inputValuesS);
    MVAlowerfold1S = selMLPCElower1.GetMvaValue(inputValuesS);
    MVAlowerfold2S = selMLPCElower2.GetMvaValue(inputValuesS);
    MVAlowerfold3S = selMLPCElower3.GetMvaValue(inputValuesS);
    MVAlowerfold4S = selMLPCElower4.GetMvaValue(inputValuesS);
    MVAlowerfold5S = selMLPCElower5.GetMvaValue(inputValuesS);
    MVAlowerfold6S = selMLPCElower6.GetMvaValue(inputValuesS);
    MVAlowerfold7S = selMLPCElower7.GetMvaValue(inputValuesS);
    MVAlowerfold8S = selMLPCElower8.GetMvaValue(inputValuesS);
    MVAlowerfold9S = selMLPCElower9.GetMvaValue(inputValuesS);
    if(ranInt==0) MVAlowerS=MVAlowerfold0S;
    if(ranInt==1) MVAlowerS=MVAlowerfold1S;
    if(ranInt==2) MVAlowerS=MVAlowerfold2S;
    if(ranInt==3) MVAlowerS=MVAlowerfold3S;
    if(ranInt==4) MVAlowerS=MVAlowerfold4S;
    if(ranInt==5) MVAlowerS=MVAlowerfold5S;
    if(ranInt==6) MVAlowerS=MVAlowerfold6S;
    if(ranInt==7) MVAlowerS=MVAlowerfold7S;
    if(ranInt==8) MVAlowerS=MVAlowerfold8S;
    if(ranInt==9) MVAlowerS=MVAlowerfold9S;

    tre->Fill();      









  } //end event loop

  cout << "Total BKGCAT = 10     = " << nBKGCAT   << endl;


  TCanvas *c1 = new TCanvas("c1","B stripping cuts",1);
  c1->Divide(2,3);
  c1->cd(1);
  hBmass->Draw();
  c1->cd(2);
  hBmasssel->Draw();
  c1->cd(3);      
  hBvchi2->Draw();
  c1->cd(4);
  hBdira->Draw();
  c1->cd(5);      
  hBipchi2->Draw();
  c1->cd(6);
  hBfdchi2->Draw();
  c1->Print(dir+decay+"-"+option+"-BStripping.ps");

  TCanvas *c2 = new TCanvas("c2","J/psi stripping cuts",1);
  c2->Divide(2,3);
  c2->cd(1);
  hd1mass->Draw();
  c2->cd(2);      
  hd1pT->Draw();
  c2->cd(3);
  hd1vchi2->Draw();
  c2->cd(4);      
  hd1ipchi2->Draw();
  c2->cd(5);
  hd1fdchi2->Draw();
  c2->Print(dir+decay+"-"+option+"-JpsiStripping.ps");

  TCanvas *c3 = new TCanvas("c3","Hadron stripping cuts",1);
  c3->Divide(2,2);
  c3->cd(1);
  hd2mass->Draw();
  c3->cd(2);
  hd2pT->Draw();
  c3->cd(3);
  hd2vchi2->Draw();
  c3->cd(4);
  hd2ipchi2->Draw();
  c3->Print(dir+decay+"-"+option+"-HadronStripping.ps");

  TCanvas *c4 = new TCanvas("c4","Leptons stripping cuts",1);
  c4->Divide(3,2);
  c4->cd(1);
  hl2pide->Draw();
  c4->cd(2);
  hl2ipchi2->Draw();
  c4->cd(3);
  hl2pt->Draw();
  c4->cd(4);
  hl1ismuon->Draw();
  c4->cd(5);
  hl1ipchi2->Draw();
  c4->cd(6);
  hl1pt->Draw();
  c4->Print(dir+decay+"-"+option+"-LeptonStripping.ps");

  TCanvas *c5 = new TCanvas("c5","B additional variables",1);
  c5->Divide(2,3);
  c5->cd(1);
  hBtau->Draw();
  c5->cd(2);      
  hBp->Draw();
  c5->cd(3);
  hBpt->Draw();
  c5->cd(4);      
  hBip->Draw();
  c5->cd(5);
  hBisol->Draw();
  c5->cd(6);
  hBmult->Draw();
  c5->Print(dir+decay+"-"+option+"-BAdditional.ps");

  TCanvas *c6 = new TCanvas("c6","PID variables",1);
  c6->Divide(2,2);
  c6->cd(1);
  hh1pidK->Draw();
  c6->cd(2);      
  hh2pidK->Draw();
  c6->cd(3);
  hl1pidmu->Draw();
  c6->cd(4);      
  hl2pide->Draw();
  c6->Print(dir+decay+"-"+option+"-PID-variables.ps");

  TCanvas *c7 = new TCanvas("c7","IP tracks",1);
  c7->Divide(2,3);
  c7->cd(1);
  hh1ipchi2->Draw();
  c7->cd(2);    
  hh2ipchi2->Draw();  
  c7->cd(3);
  hl1ip->Draw();
  c7->cd(4);    
  hl2ip->Draw();  
  c7->cd(5);
  htracks_minip->Draw();
  c7->cd(6);
  htracks_minipchi2->Draw();
  c7->Print(dir+decay+"-"+option+"-IP-tracks.ps");

  TCanvas *c8 = new TCanvas("c8","P tracks",1);
  c8->Divide(2,3);
  c8->cd(1);
  hh1p->Draw();
  c8->cd(2);    
  hh2p->Draw();  
  c8->cd(3);
  hl1p->Draw();
  c8->cd(4);    
  hl2p->Draw();  
  c8->cd(5);
  htracks_minpt->Draw();
  c8->Print(dir+decay+"-"+option+"-P-tracks.ps");

  TCanvas *c9 = new TCanvas("c9","MVA",1);
  c9->Divide(1,1);
  c9->cd(1);
  hBDTG->Draw();
  c9->Print(dir+decay+"-"+option+"-MVA.ps");

  tre->Write();
  fhistos.Write();
  fhistos.Close();
  


}

void treeToFill() {


  TBranch *t0c = tre->Branch("runNumber", &A.runNumber);
  TBranch *t1c = tre->Branch("eventNumber", &A.eventNumber);
  TBranch *t2c = tre->Branch("ranInt", &ranInt);
  TBranch *t3c = tre->Branch("BKGCAT", &BKGCAT);
  TBranch *t4c = tre->Branch("B_MM", &A.B_MM);      
  TBranch *t5c = tre->Branch("B_ENDVERTEX_CHI2",&A.B_ENDVERTEX_CHI2);      
  TBranch *t6c = tre->Branch("B_DIRA_OWNPV", &A.B_DIRA_OWNPV);      
  TBranch *t7c = tre->Branch("B_IPCHI2_OWNPV", &A.B_IPCHI2_OWNPV);      
  TBranch *t8c = tre->Branch("B_FDCHI2_OWNPV",&A.B_FDCHI2_OWNPV);      
  TBranch *t9c = tre->Branch("B_TAU",&A.B_TAU);      
  TBranch *t10c = tre->Branch("B_P", &A.B_P);      
  TBranch *t11c = tre->Branch("B_PT",&A.B_PT);      
  TBranch *t12c = tre->Branch("B_IP_OWNPV", &A.B_IP_OWNPV);      
  TBranch *t13c = tre->Branch("B_CDF_isol",&B_isol);
  TBranch *t14c = tre->Branch("B_coneiso_PTAsy", &A.B_coneiso_PTAsy); 
  TBranch *t15c = tre->Branch("B_coneiso_mult", &A.B_coneiso_mult);
  TBranch *t16c = tre->Branch("d1_MM", &A.d1_MM);
  TBranch *t17c = tre->Branch("d1_PT", &A.d1_PT);
  TBranch *t18c = tre->Branch("d1_ORIVX_CHI2", &A.d1_ORIVX_CHI2);      
  TBranch *t19c = tre->Branch("d1_IPCHI2_OWNPV", &A.d1_IPCHI2_OWNPV);      
  TBranch *t20c = tre->Branch("d1_FDCHI2_OWNPV", &A.d1_FDCHI2_OWNPV);            
  TBranch *t21c = tre->Branch("d2_MM", &A.d2_MM);
  TBranch *t22c = tre->Branch("d2_PT", &A.d2_PT);
  TBranch *t23c = tre->Branch("d2_ENDVERTEX_CHI2", &A.d2_ENDVERTEX_CHI2);      
  TBranch *t24c = tre->Branch("d2_IPCHI2_OWNPV", &A.d2_IPCHI2_OWNPV);            
  TBranch *t25c = tre->Branch("l1_isMuon", &A.l1_isMuon);      
  TBranch *t26c = tre->Branch("l1_hasMuon", &A.l1_hasMuon);      
  TBranch *t27c = tre->Branch("l1_PIDe", &A.l1_PIDe);            
  TBranch *t28c = tre->Branch("l1_PIDmu", &A.l1_PIDmu);      
  TBranch *t29c = tre->Branch("l1_PIDK", &A.l1_PIDK);
  TBranch *t30c = tre->Branch("l1_PIDp", &A.l1_PIDp);
  TBranch *t31c = tre->Branch("l1_ProbNNe", &A.l1_ProbNNe);            
  TBranch *t32c = tre->Branch("l1_ProbNNmu", &A.l1_ProbNNmu);      
  TBranch *t33c = tre->Branch("l1_ProbNNk", &A.l1_ProbNNk);
  TBranch *t34c = tre->Branch("l1_ProbNNp", &A.l1_ProbNNp);
  TBranch *t35c = tre->Branch("l1_ProbNNpi", &A.l1_ProbNNpi);
  TBranch *t36c = tre->Branch("l1_ProbNNghost", &A.l1_ProbNNghost);
  TBranch *t37c = tre->Branch("l1_IP_OWNPV",&A.l1_IP_OWNPV); 
  TBranch *t38c = tre->Branch("l1_IPCHI2_OWNPV", &A.l1_IPCHI2_OWNPV);      
  TBranch *t39c = tre->Branch("l1_P",&A.l1_P); 
  TBranch *t40c = tre->Branch("l1_PT", &A.l1_PT);      
  TBranch *t41c = tre->Branch("l2_hasCalo", &A.l2_hasCalo);      
  TBranch *t42c = tre->Branch("l2_PIDe", &A.l2_PIDe);            
  TBranch *t43c = tre->Branch("l2_PIDmu", &A.l2_PIDmu);      
  TBranch *t44c = tre->Branch("l2_PIDK", &A.l2_PIDK);
  TBranch *t45c = tre->Branch("l2_PIDp", &A.l2_PIDp);
  TBranch *t46c = tre->Branch("l2_ProbNNe", &A.l2_ProbNNe);            
  TBranch *t47c = tre->Branch("l2_ProbNNmu", &A.l2_ProbNNmu);      
  TBranch *t48c = tre->Branch("l2_ProbNNk", &A.l2_ProbNNk);
  TBranch *t49c = tre->Branch("l2_ProbNNp", &A.l2_ProbNNp);
  TBranch *t50c = tre->Branch("l2_ProbNNpi", &A.l2_ProbNNpi);
  TBranch *t51c = tre->Branch("l2_ProbNNghost", &A.l2_ProbNNghost);
  TBranch *t52c = tre->Branch("l2_IP_OWNPV",&A.l2_IP_OWNPV); 
  TBranch *t53c = tre->Branch("l2_IPCHI2_OWNPV", &A.l2_IPCHI2_OWNPV);      
  TBranch *t54c = tre->Branch("l2_P", &A.l2_P); 
  TBranch *t55c = tre->Branch("l2_PT", &A.l2_PT);
  TBranch *t56c = tre->Branch("h1_P", &A.h1_P); 
  TBranch *t57c = tre->Branch("h1_PT", &A.h1_PT);       
  TBranch *t58c = tre->Branch("h1_hasRich", &A.h1_hasRich);
  TBranch *t59c = tre->Branch("h1_PIDe", &A.h1_PIDe);            
  TBranch *t60c = tre->Branch("h1_PIDmu", &A.h1_PIDmu);      
  TBranch *t61c = tre->Branch("h1_PIDK", &A.h1_PIDK);
  TBranch *t62c = tre->Branch("h1_PIDp", &A.h1_PIDp);
  TBranch *t63c = tre->Branch("h1_ProbNNe", &A.h1_ProbNNe);            
  TBranch *t64c = tre->Branch("h1_ProbNNmu", &A.h1_ProbNNmu);      
  TBranch *t65c = tre->Branch("h1_ProbNNk", &A.h1_ProbNNk);
  TBranch *t66c = tre->Branch("h1_ProbNNp", &A.h1_ProbNNp);
  TBranch *t67c = tre->Branch("h1_ProbNNpi", &A.h1_ProbNNpi);
  TBranch *t68c = tre->Branch("h1_ProbNNghost", &A.h1_ProbNNghost);      
  TBranch *t69c = tre->Branch("h1_IPCHI2_OWNPV", &A.h1_IPCHI2_OWNPV); 
  TBranch *t70c = tre->Branch("h2_P", &A.h2_P); 
  TBranch *t71c = tre->Branch("h2_PT", &A.h2_PT); 
  TBranch *t72c = tre->Branch("h2_hasRich", &A.h2_hasRich);
  TBranch *t73c = tre->Branch("h2_PIDe", &A.h2_PIDe);            
  TBranch *t74c = tre->Branch("h2_PIDmu", &A.h2_PIDmu);      
  TBranch *t75c = tre->Branch("h2_PIDK", &A.h2_PIDK);
  TBranch *t76c = tre->Branch("h2_PIDp", &A.h2_PIDp);
  TBranch *t77c = tre->Branch("h2_ProbNNe", &A.h2_ProbNNe);            
  TBranch *t78c = tre->Branch("h2_ProbNNmu", &A.h2_ProbNNmu);      
  TBranch *t79c = tre->Branch("h2_ProbNNk", &A.h2_ProbNNk);
  TBranch *t80c = tre->Branch("h2_ProbNNp", &A.h2_ProbNNp);
  TBranch *t81c = tre->Branch("h2_ProbNNpi", &A.h2_ProbNNpi);
  TBranch *t82c = tre->Branch("h2_ProbNNghost", &A.h2_ProbNNghost);      
  TBranch *t83c = tre->Branch("h2_IPCHI2_OWNPV", &A.h2_IPCHI2_OWNPV); 
  TBranch *t84c = tre->Branch("tracks_minPt", &tracks_minPt);
  TBranch *t85c = tre->Branch("tracks_minIP", &tracks_minIP);
  TBranch *t86c = tre->Branch("tracks_minIPchi2", &tracks_minIPchi2);
  TBranch *t87c = tre->Branch("B_L0Global_Dec", &A.B_L0Global_Dec);
  TBranch *t88c = tre->Branch("B_L0Global_TIS", &A.B_L0Global_TIS);
  TBranch *t89c = tre->Branch("B_L0Global_TOS", &A.B_L0Global_TOS);
  TBranch *t90c = tre->Branch("B_Hlt1Global_Dec", &A.B_Hlt1Global_Dec);
  TBranch *t91c = tre->Branch("B_Hlt1Global_TIS", &A.B_Hlt1Global_TIS);
  TBranch *t92c = tre->Branch("B_Hlt1Global_TOS", &A.B_Hlt1Global_TOS);
  TBranch *t93c = tre->Branch("B_Hlt1Phys_Dec", &A.B_Hlt1Phys_Dec);
  TBranch *t94c = tre->Branch("B_Hlt1Phys_TIS", &A.B_Hlt1Phys_TIS);
  TBranch *t95c = tre->Branch("B_Hlt1Phys_TOS", &A.B_Hlt1Phys_TOS);
  TBranch *t96c = tre->Branch("B_Hlt2Global_Dec", &A.B_Hlt2Global_Dec);
  TBranch *t97c = tre->Branch("B_Hlt2Global_TIS", &A.B_Hlt2Global_TIS);
  TBranch *t98c = tre->Branch("B_Hlt2Global_TOS", &A.B_Hlt2Global_TOS);
  TBranch *t99c = tre->Branch("B_Hlt2Phys_Dec", &A.B_Hlt2Phys_Dec);
  TBranch *t100c = tre->Branch("B_Hlt2Phys_TIS", &A.B_Hlt2Phys_TIS);
  TBranch *t101c = tre->Branch("B_Hlt2Phys_TOS", &A.B_Hlt2Phys_TOS);
  TBranch *t102c = tre->Branch("B_L0HadronDecision_Dec", &A.B_L0HadronDecision_Dec);
  TBranch *t103c = tre->Branch("B_L0HadronDecision_TIS", &A.B_L0HadronDecision_TIS);
  TBranch *t104c = tre->Branch("B_L0HadronDecision_TOS", &A.B_L0HadronDecision_TOS);
  TBranch *t105c = tre->Branch("B_L0MuonDecision_Dec", &A.B_L0MuonDecision_Dec);
  TBranch *t106c = tre->Branch("B_L0MuonDecision_TIS", &A.B_L0MuonDecision_TIS);
  TBranch *t107c = tre->Branch("B_L0MuonDecision_TOS", &A.B_L0MuonDecision_TOS);
  TBranch *t108c = tre->Branch("B_L0DiMuonDecision_Dec", &A.B_L0DiMuonDecision_Dec);
  TBranch *t109c = tre->Branch("B_L0DiMuonDecision_TIS", &A.B_L0DiMuonDecision_TIS);
  TBranch *t110c = tre->Branch("B_L0DiMuonDecision_TOS", &A.B_L0DiMuonDecision_TOS);
  TBranch *t111c = tre->Branch("B_L0ElectronDecision_Dec", &A.B_L0ElectronDecision_Dec);
  TBranch *t112c = tre->Branch("B_L0ElectronDecision_TIS", &A.B_L0ElectronDecision_TIS);
  TBranch *t113c = tre->Branch("B_L0ElectronDecision_TOS", &A.B_L0ElectronDecision_TOS);
  TBranch *t114c = tre->Branch("B_L0PhotonDecision_Dec", &A.B_L0PhotonDecision_Dec);
  TBranch *t115c = tre->Branch("B_L0PhotonDecision_TIS", &A.B_L0PhotonDecision_TIS);
  TBranch *t116c = tre->Branch("B_L0PhotonDecision_TOS", &A.B_L0PhotonDecision_TOS);
  TBranch *t117c = tre->Branch("B_Hlt1TrackAllL0Decision_Dec", &A.B_Hlt1TrackAllL0Decision_Dec);
  TBranch *t118c = tre->Branch("B_Hlt1TrackAllL0Decision_TIS", &A.B_Hlt1TrackAllL0Decision_TIS);
  TBranch *t119c = tre->Branch("B_Hlt1TrackAllL0Decision_TOS", &A.B_Hlt1TrackAllL0Decision_TOS);
  TBranch *t120c = tre->Branch("B_Hlt1TrackMuonDecision_Dec", &A.B_Hlt1TrackMuonDecision_Dec);
  TBranch *t121c = tre->Branch("B_Hlt1TrackMuonDecision_TIS", &A.B_Hlt1TrackMuonDecision_TIS);
  TBranch *t122c = tre->Branch("B_Hlt1TrackMuonDecision_TOS", &A.B_Hlt1TrackMuonDecision_TOS);
  TBranch *t123c = tre->Branch("B_Hlt2SingleMuonDecision_Dec", &A.B_Hlt2SingleMuonDecision_Dec);
  TBranch *t124c = tre->Branch("B_Hlt2SingleMuonDecision_TIS", &A.B_Hlt2SingleMuonDecision_TIS);
  TBranch *t125c = tre->Branch("B_Hlt2SingleMuonDecision_TOS", &A.B_Hlt2SingleMuonDecision_TOS);
  TBranch *t126c = tre->Branch("B_Hlt2Topo2BodyBBDTDecision_Dec", &A.B_Hlt2Topo2BodyBBDTDecision_Dec);
  TBranch *t127c = tre->Branch("B_Hlt2Topo2BodyBBDTDecision_TIS", &A.B_Hlt2Topo2BodyBBDTDecision_TIS);
  TBranch *t128c = tre->Branch("B_Hlt2Topo2BodyBBDTDecision_TOS", &A.B_Hlt2Topo2BodyBBDTDecision_TOS);
  TBranch *t129c = tre->Branch("B_Hlt2Topo2BodySimpleDecision_Dec", &A.B_Hlt2Topo2BodySimpleDecision_Dec);
  TBranch *t130c = tre->Branch("B_Hlt2Topo2BodySimpleDecision_TIS", &A.B_Hlt2Topo2BodySimpleDecision_TIS);
  TBranch *t131c = tre->Branch("B_Hlt2Topo2BodySimpleDecision_TOS", &A.B_Hlt2Topo2BodySimpleDecision_TOS);
  TBranch *t132c = tre->Branch("B_Hlt2Topo3BodyBBDTDecision_Dec", &A.B_Hlt2Topo3BodyBBDTDecision_Dec);
  TBranch *t133c = tre->Branch("B_Hlt2Topo3BodyBBDTDecision_TIS", &A.B_Hlt2Topo3BodyBBDTDecision_TIS);
  TBranch *t134c = tre->Branch("B_Hlt2Topo3BodyBBDTDecision_TOS", &A.B_Hlt2Topo3BodyBBDTDecision_TOS);
  TBranch *t135c = tre->Branch("B_Hlt2Topo3BodySimpleDecision_Dec", &A.B_Hlt2Topo3BodySimpleDecision_Dec);
  TBranch *t136c = tre->Branch("B_Hlt2Topo3BodySimpleDecision_TIS", &A.B_Hlt2Topo3BodySimpleDecision_TIS);
  TBranch *t137c = tre->Branch("B_Hlt2Topo3BodySimpleDecision_TOS", &A.B_Hlt2Topo3BodySimpleDecision_TOS);
  TBranch *t138c = tre->Branch("B_Hlt2Topo4BodyBBDTDecision_Dec", &A.B_Hlt2Topo4BodyBBDTDecision_Dec);
  TBranch *t139c = tre->Branch("B_Hlt2Topo4BodyBBDTDecision_TIS", &A.B_Hlt2Topo4BodyBBDTDecision_TIS);
  TBranch *t140c = tre->Branch("B_Hlt2Topo4BodyBBDTDecision_TOS", &A.B_Hlt2Topo4BodyBBDTDecision_TOS);
  TBranch *t141c = tre->Branch("B_Hlt2Topo4BodySimpleDecision_Dec", &A.B_Hlt2Topo4BodySimpleDecision_Dec);
  TBranch *t142c = tre->Branch("B_Hlt2Topo4BodySimpleDecision_TIS", &A.B_Hlt2Topo4BodySimpleDecision_TIS);
  TBranch *t143c = tre->Branch("B_Hlt2Topo4BodySimpleDecision_TOS", &A.B_Hlt2Topo4BodySimpleDecision_TOS);
  TBranch *t144c = tre->Branch("B_Hlt2TopoE2BodyBBDTDecision_Dec", &A.B_Hlt2TopoE2BodyBBDTDecision_Dec);
  TBranch *t145c = tre->Branch("B_Hlt2TopoE2BodyBBDTDecision_TIS", &A.B_Hlt2TopoE2BodyBBDTDecision_TIS);
  TBranch *t146c = tre->Branch("B_Hlt2TopoE2BodyBBDTDecision_TOS", &A.B_Hlt2TopoE2BodyBBDTDecision_TOS);
  TBranch *t147c = tre->Branch("B_Hlt2TopoE3BodyBBDTDecision_Dec", &A.B_Hlt2TopoE3BodyBBDTDecision_Dec);
  TBranch *t148c = tre->Branch("B_Hlt2TopoE3BodyBBDTDecision_TIS", &A.B_Hlt2TopoE3BodyBBDTDecision_TIS);
  TBranch *t149c = tre->Branch("B_Hlt2TopoE3BodyBBDTDecision_TOS", &A.B_Hlt2TopoE3BodyBBDTDecision_TOS);
  TBranch *t150c = tre->Branch("B_Hlt2TopoE4BodyBBDTDecision_Dec", &A.B_Hlt2TopoE4BodyBBDTDecision_Dec);
  TBranch *t151c = tre->Branch("B_Hlt2TopoE4BodyBBDTDecision_TIS", &A.B_Hlt2TopoE4BodyBBDTDecision_TIS);
  TBranch *t152c = tre->Branch("B_Hlt2TopoE4BodyBBDTDecision_TOS", &A.B_Hlt2TopoE4BodyBBDTDecision_TOS);
  TBranch *t153c = tre->Branch("B_Hlt2TopoMu2BodyBBDTDecision_Dec", &A.B_Hlt2TopoMu2BodyBBDTDecision_Dec);
  TBranch *t154c = tre->Branch("B_Hlt2TopoMu2BodyBBDTDecision_TIS", &A.B_Hlt2TopoMu2BodyBBDTDecision_TIS);
  TBranch *t155c = tre->Branch("B_Hlt2TopoMu2BodyBBDTDecision_TOS", &A.B_Hlt2TopoMu2BodyBBDTDecision_TOS);
  TBranch *t156c = tre->Branch("B_Hlt2TopoMu3BodyBBDTDecision_Dec", &A.B_Hlt2TopoMu3BodyBBDTDecision_Dec);
  TBranch *t157c = tre->Branch("B_Hlt2TopoMu3BodyBBDTDecision_TIS", &A.B_Hlt2TopoMu3BodyBBDTDecision_TIS);
  TBranch *t158c = tre->Branch("B_Hlt2TopoMu3BodyBBDTDecision_TOS", &A.B_Hlt2TopoMu3BodyBBDTDecision_TOS);
  TBranch *t159c = tre->Branch("B_Hlt2TopoMu4BodyBBDTDecision_Dec", &A.B_Hlt2TopoMu4BodyBBDTDecision_Dec);
  TBranch *t160c = tre->Branch("B_Hlt2TopoMu4BodyBBDTDecision_TIS", &A.B_Hlt2TopoMu4BodyBBDTDecision_TIS);
  TBranch *t172c = tre->Branch("B_Hlt2TopoMu4BodyBBDTDecision_TOS", &A.B_Hlt2TopoMu4BodyBBDTDecision_TOS);
  TBranch *t161c = tre->Branch("MVAfold0", &MVAfold0);
  TBranch *t162c = tre->Branch("MVAfold1", &MVAfold1);
  TBranch *t163c = tre->Branch("MVAfold2", &MVAfold2);
  TBranch *t164c = tre->Branch("MVAfold3", &MVAfold3);
  TBranch *t165c = tre->Branch("MVAfold4", &MVAfold4);
  TBranch *t166c = tre->Branch("MVAfold5", &MVAfold5);
  TBranch *t167c = tre->Branch("MVAfold6", &MVAfold6);
  TBranch *t168c = tre->Branch("MVAfold7", &MVAfold7);
  TBranch *t169c = tre->Branch("MVAfold8", &MVAfold8);
  TBranch *t170c = tre->Branch("MVAfold9", &MVAfold9);
  TBranch *t171c = tre->Branch("MVA", &MVA);
  //Shaun variables
  TBranch *t173c = tre->Branch("MVAS", &MVAS);
  TBranch *t174c = tre->Branch("B_OWNPV_CHI2", &A.B_OWNPV_CHI2);
  TBranch *t175c = tre->Branch("BmassHOP", &BmassHOP);
  TBranch *t176c = tre->Branch("alphaHOP", &alphaHOP);
  // // TBranch *t175c = tre->Branch("GhostOK", &A.GhostOK);
  // // TBranch *t176c = tre->Branch("L0DecisionOK", &A.L0DecisionOK);
  // // TBranch *t177c = tre->Branch("Hlt1DecisionOK", &A.Hlt1DecisionOK);
  // // TBranch *t178c = tre->Branch("Hlt2DecisionOK", &A.Hlt2DecisionOK);
  TBranch *t192c = tre->Branch("MVAlowerS", &MVAlowerS);
}
