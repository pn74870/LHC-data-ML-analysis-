#include "ntupleMVAJ.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <algorithm> //std::min_element

// To run : root -l -b -q analysis_MVAta.C

void analysis_MVAta1 () {
  //  ntupleMVA A;
  ntupleMVAJ A;
  char* s=new char[1];
  TLorentzVector leptonTL, dileptonTL, BTL;
  TVector3 beta_dl, beta_B;
  Double_t theta_l;
  TString decay = "MueKst"; // MuePhi or MueKst or Psi2sKst or MuMuD;
  TString decaya = "MueKst"; //MueKst or MuePhi is the channel searched for;
  TString option = "data"; //mc or data or mc-xll or mcmis or mcmis1
  TString option2 = "sideband"; //"signal";//sideband or signal
  TString mvaMethod = "BDTNW_1mil";// "MLPCE_mcCut";//
  bool MLPCEmode=false;
  double mvaJCut=.574;
  TChain *fChain;
  double emass = 0.511;
  double mumass = 105.66;
  double  pimass = 139.57;
  double kaonmass = 493.68;
  double  D0mass = 1869.62;
  double Dsmass = 1968.47;
  double PHImass = 1019.445;
  double Ekaon, EPHI,PHImass, MassPHI;
  double ED, PXD, PYD, PZD, MassD,Epion;
  double Eele, Emuon,Ejpsi, Emu, Ejpsi, Pjpsi, Massjpsi, Massjpsi1, Massjpsi2;
  double PXjpsi,PYjpsi,PZjpsi,M2,M2e;
  double KmuP2, KmuMass2, KmuMass;
  double hmuP2, hmuMass2, hmuMass;
  double KeP2, KeMass2, KeMass;
  double heP2, heMass2, heMass;
  double d2eP2, d2eMass2, d2eMass;
  double d2muP2, d2muMass2, d2muMass, d2lmass;
  fChain = new TChain(decay);
  TString dir="/opt/ppd/lhcb/sds61239/mva/addMva/cuts/";
  TString file1, file2,file3,file4;
  if (decay == "MuePhi"){
    if (option == "data"){
      file3 = "/home/ppd/ricciars/lhcb/Xemu/myrootFiles/opti/MuePhi-data-2012D-ta1.root";
      file4 = "/home/ppd/ricciars/lhcb/Xemu/myrootFiles/opti/MuePhi-data-2012U-ta1.root";
      file1 = "/home/ppd/ricciars/lhcb/Xemu/myrootFiles/opti/MuePhi-data-2011D-ta1.root";
      file2 = "/home/ppd/ricciars/lhcb/Xemu/myrootFiles/opti/MuePhi-data-2011U-ta1.root";
    }
    if (option == "mc"){
      file1 ="/home/ppd/ricciars/lhcb/Xemu/myrootFiles/opti/MuePhi-mc-ta1.root";
    }
    if (option == "mc-xll"){
      file1 ="/home/ppd/ricciars/lhcb/Xemu/myrootFiles/opti/MuePhi-mc-xll-ta1.root";
    }
  }
  if (decay == "MueKst"){
    if (option == "data"){/*
      file1 = "/home/ppd/ricciars/lhcb/Xemu/myrootFiles/opti/MueKst-data-2011D-ta1.root";
      file2 = "/home/ppd/ricciars/lhcb/Xemu/myrootFiles/opti/MueKst-data-2011U-ta1.root";
      file3 = "/home/ppd/ricciars/lhcb/Xemu/myrootFiles/opti/MueKst-data-2012D-ta1.root";
      file4 = "/home/ppd/ricciars/lhcb/Xemu/myrootFiles/opti/MueKst-data-2012U-ta1.root";*/
      file1="/opt/ppd/lhcb/sds61239/mva/addMva/BDTNW/MueKst-data-xll-2011U.root";
      file2="/opt/ppd/lhcb/sds61239/mva/addMva/BDTNW/MueKst-data-xll-2011D.root";
      file3="/opt/ppd/lhcb/sds61239/mva/addMva/BDTNW/MueKst-data-xll-2012D.root";
      file4="/opt/ppd/lhcb/sds61239/mva/addMva/BDTNW/MueKst-data-xll-2012U.root";
    }
    if (option == "mc"){
      file1 ="/home/ppd/ricciars/lhcb/Xemu/myrootFiles/opti/MueKst-mc-ta1.root";
    }
    if (option == "mc-xll"){
      file1="/opt/ppd/lhcb/sds61239/mva/addMva/BDTNW/MueKst-mc-xll-new.root";
      // file1 ="/home/ppd/ricciars/lhcb/Xemu/myrootFiles/opti/MueKst-mc-xll-ta1.root";
    }
 

  }
  if (decay == "MuMuPhi"){
    if (option == "data"){
      // file1 = "/home/ppd/ricciars/lhcb/Xemu/myrootFiles/opti/MuMuPhi-data-2011D-ta1.root";
      // file2 = "/home/ppd/ricciars/lhcb/Xemu/myrootFiles/opti/MuMuPhi-data-2011U-ta1.root";
      // file3 = "/home/ppd/ricciars/lhcb/Xemu/myrootFiles/opti/MuMuPhi-data-2012D-ta1.root";
      // file4 = "/home/ppd/ricciars/lhcb/Xemu/myrootFiles/opti/MuMuPhi-data-2012U-ta1.root";
    }
  }
  if (decay == "MuMuPhi"){
    if (option == "mcmis"){
      file1 = "/home/ppd/ricciars/lhcb/Xemu/myrootFiles/opti/MuMuPhi-mcmis-ta1.root";
    }
  }
  if (decay == "eePhi"){
    if (option == "mcmis"){
      file1 = "/home/ppd/ricciars/lhcb/Xemu/myrootFiles/opti/eePhi-mcmis-ta1.root";
    }
  }
  if (decay == "MuMuPhi"){
    if (option == "mc"){
      file1 = "/home/ppd/ricciars/lhcb/Xemu/myrootFiles/opti/MuMuPhi-mc-ta1.root";
    }
  }
  if (decay == "MuMuKst"){
    if(option=="data"){
      file1="/opt/ppd/lhcb/sds61239/mva/addMva/BDTNW/MuMuKst-data-xll-2011U.root";
      file2="/opt/ppd/lhcb/sds61239/mva/addMva/BDTNW/MuMuKst-data-xll-2011D.root";
      file3="/opt/ppd/lhcb/sds61239/mva/addMva/BDTNW/MuMuKst-data-xll-2012D.root";
      file4="/opt/ppd/lhcb/sds61239/mva/addMva/BDTNW/MuMuKst-data-xll-2012U.root";
    }
    else if (option == "mcmis"){
      file1 = "/home/ppd/ricciars/lhcb/Xemu/myrootFiles/opti/MuMuKst-mcmis-ta1.root";
    }
    else if(option=="mc-xll"){
      file1="/opt/ppd/lhcb/sds61239/mva/addMva/BDTNW/MuMuKst-mc-xll-new.root";
    }
    
  }
  if (decay == "MuMuD"){
    if (option == "mcmis1"){
      file1 = "/home/ppd/ricciars/lhcb/Xemu/myrootFiles/opti/MuMuD-mcmis1-ta1.root";
    }
    if (option == "mcmis"){
      file1 = "/home/ppd/ricciars/lhcb/Xemu/myrootFiles/opti/MuMuD-mcmis-ta1.root";
    }
  }
  if (decay == "eeKst"){
    if (option == "mcmis"){
      file1 = "/home/ppd/ricciars/lhcb/Xemu/myrootFiles/opti/eeKst-mcmis-ta1.root";
    }
  }
  if (decay == "Psi2sKst"){
    if (option == "mcmis"){
      file1 = "/home/ppd/ricciars/lhcb/Xemu/myrootFiles/opti/Psi2sKst-mcmis-ta1.root";
    }
  }
  
  fChain->Add(file1); // Chain the files
  if (option == "data"){
    fChain->Add(file2);
    fChain->Add(file3);
    fChain->Add(file4);
  }

  A.Init(fChain); // Initialise the branches and their locations
  Long64_t nentries = fChain->GetEntries(); // The total number of entries in the ntuple
  Long64_t nbytes = 0, nb = 0; // Probably do not need these
  
  cout << " Total Number of entries " << nentries << endl;
  TFile fhistos(dir+decay+"-"+option+"-"+"ta1-histograms-"+mvaMethod+".root", "RECREATE");
  TH1F *hcosthetal          = new TH1F("hcosthetal",  "cos thetal", 100, -1.,1.);
  TH2F *h2costlVSd2em          = new TH2F("h2costlVSd2em",  "cos thetal vs d2e-mass", 50, -1.,1., 50, 0., 5000.);
  TH2F *h2costlVSd2mum          = new TH2F("h2costlVSd2mum",  "cos thetal vs d2mu-mass", 50, -1.,1., 50, 0., 5000.);
  TH2F *h2costlVSd2lm          = new TH2F("h2costlVSd2lm",  "cos thetal vs d2l-mass", 50, -1.,1., 50, 0., 5000.);
  TH1F *hh2ProbNNmu          = new TH1F("hh2ProbNNmu",  "h2 ProbNNmu", 50, 0.,1.);
  TH1F *hh2ProbNNpi          = new TH1F("hh2ProbNNpi",  "h2 ProbNNpi", 50, 0.,1.);
  TH1F *hl2ProbNNpi          = new TH1F("hl2ProbNNpi",  "l2 ProbNNpi", 50, 0.,1.);
  TH1F *hl2ProbNNe          = new TH1F("hl2ProbNNe",  "l2 ProbNNe", 50, 0.,1.);
  TH2F *hl2ProbNNpiVSe = new TH2F("hl2ProbNNpiVSe",  "l2 ProbNNpi vs e", 20, 0.,1.,20,0.,1.);
  TH2F *hh2ProbNNmuVSpi = new TH2F("hh2ProbNNmuVSpi",  "h2 ProbNNmu vs pi", 20, 0.,1.,20,0.,1.);
  TH1F *hBmass          = new TH1F("hBmass",  "mass of the B", 120, 4600.,6200.);
  TH1F *hMassDe          = new TH1F("hMassDe",  "mass of Khh using e", 100, 1650.,2150.);
  TH1F *hMassDmu          = new TH1F("hMassDmu",  "mass of Khh using muon", 100, 1650., 2150.);
  TH1F *hMassDetoK          = new TH1F("hMassDetoK",  "mass of KKh using e", 100, 1650.,2150.);
  TH1F *hMassDmutoK          = new TH1F("hMassDmutoK",  "mass of KKh using muon", 100, 1650., 2150.);
  TH1F *hMassPHI          = new TH1F("hMassPHI",  "mass of PHI using pion", 100, 750., 1250.);
  TH1F *hd1mass          = new TH1F("hd1mass",  "d1 mass", 100, 500.,4500.);
  TH1F *hd1amass          = new TH1F("hd1amass",  "d1 mass recalculated after cuts", 100, 500.,4500.);
  TH1F *hd1massv          = new TH1F("hd1massv",  "d1 mass after cuts", 100, 500.,4500.);
  TH1F *hKmumass          = new TH1F("hKmumass",  "Kmu mass", 100, 0.,5000.);
  TH2F *h2Kmumass          = new TH2F("h2Kmumass",  "Kmu mass vs Bmass", 100, 4500., 5500., 100, 0.,5000.);
  TH1F *hhmumass          = new TH1F("hhmumass",  "hmu mass", 100, 0.,5000.);
  TH2F *h2hmumass          = new TH2F("h2hmumass",  "hmu mass vs Bmass", 100, 4500., 5500., 100, 0.,5000.);
  TH1F *hKemass          = new TH1F("hKemass",  "Ke mass", 100, 0.,5000.);
  TH2F *h2Kemass          = new TH2F("h2Kemass",  "Ke mass vs d2emass", 100, 0., 5000., 100, 0.,5000.);
  TH1F *hhemass          = new TH1F("hhemass",  "he mass", 100, 0.,5000.);
  TH2F *h2hemass          = new TH2F("h2hemass",  "he mass vs Bmass", 100, 4500., 5500., 100, 0.,5000.);
  TH1F *hd2emass          = new TH1F("hd2emass",  "d2e mass", 100, 0.,5000.);
  TH2F *h2d2emass          = new TH2F("h2d2emass",  "d2e mass vs Bmass", 100, 4500., 5500., 100, 0.,5000.);
  TH1F *hd2mumass          = new TH1F("hd2mumass",  "d2mu mass", 100, 0.,5000.);
  TH2F *h2d2mumass          = new TH2F("h2d2mumass",  "d2mu mass vs Bmass", 100, 4500., 5500., 100, 0.,5000.);
  TH1F *hMassjpsi          = new TH1F("hMassjpsi",  "recalculated jpsi mass", 100, 500.,4500.);
  TH1F *hMVA          = new TH1F("hMVA",  "MVA", 100, -1.,1.);
  TH1F *hBmassT          = new TH1F("hBmassT",  "mass of the B after trigger cuts", 120, 4600.,6200.);
  TH1F *hBmassM          = new TH1F("hBmassM",  "mass of the B after trigger and MVA cuts", 120, 4600.,6200.);
  TH1F *hBmassV          = new TH1F("hBmassV",  "mass of the B after trigger and MVA cuts and veto", 120, 4600.,6200.);
  TH1F *hBmassP          = new TH1F("hBmassP",  "mass of the B after trigger MVA veto and first PID cuts", 120, 4600.,6200.);
  TH1F *hBmassPP          = new TH1F("hBmassPP",  "mass of the B after trigger MVA and all vetoes&PID cuts", 120, 4600.,6200.);
  TH1F *hBmassPT          = new TH1F("hBmassPT",  "mass of the B after trigger MVA,vetoes&PID and thetal cuts", 120, 4600.,6200.);
  TH1F *hBmassMVA       = new TH1F("hBmassMVA",  "mass of the B weighted with MVA", 120, 4600.,6200.);
  TH2F *hMVAvsBmass     = new TH2F("hMVAvsBmass",  "MVA vs Bmass", 120, 4600.,6200., 100, -1.,1.);
  TH2F *hMassJpsivsBmass     = new TH2F("hMassJpsivsBmass",  "Mass Jpsi vs Bmass", 120, 4600.,6200., 100, 500.,4500.);
  TProfile *pMVAvsBmass     = new TProfile("pMVAvsBmass",  "MVA vs Bmass", 120, 4600.,6200., -1.,1., " ");
  hBmass->Sumw2();
  hBmassMVA->Sumw2();
  int nTotal;
  
  //for (Long64_t jentry=0; jentry<nentries;jentry++) {
               for (Long64_t jentry=0; jentry<1e6;jentry++) { // To run on just the first n events

    nTotal = nTotal + 1;
    if (nTotal%1000 ==0) cout << "Looping on event " << nTotal << " " << A.B_MM <<endl;
    nb = fChain->GetEntry(jentry); nbytes += nb;
    // MC truth only
    if(option=="mc" || option =="mc-xll"){
      if (abs(A.BKGCAT) > 20 ) {
	//cout<<A.BKGCAT<<endl;
        continue;
      }
      //      loose B mass cut
      // if (fabs(A.B_MM - 5300) > 200.) {
      //   continue;
      // }
    }
    //    look at data sideband only (need to blind the signal region)
    if(option=="data" && option2 == "sideband"){
      if (fabs(A.B_MM - 5300) < 150.) {
              continue;
      }
    }

    
    //    Preselection 
    if (fabs(A.d2_MM-1019.461) > 4 && decaya == "MuePhi") {
      continue;
    }
    if (fabs(A.d2_MM-895.81) > 50 && decaya == "MueKst") {
      continue;
    }
   
    // if (A.l1_TRACK_GhostProb>0.3 || A.l2_TRACK_GhostProb>0.3 || A.h1_TRACK_GhosProb<0.3 || A.h2_TRACK_GhostProb<0.3)
    //  {
    //    continue;
    //  }


    hBmass->Fill(A.B_MM);      
    hBmassMVA->Fill(A.B_MM, A.MVA);      
    hMVAvsBmass->Fill(A.B_MM, A.MVA);      
    pMVAvsBmass->Fill(A.B_MM, A.MVA);      
    hMVA->Fill(A.MVA);
    

    //    Trigger (to be corrected Hlt2TopoMu4BodyBBDTDecision_TOS needed in ntuple)


    //    if ((A.B_L0MuonDecision_TOS||A.B_L0HadronDecision_TOS||A.B_L0ElectronDecision_TOS||A.B_L0Global_TIS) == 0) {
    if ((A.B_L0MuonDecision_TOS||A.B_L0HadronDecision_TOS||A.B_L0Global_TIS) == 0) {
        continue;
     }
    if (A.B_Hlt1TrackAllL0Decision_TOS!=1  && A.B_Hlt1TrackMuonDecision_TOS != 1) {
       continue;
     }

    if (A.B_Hlt2Topo2BodyBBDTDecision_TOS!=1 &&  A.B_Hlt2Topo3BodyBBDTDecision_TOS!=1 && A.B_Hlt2Topo4BodyBBDTDecision_TOS!=1){
     if (A.B_Hlt2TopoMu2BodyBBDTDecision_TOS!=1 &&  A.B_Hlt2TopoMu3BodyBBDTDecision_TOS!=1 && A.B_Hlt2TopoMu4BodyBBDTDecision_Dec!=1){
       {
         if (A.B_Hlt2SingleMuonDecision_TOS !=1){
           continue;
         }
       }
     }
    }
    
    hBmassT->Fill(A.B_MM);      

    // MVA cut
    if ((MLPCEmode && A.MVAJ < mvaJCut)||(!MLPCEmode && A.MVA < 0.)) //0.15 MueKst 0.18 MuePhi equivalent to previous MVA cut at 0.8
    {
      continue;
    }

    hBmassM->Fill(A.B_MM);
    hd1mass->Fill(A.d1_MM);

    //Inspect other invariant masses Kmu, pimu, Ke, pie, d2mu, d2e (opposite sign onlY)

    //    if(option2=="signal" && A.B_MM>5100. && A.B_MM<5400.)
  
    
    //Try to assign muon daughter the electron mass, then viceversa
    Eele = sqrt(emass*emass+A.l1_P*A.l1_P);
    
    Ejpsi = Eele+A.l2_PE;
    Pjpsi = A.d1_P;
    Massjpsi= A.d1_MM;
    M2 = Ejpsi*Ejpsi-Pjpsi*Pjpsi;
    if(M2 >0)
    {
      Massjpsi1 = sqrt(M2);
      if (fabs(Massjpsi1-3096.9)<fabs(Massjpsi-3096.9))Massjpsi=Massjpsi1;
    }
    
    Emu  =sqrt(mumass*mumass+A.l2_P*A.l2_P);
    Ejpsi = Emu+A.l1_PE;
    M2 = Ejpsi*Ejpsi-Pjpsi*Pjpsi;
    if(M2 >0)
    {
      Massjpsi2 = sqrt(M2);
      if (fabs(Massjpsi2-3096.9)<fabs(Massjpsi-3096.9))Massjpsi=Massjpsi2;
    }

    
    hMassjpsi->Fill(Massjpsi);
    //Charmonium veto cuts
    if (fabs(Massjpsi -3096.9)<50)
      //   if (fabs(A.d1_MM -3096.9)<50)
        {
          continue;
        }

    hd1amass->Fill(Massjpsi);
    hd1massv->Fill(A.d1_MM);
    hBmassV->Fill(A.B_MM);
    hMassJpsivsBmass->Fill(A.B_MM,Massjpsi);
    
    hh2ProbNNmu->Fill(A.h2_ProbNNmu);
    hh2ProbNNpi->Fill(A.h2_ProbNNpi);
    hh2ProbNNmuVSpi->Fill(A.h2_ProbNNpi, A.h2_ProbNNmu);
    hl2ProbNNpiVSe->Fill(A.l2_ProbNNe, A.l2_ProbNNpi);
    hl2ProbNNpi->Fill(A.l2_ProbNNpi);
    hl2ProbNNe->Fill(A.l2_ProbNNe);

 
    //PID cuts
    if (A.l2_ProbNNe<0.3 || A.l1_ProbNNmu<0.1 || A.h1_ProbNNk<0.1)               
    //if (A.l1_ProbNNmu*(1-A.l1_ProbNNe)<0.2 || A.l2_ProbNNe*(1-A.l2_ProbNNmu)<0.2 || A.h1_ProbNNk<0.1 )
    {
           continue;
    }

    hBmassP->Fill(A.B_MM);
    //Try to assign muon or electron mass to pion daughter
 
    Emuon = sqrt(mumass*mumass+A.h2_P*A.h2_P);
    Ejpsi = Emuon+A.l1_PE;
    PXjpsi = A.l1_PX+A.h2_PX;
    PYjpsi = A.l1_PY+A.h2_PY;
    PZjpsi = A.l1_PZ+A.h2_PZ;
    M2= Ejpsi*Ejpsi-PXjpsi*PXjpsi-PYjpsi*PYjpsi-PZjpsi*PZjpsi;
    Eele = sqrt(emass*emass+A.h2_P*A.h2_P);
    Ejpsi = Eele+A.l2_PE;
    PXjpsi = A.l2_PX+A.h2_PX;
    PYjpsi = A.l2_PY+A.h2_PY;
    PZjpsi = A.l2_PZ+A.h2_PZ;
    M2e= Ejpsi*Ejpsi-PXjpsi*PXjpsi-PYjpsi*PYjpsi-PZjpsi*PZjpsi;
    if(M2 >0)
    {
      Massjpsi = sqrt(M2);
      if (fabs(Massjpsi-3096.9)<50.)continue;
    }
    if(M2e >0)
    {
      Massjpsi = sqrt(M2e);
      if (fabs(Massjpsi-3096.9)<50.)continue;
    }


    if (decaya == "MuePhi" && A.h2_ProbNNk<0.1) //This is only for muePhi searches
    if (decaya == "MueKst" && A.h2_ProbNNpi<0.1)  //This is only for mueKst searches
    //        if (A.h2_ProbNNpi<0.1|| A.l2_ProbNNpi*(1-A.l2_ProbNNe)>0.3||A.h2_ProbNNmu>0.)         // these could be ok too      
    //if ((A.h2_ProbNNpi*(1-A.l2_ProbNNpi)*A.l2_ProbNNe)<0.1||A.h2_ProbNNmu>0.)                     // these could be ok too
    {
          continue;
    }

    // veto psi(2S)? do I need also the e-pion swap veto?
         if (fabs(A.d1_MM -3686.1)<50)
         {
               continue;
         }



      if(A.l1_ID*A.l2_ID > 0) cout << "SAME SIGN " <<A.l1_ID << " " <<A.l2_ID<< endl;


    //Try to assign to reco electron the pion mass and veto D+(Khh)
    Epion = sqrt(pimass*pimass+A.l2_P*A.l2_P);    
    PXD = A.d2_PX+A.l2_PX;
    PYD = A.d2_PY+A.l2_PY;
    PZD = A.d2_PZ+A.l2_PZ;
    ED=Epion+A.d2_PE;
    M2= ED*ED-PXD*PXD-PYD*PYD-PZD*PZD;
    if(M2 >0)
    {
      MassD = sqrt(M2);
      hMassDe->Fill(MassD);
      if (decaya=="MuePhi"&&(fabs(MassD-D0mass)<20.||fabs(MassD-Dsmass)<20.))continue;
      if (decaya=="MueKst"&&fabs(MassD-D0mass)<20.)continue; //Kpipi can be only D0
    }


    //Try to assign to reco muon the pion mass and veto D+(Khh)
    Epion = sqrt(pimass*pimass+A.l1_P*A.l1_P);    
    PXD = A.d2_PX+A.l1_PX;
    PYD = A.d2_PY+A.l1_PY;
    PZD = A.d2_PZ+A.l1_PZ;
    ED=Epion+A.d2_PE;
    M2= ED*ED-PXD*PXD-PYD*PYD-PZD*PZD;
    if(M2 >0)
    {
      MassD = sqrt(M2);
      hMassDmu->Fill(MassD);
      if (decaya=="MuePhi"&&(fabs(MassD-D0mass)<20.||fabs(MassD-Dsmass)<20.))continue;
      if (decaya=="MueKst"&&fabs(MassD-D0mass)<20.)continue; //Kpipi can be only D0
    }

    

    //Try to assign to reco electron the kaon mass and veto D+(KKh)
    Ekaon = sqrt(kaonmass*kaonmass+A.l2_P*A.l2_P);    
    PXD = A.d2_PX+A.l2_PX;
    PYD = A.d2_PY+A.l2_PY;
    PZD = A.d2_PZ+A.l2_PZ;
    ED=Ekaon+A.d2_PE;
    M2= ED*ED-PXD*PXD-PYD*PYD-PZD*PZD;
    if(M2 >0)
    {
      MassD = sqrt(M2);
      hMassDetoK->Fill(MassD);
      // if (decaya=="MueKst"&&(fabs(MassD-D0mass)<20.||fabs(MassD-Dsmass)<20.))continue; //cut not needed
      // if (decaya=="MuePhi"&&fabs(MassD-Dsmass)<20.)continue; //KKK can be only Ds //cut not needed
    }


    //Try to assign to reco muon the pion mass and veto D+(KKh)
    Ekaon = sqrt(kaonmass*kaonmass+A.l1_P*A.l1_P);    
    PXD = A.d2_PX+A.l1_PX;
    PYD = A.d2_PY+A.l1_PY;
    PZD = A.d2_PZ+A.l1_PZ;
    ED=Ekaon+A.d2_PE;
    M2= ED*ED-PXD*PXD-PYD*PYD-PZD*PZD;
    if(M2 >0)
    {
      MassD = sqrt(M2);
      hMassDmutoK->Fill(MassD);
      // if (decaya=="MueKst"&&(fabs(MassD-D0mass)<20.||fabs(MassD-Dsmass)<20.))continue; //cut not needed
      // if (decaya=="MuePhi"&&fabs(MassD-Dsmass)<20.)continue; //KKK can be only Ds //cut not needed
    }


  //Try to assign to reco pion the kaon mass and veto phi in MueKst decays searches
    if(decaya == "MueKst"){
      Ekaon = sqrt(kaonmass*kaonmass+A.h2_P*A.h2_P);    
      EPHI=Ekaon+A.h1_PE;
      M2= EPHI*EPHI-A.d2_P*A.d2_P;
      if(M2 >0)
      {
        MassPHI = sqrt(M2);
        //      cout << "MassPHI " << MassPHI << endl;
        hMassPHI->Fill(MassPHI);
        //        if (fabs(MassPHI-PHImass)<20.)continue; //no need? I do not see any peak on data..please check phill MC
      }
    }

    //Are there cases of double misID? phill, with phi to kk, true muon->kaon & true kaon->electron?? check J/psiPhi MC
    

    //compute theta_l as angle between the pos(neg) lepton in the d1 rest frame and d1 in the B(Bbar) rest frame 
    //    if(A.B_ID*A.l1_ID >0) //B0 has positive ID
    //    if(decaya=="MueKst")
    // {
      
    // if(A.h1_ID*A.l1_ID >0) //this works only for MueK*
    // {
    //     leptonTL.SetPx(A.l1_PX);
    //     leptonTL.SetPy(A.l1_PY);
    //     leptonTL.SetPz(A.l1_PZ);
    //     leptonTL.SetE(A.l1_PE);
    //   }
    // else if (A.h1_ID*A.l2_ID>0) 
    // {
    //     leptonTL.SetPx(A.l2_PX);
    //     leptonTL.SetPy(A.l2_PY);
    //     leptonTL.SetPz(A.l2_PZ);
    //     leptonTL.SetE(A.l2_PE);
    // }
    // else
    // {
    //       cout << "Wierd..there must be an error!" << endl;
    //   }
    // }

    // if(decaya=="MuePhi")
    {
    if(A.l1_PE>A.l2_PE) //use this for MueKst too!
    {
        leptonTL.SetPx(A.l1_PX);
        leptonTL.SetPy(A.l1_PY);
        leptonTL.SetPz(A.l1_PZ);
        leptonTL.SetE(A.l1_PE);
      }
    else
    {
        leptonTL.SetPx(A.l2_PX);
        leptonTL.SetPy(A.l2_PY);
        leptonTL.SetPz(A.l2_PZ);
        leptonTL.SetE(A.l2_PE);
    }
    }
    dileptonTL.SetPx(A.l1_PX+A.l2_PX);
    dileptonTL.SetPy(A.l1_PY+A.l2_PY);
    dileptonTL.SetPz(A.l1_PZ+A.l2_PZ);
    dileptonTL.SetE(A.l1_PE+A.l2_PE);
    BTL.SetPx(A.l1_PX+A.l2_PX+A.h1_PX+A.h2_PX);
    BTL.SetPy(A.l1_PY+A.l2_PY+A.h1_PY+A.h2_PY);
    BTL.SetPz(A.l1_PZ+A.l2_PZ+A.h1_PZ+A.h2_PZ);
    BTL.SetE(A.l1_PE+A.l2_PE+A.h1_PE+A.h2_PE);
    //cout << "dilepton " << dileptonTL.Print() <<endl;
    beta_dl.SetX((A.l1_PX+A.l2_PX)/dileptonTL.E());
    beta_dl.SetY((A.l1_PY+A.l2_PY)/dileptonTL.E());
    beta_dl.SetZ((A.l1_PZ+A.l2_PZ)/dileptonTL.E());
    beta_B = BTL.BoostVector();
    leptonTL.Boost(-beta_dl);
    dileptonTL.Boost(-beta_B);
    theta_l = leptonTL.Angle(dileptonTL.Vect());
    //    cout << "theta_l  " << cos(theta_l) <<  endl;
    hcosthetal->Fill(cos(theta_l));
    

    //test d1 and d2 in the B rest frame must be back to back
    //test dilepton boosted in dilepton rest frame is zero
    // dileptonTL.SetPx(A.l1_PX+A.l2_PX);
    // dileptonTL.SetPy(A.l1_PY+A.l2_PY);
    // dileptonTL.SetPz(A.l1_PZ+A.l2_PZ);
    // dileptonTL.SetE(A.l1_PE+A.l2_PE);
    // cout << "dilepton " << dileptonTL.Print() <<endl;
    // beta_dl.SetX((A.l1_PX+A.l2_PX)/dileptonTL.E());
    // beta_dl.SetY((A.l1_PY+A.l2_PY)/dileptonTL.E());
    // beta_dl.SetZ((A.l1_PZ+A.l2_PZ)/dileptonTL.E());
    // cout << "beta dl "<< beta_dl.Print() <<endl;
    // dileptonTL.Boost(-beta_dl);
    // cout << "dilepton boosted" << dileptonTL.Print() <<endl;

    

    hBmassPP->Fill(A.B_MM);


  
  if(option2)
    {
      
    KmuP2 = (A.h1_PX + A.l1_PX)**2 + (A.h1_PY + A.l1_PY)**2 + (A.h1_PZ + A.l1_PZ)**2  ;
    KmuMass2 = (A.h1_PE + A.l1_PE)**2 -  KmuP2;
    KmuMass = 0;
    if(KmuMass2>0) KmuMass = sqrt(KmuMass2);
    //    cout << "SIGN " <<A.h1_ID << " " <<A.l1_ID<< endl;
    if(A.h1_ID*A.l1_ID<0)hKmumass->Fill(KmuMass);
    if(A.h1_ID*A.l1_ID<0)h2Kmumass->Fill(A.B_MM,KmuMass);

    hmuP2 = (A.h2_PX + A.l1_PX)**2 + (A.h2_PY + A.l1_PY)**2 + (A.h2_PZ + A.l1_PZ)**2  ;
    hmuMass2 = (A.h2_PE + A.l1_PE)**2 -  hmuP2;
    hmuMass = 0;
    if(hmuMass2>0) hmuMass = sqrt(hmuMass2);
    if(A.h2_ID*A.l1_ID<0)hhmumass->Fill(hmuMass);
    if(A.h2_ID*A.l1_ID<0)h2hmumass->Fill(A.B_MM,hmuMass);

    KeP2 = (A.h1_PX + A.l2_PX)**2 + (A.h1_PY + A.l2_PY)**2 + (A.h1_PZ + A.l2_PZ)**2  ;
    KeMass2 = (A.h1_PE + A.l2_PE)**2 -  KeP2;
    KeMass = 0;
    if(KeMass2>0) KeMass = sqrt(KeMass2);
    if(A.h1_ID*A.l2_ID<0)hKemass->Fill(KeMass);

    heP2 = (A.h2_PX + A.l2_PX)**2 + (A.h2_PY + A.l2_PY)**2 + (A.h2_PZ + A.l2_PZ)**2  ;
    heMass2 = (A.h2_PE + A.l2_PE)**2 -  heP2;
    heMass = 0;
    if(heMass2>0) heMass = sqrt(heMass2);
    if(A.h2_ID*A.l2_ID<0)hhemass->Fill(heMass);
    if(A.h2_ID*A.l2_ID<0)h2hemass->Fill(A.B_MM,heMass);

    d2eP2 = (A.d2_PX + A.l2_PX)**2 + (A.d2_PY + A.l2_PY)**2 + (A.d2_PZ + A.l2_PZ)**2  ;
    d2eMass2 = (A.d2_PE + A.l2_PE)**2 -  d2eP2;
    d2eMass = 0;
    if(d2eMass2>0) d2eMass = sqrt(d2eMass2);
    hd2emass->Fill(d2eMass);
    h2d2emass->Fill(A.B_MM,d2eMass);
    h2costlVSd2em->Fill(cos(theta_l),d2eMass);
    if(A.h1_ID*A.l2_ID<0)h2Kemass->Fill(d2eMass,KeMass);

    d2muP2 = (A.d2_PX + A.l1_PX)**2 + (A.d2_PY + A.l1_PY)**2 + (A.d2_PZ + A.l1_PZ)**2  ;
    d2muMass2 = (A.d2_PE + A.l1_PE)**2 -  d2muP2;
    d2muMass = 0;
    if(d2muMass2>0) d2muMass = sqrt(d2muMass2);
    hd2mumass->Fill(d2muMass);
    h2d2mumass->Fill(A.B_MM,d2muMass);
    h2costlVSd2mum->Fill(cos(theta_l),d2muMass);

    }

    // theta_l cut to suppress semileptonic D-decays
  // //  if(decaya=="MueKst"){
  // //  if(A.l1_ID*A.h1_ID<0)d2lmass = d2muMass;
  // //  if(A.l2_ID*A.h1_ID<0)d2lmass = d2eMass;
  // //}
  d2lmass=d2muMass;
  if(A.l1_PE>A.l2_PE){d2lmass=d2eMass;}
  h2costlVSd2lm->Fill(cos(theta_l),d2lmass);
  if (cos(theta_l)>0.6&&d2lmass<2000.)continue;
  hBmassPT->Fill(A.B_MM);

} //end event loop

  cout << "Total = " << nTotal << " events. " << endl;
  TH1F *hcorr = (TH1F*)hBmassMVA->Clone("hcorr");
  hcorr->Sumw2();
  hcorr->SetStats(0);
  hcorr->Divide(hBmass);



  // Fits

  if(option !="mc" && option != "mc-xll")
  {
    hBmass->Fit("expo");
    hBmassT->Fit("expo");
    hBmassM->Fit("expo");
    hBmassP->Fit("expo");
    hBmassPP->Fit("expo");
    hBmassPT->Fit("expo");
  }
  
  TCanvas *c1 = new TCanvas("c1","Bmass plots with cuts",1200, 1200);
  c1->Divide(1,4);
  c1->cd(1);
  hBmass->Draw();
  // c1->cd(2);
  // hBmassM->Draw();
  // c1->cd(3);
  // hBmassV->Draw();
  c1->cd(2);
  hBmassP->Draw();
  c1->cd(3);
  hBmassPP->Draw();
  c1->cd(4);
  hBmassPT->Draw();
  c1->Print(dir+decay+"-"+option+"-"+option2+"BmassPlots-"+mvaMethod+".ps");
  c1->Print(dir+decay+"-"+option+"-"+option2+"BmassPlots-"+mvaMethod+".png");

  TCanvas *c2 = new TCanvas("c2","MVA correlations",800, 800);
  c2->Divide(1,3);
  c2->cd(1);
  //  hcorr->Draw("ep");
  pMVAvsBmass->Draw();
  c2->cd(2);
  hMVAvsBmass->Draw();
  c2->cd(3);
  hMVA->Draw();
  c2->Print(dir+decay+"-"+option+"-"+option2+"CorrelationPlots-"+mvaMethod+".ps");

  TCanvas *c3 = new TCanvas("c3","Charmonium peaks",800, 800);
  c3->Divide(1,3);
  c3->cd(1);
  hd1mass->Draw();
  c3->cd(2);
  hMassjpsi->Draw();
  c3->cd(3);
  hd1amass->Draw();
  c3->Print(dir+decay+"-"+option+"-"+option2+"CharmoniumPeaks-"+mvaMethod+".ps");
  c3->Print(dir+decay+"-"+option+"-"+option2+"CharmoniumPeaks-"+mvaMethod+".png");

  TCanvas *c4 = new TCanvas("c4","hl invariant mass",800, 800);
  c4->Divide(2,3);
  // c4->cd(1);
  // hKemass->Draw();
  // c4->cd(2);
  // hKmumass->Draw();
  // c4->cd(3);
  // hhemass->Draw();
  // c4->cd(4);
  // hhmumass->Draw();
  c4->cd(1);
  hMassDetoK->Draw();
  c4->cd(2);
  // hMassPHI->Draw();
  hMassDmutoK->Draw();
  c4->cd(3);
  hMassDe->Draw();
  c4->cd(4);
  hMassDmu->Draw();
  c4->cd(5);
  hd2emass->Draw();
  c4->cd(6);
  hd2mumass->Draw();
  c4->Print(dir+decay+"-"+option+"-"+option2+"hlPeaks-"+mvaMethod+".ps");
  c4->Print(dir+decay+"-"+option+"-"+option2+"hlPeaks-"+mvaMethod+".png");

  TCanvas *c5 = new TCanvas("c5","hl invariant mass vs Bmass",800, 800);
  c5->Divide(2,3);
  // c5->cd(1);
  // h2Kemass->Draw();
  // c5->cd(2);
  // h2Kmumass->Draw();
  // c5->cd(3);
  // h2hemass->Draw();
  // c5->cd(4);
  // h2hmumass->Draw();
  c5->cd(1);
  h2d2emass->Draw();
  c5->cd(2);
  h2d2mumass->Draw();
  c5->cd(3);
  h2costlVSd2lm->Draw();
  c5->cd(4);
  h2costlVSd2mum->Draw();
  c5->cd(5);
  hcosthetal->Draw();
  c5->Print(dir+decay+"-"+option+"-"+option2+"hl2DPeaks-"+mvaMethod+".ps");
  c5->Print(dir+decay+"-"+option+"-"+option2+"hl2DPeaks-"+mvaMethod+".png");

  TCanvas *c6 = new TCanvas("c6","Jpsi mass vs Bmass",800, 800);
  c6->Divide(1,1);
  c6->cd(1);
  hMassJpsivsBmass->Draw();
  c6->Print(dir+decay+"-"+option+"-"+option2+"-JpsiVsBmass-"+mvaMethod+".ps");
  c6->Print(dir+decay+"-"+option+"-"+option2+"-JpsiVsBmass-"+mvaMethod+".png");
  TCanvas *c7 = new TCanvas("c7","PID plots with cuts",1200, 1200);
  c7->Divide(3,2);
  c7->cd(1);
  hh2ProbNNpi->Draw();
  c7->cd(2);
  hh2ProbNNmu->Draw();
  c7->cd(3);
  hh2ProbNNmuVSpi->Draw();
  c7->cd(4);
  hl2ProbNNe->Draw();
  c7->cd(5);
  hl2ProbNNpi->Draw();
  c7->cd(6);
  hl2ProbNNpiVSe->Draw();
  c7->Print(dir+decay+"-"+option+"-"+option2+"PID2daugPlots-"+mvaMethod+".ps");
  c7->Print(dir+decay+"-"+option+"-"+option2+"PID2daugPlots-"+mvaMethod+".png");

  fhistos.Write();
  cout << "hit return to continue" << endl;
  c3->Update();
  gets(s);

  
  //fhistos.Close();
  


}
