//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Mon Aug 21 10:30:46 2017 by ROOT version 5.34/36
// from TTree MueKst/MueKst
// found on file: MueKst-mc-xll-new.root
//////////////////////////////////////////////////////////

#ifndef ntuple-MVAJ_h
#define ntuple-MVAJ_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

// Fixed size dimensions of array or collections stored in the TTree if any.

class ntuple-MVAJ {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   // Declaration of leaf types
   UInt_t          runNumber;
   ULong64_t       eventNumber;
   Int_t           ranInt;
   Int_t           BKGCAT;
   Double_t        B_MM;
   Double_t        B_ENDVERTEX_CHI2;
   Double_t        B_DIRA_OWNPV;
   Double_t        B_IPCHI2_OWNPV;
   Double_t        B_FDCHI2_OWNPV;
   Double_t        B_TAU;
   Double_t        B_P;
   Double_t        B_PT;
   Double_t        B_IP_OWNPV;
   Float_t         B_CDF_isol;
   Double_t        B_coneiso_PTAsy;
   Double_t        B_coneiso_mult;
   Double_t        d1_MM;
   Double_t        d1_PT;
   Double_t        d1_ORIVX_CHI2;
   Double_t        d1_IPCHI2_OWNPV;
   Double_t        d1_FDCHI2_OWNPV;
   Double_t        d2_MM;
   Double_t        d2_PT;
   Double_t        d2_ENDVERTEX_CHI2;
   Double_t        d2_IPCHI2_OWNPV;
   Bool_t          l1_isMuon;
   Bool_t          l1_hasMuon;
   Double_t        l1_PIDe;
   Double_t        l1_PIDmu;
   Double_t        l1_PIDK;
   Double_t        l1_PIDp;
   Double_t        l1_ProbNNe;
   Double_t        l1_ProbNNmu;
   Double_t        l1_ProbNNk;
   Double_t        l1_ProbNNp;
   Double_t        l1_ProbNNpi;
   Double_t        l1_ProbNNghost;
   Double_t        l1_IP_OWNPV;
   Double_t        l1_IPCHI2_OWNPV;
   Double_t        l1_P;
   Double_t        l1_PT;
   Bool_t          l2_hasCalo;
   Double_t        l2_PIDe;
   Double_t        l2_PIDmu;
   Double_t        l2_PIDK;
   Double_t        l2_PIDp;
   Double_t        l2_ProbNNe;
   Double_t        l2_ProbNNmu;
   Double_t        l2_ProbNNk;
   Double_t        l2_ProbNNp;
   Double_t        l2_ProbNNpi;
   Double_t        l2_ProbNNghost;
   Double_t        l2_IP_OWNPV;
   Double_t        l2_IPCHI2_OWNPV;
   Double_t        l2_P;
   Double_t        l2_PT;
   Double_t        h1_P;
   Double_t        h1_PT;
   Bool_t          h1_hasRich;
   Double_t        h1_PIDe;
   Double_t        h1_PIDmu;
   Double_t        h1_PIDK;
   Double_t        h1_PIDp;
   Double_t        h1_ProbNNe;
   Double_t        h1_ProbNNmu;
   Double_t        h1_ProbNNk;
   Double_t        h1_ProbNNp;
   Double_t        h1_ProbNNpi;
   Double_t        h1_ProbNNghost;
   Double_t        h1_IPCHI2_OWNPV;
   Double_t        h2_P;
   Double_t        h2_PT;
   Bool_t          h2_hasRich;
   Double_t        h2_PIDe;
   Double_t        h2_PIDmu;
   Double_t        h2_PIDK;
   Double_t        h2_PIDp;
   Double_t        h2_ProbNNe;
   Double_t        h2_ProbNNmu;
   Double_t        h2_ProbNNk;
   Double_t        h2_ProbNNp;
   Double_t        h2_ProbNNpi;
   Double_t        h2_ProbNNghost;
   Double_t        h2_IPCHI2_OWNPV;
   Float_t         tracks_minPt;
   Float_t         tracks_minIP;
   Float_t         tracks_minIPchi2;
   Bool_t          B_L0Global_Dec;
   Bool_t          B_L0Global_TIS;
   Bool_t          B_L0Global_TOS;
   Bool_t          B_Hlt1Global_Dec;
   Bool_t          B_Hlt1Global_TIS;
   Bool_t          B_Hlt1Global_TOS;
   Bool_t          B_Hlt1Phys_Dec;
   Bool_t          B_Hlt1Phys_TIS;
   Bool_t          B_Hlt1Phys_TOS;
   Bool_t          B_Hlt2Global_Dec;
   Bool_t          B_Hlt2Global_TIS;
   Bool_t          B_Hlt2Global_TOS;
   Bool_t          B_Hlt2Phys_Dec;
   Bool_t          B_Hlt2Phys_TIS;
   Bool_t          B_Hlt2Phys_TOS;
   Bool_t          B_L0HadronDecision_Dec;
   Bool_t          B_L0HadronDecision_TIS;
   Bool_t          B_L0HadronDecision_TOS;
   Bool_t          B_L0MuonDecision_Dec;
   Bool_t          B_L0MuonDecision_TIS;
   Bool_t          B_L0MuonDecision_TOS;
   Bool_t          B_L0DiMuonDecision_Dec;
   Bool_t          B_L0DiMuonDecision_TIS;
   Bool_t          B_L0DiMuonDecision_TOS;
   Bool_t          B_L0ElectronDecision_Dec;
   Bool_t          B_L0ElectronDecision_TIS;
   Bool_t          B_L0ElectronDecision_TOS;
   Bool_t          B_L0PhotonDecision_Dec;
   Bool_t          B_L0PhotonDecision_TIS;
   Bool_t          B_L0PhotonDecision_TOS;
   Bool_t          B_Hlt1TrackAllL0Decision_Dec;
   Bool_t          B_Hlt1TrackAllL0Decision_TIS;
   Bool_t          B_Hlt1TrackAllL0Decision_TOS;
   Bool_t          B_Hlt1TrackMuonDecision_Dec;
   Bool_t          B_Hlt1TrackMuonDecision_TIS;
   Bool_t          B_Hlt1TrackMuonDecision_TOS;
   Bool_t          B_Hlt2SingleMuonDecision_Dec;
   Bool_t          B_Hlt2SingleMuonDecision_TIS;
   Bool_t          B_Hlt2SingleMuonDecision_TOS;
   Bool_t          B_Hlt2Topo2BodyBBDTDecision_Dec;
   Bool_t          B_Hlt2Topo2BodyBBDTDecision_TIS;
   Bool_t          B_Hlt2Topo2BodyBBDTDecision_TOS;
   Bool_t          B_Hlt2Topo2BodySimpleDecision_Dec;
   Bool_t          B_Hlt2Topo2BodySimpleDecision_TIS;
   Bool_t          B_Hlt2Topo2BodySimpleDecision_TOS;
   Bool_t          B_Hlt2Topo3BodyBBDTDecision_Dec;
   Bool_t          B_Hlt2Topo3BodyBBDTDecision_TIS;
   Bool_t          B_Hlt2Topo3BodyBBDTDecision_TOS;
   Bool_t          B_Hlt2Topo3BodySimpleDecision_Dec;
   Bool_t          B_Hlt2Topo3BodySimpleDecision_TIS;
   Bool_t          B_Hlt2Topo3BodySimpleDecision_TOS;
   Bool_t          B_Hlt2Topo4BodyBBDTDecision_Dec;
   Bool_t          B_Hlt2Topo4BodyBBDTDecision_TIS;
   Bool_t          B_Hlt2Topo4BodyBBDTDecision_TOS;
   Bool_t          B_Hlt2Topo4BodySimpleDecision_Dec;
   Bool_t          B_Hlt2Topo4BodySimpleDecision_TIS;
   Bool_t          B_Hlt2Topo4BodySimpleDecision_TOS;
   Bool_t          B_Hlt2TopoE2BodyBBDTDecision_Dec;
   Bool_t          B_Hlt2TopoE2BodyBBDTDecision_TIS;
   Bool_t          B_Hlt2TopoE2BodyBBDTDecision_TOS;
   Bool_t          B_Hlt2TopoE3BodyBBDTDecision_Dec;
   Bool_t          B_Hlt2TopoE3BodyBBDTDecision_TIS;
   Bool_t          B_Hlt2TopoE3BodyBBDTDecision_TOS;
   Bool_t          B_Hlt2TopoE4BodyBBDTDecision_Dec;
   Bool_t          B_Hlt2TopoE4BodyBBDTDecision_TIS;
   Bool_t          B_Hlt2TopoE4BodyBBDTDecision_TOS;
   Bool_t          B_Hlt2TopoMu2BodyBBDTDecision_Dec;
   Bool_t          B_Hlt2TopoMu2BodyBBDTDecision_TIS;
   Bool_t          B_Hlt2TopoMu2BodyBBDTDecision_TOS;
   Bool_t          B_Hlt2TopoMu3BodyBBDTDecision_Dec;
   Bool_t          B_Hlt2TopoMu3BodyBBDTDecision_TIS;
   Bool_t          B_Hlt2TopoMu3BodyBBDTDecision_TOS;
   Bool_t          B_Hlt2TopoMu4BodyBBDTDecision_Dec;
   Bool_t          B_Hlt2TopoMu4BodyBBDTDecision_TIS;
   Bool_t          B_Hlt2TopoMu4BodyBBDTDecision_TOS;
   Double_t        MVA;
   Double_t        MVAJ;
   Double_t        B_OWNPV_CHI2;
   Double_t        BmassHOP;
   Double_t        alphaHOP;
   Double_t        MVAlowerJ;
   Double_t        MVApartJ;
   Double_t        MVAJ16var;
   Double_t        l1_PE;
   Double_t        l2_PE;
   Double_t        h1_PE;
   Double_t        h2_PE;
   Double_t        l1_TRACK_GhostProb;
   Double_t        l2_TRACK_GhostProb;
   Double_t        h1_TRACK_GhostProb;
   Double_t        h2_TRACK_GhostProb;
   Double_t        h1_IP_OWNPV;
   Double_t        h2_IP_OWNPV;
   Double_t        d1_P;
   Double_t        d2_P;
   Double_t        l1_PX;
   Double_t        l1_PY;
   Double_t        l1_PZ;
   Double_t        l1_M;
   Double_t        l2_PX;
   Double_t        l2_PY;
   Double_t        l2_PZ;
   Double_t        l2_M;
   Double_t        h1_PX;
   Double_t        h1_PY;
   Double_t        h1_PZ;
   Double_t        h1_M;
   Double_t        h2_PX;
   Double_t        h2_PY;
   Double_t        h2_PZ;
   Double_t        h2_M;
   Int_t           l1_ID;
   Int_t           l2_ID;
   Int_t           h1_ID;
   Int_t           h2_ID;
   Double_t        d2_PX;
   Double_t        d2_PY;
   Double_t        d2_PZ;
   Double_t        d2_PE;
   Double_t        d2_M;

   // List of branches
   TBranch        *b_runNumber;   //!
   TBranch        *b_eventNumber;   //!
   TBranch        *b_ranInt;   //!
   TBranch        *b_BKGCAT;   //!
   TBranch        *b_B_MM;   //!
   TBranch        *b_B_ENDVERTEX_CHI2;   //!
   TBranch        *b_B_DIRA_OWNPV;   //!
   TBranch        *b_B_IPCHI2_OWNPV;   //!
   TBranch        *b_B_FDCHI2_OWNPV;   //!
   TBranch        *b_B_TAU;   //!
   TBranch        *b_B_P;   //!
   TBranch        *b_B_PT;   //!
   TBranch        *b_B_IP_OWNPV;   //!
   TBranch        *b_B_CDF_isol;   //!
   TBranch        *b_B_coneiso_PTAsy;   //!
   TBranch        *b_B_coneiso_mult;   //!
   TBranch        *b_d1_MM;   //!
   TBranch        *b_d1_PT;   //!
   TBranch        *b_d1_ORIVX_CHI2;   //!
   TBranch        *b_d1_IPCHI2_OWNPV;   //!
   TBranch        *b_d1_FDCHI2_OWNPV;   //!
   TBranch        *b_d2_MM;   //!
   TBranch        *b_d2_PT;   //!
   TBranch        *b_d2_ENDVERTEX_CHI2;   //!
   TBranch        *b_d2_IPCHI2_OWNPV;   //!
   TBranch        *b_l1_isMuon;   //!
   TBranch        *b_l1_hasMuon;   //!
   TBranch        *b_l1_PIDe;   //!
   TBranch        *b_l1_PIDmu;   //!
   TBranch        *b_l1_PIDK;   //!
   TBranch        *b_l1_PIDp;   //!
   TBranch        *b_l1_ProbNNe;   //!
   TBranch        *b_l1_ProbNNmu;   //!
   TBranch        *b_l1_ProbNNk;   //!
   TBranch        *b_l1_ProbNNp;   //!
   TBranch        *b_l1_ProbNNpi;   //!
   TBranch        *b_l1_ProbNNghost;   //!
   TBranch        *b_l1_IP_OWNPV;   //!
   TBranch        *b_l1_IPCHI2_OWNPV;   //!
   TBranch        *b_l1_P;   //!
   TBranch        *b_l1_PT;   //!
   TBranch        *b_l2_hasCalo;   //!
   TBranch        *b_l2_PIDe;   //!
   TBranch        *b_l2_PIDmu;   //!
   TBranch        *b_l2_PIDK;   //!
   TBranch        *b_l2_PIDp;   //!
   TBranch        *b_l2_ProbNNe;   //!
   TBranch        *b_l2_ProbNNmu;   //!
   TBranch        *b_l2_ProbNNk;   //!
   TBranch        *b_l2_ProbNNp;   //!
   TBranch        *b_l2_ProbNNpi;   //!
   TBranch        *b_l2_ProbNNghost;   //!
   TBranch        *b_l2_IP_OWNPV;   //!
   TBranch        *b_l2_IPCHI2_OWNPV;   //!
   TBranch        *b_l2_P;   //!
   TBranch        *b_l2_PT;   //!
   TBranch        *b_h1_P;   //!
   TBranch        *b_h1_PT;   //!
   TBranch        *b_h1_hasRich;   //!
   TBranch        *b_h1_PIDe;   //!
   TBranch        *b_h1_PIDmu;   //!
   TBranch        *b_h1_PIDK;   //!
   TBranch        *b_h1_PIDp;   //!
   TBranch        *b_h1_ProbNNe;   //!
   TBranch        *b_h1_ProbNNmu;   //!
   TBranch        *b_h1_ProbNNk;   //!
   TBranch        *b_h1_ProbNNp;   //!
   TBranch        *b_h1_ProbNNpi;   //!
   TBranch        *b_h1_ProbNNghost;   //!
   TBranch        *b_h1_IPCHI2_OWNPV;   //!
   TBranch        *b_h2_P;   //!
   TBranch        *b_h2_PT;   //!
   TBranch        *b_h2_hasRich;   //!
   TBranch        *b_h2_PIDe;   //!
   TBranch        *b_h2_PIDmu;   //!
   TBranch        *b_h2_PIDK;   //!
   TBranch        *b_h2_PIDp;   //!
   TBranch        *b_h2_ProbNNe;   //!
   TBranch        *b_h2_ProbNNmu;   //!
   TBranch        *b_h2_ProbNNk;   //!
   TBranch        *b_h2_ProbNNp;   //!
   TBranch        *b_h2_ProbNNpi;   //!
   TBranch        *b_h2_ProbNNghost;   //!
   TBranch        *b_h2_IPCHI2_OWNPV;   //!
   TBranch        *b_tracks_minPt;   //!
   TBranch        *b_tracks_minIP;   //!
   TBranch        *b_tracks_minIPchi2;   //!
   TBranch        *b_B_L0Global_Dec;   //!
   TBranch        *b_B_L0Global_TIS;   //!
   TBranch        *b_B_L0Global_TOS;   //!
   TBranch        *b_B_Hlt1Global_Dec;   //!
   TBranch        *b_B_Hlt1Global_TIS;   //!
   TBranch        *b_B_Hlt1Global_TOS;   //!
   TBranch        *b_B_Hlt1Phys_Dec;   //!
   TBranch        *b_B_Hlt1Phys_TIS;   //!
   TBranch        *b_B_Hlt1Phys_TOS;   //!
   TBranch        *b_B_Hlt2Global_Dec;   //!
   TBranch        *b_B_Hlt2Global_TIS;   //!
   TBranch        *b_B_Hlt2Global_TOS;   //!
   TBranch        *b_B_Hlt2Phys_Dec;   //!
   TBranch        *b_B_Hlt2Phys_TIS;   //!
   TBranch        *b_B_Hlt2Phys_TOS;   //!
   TBranch        *b_B_L0HadronDecision_Dec;   //!
   TBranch        *b_B_L0HadronDecision_TIS;   //!
   TBranch        *b_B_L0HadronDecision_TOS;   //!
   TBranch        *b_B_L0MuonDecision_Dec;   //!
   TBranch        *b_B_L0MuonDecision_TIS;   //!
   TBranch        *b_B_L0MuonDecision_TOS;   //!
   TBranch        *b_B_L0DiMuonDecision_Dec;   //!
   TBranch        *b_B_L0DiMuonDecision_TIS;   //!
   TBranch        *b_B_L0DiMuonDecision_TOS;   //!
   TBranch        *b_B_L0ElectronDecision_Dec;   //!
   TBranch        *b_B_L0ElectronDecision_TIS;   //!
   TBranch        *b_B_L0ElectronDecision_TOS;   //!
   TBranch        *b_B_L0PhotonDecision_Dec;   //!
   TBranch        *b_B_L0PhotonDecision_TIS;   //!
   TBranch        *b_B_L0PhotonDecision_TOS;   //!
   TBranch        *b_B_Hlt1TrackAllL0Decision_Dec;   //!
   TBranch        *b_B_Hlt1TrackAllL0Decision_TIS;   //!
   TBranch        *b_B_Hlt1TrackAllL0Decision_TOS;   //!
   TBranch        *b_B_Hlt1TrackMuonDecision_Dec;   //!
   TBranch        *b_B_Hlt1TrackMuonDecision_TIS;   //!
   TBranch        *b_B_Hlt1TrackMuonDecision_TOS;   //!
   TBranch        *b_B_Hlt2SingleMuonDecision_Dec;   //!
   TBranch        *b_B_Hlt2SingleMuonDecision_TIS;   //!
   TBranch        *b_B_Hlt2SingleMuonDecision_TOS;   //!
   TBranch        *b_B_Hlt2Topo2BodyBBDTDecision_Dec;   //!
   TBranch        *b_B_Hlt2Topo2BodyBBDTDecision_TIS;   //!
   TBranch        *b_B_Hlt2Topo2BodyBBDTDecision_TOS;   //!
   TBranch        *b_B_Hlt2Topo2BodySimpleDecision_Dec;   //!
   TBranch        *b_B_Hlt2Topo2BodySimpleDecision_TIS;   //!
   TBranch        *b_B_Hlt2Topo2BodySimpleDecision_TOS;   //!
   TBranch        *b_B_Hlt2Topo3BodyBBDTDecision_Dec;   //!
   TBranch        *b_B_Hlt2Topo3BodyBBDTDecision_TIS;   //!
   TBranch        *b_B_Hlt2Topo3BodyBBDTDecision_TOS;   //!
   TBranch        *b_B_Hlt2Topo3BodySimpleDecision_Dec;   //!
   TBranch        *b_B_Hlt2Topo3BodySimpleDecision_TIS;   //!
   TBranch        *b_B_Hlt2Topo3BodySimpleDecision_TOS;   //!
   TBranch        *b_B_Hlt2Topo4BodyBBDTDecision_Dec;   //!
   TBranch        *b_B_Hlt2Topo4BodyBBDTDecision_TIS;   //!
   TBranch        *b_B_Hlt2Topo4BodyBBDTDecision_TOS;   //!
   TBranch        *b_B_Hlt2Topo4BodySimpleDecision_Dec;   //!
   TBranch        *b_B_Hlt2Topo4BodySimpleDecision_TIS;   //!
   TBranch        *b_B_Hlt2Topo4BodySimpleDecision_TOS;   //!
   TBranch        *b_B_Hlt2TopoE2BodyBBDTDecision_Dec;   //!
   TBranch        *b_B_Hlt2TopoE2BodyBBDTDecision_TIS;   //!
   TBranch        *b_B_Hlt2TopoE2BodyBBDTDecision_TOS;   //!
   TBranch        *b_B_Hlt2TopoE3BodyBBDTDecision_Dec;   //!
   TBranch        *b_B_Hlt2TopoE3BodyBBDTDecision_TIS;   //!
   TBranch        *b_B_Hlt2TopoE3BodyBBDTDecision_TOS;   //!
   TBranch        *b_B_Hlt2TopoE4BodyBBDTDecision_Dec;   //!
   TBranch        *b_B_Hlt2TopoE4BodyBBDTDecision_TIS;   //!
   TBranch        *b_B_Hlt2TopoE4BodyBBDTDecision_TOS;   //!
   TBranch        *b_B_Hlt2TopoMu2BodyBBDTDecision_Dec;   //!
   TBranch        *b_B_Hlt2TopoMu2BodyBBDTDecision_TIS;   //!
   TBranch        *b_B_Hlt2TopoMu2BodyBBDTDecision_TOS;   //!
   TBranch        *b_B_Hlt2TopoMu3BodyBBDTDecision_Dec;   //!
   TBranch        *b_B_Hlt2TopoMu3BodyBBDTDecision_TIS;   //!
   TBranch        *b_B_Hlt2TopoMu3BodyBBDTDecision_TOS;   //!
   TBranch        *b_B_Hlt2TopoMu4BodyBBDTDecision_Dec;   //!
   TBranch        *b_B_Hlt2TopoMu4BodyBBDTDecision_TIS;   //!
   TBranch        *b_B_Hlt2TopoMu4BodyBBDTDecision_TOS;   //!
   TBranch        *b_MVA;   //!
   TBranch        *b_MVAJ;   //!
   TBranch        *b_B_OWNPV_CHI2;   //!
   TBranch        *b_BmassHOP;   //!
   TBranch        *b_alphaHOP;   //!
   TBranch        *b_MVAlowerJ;   //!
   TBranch        *b_MVApartJ;   //!
   TBranch        *b_MVAJ16var;   //!
   TBranch        *b_l1_PE;   //!
   TBranch        *b_l2_PE;   //!
   TBranch        *b_h1_PE;   //!
   TBranch        *b_h2_PE;   //!
   TBranch        *b_l1_TRACK_GhostProb;   //!
   TBranch        *b_l2_TRACK_GhostProb;   //!
   TBranch        *b_h1_TRACK_GhostProb;   //!
   TBranch        *b_h2_TRACK_GhostProb;   //!
   TBranch        *b_h1_IP_OWNPV;   //!
   TBranch        *b_h2_IP_OWNPV;   //!
   TBranch        *b_d1_P;   //!
   TBranch        *b_d2_P;   //!
   TBranch        *b_l1_PX;   //!
   TBranch        *b_l1_PY;   //!
   TBranch        *b_l1_PZ;   //!
   TBranch        *b_l1_M;   //!
   TBranch        *b_l2_PX;   //!
   TBranch        *b_l2_PY;   //!
   TBranch        *b_l2_PZ;   //!
   TBranch        *b_l2_M;   //!
   TBranch        *b_h1_PX;   //!
   TBranch        *b_h1_PY;   //!
   TBranch        *b_h1_PZ;   //!
   TBranch        *b_h1_M;   //!
   TBranch        *b_h2_PX;   //!
   TBranch        *b_h2_PY;   //!
   TBranch        *b_h2_PZ;   //!
   TBranch        *b_h2_M;   //!
   TBranch        *b_l1_ID;   //!
   TBranch        *b_l2_ID;   //!
   TBranch        *b_h1_ID;   //!
   TBranch        *b_h2_ID;   //!
   TBranch        *b_d2_PX;   //!
   TBranch        *b_d2_PY;   //!
   TBranch        *b_d2_PZ;   //!
   TBranch        *b_d2_PE;   //!
   TBranch        *b_d2_M;   //!

   ntuple-MVAJ(TTree *tree=0);
   virtual ~ntuple-MVAJ();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   // virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

//#endif

//#ifdef ntuple-MVAJ_cxx
ntuple-MVAJ::ntuple-MVAJ(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("MueKst-mc-xll-new.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("MueKst-mc-xll-new.root");
      }
      f->GetObject("MueKst",tree);

   }
   Init(tree);
}

ntuple-MVAJ::~ntuple-MVAJ()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t ntuple-MVAJ::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t ntuple-MVAJ::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void ntuple-MVAJ::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("runNumber", &runNumber, &b_runNumber);
   fChain->SetBranchAddress("eventNumber", &eventNumber, &b_eventNumber);
   fChain->SetBranchAddress("ranInt", &ranInt, &b_ranInt);
   fChain->SetBranchAddress("BKGCAT", &BKGCAT, &b_BKGCAT);
   fChain->SetBranchAddress("B_MM", &B_MM, &b_B_MM);
   fChain->SetBranchAddress("B_ENDVERTEX_CHI2", &B_ENDVERTEX_CHI2, &b_B_ENDVERTEX_CHI2);
   fChain->SetBranchAddress("B_DIRA_OWNPV", &B_DIRA_OWNPV, &b_B_DIRA_OWNPV);
   fChain->SetBranchAddress("B_IPCHI2_OWNPV", &B_IPCHI2_OWNPV, &b_B_IPCHI2_OWNPV);
   fChain->SetBranchAddress("B_FDCHI2_OWNPV", &B_FDCHI2_OWNPV, &b_B_FDCHI2_OWNPV);
   fChain->SetBranchAddress("B_TAU", &B_TAU, &b_B_TAU);
   fChain->SetBranchAddress("B_P", &B_P, &b_B_P);
   fChain->SetBranchAddress("B_PT", &B_PT, &b_B_PT);
   fChain->SetBranchAddress("B_IP_OWNPV", &B_IP_OWNPV, &b_B_IP_OWNPV);
   fChain->SetBranchAddress("B_CDF_isol", &B_CDF_isol, &b_B_CDF_isol);
   fChain->SetBranchAddress("B_coneiso_PTAsy", &B_coneiso_PTAsy, &b_B_coneiso_PTAsy);
   fChain->SetBranchAddress("B_coneiso_mult", &B_coneiso_mult, &b_B_coneiso_mult);
   fChain->SetBranchAddress("d1_MM", &d1_MM, &b_d1_MM);
   fChain->SetBranchAddress("d1_PT", &d1_PT, &b_d1_PT);
   fChain->SetBranchAddress("d1_ORIVX_CHI2", &d1_ORIVX_CHI2, &b_d1_ORIVX_CHI2);
   fChain->SetBranchAddress("d1_IPCHI2_OWNPV", &d1_IPCHI2_OWNPV, &b_d1_IPCHI2_OWNPV);
   fChain->SetBranchAddress("d1_FDCHI2_OWNPV", &d1_FDCHI2_OWNPV, &b_d1_FDCHI2_OWNPV);
   fChain->SetBranchAddress("d2_MM", &d2_MM, &b_d2_MM);
   fChain->SetBranchAddress("d2_PT", &d2_PT, &b_d2_PT);
   fChain->SetBranchAddress("d2_ENDVERTEX_CHI2", &d2_ENDVERTEX_CHI2, &b_d2_ENDVERTEX_CHI2);
   fChain->SetBranchAddress("d2_IPCHI2_OWNPV", &d2_IPCHI2_OWNPV, &b_d2_IPCHI2_OWNPV);
   fChain->SetBranchAddress("l1_isMuon", &l1_isMuon, &b_l1_isMuon);
   fChain->SetBranchAddress("l1_hasMuon", &l1_hasMuon, &b_l1_hasMuon);
   fChain->SetBranchAddress("l1_PIDe", &l1_PIDe, &b_l1_PIDe);
   fChain->SetBranchAddress("l1_PIDmu", &l1_PIDmu, &b_l1_PIDmu);
   fChain->SetBranchAddress("l1_PIDK", &l1_PIDK, &b_l1_PIDK);
   fChain->SetBranchAddress("l1_PIDp", &l1_PIDp, &b_l1_PIDp);
   fChain->SetBranchAddress("l1_ProbNNe", &l1_ProbNNe, &b_l1_ProbNNe);
   fChain->SetBranchAddress("l1_ProbNNmu", &l1_ProbNNmu, &b_l1_ProbNNmu);
   fChain->SetBranchAddress("l1_ProbNNk", &l1_ProbNNk, &b_l1_ProbNNk);
   fChain->SetBranchAddress("l1_ProbNNp", &l1_ProbNNp, &b_l1_ProbNNp);
   fChain->SetBranchAddress("l1_ProbNNpi", &l1_ProbNNpi, &b_l1_ProbNNpi);
   fChain->SetBranchAddress("l1_ProbNNghost", &l1_ProbNNghost, &b_l1_ProbNNghost);
   fChain->SetBranchAddress("l1_IP_OWNPV", &l1_IP_OWNPV, &b_l1_IP_OWNPV);
   fChain->SetBranchAddress("l1_IPCHI2_OWNPV", &l1_IPCHI2_OWNPV, &b_l1_IPCHI2_OWNPV);
   fChain->SetBranchAddress("l1_P", &l1_P, &b_l1_P);
   fChain->SetBranchAddress("l1_PT", &l1_PT, &b_l1_PT);
   fChain->SetBranchAddress("l2_hasCalo", &l2_hasCalo, &b_l2_hasCalo);
   fChain->SetBranchAddress("l2_PIDe", &l2_PIDe, &b_l2_PIDe);
   fChain->SetBranchAddress("l2_PIDmu", &l2_PIDmu, &b_l2_PIDmu);
   fChain->SetBranchAddress("l2_PIDK", &l2_PIDK, &b_l2_PIDK);
   fChain->SetBranchAddress("l2_PIDp", &l2_PIDp, &b_l2_PIDp);
   fChain->SetBranchAddress("l2_ProbNNe", &l2_ProbNNe, &b_l2_ProbNNe);
   fChain->SetBranchAddress("l2_ProbNNmu", &l2_ProbNNmu, &b_l2_ProbNNmu);
   fChain->SetBranchAddress("l2_ProbNNk", &l2_ProbNNk, &b_l2_ProbNNk);
   fChain->SetBranchAddress("l2_ProbNNp", &l2_ProbNNp, &b_l2_ProbNNp);
   fChain->SetBranchAddress("l2_ProbNNpi", &l2_ProbNNpi, &b_l2_ProbNNpi);
   fChain->SetBranchAddress("l2_ProbNNghost", &l2_ProbNNghost, &b_l2_ProbNNghost);
   fChain->SetBranchAddress("l2_IP_OWNPV", &l2_IP_OWNPV, &b_l2_IP_OWNPV);
   fChain->SetBranchAddress("l2_IPCHI2_OWNPV", &l2_IPCHI2_OWNPV, &b_l2_IPCHI2_OWNPV);
   fChain->SetBranchAddress("l2_P", &l2_P, &b_l2_P);
   fChain->SetBranchAddress("l2_PT", &l2_PT, &b_l2_PT);
   fChain->SetBranchAddress("h1_P", &h1_P, &b_h1_P);
   fChain->SetBranchAddress("h1_PT", &h1_PT, &b_h1_PT);
   fChain->SetBranchAddress("h1_hasRich", &h1_hasRich, &b_h1_hasRich);
   fChain->SetBranchAddress("h1_PIDe", &h1_PIDe, &b_h1_PIDe);
   fChain->SetBranchAddress("h1_PIDmu", &h1_PIDmu, &b_h1_PIDmu);
   fChain->SetBranchAddress("h1_PIDK", &h1_PIDK, &b_h1_PIDK);
   fChain->SetBranchAddress("h1_PIDp", &h1_PIDp, &b_h1_PIDp);
   fChain->SetBranchAddress("h1_ProbNNe", &h1_ProbNNe, &b_h1_ProbNNe);
   fChain->SetBranchAddress("h1_ProbNNmu", &h1_ProbNNmu, &b_h1_ProbNNmu);
   fChain->SetBranchAddress("h1_ProbNNk", &h1_ProbNNk, &b_h1_ProbNNk);
   fChain->SetBranchAddress("h1_ProbNNp", &h1_ProbNNp, &b_h1_ProbNNp);
   fChain->SetBranchAddress("h1_ProbNNpi", &h1_ProbNNpi, &b_h1_ProbNNpi);
   fChain->SetBranchAddress("h1_ProbNNghost", &h1_ProbNNghost, &b_h1_ProbNNghost);
   fChain->SetBranchAddress("h1_IPCHI2_OWNPV", &h1_IPCHI2_OWNPV, &b_h1_IPCHI2_OWNPV);
   fChain->SetBranchAddress("h2_P", &h2_P, &b_h2_P);
   fChain->SetBranchAddress("h2_PT", &h2_PT, &b_h2_PT);
   fChain->SetBranchAddress("h2_hasRich", &h2_hasRich, &b_h2_hasRich);
   fChain->SetBranchAddress("h2_PIDe", &h2_PIDe, &b_h2_PIDe);
   fChain->SetBranchAddress("h2_PIDmu", &h2_PIDmu, &b_h2_PIDmu);
   fChain->SetBranchAddress("h2_PIDK", &h2_PIDK, &b_h2_PIDK);
   fChain->SetBranchAddress("h2_PIDp", &h2_PIDp, &b_h2_PIDp);
   fChain->SetBranchAddress("h2_ProbNNe", &h2_ProbNNe, &b_h2_ProbNNe);
   fChain->SetBranchAddress("h2_ProbNNmu", &h2_ProbNNmu, &b_h2_ProbNNmu);
   fChain->SetBranchAddress("h2_ProbNNk", &h2_ProbNNk, &b_h2_ProbNNk);
   fChain->SetBranchAddress("h2_ProbNNp", &h2_ProbNNp, &b_h2_ProbNNp);
   fChain->SetBranchAddress("h2_ProbNNpi", &h2_ProbNNpi, &b_h2_ProbNNpi);
   fChain->SetBranchAddress("h2_ProbNNghost", &h2_ProbNNghost, &b_h2_ProbNNghost);
   fChain->SetBranchAddress("h2_IPCHI2_OWNPV", &h2_IPCHI2_OWNPV, &b_h2_IPCHI2_OWNPV);
   fChain->SetBranchAddress("tracks_minPt", &tracks_minPt, &b_tracks_minPt);
   fChain->SetBranchAddress("tracks_minIP", &tracks_minIP, &b_tracks_minIP);
   fChain->SetBranchAddress("tracks_minIPchi2", &tracks_minIPchi2, &b_tracks_minIPchi2);
   fChain->SetBranchAddress("B_L0Global_Dec", &B_L0Global_Dec, &b_B_L0Global_Dec);
   fChain->SetBranchAddress("B_L0Global_TIS", &B_L0Global_TIS, &b_B_L0Global_TIS);
   fChain->SetBranchAddress("B_L0Global_TOS", &B_L0Global_TOS, &b_B_L0Global_TOS);
   fChain->SetBranchAddress("B_Hlt1Global_Dec", &B_Hlt1Global_Dec, &b_B_Hlt1Global_Dec);
   fChain->SetBranchAddress("B_Hlt1Global_TIS", &B_Hlt1Global_TIS, &b_B_Hlt1Global_TIS);
   fChain->SetBranchAddress("B_Hlt1Global_TOS", &B_Hlt1Global_TOS, &b_B_Hlt1Global_TOS);
   fChain->SetBranchAddress("B_Hlt1Phys_Dec", &B_Hlt1Phys_Dec, &b_B_Hlt1Phys_Dec);
   fChain->SetBranchAddress("B_Hlt1Phys_TIS", &B_Hlt1Phys_TIS, &b_B_Hlt1Phys_TIS);
   fChain->SetBranchAddress("B_Hlt1Phys_TOS", &B_Hlt1Phys_TOS, &b_B_Hlt1Phys_TOS);
   fChain->SetBranchAddress("B_Hlt2Global_Dec", &B_Hlt2Global_Dec, &b_B_Hlt2Global_Dec);
   fChain->SetBranchAddress("B_Hlt2Global_TIS", &B_Hlt2Global_TIS, &b_B_Hlt2Global_TIS);
   fChain->SetBranchAddress("B_Hlt2Global_TOS", &B_Hlt2Global_TOS, &b_B_Hlt2Global_TOS);
   fChain->SetBranchAddress("B_Hlt2Phys_Dec", &B_Hlt2Phys_Dec, &b_B_Hlt2Phys_Dec);
   fChain->SetBranchAddress("B_Hlt2Phys_TIS", &B_Hlt2Phys_TIS, &b_B_Hlt2Phys_TIS);
   fChain->SetBranchAddress("B_Hlt2Phys_TOS", &B_Hlt2Phys_TOS, &b_B_Hlt2Phys_TOS);
   fChain->SetBranchAddress("B_L0HadronDecision_Dec", &B_L0HadronDecision_Dec, &b_B_L0HadronDecision_Dec);
   fChain->SetBranchAddress("B_L0HadronDecision_TIS", &B_L0HadronDecision_TIS, &b_B_L0HadronDecision_TIS);
   fChain->SetBranchAddress("B_L0HadronDecision_TOS", &B_L0HadronDecision_TOS, &b_B_L0HadronDecision_TOS);
   fChain->SetBranchAddress("B_L0MuonDecision_Dec", &B_L0MuonDecision_Dec, &b_B_L0MuonDecision_Dec);
   fChain->SetBranchAddress("B_L0MuonDecision_TIS", &B_L0MuonDecision_TIS, &b_B_L0MuonDecision_TIS);
   fChain->SetBranchAddress("B_L0MuonDecision_TOS", &B_L0MuonDecision_TOS, &b_B_L0MuonDecision_TOS);
   fChain->SetBranchAddress("B_L0DiMuonDecision_Dec", &B_L0DiMuonDecision_Dec, &b_B_L0DiMuonDecision_Dec);
   fChain->SetBranchAddress("B_L0DiMuonDecision_TIS", &B_L0DiMuonDecision_TIS, &b_B_L0DiMuonDecision_TIS);
   fChain->SetBranchAddress("B_L0DiMuonDecision_TOS", &B_L0DiMuonDecision_TOS, &b_B_L0DiMuonDecision_TOS);
   fChain->SetBranchAddress("B_L0ElectronDecision_Dec", &B_L0ElectronDecision_Dec, &b_B_L0ElectronDecision_Dec);
   fChain->SetBranchAddress("B_L0ElectronDecision_TIS", &B_L0ElectronDecision_TIS, &b_B_L0ElectronDecision_TIS);
   fChain->SetBranchAddress("B_L0ElectronDecision_TOS", &B_L0ElectronDecision_TOS, &b_B_L0ElectronDecision_TOS);
   fChain->SetBranchAddress("B_L0PhotonDecision_Dec", &B_L0PhotonDecision_Dec, &b_B_L0PhotonDecision_Dec);
   fChain->SetBranchAddress("B_L0PhotonDecision_TIS", &B_L0PhotonDecision_TIS, &b_B_L0PhotonDecision_TIS);
   fChain->SetBranchAddress("B_L0PhotonDecision_TOS", &B_L0PhotonDecision_TOS, &b_B_L0PhotonDecision_TOS);
   fChain->SetBranchAddress("B_Hlt1TrackAllL0Decision_Dec", &B_Hlt1TrackAllL0Decision_Dec, &b_B_Hlt1TrackAllL0Decision_Dec);
   fChain->SetBranchAddress("B_Hlt1TrackAllL0Decision_TIS", &B_Hlt1TrackAllL0Decision_TIS, &b_B_Hlt1TrackAllL0Decision_TIS);
   fChain->SetBranchAddress("B_Hlt1TrackAllL0Decision_TOS", &B_Hlt1TrackAllL0Decision_TOS, &b_B_Hlt1TrackAllL0Decision_TOS);
   fChain->SetBranchAddress("B_Hlt1TrackMuonDecision_Dec", &B_Hlt1TrackMuonDecision_Dec, &b_B_Hlt1TrackMuonDecision_Dec);
   fChain->SetBranchAddress("B_Hlt1TrackMuonDecision_TIS", &B_Hlt1TrackMuonDecision_TIS, &b_B_Hlt1TrackMuonDecision_TIS);
   fChain->SetBranchAddress("B_Hlt1TrackMuonDecision_TOS", &B_Hlt1TrackMuonDecision_TOS, &b_B_Hlt1TrackMuonDecision_TOS);
   fChain->SetBranchAddress("B_Hlt2SingleMuonDecision_Dec", &B_Hlt2SingleMuonDecision_Dec, &b_B_Hlt2SingleMuonDecision_Dec);
   fChain->SetBranchAddress("B_Hlt2SingleMuonDecision_TIS", &B_Hlt2SingleMuonDecision_TIS, &b_B_Hlt2SingleMuonDecision_TIS);
   fChain->SetBranchAddress("B_Hlt2SingleMuonDecision_TOS", &B_Hlt2SingleMuonDecision_TOS, &b_B_Hlt2SingleMuonDecision_TOS);
   fChain->SetBranchAddress("B_Hlt2Topo2BodyBBDTDecision_Dec", &B_Hlt2Topo2BodyBBDTDecision_Dec, &b_B_Hlt2Topo2BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("B_Hlt2Topo2BodyBBDTDecision_TIS", &B_Hlt2Topo2BodyBBDTDecision_TIS, &b_B_Hlt2Topo2BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("B_Hlt2Topo2BodyBBDTDecision_TOS", &B_Hlt2Topo2BodyBBDTDecision_TOS, &b_B_Hlt2Topo2BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("B_Hlt2Topo2BodySimpleDecision_Dec", &B_Hlt2Topo2BodySimpleDecision_Dec, &b_B_Hlt2Topo2BodySimpleDecision_Dec);
   fChain->SetBranchAddress("B_Hlt2Topo2BodySimpleDecision_TIS", &B_Hlt2Topo2BodySimpleDecision_TIS, &b_B_Hlt2Topo2BodySimpleDecision_TIS);
   fChain->SetBranchAddress("B_Hlt2Topo2BodySimpleDecision_TOS", &B_Hlt2Topo2BodySimpleDecision_TOS, &b_B_Hlt2Topo2BodySimpleDecision_TOS);
   fChain->SetBranchAddress("B_Hlt2Topo3BodyBBDTDecision_Dec", &B_Hlt2Topo3BodyBBDTDecision_Dec, &b_B_Hlt2Topo3BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("B_Hlt2Topo3BodyBBDTDecision_TIS", &B_Hlt2Topo3BodyBBDTDecision_TIS, &b_B_Hlt2Topo3BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("B_Hlt2Topo3BodyBBDTDecision_TOS", &B_Hlt2Topo3BodyBBDTDecision_TOS, &b_B_Hlt2Topo3BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("B_Hlt2Topo3BodySimpleDecision_Dec", &B_Hlt2Topo3BodySimpleDecision_Dec, &b_B_Hlt2Topo3BodySimpleDecision_Dec);
   fChain->SetBranchAddress("B_Hlt2Topo3BodySimpleDecision_TIS", &B_Hlt2Topo3BodySimpleDecision_TIS, &b_B_Hlt2Topo3BodySimpleDecision_TIS);
   fChain->SetBranchAddress("B_Hlt2Topo3BodySimpleDecision_TOS", &B_Hlt2Topo3BodySimpleDecision_TOS, &b_B_Hlt2Topo3BodySimpleDecision_TOS);
   fChain->SetBranchAddress("B_Hlt2Topo4BodyBBDTDecision_Dec", &B_Hlt2Topo4BodyBBDTDecision_Dec, &b_B_Hlt2Topo4BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("B_Hlt2Topo4BodyBBDTDecision_TIS", &B_Hlt2Topo4BodyBBDTDecision_TIS, &b_B_Hlt2Topo4BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("B_Hlt2Topo4BodyBBDTDecision_TOS", &B_Hlt2Topo4BodyBBDTDecision_TOS, &b_B_Hlt2Topo4BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("B_Hlt2Topo4BodySimpleDecision_Dec", &B_Hlt2Topo4BodySimpleDecision_Dec, &b_B_Hlt2Topo4BodySimpleDecision_Dec);
   fChain->SetBranchAddress("B_Hlt2Topo4BodySimpleDecision_TIS", &B_Hlt2Topo4BodySimpleDecision_TIS, &b_B_Hlt2Topo4BodySimpleDecision_TIS);
   fChain->SetBranchAddress("B_Hlt2Topo4BodySimpleDecision_TOS", &B_Hlt2Topo4BodySimpleDecision_TOS, &b_B_Hlt2Topo4BodySimpleDecision_TOS);
   fChain->SetBranchAddress("B_Hlt2TopoE2BodyBBDTDecision_Dec", &B_Hlt2TopoE2BodyBBDTDecision_Dec, &b_B_Hlt2TopoE2BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("B_Hlt2TopoE2BodyBBDTDecision_TIS", &B_Hlt2TopoE2BodyBBDTDecision_TIS, &b_B_Hlt2TopoE2BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("B_Hlt2TopoE2BodyBBDTDecision_TOS", &B_Hlt2TopoE2BodyBBDTDecision_TOS, &b_B_Hlt2TopoE2BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("B_Hlt2TopoE3BodyBBDTDecision_Dec", &B_Hlt2TopoE3BodyBBDTDecision_Dec, &b_B_Hlt2TopoE3BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("B_Hlt2TopoE3BodyBBDTDecision_TIS", &B_Hlt2TopoE3BodyBBDTDecision_TIS, &b_B_Hlt2TopoE3BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("B_Hlt2TopoE3BodyBBDTDecision_TOS", &B_Hlt2TopoE3BodyBBDTDecision_TOS, &b_B_Hlt2TopoE3BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("B_Hlt2TopoE4BodyBBDTDecision_Dec", &B_Hlt2TopoE4BodyBBDTDecision_Dec, &b_B_Hlt2TopoE4BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("B_Hlt2TopoE4BodyBBDTDecision_TIS", &B_Hlt2TopoE4BodyBBDTDecision_TIS, &b_B_Hlt2TopoE4BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("B_Hlt2TopoE4BodyBBDTDecision_TOS", &B_Hlt2TopoE4BodyBBDTDecision_TOS, &b_B_Hlt2TopoE4BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("B_Hlt2TopoMu2BodyBBDTDecision_Dec", &B_Hlt2TopoMu2BodyBBDTDecision_Dec, &b_B_Hlt2TopoMu2BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("B_Hlt2TopoMu2BodyBBDTDecision_TIS", &B_Hlt2TopoMu2BodyBBDTDecision_TIS, &b_B_Hlt2TopoMu2BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("B_Hlt2TopoMu2BodyBBDTDecision_TOS", &B_Hlt2TopoMu2BodyBBDTDecision_TOS, &b_B_Hlt2TopoMu2BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("B_Hlt2TopoMu3BodyBBDTDecision_Dec", &B_Hlt2TopoMu3BodyBBDTDecision_Dec, &b_B_Hlt2TopoMu3BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("B_Hlt2TopoMu3BodyBBDTDecision_TIS", &B_Hlt2TopoMu3BodyBBDTDecision_TIS, &b_B_Hlt2TopoMu3BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("B_Hlt2TopoMu3BodyBBDTDecision_TOS", &B_Hlt2TopoMu3BodyBBDTDecision_TOS, &b_B_Hlt2TopoMu3BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("B_Hlt2TopoMu4BodyBBDTDecision_Dec", &B_Hlt2TopoMu4BodyBBDTDecision_Dec, &b_B_Hlt2TopoMu4BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("B_Hlt2TopoMu4BodyBBDTDecision_TIS", &B_Hlt2TopoMu4BodyBBDTDecision_TIS, &b_B_Hlt2TopoMu4BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("B_Hlt2TopoMu4BodyBBDTDecision_TOS", &B_Hlt2TopoMu4BodyBBDTDecision_TOS, &b_B_Hlt2TopoMu4BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("MVA", &MVA, &b_MVA);
   fChain->SetBranchAddress("MVAJ", &MVAJ, &b_MVAJ);
   fChain->SetBranchAddress("B_OWNPV_CHI2", &B_OWNPV_CHI2, &b_B_OWNPV_CHI2);
   fChain->SetBranchAddress("BmassHOP", &BmassHOP, &b_BmassHOP);
   fChain->SetBranchAddress("alphaHOP", &alphaHOP, &b_alphaHOP);
   fChain->SetBranchAddress("MVAlowerJ", &MVAlowerJ, &b_MVAlowerJ);
   fChain->SetBranchAddress("MVApartJ", &MVApartJ, &b_MVApartJ);
   fChain->SetBranchAddress("MVAJ16var", &MVAJ16var, &b_MVAJ16var);
   fChain->SetBranchAddress("l1_PE", &l1_PE, &b_l1_PE);
   fChain->SetBranchAddress("l2_PE", &l2_PE, &b_l2_PE);
   fChain->SetBranchAddress("h1_PE", &h1_PE, &b_h1_PE);
   fChain->SetBranchAddress("h2_PE", &h2_PE, &b_h2_PE);
   fChain->SetBranchAddress("l1_TRACK_GhostProb", &l1_TRACK_GhostProb, &b_l1_TRACK_GhostProb);
   fChain->SetBranchAddress("l2_TRACK_GhostProb", &l2_TRACK_GhostProb, &b_l2_TRACK_GhostProb);
   fChain->SetBranchAddress("h1_TRACK_GhostProb", &h1_TRACK_GhostProb, &b_h1_TRACK_GhostProb);
   fChain->SetBranchAddress("h2_TRACK_GhostProb", &h2_TRACK_GhostProb, &b_h2_TRACK_GhostProb);
   fChain->SetBranchAddress("h1_IP_OWNPV", &h1_IP_OWNPV, &b_h1_IP_OWNPV);
   fChain->SetBranchAddress("h2_IP_OWNPV", &h2_IP_OWNPV, &b_h2_IP_OWNPV);
   fChain->SetBranchAddress("d1_P", &d1_P, &b_d1_P);
   fChain->SetBranchAddress("d2_P", &d2_P, &b_d2_P);
   fChain->SetBranchAddress("l1_PX", &l1_PX, &b_l1_PX);
   fChain->SetBranchAddress("l1_PY", &l1_PY, &b_l1_PY);
   fChain->SetBranchAddress("l1_PZ", &l1_PZ, &b_l1_PZ);
   fChain->SetBranchAddress("l1_M", &l1_M, &b_l1_M);
   fChain->SetBranchAddress("l2_PX", &l2_PX, &b_l2_PX);
   fChain->SetBranchAddress("l2_PY", &l2_PY, &b_l2_PY);
   fChain->SetBranchAddress("l2_PZ", &l2_PZ, &b_l2_PZ);
   fChain->SetBranchAddress("l2_M", &l2_M, &b_l2_M);
   fChain->SetBranchAddress("h1_PX", &h1_PX, &b_h1_PX);
   fChain->SetBranchAddress("h1_PY", &h1_PY, &b_h1_PY);
   fChain->SetBranchAddress("h1_PZ", &h1_PZ, &b_h1_PZ);
   fChain->SetBranchAddress("h1_M", &h1_M, &b_h1_M);
   fChain->SetBranchAddress("h2_PX", &h2_PX, &b_h2_PX);
   fChain->SetBranchAddress("h2_PY", &h2_PY, &b_h2_PY);
   fChain->SetBranchAddress("h2_PZ", &h2_PZ, &b_h2_PZ);
   fChain->SetBranchAddress("h2_M", &h2_M, &b_h2_M);
   fChain->SetBranchAddress("l1_ID", &l1_ID, &b_l1_ID);
   fChain->SetBranchAddress("l2_ID", &l2_ID, &b_l2_ID);
   fChain->SetBranchAddress("h1_ID", &h1_ID, &b_h1_ID);
   fChain->SetBranchAddress("h2_ID", &h2_ID, &b_h2_ID);
   fChain->SetBranchAddress("d2_PX", &d2_PX, &b_d2_PX);
   fChain->SetBranchAddress("d2_PY", &d2_PY, &b_d2_PY);
   fChain->SetBranchAddress("d2_PZ", &d2_PZ, &b_d2_PZ);
   fChain->SetBranchAddress("d2_PE", &d2_PE, &b_d2_PE);
   fChain->SetBranchAddress("d2_M", &d2_M, &b_d2_M);
   Notify();
}

Bool_t ntuple-MVAJ::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void ntuple-MVAJ::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t ntuple-MVAJ::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef ntuple-MVAJ_cxx
