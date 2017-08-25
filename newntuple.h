//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Wed Oct 21 16:35:25 2015 by ROOT version 5.34/32
// from TTree DecayTree/DecayTree
// found on file: ../../rootFiles/MC12-11314000-MagDown-Pythia8.root
//////////////////////////////////////////////////////////

#ifndef newntuple_h
#define newntuple_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

// Fixed size dimensions of array or collections stored in the TTree if any.
   const Int_t kMaxB_ENDVERTEX_COV = 1;
   const Int_t kMaxB_OWNPV_COV = 1;
   const Int_t kMaxd1_ENDVERTEX_COV = 1;
   const Int_t kMaxd1_OWNPV_COV = 1;
   const Int_t kMaxd1_ORIVX_COV = 1;
   const Int_t kMaxl1_OWNPV_COV = 1;
   const Int_t kMaxl1_ORIVX_COV = 1;
   const Int_t kMaxl2_OWNPV_COV = 1;
   const Int_t kMaxl2_ORIVX_COV = 1;
   const Int_t kMaxd2_ENDVERTEX_COV = 1;
   const Int_t kMaxd2_OWNPV_COV = 1;
   const Int_t kMaxd2_ORIVX_COV = 1;
   const Int_t kMaxh1_OWNPV_COV = 1;
   const Int_t kMaxh1_ORIVX_COV = 1;
   const Int_t kMaxh2_OWNPV_COV = 1;
   const Int_t kMaxh2_ORIVX_COV = 1;

class newntuple {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   // Declaration of leaf types
   Double_t        B_P;
   Double_t        B_PT;
   Double_t        B_PE;
   Double_t        B_PX;
   Double_t        B_PY;
   Double_t        B_PZ;
   Double_t        B_MM;
   Double_t        B_MMERR;
   Double_t        B_M;
   Int_t           B_ID;
   Double_t        B_M01;
   Double_t        B_VtxChi2_01;
   Double_t        B_VtxnDoF01;
   Double_t        B_VtxM01;
   Double_t        B_IP01;
   Double_t        B_IPChi2_01;
   Double_t        B_M02;
   Double_t        B_VtxChi2_02;
   Double_t        B_VtxnDoF02;
   Double_t        B_VtxM02;
   Double_t        B_IP02;
   Double_t        B_IPChi2_02;
   Double_t        B_M03;
   Double_t        B_VtxChi2_03;
   Double_t        B_VtxnDoF03;
   Double_t        B_VtxM03;
   Double_t        B_IP03;
   Double_t        B_IPChi2_03;
   Double_t        B_M12;
   Double_t        B_VtxChi2_12;
   Double_t        B_VtxnDoF12;
   Double_t        B_VtxM12;
   Double_t        B_IP12;
   Double_t        B_IPChi2_12;
   Double_t        B_M13;
   Double_t        B_VtxChi2_13;
   Double_t        B_VtxnDoF13;
   Double_t        B_VtxM13;
   Double_t        B_IP13;
   Double_t        B_IPChi2_13;
   Double_t        B_M23;
   Double_t        B_VtxChi2_23;
   Double_t        B_VtxnDoF23;
   Double_t        B_VtxM23;
   Double_t        B_IP23;
   Double_t        B_IPChi2_23;
   Double_t        B_M012;
   Double_t        B_VtxChi2_012;
   Double_t        B_VtxnDoF012;
   Double_t        B_VtxM012;
   Double_t        B_IP012;
   Double_t        B_IPChi2_012;
   Double_t        B_M013;
   Double_t        B_VtxChi2_013;
   Double_t        B_VtxnDoF013;
   Double_t        B_VtxM013;
   Double_t        B_IP013;
   Double_t        B_IPChi2_013;
   Double_t        B_M023;
   Double_t        B_VtxChi2_023;
   Double_t        B_VtxnDoF023;
   Double_t        B_VtxM023;
   Double_t        B_IP023;
   Double_t        B_IPChi2_023;
   Double_t        B_M123;
   Double_t        B_VtxChi2_123;
   Double_t        B_VtxnDoF123;
   Double_t        B_VtxM123;
   Double_t        B_IP123;
   Double_t        B_IPChi2_123;
   Double_t        B_M0123;
   Double_t        B_VtxChi2_0123;
   Double_t        B_VtxnDoF0123;
   Double_t        B_VtxM0123;
   Double_t        B_IP0123;
   Double_t        B_IPChi2_0123;
   Double_t        B_coneiso_DeltaEta;
   Double_t        B_coneiso_DeltaPhi;
   Double_t        B_coneiso_P;
   Double_t        B_coneiso_PAsy;
   Double_t        B_coneiso_PT;
   Double_t        B_coneiso_PTAsy;
   Double_t        B_coneiso_PX;
   Double_t        B_coneiso_PXAsy;
   Double_t        B_coneiso_PY;
   Double_t        B_coneiso_PYAsy;
   Double_t        B_coneiso_PZ;
   Double_t        B_coneiso_PZAsy;
   Double_t        B_coneiso_angle;
   Double_t        B_coneiso_mult;
   Double_t        B_vbdtiso_h1;
   Double_t        B_vbdtiso_h2;
   Double_t        B_vbdtiso_h3;
   Double_t        B_vbdtiso_s1;
   Double_t        B_vbdtiso_s2;
   Double_t        B_vbdtiso_s3;
   Double_t        B_vtxiso_dchi2_1;
   Double_t        B_vtxiso_dchi2_2;
   Double_t        B_vtxiso_dchi2_mass1;
   Double_t        B_vtxiso_dchi2_mass2;
   Double_t        B_vtxiso_num;
   Double_t        B_DiraAngleError;
   Double_t        B_DiraCosError;
   Double_t        B_DiraAngle;
   Double_t        B_DiraCos;
   Double_t        B_ENDVERTEX_X;
   Double_t        B_ENDVERTEX_Y;
   Double_t        B_ENDVERTEX_Z;
   Double_t        B_ENDVERTEX_XERR;
   Double_t        B_ENDVERTEX_YERR;
   Double_t        B_ENDVERTEX_ZERR;
   Double_t        B_ENDVERTEX_CHI2;
   Int_t           B_ENDVERTEX_NDOF;
   Float_t         B_ENDVERTEX_COV_[3][3];
   Double_t        B_OWNPV_X;
   Double_t        B_OWNPV_Y;
   Double_t        B_OWNPV_Z;
   Double_t        B_OWNPV_XERR;
   Double_t        B_OWNPV_YERR;
   Double_t        B_OWNPV_ZERR;
   Double_t        B_OWNPV_CHI2;
   Int_t           B_OWNPV_NDOF;
   Float_t         B_OWNPV_COV_[3][3];
   Double_t        B_IP_OWNPV;
   Double_t        B_IPCHI2_OWNPV;
   Double_t        B_FD_OWNPV;
   Double_t        B_FDCHI2_OWNPV;
   Double_t        B_DIRA_OWNPV;
   Double_t        B_Eta;
   Double_t        B_Phi;
   Double_t        B_MLoKi;
   Double_t        B_MMLoKi;
   Double_t        B_NTrk;
   Double_t        B_N90;
   Double_t        B_MTF;
   Double_t        B_NSatCells;
   Double_t        B_NHasPVInfo;
   Double_t        B_JEC_Cor;
   Double_t        B_JEC_PV;
   Int_t           B_BKGCAT;
   Int_t           B_TRUEID;
   Int_t           B_MC_MOTHER_ID;
   Int_t           B_MC_MOTHER_KEY;
   Int_t           B_MC_GD_MOTHER_ID;
   Int_t           B_MC_GD_MOTHER_KEY;
   Int_t           B_MC_GD_GD_MOTHER_ID;
   Int_t           B_MC_GD_GD_MOTHER_KEY;
   Double_t        B_TRUEP_E;
   Double_t        B_TRUEP_X;
   Double_t        B_TRUEP_Y;
   Double_t        B_TRUEP_Z;
   Double_t        B_TRUEPT;
   Double_t        B_TRUEORIGINVERTEX_X;
   Double_t        B_TRUEORIGINVERTEX_Y;
   Double_t        B_TRUEORIGINVERTEX_Z;
   Double_t        B_TRUEENDVERTEX_X;
   Double_t        B_TRUEENDVERTEX_Y;
   Double_t        B_TRUEENDVERTEX_Z;
   Bool_t          B_TRUEISSTABLE;
   Double_t        B_TRUETAU;
   Double_t        B_ThetaL;
   Double_t        B_ThetaK;
   Double_t        B_ThetaTr;
   Double_t        B_PhiTr;
   Double_t        B_ThetaVtr;
   Double_t        B_TAU;
   Double_t        B_TAUERR;
   Double_t        B_TAUCHI2;
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
   Double_t        d1_P;
   Double_t        d1_PT;
   Double_t        d1_PE;
   Double_t        d1_PX;
   Double_t        d1_PY;
   Double_t        d1_PZ;
   Double_t        d1_MM;
   Double_t        d1_MMERR;
   Double_t        d1_M;
   Int_t           d1_ID;
   Double_t        d1_M01;
   Double_t        d1_VtxChi2_01;
   Double_t        d1_VtxnDoF01;
   Double_t        d1_VtxM01;
   Double_t        d1_IP01;
   Double_t        d1_IPChi2_01;
   Double_t        d1_CosTheta;
   Double_t        d1_ENDVERTEX_X;
   Double_t        d1_ENDVERTEX_Y;
   Double_t        d1_ENDVERTEX_Z;
   Double_t        d1_ENDVERTEX_XERR;
   Double_t        d1_ENDVERTEX_YERR;
   Double_t        d1_ENDVERTEX_ZERR;
   Double_t        d1_ENDVERTEX_CHI2;
   Int_t           d1_ENDVERTEX_NDOF;
   Float_t         d1_ENDVERTEX_COV_[3][3];
   Double_t        d1_OWNPV_X;
   Double_t        d1_OWNPV_Y;
   Double_t        d1_OWNPV_Z;
   Double_t        d1_OWNPV_XERR;
   Double_t        d1_OWNPV_YERR;
   Double_t        d1_OWNPV_ZERR;
   Double_t        d1_OWNPV_CHI2;
   Int_t           d1_OWNPV_NDOF;
   Float_t         d1_OWNPV_COV_[3][3];
   Double_t        d1_IP_OWNPV;
   Double_t        d1_IPCHI2_OWNPV;
   Double_t        d1_FD_OWNPV;
   Double_t        d1_FDCHI2_OWNPV;
   Double_t        d1_DIRA_OWNPV;
   Double_t        d1_ORIVX_X;
   Double_t        d1_ORIVX_Y;
   Double_t        d1_ORIVX_Z;
   Double_t        d1_ORIVX_XERR;
   Double_t        d1_ORIVX_YERR;
   Double_t        d1_ORIVX_ZERR;
   Double_t        d1_ORIVX_CHI2;
   Int_t           d1_ORIVX_NDOF;
   Float_t         d1_ORIVX_COV_[3][3];
   Double_t        d1_FD_ORIVX;
   Double_t        d1_FDCHI2_ORIVX;
   Double_t        d1_DIRA_ORIVX;
   Double_t        d1_Eta;
   Double_t        d1_Phi;
   Double_t        d1_MLoKi;
   Double_t        d1_MMLoKi;
   Double_t        d1_NTrk;
   Double_t        d1_N90;
   Double_t        d1_MTF;
   Double_t        d1_NSatCells;
   Double_t        d1_NHasPVInfo;
   Double_t        d1_JEC_Cor;
   Double_t        d1_JEC_PV;
   Int_t           d1_BKGCAT;
   Int_t           d1_TRUEID;
   Int_t           d1_MC_MOTHER_ID;
   Int_t           d1_MC_MOTHER_KEY;
   Int_t           d1_MC_GD_MOTHER_ID;
   Int_t           d1_MC_GD_MOTHER_KEY;
   Int_t           d1_MC_GD_GD_MOTHER_ID;
   Int_t           d1_MC_GD_GD_MOTHER_KEY;
   Double_t        d1_TRUEP_E;
   Double_t        d1_TRUEP_X;
   Double_t        d1_TRUEP_Y;
   Double_t        d1_TRUEP_Z;
   Double_t        d1_TRUEPT;
   Double_t        d1_TRUEORIGINVERTEX_X;
   Double_t        d1_TRUEORIGINVERTEX_Y;
   Double_t        d1_TRUEORIGINVERTEX_Z;
   Double_t        d1_TRUEENDVERTEX_X;
   Double_t        d1_TRUEENDVERTEX_Y;
   Double_t        d1_TRUEENDVERTEX_Z;
   Bool_t          d1_TRUEISSTABLE;
   Double_t        d1_TRUETAU;
   Double_t        d1_TAU;
   Double_t        d1_TAUERR;
   Double_t        d1_TAUCHI2;
   Bool_t          d1_L0Global_Dec;
   Bool_t          d1_L0Global_TIS;
   Bool_t          d1_L0Global_TOS;
   Bool_t          d1_Hlt1Global_Dec;
   Bool_t          d1_Hlt1Global_TIS;
   Bool_t          d1_Hlt1Global_TOS;
   Bool_t          d1_Hlt1Phys_Dec;
   Bool_t          d1_Hlt1Phys_TIS;
   Bool_t          d1_Hlt1Phys_TOS;
   Bool_t          d1_Hlt2Global_Dec;
   Bool_t          d1_Hlt2Global_TIS;
   Bool_t          d1_Hlt2Global_TOS;
   Bool_t          d1_Hlt2Phys_Dec;
   Bool_t          d1_Hlt2Phys_TIS;
   Bool_t          d1_Hlt2Phys_TOS;
   Bool_t          d1_L0MuonDecision_Dec;
   Bool_t          d1_L0MuonDecision_TIS;
   Bool_t          d1_L0MuonDecision_TOS;
   Bool_t          d1_Hlt1TrackAllL0Decision_Dec;
   Bool_t          d1_Hlt1TrackAllL0Decision_TIS;
   Bool_t          d1_Hlt1TrackAllL0Decision_TOS;
   Bool_t          d1_Hlt1TrackMuonDecision_Dec;
   Bool_t          d1_Hlt1TrackMuonDecision_TIS;
   Bool_t          d1_Hlt1TrackMuonDecision_TOS;
   Double_t        l1_MC12TuneV2_ProbNNe;
   Double_t        l1_MC12TuneV2_ProbNNmu;
   Double_t        l1_MC12TuneV2_ProbNNpi;
   Double_t        l1_MC12TuneV2_ProbNNk;
   Double_t        l1_MC12TuneV2_ProbNNp;
   Double_t        l1_MC12TuneV2_ProbNNghost;
   Double_t        l1_MC12TuneV3_ProbNNe;
   Double_t        l1_MC12TuneV3_ProbNNmu;
   Double_t        l1_MC12TuneV3_ProbNNpi;
   Double_t        l1_MC12TuneV3_ProbNNk;
   Double_t        l1_MC12TuneV3_ProbNNp;
   Double_t        l1_MC12TuneV3_ProbNNghost;
   Double_t        l1_P;
   Double_t        l1_PT;
   Double_t        l1_PE;
   Double_t        l1_PX;
   Double_t        l1_PY;
   Double_t        l1_PZ;
   Double_t        l1_M;
   Double_t        l1_L0Calo_HCAL_realET;
   Double_t        l1_L0Calo_HCAL_xProjection;
   Double_t        l1_L0Calo_HCAL_yProjection;
   Int_t           l1_L0Calo_HCAL_region;
   Double_t        l1_L0Calo_HCAL_TriggerET;
   Double_t        l1_L0Calo_HCAL_TriggerHCALET;
   Double_t        l1_L0Calo_HCAL_xTrigger;
   Double_t        l1_L0Calo_HCAL_yTrigger;
   Int_t           l1_ID;
   Double_t        l1_PIDe;
   Double_t        l1_PIDmu;
   Double_t        l1_PIDK;
   Double_t        l1_PIDp;
   Double_t        l1_ProbNNe;
   Double_t        l1_ProbNNk;
   Double_t        l1_ProbNNp;
   Double_t        l1_ProbNNpi;
   Double_t        l1_ProbNNmu;
   Double_t        l1_ProbNNghost;
   Bool_t          l1_hasMuon;
   Bool_t          l1_isMuon;
   Bool_t          l1_hasRich;
   Bool_t          l1_hasCalo;
   Double_t        l1_CosTheta;
   Double_t        l1_OWNPV_X;
   Double_t        l1_OWNPV_Y;
   Double_t        l1_OWNPV_Z;
   Double_t        l1_OWNPV_XERR;
   Double_t        l1_OWNPV_YERR;
   Double_t        l1_OWNPV_ZERR;
   Double_t        l1_OWNPV_CHI2;
   Int_t           l1_OWNPV_NDOF;
   Float_t         l1_OWNPV_COV_[3][3];
   Double_t        l1_IP_OWNPV;
   Double_t        l1_IPCHI2_OWNPV;
   Double_t        l1_ORIVX_X;
   Double_t        l1_ORIVX_Y;
   Double_t        l1_ORIVX_Z;
   Double_t        l1_ORIVX_XERR;
   Double_t        l1_ORIVX_YERR;
   Double_t        l1_ORIVX_ZERR;
   Double_t        l1_ORIVX_CHI2;
   Int_t           l1_ORIVX_NDOF;
   Float_t         l1_ORIVX_COV_[3][3];
   Double_t        l1_Eta;
   Double_t        l1_Phi;
   Double_t        l1_MLoKi;
   Double_t        l1_MMLoKi;
   Double_t        l1_NTrk;
   Double_t        l1_N90;
   Double_t        l1_MTF;
   Double_t        l1_NSatCells;
   Double_t        l1_NHasPVInfo;
   Double_t        l1_JEC_Cor;
   Double_t        l1_JEC_PV;
   Int_t           l1_TRUEID;
   Int_t           l1_MC_MOTHER_ID;
   Int_t           l1_MC_MOTHER_KEY;
   Int_t           l1_MC_GD_MOTHER_ID;
   Int_t           l1_MC_GD_MOTHER_KEY;
   Int_t           l1_MC_GD_GD_MOTHER_ID;
   Int_t           l1_MC_GD_GD_MOTHER_KEY;
   Double_t        l1_TRUEP_E;
   Double_t        l1_TRUEP_X;
   Double_t        l1_TRUEP_Y;
   Double_t        l1_TRUEP_Z;
   Double_t        l1_TRUEPT;
   Double_t        l1_TRUEORIGINVERTEX_X;
   Double_t        l1_TRUEORIGINVERTEX_Y;
   Double_t        l1_TRUEORIGINVERTEX_Z;
   Double_t        l1_TRUEENDVERTEX_X;
   Double_t        l1_TRUEENDVERTEX_Y;
   Double_t        l1_TRUEENDVERTEX_Z;
   Bool_t          l1_TRUEISSTABLE;
   Double_t        l1_TRUETAU;
   Double_t        l1_CombDLLMu;
   Double_t        l1_InMuonAcc;
   Double_t        l1_MuonDist2;
   Int_t           l1_regionInM2;
   Bool_t          l1_isMuonLoose;
   Int_t           l1_NShared;
   Double_t        l1_MuonLLmu;
   Double_t        l1_MuonLLbg;
   Int_t           l1_isMuonFromProto;
   Bool_t          l1_L0Global_Dec;
   Bool_t          l1_L0Global_TIS;
   Bool_t          l1_L0Global_TOS;
   Bool_t          l1_Hlt1Global_Dec;
   Bool_t          l1_Hlt1Global_TIS;
   Bool_t          l1_Hlt1Global_TOS;
   Bool_t          l1_Hlt1Phys_Dec;
   Bool_t          l1_Hlt1Phys_TIS;
   Bool_t          l1_Hlt1Phys_TOS;
   Bool_t          l1_Hlt2Global_Dec;
   Bool_t          l1_Hlt2Global_TIS;
   Bool_t          l1_Hlt2Global_TOS;
   Bool_t          l1_Hlt2Phys_Dec;
   Bool_t          l1_Hlt2Phys_TIS;
   Bool_t          l1_Hlt2Phys_TOS;
   Bool_t          l1_L0MuonDecision_Dec;
   Bool_t          l1_L0MuonDecision_TIS;
   Bool_t          l1_L0MuonDecision_TOS;
   Bool_t          l1_Hlt1TrackAllL0Decision_Dec;
   Bool_t          l1_Hlt1TrackAllL0Decision_TIS;
   Bool_t          l1_Hlt1TrackAllL0Decision_TOS;
   Bool_t          l1_Hlt1TrackMuonDecision_Dec;
   Bool_t          l1_Hlt1TrackMuonDecision_TIS;
   Bool_t          l1_Hlt1TrackMuonDecision_TOS;
   Int_t           l1_TRACK_Type;
   Int_t           l1_TRACK_Key;
   Double_t        l1_TRACK_CHI2NDOF;
   Double_t        l1_TRACK_PCHI2;
   Double_t        l1_TRACK_MatchCHI2;
   Double_t        l1_TRACK_GhostProb;
   Double_t        l1_TRACK_CloneDist;
   Double_t        l1_TRACK_Likelihood;
   Double_t        l2_MC12TuneV2_ProbNNe;
   Double_t        l2_MC12TuneV2_ProbNNmu;
   Double_t        l2_MC12TuneV2_ProbNNpi;
   Double_t        l2_MC12TuneV2_ProbNNk;
   Double_t        l2_MC12TuneV2_ProbNNp;
   Double_t        l2_MC12TuneV2_ProbNNghost;
   Double_t        l2_MC12TuneV3_ProbNNe;
   Double_t        l2_MC12TuneV3_ProbNNmu;
   Double_t        l2_MC12TuneV3_ProbNNpi;
   Double_t        l2_MC12TuneV3_ProbNNk;
   Double_t        l2_MC12TuneV3_ProbNNp;
   Double_t        l2_MC12TuneV3_ProbNNghost;
   Double_t        l2_P;
   Double_t        l2_PT;
   Double_t        l2_PE;
   Double_t        l2_PX;
   Double_t        l2_PY;
   Double_t        l2_PZ;
   Double_t        l2_M;
   Double_t        l2_L0Calo_HCAL_realET;
   Double_t        l2_L0Calo_HCAL_xProjection;
   Double_t        l2_L0Calo_HCAL_yProjection;
   Int_t           l2_L0Calo_HCAL_region;
   Double_t        l2_L0Calo_HCAL_TriggerET;
   Double_t        l2_L0Calo_HCAL_TriggerHCALET;
   Double_t        l2_L0Calo_HCAL_xTrigger;
   Double_t        l2_L0Calo_HCAL_yTrigger;
   Int_t           l2_ID;
   Double_t        l2_PIDe;
   Double_t        l2_PIDmu;
   Double_t        l2_PIDK;
   Double_t        l2_PIDp;
   Double_t        l2_ProbNNe;
   Double_t        l2_ProbNNk;
   Double_t        l2_ProbNNp;
   Double_t        l2_ProbNNpi;
   Double_t        l2_ProbNNmu;
   Double_t        l2_ProbNNghost;
   Bool_t          l2_hasMuon;
   Bool_t          l2_isMuon;
   Bool_t          l2_hasRich;
   Bool_t          l2_hasCalo;
   Double_t        l2_CosTheta;
   Bool_t          l2_HasBremAdded;
   Double_t        l2_BremMultiplicity;
   Double_t        l2_BremPE;
   Double_t        l2_BremPX;
   Double_t        l2_BremPY;
   Double_t        l2_BremPZ;
   Double_t        l2_BremOriginX;
   Double_t        l2_BremOriginY;
   Double_t        l2_BremOriginZ;
   Double_t        l2_OWNPV_X;
   Double_t        l2_OWNPV_Y;
   Double_t        l2_OWNPV_Z;
   Double_t        l2_OWNPV_XERR;
   Double_t        l2_OWNPV_YERR;
   Double_t        l2_OWNPV_ZERR;
   Double_t        l2_OWNPV_CHI2;
   Int_t           l2_OWNPV_NDOF;
   Float_t         l2_OWNPV_COV_[3][3];
   Double_t        l2_IP_OWNPV;
   Double_t        l2_IPCHI2_OWNPV;
   Double_t        l2_ORIVX_X;
   Double_t        l2_ORIVX_Y;
   Double_t        l2_ORIVX_Z;
   Double_t        l2_ORIVX_XERR;
   Double_t        l2_ORIVX_YERR;
   Double_t        l2_ORIVX_ZERR;
   Double_t        l2_ORIVX_CHI2;
   Int_t           l2_ORIVX_NDOF;
   Float_t         l2_ORIVX_COV_[3][3];
   Double_t        l2_Eta;
   Double_t        l2_Phi;
   Double_t        l2_MLoKi;
   Double_t        l2_MMLoKi;
   Double_t        l2_NTrk;
   Double_t        l2_N90;
   Double_t        l2_MTF;
   Double_t        l2_NSatCells;
   Double_t        l2_NHasPVInfo;
   Double_t        l2_JEC_Cor;
   Double_t        l2_JEC_PV;
   Int_t           l2_TRUEID;
   Int_t           l2_MC_MOTHER_ID;
   Int_t           l2_MC_MOTHER_KEY;
   Int_t           l2_MC_GD_MOTHER_ID;
   Int_t           l2_MC_GD_MOTHER_KEY;
   Int_t           l2_MC_GD_GD_MOTHER_ID;
   Int_t           l2_MC_GD_GD_MOTHER_KEY;
   Double_t        l2_TRUEP_E;
   Double_t        l2_TRUEP_X;
   Double_t        l2_TRUEP_Y;
   Double_t        l2_TRUEP_Z;
   Double_t        l2_TRUEPT;
   Double_t        l2_TRUEORIGINVERTEX_X;
   Double_t        l2_TRUEORIGINVERTEX_Y;
   Double_t        l2_TRUEORIGINVERTEX_Z;
   Double_t        l2_TRUEENDVERTEX_X;
   Double_t        l2_TRUEENDVERTEX_Y;
   Double_t        l2_TRUEENDVERTEX_Z;
   Bool_t          l2_TRUEISSTABLE;
   Double_t        l2_TRUETAU;
   Double_t        l2_CombDLLMu;
   Double_t        l2_InMuonAcc;
   Double_t        l2_MuonDist2;
   Int_t           l2_regionInM2;
   Bool_t          l2_isMuonLoose;
   Int_t           l2_NShared;
   Double_t        l2_MuonLLmu;
   Double_t        l2_MuonLLbg;
   Int_t           l2_isMuonFromProto;
   Bool_t          l2_L0Global_Dec;
   Bool_t          l2_L0Global_TIS;
   Bool_t          l2_L0Global_TOS;
   Bool_t          l2_Hlt1Global_Dec;
   Bool_t          l2_Hlt1Global_TIS;
   Bool_t          l2_Hlt1Global_TOS;
   Bool_t          l2_Hlt1Phys_Dec;
   Bool_t          l2_Hlt1Phys_TIS;
   Bool_t          l2_Hlt1Phys_TOS;
   Bool_t          l2_Hlt2Global_Dec;
   Bool_t          l2_Hlt2Global_TIS;
   Bool_t          l2_Hlt2Global_TOS;
   Bool_t          l2_Hlt2Phys_Dec;
   Bool_t          l2_Hlt2Phys_TIS;
   Bool_t          l2_Hlt2Phys_TOS;
   Bool_t          l2_L0MuonDecision_Dec;
   Bool_t          l2_L0MuonDecision_TIS;
   Bool_t          l2_L0MuonDecision_TOS;
   Bool_t          l2_Hlt1TrackAllL0Decision_Dec;
   Bool_t          l2_Hlt1TrackAllL0Decision_TIS;
   Bool_t          l2_Hlt1TrackAllL0Decision_TOS;
   Bool_t          l2_Hlt1TrackMuonDecision_Dec;
   Bool_t          l2_Hlt1TrackMuonDecision_TIS;
   Bool_t          l2_Hlt1TrackMuonDecision_TOS;
   Int_t           l2_TRACK_Type;
   Int_t           l2_TRACK_Key;
   Double_t        l2_TRACK_CHI2NDOF;
   Double_t        l2_TRACK_PCHI2;
   Double_t        l2_TRACK_MatchCHI2;
   Double_t        l2_TRACK_GhostProb;
   Double_t        l2_TRACK_CloneDist;
   Double_t        l2_TRACK_Likelihood;
   Double_t        d2_P;
   Double_t        d2_PT;
   Double_t        d2_PE;
   Double_t        d2_PX;
   Double_t        d2_PY;
   Double_t        d2_PZ;
   Double_t        d2_MM;
   Double_t        d2_MMERR;
   Double_t        d2_M;
   Int_t           d2_ID;
   Double_t        d2_M01;
   Double_t        d2_VtxChi2_01;
   Double_t        d2_VtxnDoF01;
   Double_t        d2_VtxM01;
   Double_t        d2_IP01;
   Double_t        d2_IPChi2_01;
   Double_t        d2_CosTheta;
   Double_t        d2_ENDVERTEX_X;
   Double_t        d2_ENDVERTEX_Y;
   Double_t        d2_ENDVERTEX_Z;
   Double_t        d2_ENDVERTEX_XERR;
   Double_t        d2_ENDVERTEX_YERR;
   Double_t        d2_ENDVERTEX_ZERR;
   Double_t        d2_ENDVERTEX_CHI2;
   Int_t           d2_ENDVERTEX_NDOF;
   Float_t         d2_ENDVERTEX_COV_[3][3];
   Double_t        d2_OWNPV_X;
   Double_t        d2_OWNPV_Y;
   Double_t        d2_OWNPV_Z;
   Double_t        d2_OWNPV_XERR;
   Double_t        d2_OWNPV_YERR;
   Double_t        d2_OWNPV_ZERR;
   Double_t        d2_OWNPV_CHI2;
   Int_t           d2_OWNPV_NDOF;
   Float_t         d2_OWNPV_COV_[3][3];
   Double_t        d2_IP_OWNPV;
   Double_t        d2_IPCHI2_OWNPV;
   Double_t        d2_FD_OWNPV;
   Double_t        d2_FDCHI2_OWNPV;
   Double_t        d2_DIRA_OWNPV;
   Double_t        d2_ORIVX_X;
   Double_t        d2_ORIVX_Y;
   Double_t        d2_ORIVX_Z;
   Double_t        d2_ORIVX_XERR;
   Double_t        d2_ORIVX_YERR;
   Double_t        d2_ORIVX_ZERR;
   Double_t        d2_ORIVX_CHI2;
   Int_t           d2_ORIVX_NDOF;
   Float_t         d2_ORIVX_COV_[3][3];
   Double_t        d2_FD_ORIVX;
   Double_t        d2_FDCHI2_ORIVX;
   Double_t        d2_DIRA_ORIVX;
   Double_t        d2_Eta;
   Double_t        d2_Phi;
   Double_t        d2_MLoKi;
   Double_t        d2_MMLoKi;
   Double_t        d2_NTrk;
   Double_t        d2_N90;
   Double_t        d2_MTF;
   Double_t        d2_NSatCells;
   Double_t        d2_NHasPVInfo;
   Double_t        d2_JEC_Cor;
   Double_t        d2_JEC_PV;
   Int_t           d2_BKGCAT;
   Int_t           d2_TRUEID;
   Int_t           d2_MC_MOTHER_ID;
   Int_t           d2_MC_MOTHER_KEY;
   Int_t           d2_MC_GD_MOTHER_ID;
   Int_t           d2_MC_GD_MOTHER_KEY;
   Int_t           d2_MC_GD_GD_MOTHER_ID;
   Int_t           d2_MC_GD_GD_MOTHER_KEY;
   Double_t        d2_TRUEP_E;
   Double_t        d2_TRUEP_X;
   Double_t        d2_TRUEP_Y;
   Double_t        d2_TRUEP_Z;
   Double_t        d2_TRUEPT;
   Double_t        d2_TRUEORIGINVERTEX_X;
   Double_t        d2_TRUEORIGINVERTEX_Y;
   Double_t        d2_TRUEORIGINVERTEX_Z;
   Double_t        d2_TRUEENDVERTEX_X;
   Double_t        d2_TRUEENDVERTEX_Y;
   Double_t        d2_TRUEENDVERTEX_Z;
   Bool_t          d2_TRUEISSTABLE;
   Double_t        d2_TRUETAU;
   Double_t        d2_TAU;
   Double_t        d2_TAUERR;
   Double_t        d2_TAUCHI2;
   Bool_t          d2_L0Global_Dec;
   Bool_t          d2_L0Global_TIS;
   Bool_t          d2_L0Global_TOS;
   Bool_t          d2_Hlt1Global_Dec;
   Bool_t          d2_Hlt1Global_TIS;
   Bool_t          d2_Hlt1Global_TOS;
   Bool_t          d2_Hlt1Phys_Dec;
   Bool_t          d2_Hlt1Phys_TIS;
   Bool_t          d2_Hlt1Phys_TOS;
   Bool_t          d2_Hlt2Global_Dec;
   Bool_t          d2_Hlt2Global_TIS;
   Bool_t          d2_Hlt2Global_TOS;
   Bool_t          d2_Hlt2Phys_Dec;
   Bool_t          d2_Hlt2Phys_TIS;
   Bool_t          d2_Hlt2Phys_TOS;
   Bool_t          d2_L0MuonDecision_Dec;
   Bool_t          d2_L0MuonDecision_TIS;
   Bool_t          d2_L0MuonDecision_TOS;
   Bool_t          d2_Hlt1TrackAllL0Decision_Dec;
   Bool_t          d2_Hlt1TrackAllL0Decision_TIS;
   Bool_t          d2_Hlt1TrackAllL0Decision_TOS;
   Bool_t          d2_Hlt1TrackMuonDecision_Dec;
   Bool_t          d2_Hlt1TrackMuonDecision_TIS;
   Bool_t          d2_Hlt1TrackMuonDecision_TOS;
   Double_t        h1_MC12TuneV2_ProbNNe;
   Double_t        h1_MC12TuneV2_ProbNNmu;
   Double_t        h1_MC12TuneV2_ProbNNpi;
   Double_t        h1_MC12TuneV2_ProbNNk;
   Double_t        h1_MC12TuneV2_ProbNNp;
   Double_t        h1_MC12TuneV2_ProbNNghost;
   Double_t        h1_MC12TuneV3_ProbNNe;
   Double_t        h1_MC12TuneV3_ProbNNmu;
   Double_t        h1_MC12TuneV3_ProbNNpi;
   Double_t        h1_MC12TuneV3_ProbNNk;
   Double_t        h1_MC12TuneV3_ProbNNp;
   Double_t        h1_MC12TuneV3_ProbNNghost;
   Double_t        h1_P;
   Double_t        h1_PT;
   Double_t        h1_PE;
   Double_t        h1_PX;
   Double_t        h1_PY;
   Double_t        h1_PZ;
   Double_t        h1_M;
   Double_t        h1_L0Calo_HCAL_realET;
   Double_t        h1_L0Calo_HCAL_xProjection;
   Double_t        h1_L0Calo_HCAL_yProjection;
   Int_t           h1_L0Calo_HCAL_region;
   Double_t        h1_L0Calo_HCAL_TriggerET;
   Double_t        h1_L0Calo_HCAL_TriggerHCALET;
   Double_t        h1_L0Calo_HCAL_xTrigger;
   Double_t        h1_L0Calo_HCAL_yTrigger;
   Int_t           h1_ID;
   Double_t        h1_PIDe;
   Double_t        h1_PIDmu;
   Double_t        h1_PIDK;
   Double_t        h1_PIDp;
   Double_t        h1_ProbNNe;
   Double_t        h1_ProbNNk;
   Double_t        h1_ProbNNp;
   Double_t        h1_ProbNNpi;
   Double_t        h1_ProbNNmu;
   Double_t        h1_ProbNNghost;
   Bool_t          h1_hasMuon;
   Bool_t          h1_isMuon;
   Bool_t          h1_hasRich;
   Bool_t          h1_hasCalo;
   Double_t        h1_CosTheta;
   Double_t        h1_OWNPV_X;
   Double_t        h1_OWNPV_Y;
   Double_t        h1_OWNPV_Z;
   Double_t        h1_OWNPV_XERR;
   Double_t        h1_OWNPV_YERR;
   Double_t        h1_OWNPV_ZERR;
   Double_t        h1_OWNPV_CHI2;
   Int_t           h1_OWNPV_NDOF;
   Float_t         h1_OWNPV_COV_[3][3];
   Double_t        h1_IP_OWNPV;
   Double_t        h1_IPCHI2_OWNPV;
   Double_t        h1_ORIVX_X;
   Double_t        h1_ORIVX_Y;
   Double_t        h1_ORIVX_Z;
   Double_t        h1_ORIVX_XERR;
   Double_t        h1_ORIVX_YERR;
   Double_t        h1_ORIVX_ZERR;
   Double_t        h1_ORIVX_CHI2;
   Int_t           h1_ORIVX_NDOF;
   Float_t         h1_ORIVX_COV_[3][3];
   Double_t        h1_Eta;
   Double_t        h1_Phi;
   Double_t        h1_MLoKi;
   Double_t        h1_MMLoKi;
   Double_t        h1_NTrk;
   Double_t        h1_N90;
   Double_t        h1_MTF;
   Double_t        h1_NSatCells;
   Double_t        h1_NHasPVInfo;
   Double_t        h1_JEC_Cor;
   Double_t        h1_JEC_PV;
   Int_t           h1_TRUEID;
   Int_t           h1_MC_MOTHER_ID;
   Int_t           h1_MC_MOTHER_KEY;
   Int_t           h1_MC_GD_MOTHER_ID;
   Int_t           h1_MC_GD_MOTHER_KEY;
   Int_t           h1_MC_GD_GD_MOTHER_ID;
   Int_t           h1_MC_GD_GD_MOTHER_KEY;
   Double_t        h1_TRUEP_E;
   Double_t        h1_TRUEP_X;
   Double_t        h1_TRUEP_Y;
   Double_t        h1_TRUEP_Z;
   Double_t        h1_TRUEPT;
   Double_t        h1_TRUEORIGINVERTEX_X;
   Double_t        h1_TRUEORIGINVERTEX_Y;
   Double_t        h1_TRUEORIGINVERTEX_Z;
   Double_t        h1_TRUEENDVERTEX_X;
   Double_t        h1_TRUEENDVERTEX_Y;
   Double_t        h1_TRUEENDVERTEX_Z;
   Bool_t          h1_TRUEISSTABLE;
   Double_t        h1_TRUETAU;
   Double_t        h1_CombDLLMu;
   Double_t        h1_InMuonAcc;
   Double_t        h1_MuonDist2;
   Int_t           h1_regionInM2;
   Bool_t          h1_isMuonLoose;
   Int_t           h1_NShared;
   Double_t        h1_MuonLLmu;
   Double_t        h1_MuonLLbg;
   Int_t           h1_isMuonFromProto;
   Bool_t          h1_L0Global_Dec;
   Bool_t          h1_L0Global_TIS;
   Bool_t          h1_L0Global_TOS;
   Bool_t          h1_Hlt1Global_Dec;
   Bool_t          h1_Hlt1Global_TIS;
   Bool_t          h1_Hlt1Global_TOS;
   Bool_t          h1_Hlt1Phys_Dec;
   Bool_t          h1_Hlt1Phys_TIS;
   Bool_t          h1_Hlt1Phys_TOS;
   Bool_t          h1_Hlt2Global_Dec;
   Bool_t          h1_Hlt2Global_TIS;
   Bool_t          h1_Hlt2Global_TOS;
   Bool_t          h1_Hlt2Phys_Dec;
   Bool_t          h1_Hlt2Phys_TIS;
   Bool_t          h1_Hlt2Phys_TOS;
   Bool_t          h1_L0MuonDecision_Dec;
   Bool_t          h1_L0MuonDecision_TIS;
   Bool_t          h1_L0MuonDecision_TOS;
   Bool_t          h1_Hlt1TrackAllL0Decision_Dec;
   Bool_t          h1_Hlt1TrackAllL0Decision_TIS;
   Bool_t          h1_Hlt1TrackAllL0Decision_TOS;
   Bool_t          h1_Hlt1TrackMuonDecision_Dec;
   Bool_t          h1_Hlt1TrackMuonDecision_TIS;
   Bool_t          h1_Hlt1TrackMuonDecision_TOS;
   Int_t           h1_TRACK_Type;
   Int_t           h1_TRACK_Key;
   Double_t        h1_TRACK_CHI2NDOF;
   Double_t        h1_TRACK_PCHI2;
   Double_t        h1_TRACK_MatchCHI2;
   Double_t        h1_TRACK_GhostProb;
   Double_t        h1_TRACK_CloneDist;
   Double_t        h1_TRACK_Likelihood;
   Double_t        h2_MC12TuneV2_ProbNNe;
   Double_t        h2_MC12TuneV2_ProbNNmu;
   Double_t        h2_MC12TuneV2_ProbNNpi;
   Double_t        h2_MC12TuneV2_ProbNNk;
   Double_t        h2_MC12TuneV2_ProbNNp;
   Double_t        h2_MC12TuneV2_ProbNNghost;
   Double_t        h2_MC12TuneV3_ProbNNe;
   Double_t        h2_MC12TuneV3_ProbNNmu;
   Double_t        h2_MC12TuneV3_ProbNNpi;
   Double_t        h2_MC12TuneV3_ProbNNk;
   Double_t        h2_MC12TuneV3_ProbNNp;
   Double_t        h2_MC12TuneV3_ProbNNghost;
   Double_t        h2_P;
   Double_t        h2_PT;
   Double_t        h2_PE;
   Double_t        h2_PX;
   Double_t        h2_PY;
   Double_t        h2_PZ;
   Double_t        h2_M;
   Double_t        h2_L0Calo_HCAL_realET;
   Double_t        h2_L0Calo_HCAL_xProjection;
   Double_t        h2_L0Calo_HCAL_yProjection;
   Int_t           h2_L0Calo_HCAL_region;
   Double_t        h2_L0Calo_HCAL_TriggerET;
   Double_t        h2_L0Calo_HCAL_TriggerHCALET;
   Double_t        h2_L0Calo_HCAL_xTrigger;
   Double_t        h2_L0Calo_HCAL_yTrigger;
   Int_t           h2_ID;
   Double_t        h2_PIDe;
   Double_t        h2_PIDmu;
   Double_t        h2_PIDK;
   Double_t        h2_PIDp;
   Double_t        h2_ProbNNe;
   Double_t        h2_ProbNNk;
   Double_t        h2_ProbNNp;
   Double_t        h2_ProbNNpi;
   Double_t        h2_ProbNNmu;
   Double_t        h2_ProbNNghost;
   Bool_t          h2_hasMuon;
   Bool_t          h2_isMuon;
   Bool_t          h2_hasRich;
   Bool_t          h2_hasCalo;
   Double_t        h2_CosTheta;
   Double_t        h2_OWNPV_X;
   Double_t        h2_OWNPV_Y;
   Double_t        h2_OWNPV_Z;
   Double_t        h2_OWNPV_XERR;
   Double_t        h2_OWNPV_YERR;
   Double_t        h2_OWNPV_ZERR;
   Double_t        h2_OWNPV_CHI2;
   Int_t           h2_OWNPV_NDOF;
   Float_t         h2_OWNPV_COV_[3][3];
   Double_t        h2_IP_OWNPV;
   Double_t        h2_IPCHI2_OWNPV;
   Double_t        h2_ORIVX_X;
   Double_t        h2_ORIVX_Y;
   Double_t        h2_ORIVX_Z;
   Double_t        h2_ORIVX_XERR;
   Double_t        h2_ORIVX_YERR;
   Double_t        h2_ORIVX_ZERR;
   Double_t        h2_ORIVX_CHI2;
   Int_t           h2_ORIVX_NDOF;
   Float_t         h2_ORIVX_COV_[3][3];
   Double_t        h2_Eta;
   Double_t        h2_Phi;
   Double_t        h2_MLoKi;
   Double_t        h2_MMLoKi;
   Double_t        h2_NTrk;
   Double_t        h2_N90;
   Double_t        h2_MTF;
   Double_t        h2_NSatCells;
   Double_t        h2_NHasPVInfo;
   Double_t        h2_JEC_Cor;
   Double_t        h2_JEC_PV;
   Int_t           h2_TRUEID;
   Int_t           h2_MC_MOTHER_ID;
   Int_t           h2_MC_MOTHER_KEY;
   Int_t           h2_MC_GD_MOTHER_ID;
   Int_t           h2_MC_GD_MOTHER_KEY;
   Int_t           h2_MC_GD_GD_MOTHER_ID;
   Int_t           h2_MC_GD_GD_MOTHER_KEY;
   Double_t        h2_TRUEP_E;
   Double_t        h2_TRUEP_X;
   Double_t        h2_TRUEP_Y;
   Double_t        h2_TRUEP_Z;
   Double_t        h2_TRUEPT;
   Double_t        h2_TRUEORIGINVERTEX_X;
   Double_t        h2_TRUEORIGINVERTEX_Y;
   Double_t        h2_TRUEORIGINVERTEX_Z;
   Double_t        h2_TRUEENDVERTEX_X;
   Double_t        h2_TRUEENDVERTEX_Y;
   Double_t        h2_TRUEENDVERTEX_Z;
   Bool_t          h2_TRUEISSTABLE;
   Double_t        h2_TRUETAU;
   Double_t        h2_CombDLLMu;
   Double_t        h2_InMuonAcc;
   Double_t        h2_MuonDist2;
   Int_t           h2_regionInM2;
   Bool_t          h2_isMuonLoose;
   Int_t           h2_NShared;
   Double_t        h2_MuonLLmu;
   Double_t        h2_MuonLLbg;
   Int_t           h2_isMuonFromProto;
   Bool_t          h2_L0Global_Dec;
   Bool_t          h2_L0Global_TIS;
   Bool_t          h2_L0Global_TOS;
   Bool_t          h2_Hlt1Global_Dec;
   Bool_t          h2_Hlt1Global_TIS;
   Bool_t          h2_Hlt1Global_TOS;
   Bool_t          h2_Hlt1Phys_Dec;
   Bool_t          h2_Hlt1Phys_TIS;
   Bool_t          h2_Hlt1Phys_TOS;
   Bool_t          h2_Hlt2Global_Dec;
   Bool_t          h2_Hlt2Global_TIS;
   Bool_t          h2_Hlt2Global_TOS;
   Bool_t          h2_Hlt2Phys_Dec;
   Bool_t          h2_Hlt2Phys_TIS;
   Bool_t          h2_Hlt2Phys_TOS;
   Bool_t          h2_L0MuonDecision_Dec;
   Bool_t          h2_L0MuonDecision_TIS;
   Bool_t          h2_L0MuonDecision_TOS;
   Bool_t          h2_Hlt1TrackAllL0Decision_Dec;
   Bool_t          h2_Hlt1TrackAllL0Decision_TIS;
   Bool_t          h2_Hlt1TrackAllL0Decision_TOS;
   Bool_t          h2_Hlt1TrackMuonDecision_Dec;
   Bool_t          h2_Hlt1TrackMuonDecision_TIS;
   Bool_t          h2_Hlt1TrackMuonDecision_TOS;
   Int_t           h2_TRACK_Type;
   Int_t           h2_TRACK_Key;
   Double_t        h2_TRACK_CHI2NDOF;
   Double_t        h2_TRACK_PCHI2;
   Double_t        h2_TRACK_MatchCHI2;
   Double_t        h2_TRACK_GhostProb;
   Double_t        h2_TRACK_CloneDist;
   Double_t        h2_TRACK_Likelihood;
   UInt_t          nCandidate;
   ULong64_t       totCandidates;
   ULong64_t       EventInSequence;
   UInt_t          runNumber;
   ULong64_t       eventNumber;
   UInt_t          BCID;
   Int_t           BCType;
   UInt_t          OdinTCK;
   UInt_t          L0DUTCK;
   UInt_t          HLT1TCK;
   UInt_t          HLT2TCK;
   ULong64_t       GpsTime;
   Short_t         Polarity;
   Int_t           L0Data_DiMuon_Pt;
   Int_t           L0Data_DiMuonProd_Pt1Pt2;
   Int_t           L0Data_Electron_Et;
   Int_t           L0Data_GlobalPi0_Et;
   Int_t           L0Data_Hadron_Et;
   Int_t           L0Data_LocalPi0_Et;
   Int_t           L0Data_Muon1_Pt;
   Int_t           L0Data_Muon1_Sgn;
   Int_t           L0Data_Muon2_Pt;
   Int_t           L0Data_Muon2_Sgn;
   Int_t           L0Data_Muon3_Pt;
   Int_t           L0Data_Muon3_Sgn;
   Int_t           L0Data_PUHits_Mult;
   Int_t           L0Data_PUPeak1_Cont;
   Int_t           L0Data_PUPeak1_Pos;
   Int_t           L0Data_PUPeak2_Cont;
   Int_t           L0Data_PUPeak2_Pos;
   Int_t           L0Data_Photon_Et;
   Int_t           L0Data_Spd_Mult;
   Int_t           L0Data_Sum_Et;
   Int_t           L0Data_Sum_Et_Next1;
   Int_t           L0Data_Sum_Et_Next2;
   Int_t           L0Data_Sum_Et_Prev1;
   Int_t           L0Data_Sum_Et_Prev2;
   Int_t           nPVs;
   Int_t           nTracks;
   Int_t           nLongTracks;
   Int_t           nDownstreamTracks;
   Int_t           nUpstreamTracks;
   Int_t           nVeloTracks;
   Int_t           nTTracks;
   Int_t           nBackTracks;
   Int_t           nRich1Hits;
   Int_t           nRich2Hits;
   Int_t           nVeloClusters;
   Int_t           nITClusters;
   Int_t           nTTClusters;
   Int_t           nOTClusters;
   Int_t           nSPDHits;
   Int_t           nMuonCoordsS0;
   Int_t           nMuonCoordsS1;
   Int_t           nMuonCoordsS2;
   Int_t           nMuonCoordsS3;
   Int_t           nMuonCoordsS4;
   Int_t           nMuonTracks;
   Int_t           NumberOfHlt2NoCutsPions;
   Int_t           NumberOfHlt2GoodPions;
   Int_t           NumberOfHlt2Muons;
   Int_t           NumberOfHlt2Electrons;
   Int_t           NumberOfHlt2Photons;
   Int_t           NumberOfHlt2BiKalmanFittedRichKaons;

   // List of branches
   TBranch        *b_B_P;   //!
   TBranch        *b_B_PT;   //!
   TBranch        *b_B_PE;   //!
   TBranch        *b_B_PX;   //!
   TBranch        *b_B_PY;   //!
   TBranch        *b_B_PZ;   //!
   TBranch        *b_B_MM;   //!
   TBranch        *b_B_MMERR;   //!
   TBranch        *b_B_M;   //!
   TBranch        *b_B_ID;   //!
   TBranch        *b_B_M01;   //!
   TBranch        *b_B_VtxChi2_01;   //!
   TBranch        *b_B_VtxnDoF01;   //!
   TBranch        *b_B_VtxM01;   //!
   TBranch        *b_B_IP01;   //!
   TBranch        *b_B_IPChi2_01;   //!
   TBranch        *b_B_M02;   //!
   TBranch        *b_B_VtxChi2_02;   //!
   TBranch        *b_B_VtxnDoF02;   //!
   TBranch        *b_B_VtxM02;   //!
   TBranch        *b_B_IP02;   //!
   TBranch        *b_B_IPChi2_02;   //!
   TBranch        *b_B_M03;   //!
   TBranch        *b_B_VtxChi2_03;   //!
   TBranch        *b_B_VtxnDoF03;   //!
   TBranch        *b_B_VtxM03;   //!
   TBranch        *b_B_IP03;   //!
   TBranch        *b_B_IPChi2_03;   //!
   TBranch        *b_B_M12;   //!
   TBranch        *b_B_VtxChi2_12;   //!
   TBranch        *b_B_VtxnDoF12;   //!
   TBranch        *b_B_VtxM12;   //!
   TBranch        *b_B_IP12;   //!
   TBranch        *b_B_IPChi2_12;   //!
   TBranch        *b_B_M13;   //!
   TBranch        *b_B_VtxChi2_13;   //!
   TBranch        *b_B_VtxnDoF13;   //!
   TBranch        *b_B_VtxM13;   //!
   TBranch        *b_B_IP13;   //!
   TBranch        *b_B_IPChi2_13;   //!
   TBranch        *b_B_M23;   //!
   TBranch        *b_B_VtxChi2_23;   //!
   TBranch        *b_B_VtxnDoF23;   //!
   TBranch        *b_B_VtxM23;   //!
   TBranch        *b_B_IP23;   //!
   TBranch        *b_B_IPChi2_23;   //!
   TBranch        *b_B_M012;   //!
   TBranch        *b_B_VtxChi2_012;   //!
   TBranch        *b_B_VtxnDoF012;   //!
   TBranch        *b_B_VtxM012;   //!
   TBranch        *b_B_IP012;   //!
   TBranch        *b_B_IPChi2_012;   //!
   TBranch        *b_B_M013;   //!
   TBranch        *b_B_VtxChi2_013;   //!
   TBranch        *b_B_VtxnDoF013;   //!
   TBranch        *b_B_VtxM013;   //!
   TBranch        *b_B_IP013;   //!
   TBranch        *b_B_IPChi2_013;   //!
   TBranch        *b_B_M023;   //!
   TBranch        *b_B_VtxChi2_023;   //!
   TBranch        *b_B_VtxnDoF023;   //!
   TBranch        *b_B_VtxM023;   //!
   TBranch        *b_B_IP023;   //!
   TBranch        *b_B_IPChi2_023;   //!
   TBranch        *b_B_M123;   //!
   TBranch        *b_B_VtxChi2_123;   //!
   TBranch        *b_B_VtxnDoF123;   //!
   TBranch        *b_B_VtxM123;   //!
   TBranch        *b_B_IP123;   //!
   TBranch        *b_B_IPChi2_123;   //!
   TBranch        *b_B_M0123;   //!
   TBranch        *b_B_VtxChi2_0123;   //!
   TBranch        *b_B_VtxnDoF0123;   //!
   TBranch        *b_B_VtxM0123;   //!
   TBranch        *b_B_IP0123;   //!
   TBranch        *b_B_IPChi2_0123;   //!
   TBranch        *b_B_coneiso_DeltaEta;   //!
   TBranch        *b_B_coneiso_DeltaPhi;   //!
   TBranch        *b_B_coneiso_P;   //!
   TBranch        *b_B_coneiso_PAsy;   //!
   TBranch        *b_B_coneiso_PT;   //!
   TBranch        *b_B_coneiso_PTAsy;   //!
   TBranch        *b_B_coneiso_PX;   //!
   TBranch        *b_B_coneiso_PXAsy;   //!
   TBranch        *b_B_coneiso_PY;   //!
   TBranch        *b_B_coneiso_PYAsy;   //!
   TBranch        *b_B_coneiso_PZ;   //!
   TBranch        *b_B_coneiso_PZAsy;   //!
   TBranch        *b_B_coneiso_angle;   //!
   TBranch        *b_B_coneiso_mult;   //!
   TBranch        *b_B_vbdtiso_h1;   //!
   TBranch        *b_B_vbdtiso_h2;   //!
   TBranch        *b_B_vbdtiso_h3;   //!
   TBranch        *b_B_vbdtiso_s1;   //!
   TBranch        *b_B_vbdtiso_s2;   //!
   TBranch        *b_B_vbdtiso_s3;   //!
   TBranch        *b_B_vtxiso_dchi2_1;   //!
   TBranch        *b_B_vtxiso_dchi2_2;   //!
   TBranch        *b_B_vtxiso_dchi2_mass1;   //!
   TBranch        *b_B_vtxiso_dchi2_mass2;   //!
   TBranch        *b_B_vtxiso_num;   //!
   TBranch        *b_B_DiraAngleError;   //!
   TBranch        *b_B_DiraCosError;   //!
   TBranch        *b_B_DiraAngle;   //!
   TBranch        *b_B_DiraCos;   //!
   TBranch        *b_B_ENDVERTEX_X;   //!
   TBranch        *b_B_ENDVERTEX_Y;   //!
   TBranch        *b_B_ENDVERTEX_Z;   //!
   TBranch        *b_B_ENDVERTEX_XERR;   //!
   TBranch        *b_B_ENDVERTEX_YERR;   //!
   TBranch        *b_B_ENDVERTEX_ZERR;   //!
   TBranch        *b_B_ENDVERTEX_CHI2;   //!
   TBranch        *b_B_ENDVERTEX_NDOF;   //!
   TBranch        *b_B_ENDVERTEX_COV_;   //!
   TBranch        *b_B_OWNPV_X;   //!
   TBranch        *b_B_OWNPV_Y;   //!
   TBranch        *b_B_OWNPV_Z;   //!
   TBranch        *b_B_OWNPV_XERR;   //!
   TBranch        *b_B_OWNPV_YERR;   //!
   TBranch        *b_B_OWNPV_ZERR;   //!
   TBranch        *b_B_OWNPV_CHI2;   //!
   TBranch        *b_B_OWNPV_NDOF;   //!
   TBranch        *b_B_OWNPV_COV_;   //!
   TBranch        *b_B_IP_OWNPV;   //!
   TBranch        *b_B_IPCHI2_OWNPV;   //!
   TBranch        *b_B_FD_OWNPV;   //!
   TBranch        *b_B_FDCHI2_OWNPV;   //!
   TBranch        *b_B_DIRA_OWNPV;   //!
   TBranch        *b_B_Eta;   //!
   TBranch        *b_B_Phi;   //!
   TBranch        *b_B_MLoKi;   //!
   TBranch        *b_B_MMLoKi;   //!
   TBranch        *b_B_NTrk;   //!
   TBranch        *b_B_N90;   //!
   TBranch        *b_B_MTF;   //!
   TBranch        *b_B_NSatCells;   //!
   TBranch        *b_B_NHasPVInfo;   //!
   TBranch        *b_B_JEC_Cor;   //!
   TBranch        *b_B_JEC_PV;   //!
   TBranch        *b_B_BKGCAT;   //!
   TBranch        *b_B_TRUEID;   //!
   TBranch        *b_B_MC_MOTHER_ID;   //!
   TBranch        *b_B_MC_MOTHER_KEY;   //!
   TBranch        *b_B_MC_GD_MOTHER_ID;   //!
   TBranch        *b_B_MC_GD_MOTHER_KEY;   //!
   TBranch        *b_B_MC_GD_GD_MOTHER_ID;   //!
   TBranch        *b_B_MC_GD_GD_MOTHER_KEY;   //!
   TBranch        *b_B_TRUEP_E;   //!
   TBranch        *b_B_TRUEP_X;   //!
   TBranch        *b_B_TRUEP_Y;   //!
   TBranch        *b_B_TRUEP_Z;   //!
   TBranch        *b_B_TRUEPT;   //!
   TBranch        *b_B_TRUEORIGINVERTEX_X;   //!
   TBranch        *b_B_TRUEORIGINVERTEX_Y;   //!
   TBranch        *b_B_TRUEORIGINVERTEX_Z;   //!
   TBranch        *b_B_TRUEENDVERTEX_X;   //!
   TBranch        *b_B_TRUEENDVERTEX_Y;   //!
   TBranch        *b_B_TRUEENDVERTEX_Z;   //!
   TBranch        *b_B_TRUEISSTABLE;   //!
   TBranch        *b_B_TRUETAU;   //!
   TBranch        *b_B_ThetaL;   //!
   TBranch        *b_B_ThetaK;   //!
   TBranch        *b_B_ThetaTr;   //!
   TBranch        *b_B_PhiTr;   //!
   TBranch        *b_B_ThetaVtr;   //!
   TBranch        *b_B_TAU;   //!
   TBranch        *b_B_TAUERR;   //!
   TBranch        *b_B_TAUCHI2;   //!
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
   TBranch        *b_d1_P;   //!
   TBranch        *b_d1_PT;   //!
   TBranch        *b_d1_PE;   //!
   TBranch        *b_d1_PX;   //!
   TBranch        *b_d1_PY;   //!
   TBranch        *b_d1_PZ;   //!
   TBranch        *b_d1_MM;   //!
   TBranch        *b_d1_MMERR;   //!
   TBranch        *b_d1_M;   //!
   TBranch        *b_d1_ID;   //!
   TBranch        *b_d1_M01;   //!
   TBranch        *b_d1_VtxChi2_01;   //!
   TBranch        *b_d1_VtxnDoF01;   //!
   TBranch        *b_d1_VtxM01;   //!
   TBranch        *b_d1_IP01;   //!
   TBranch        *b_d1_IPChi2_01;   //!
   TBranch        *b_d1_CosTheta;   //!
   TBranch        *b_d1_ENDVERTEX_X;   //!
   TBranch        *b_d1_ENDVERTEX_Y;   //!
   TBranch        *b_d1_ENDVERTEX_Z;   //!
   TBranch        *b_d1_ENDVERTEX_XERR;   //!
   TBranch        *b_d1_ENDVERTEX_YERR;   //!
   TBranch        *b_d1_ENDVERTEX_ZERR;   //!
   TBranch        *b_d1_ENDVERTEX_CHI2;   //!
   TBranch        *b_d1_ENDVERTEX_NDOF;   //!
   TBranch        *b_d1_ENDVERTEX_COV_;   //!
   TBranch        *b_d1_OWNPV_X;   //!
   TBranch        *b_d1_OWNPV_Y;   //!
   TBranch        *b_d1_OWNPV_Z;   //!
   TBranch        *b_d1_OWNPV_XERR;   //!
   TBranch        *b_d1_OWNPV_YERR;   //!
   TBranch        *b_d1_OWNPV_ZERR;   //!
   TBranch        *b_d1_OWNPV_CHI2;   //!
   TBranch        *b_d1_OWNPV_NDOF;   //!
   TBranch        *b_d1_OWNPV_COV_;   //!
   TBranch        *b_d1_IP_OWNPV;   //!
   TBranch        *b_d1_IPCHI2_OWNPV;   //!
   TBranch        *b_d1_FD_OWNPV;   //!
   TBranch        *b_d1_FDCHI2_OWNPV;   //!
   TBranch        *b_d1_DIRA_OWNPV;   //!
   TBranch        *b_d1_ORIVX_X;   //!
   TBranch        *b_d1_ORIVX_Y;   //!
   TBranch        *b_d1_ORIVX_Z;   //!
   TBranch        *b_d1_ORIVX_XERR;   //!
   TBranch        *b_d1_ORIVX_YERR;   //!
   TBranch        *b_d1_ORIVX_ZERR;   //!
   TBranch        *b_d1_ORIVX_CHI2;   //!
   TBranch        *b_d1_ORIVX_NDOF;   //!
   TBranch        *b_d1_ORIVX_COV_;   //!
   TBranch        *b_d1_FD_ORIVX;   //!
   TBranch        *b_d1_FDCHI2_ORIVX;   //!
   TBranch        *b_d1_DIRA_ORIVX;   //!
   TBranch        *b_d1_Eta;   //!
   TBranch        *b_d1_Phi;   //!
   TBranch        *b_d1_MLoKi;   //!
   TBranch        *b_d1_MMLoKi;   //!
   TBranch        *b_d1_NTrk;   //!
   TBranch        *b_d1_N90;   //!
   TBranch        *b_d1_MTF;   //!
   TBranch        *b_d1_NSatCells;   //!
   TBranch        *b_d1_NHasPVInfo;   //!
   TBranch        *b_d1_JEC_Cor;   //!
   TBranch        *b_d1_JEC_PV;   //!
   TBranch        *b_d1_BKGCAT;   //!
   TBranch        *b_d1_TRUEID;   //!
   TBranch        *b_d1_MC_MOTHER_ID;   //!
   TBranch        *b_d1_MC_MOTHER_KEY;   //!
   TBranch        *b_d1_MC_GD_MOTHER_ID;   //!
   TBranch        *b_d1_MC_GD_MOTHER_KEY;   //!
   TBranch        *b_d1_MC_GD_GD_MOTHER_ID;   //!
   TBranch        *b_d1_MC_GD_GD_MOTHER_KEY;   //!
   TBranch        *b_d1_TRUEP_E;   //!
   TBranch        *b_d1_TRUEP_X;   //!
   TBranch        *b_d1_TRUEP_Y;   //!
   TBranch        *b_d1_TRUEP_Z;   //!
   TBranch        *b_d1_TRUEPT;   //!
   TBranch        *b_d1_TRUEORIGINVERTEX_X;   //!
   TBranch        *b_d1_TRUEORIGINVERTEX_Y;   //!
   TBranch        *b_d1_TRUEORIGINVERTEX_Z;   //!
   TBranch        *b_d1_TRUEENDVERTEX_X;   //!
   TBranch        *b_d1_TRUEENDVERTEX_Y;   //!
   TBranch        *b_d1_TRUEENDVERTEX_Z;   //!
   TBranch        *b_d1_TRUEISSTABLE;   //!
   TBranch        *b_d1_TRUETAU;   //!
   TBranch        *b_d1_TAU;   //!
   TBranch        *b_d1_TAUERR;   //!
   TBranch        *b_d1_TAUCHI2;   //!
   TBranch        *b_d1_L0Global_Dec;   //!
   TBranch        *b_d1_L0Global_TIS;   //!
   TBranch        *b_d1_L0Global_TOS;   //!
   TBranch        *b_d1_Hlt1Global_Dec;   //!
   TBranch        *b_d1_Hlt1Global_TIS;   //!
   TBranch        *b_d1_Hlt1Global_TOS;   //!
   TBranch        *b_d1_Hlt1Phys_Dec;   //!
   TBranch        *b_d1_Hlt1Phys_TIS;   //!
   TBranch        *b_d1_Hlt1Phys_TOS;   //!
   TBranch        *b_d1_Hlt2Global_Dec;   //!
   TBranch        *b_d1_Hlt2Global_TIS;   //!
   TBranch        *b_d1_Hlt2Global_TOS;   //!
   TBranch        *b_d1_Hlt2Phys_Dec;   //!
   TBranch        *b_d1_Hlt2Phys_TIS;   //!
   TBranch        *b_d1_Hlt2Phys_TOS;   //!
   TBranch        *b_d1_L0MuonDecision_Dec;   //!
   TBranch        *b_d1_L0MuonDecision_TIS;   //!
   TBranch        *b_d1_L0MuonDecision_TOS;   //!
   TBranch        *b_d1_Hlt1TrackAllL0Decision_Dec;   //!
   TBranch        *b_d1_Hlt1TrackAllL0Decision_TIS;   //!
   TBranch        *b_d1_Hlt1TrackAllL0Decision_TOS;   //!
   TBranch        *b_d1_Hlt1TrackMuonDecision_Dec;   //!
   TBranch        *b_d1_Hlt1TrackMuonDecision_TIS;   //!
   TBranch        *b_d1_Hlt1TrackMuonDecision_TOS;   //!
   TBranch        *b_l1_MC12TuneV2_ProbNNe;   //!
   TBranch        *b_l1_MC12TuneV2_ProbNNmu;   //!
   TBranch        *b_l1_MC12TuneV2_ProbNNpi;   //!
   TBranch        *b_l1_MC12TuneV2_ProbNNk;   //!
   TBranch        *b_l1_MC12TuneV2_ProbNNp;   //!
   TBranch        *b_l1_MC12TuneV2_ProbNNghost;   //!
   TBranch        *b_l1_MC12TuneV3_ProbNNe;   //!
   TBranch        *b_l1_MC12TuneV3_ProbNNmu;   //!
   TBranch        *b_l1_MC12TuneV3_ProbNNpi;   //!
   TBranch        *b_l1_MC12TuneV3_ProbNNk;   //!
   TBranch        *b_l1_MC12TuneV3_ProbNNp;   //!
   TBranch        *b_l1_MC12TuneV3_ProbNNghost;   //!
   TBranch        *b_l1_P;   //!
   TBranch        *b_l1_PT;   //!
   TBranch        *b_l1_PE;   //!
   TBranch        *b_l1_PX;   //!
   TBranch        *b_l1_PY;   //!
   TBranch        *b_l1_PZ;   //!
   TBranch        *b_l1_M;   //!
   TBranch        *b_l1_L0Calo_HCAL_realET;   //!
   TBranch        *b_l1_L0Calo_HCAL_xProjection;   //!
   TBranch        *b_l1_L0Calo_HCAL_yProjection;   //!
   TBranch        *b_l1_L0Calo_HCAL_region;   //!
   TBranch        *b_l1_L0Calo_HCAL_TriggerET;   //!
   TBranch        *b_l1_L0Calo_HCAL_TriggerHCALET;   //!
   TBranch        *b_l1_L0Calo_HCAL_xTrigger;   //!
   TBranch        *b_l1_L0Calo_HCAL_yTrigger;   //!
   TBranch        *b_l1_ID;   //!
   TBranch        *b_l1_PIDe;   //!
   TBranch        *b_l1_PIDmu;   //!
   TBranch        *b_l1_PIDK;   //!
   TBranch        *b_l1_PIDp;   //!
   TBranch        *b_l1_ProbNNe;   //!
   TBranch        *b_l1_ProbNNk;   //!
   TBranch        *b_l1_ProbNNp;   //!
   TBranch        *b_l1_ProbNNpi;   //!
   TBranch        *b_l1_ProbNNmu;   //!
   TBranch        *b_l1_ProbNNghost;   //!
   TBranch        *b_l1_hasMuon;   //!
   TBranch        *b_l1_isMuon;   //!
   TBranch        *b_l1_hasRich;   //!
   TBranch        *b_l1_hasCalo;   //!
   TBranch        *b_l1_CosTheta;   //!
   TBranch        *b_l1_OWNPV_X;   //!
   TBranch        *b_l1_OWNPV_Y;   //!
   TBranch        *b_l1_OWNPV_Z;   //!
   TBranch        *b_l1_OWNPV_XERR;   //!
   TBranch        *b_l1_OWNPV_YERR;   //!
   TBranch        *b_l1_OWNPV_ZERR;   //!
   TBranch        *b_l1_OWNPV_CHI2;   //!
   TBranch        *b_l1_OWNPV_NDOF;   //!
   TBranch        *b_l1_OWNPV_COV_;   //!
   TBranch        *b_l1_IP_OWNPV;   //!
   TBranch        *b_l1_IPCHI2_OWNPV;   //!
   TBranch        *b_l1_ORIVX_X;   //!
   TBranch        *b_l1_ORIVX_Y;   //!
   TBranch        *b_l1_ORIVX_Z;   //!
   TBranch        *b_l1_ORIVX_XERR;   //!
   TBranch        *b_l1_ORIVX_YERR;   //!
   TBranch        *b_l1_ORIVX_ZERR;   //!
   TBranch        *b_l1_ORIVX_CHI2;   //!
   TBranch        *b_l1_ORIVX_NDOF;   //!
   TBranch        *b_l1_ORIVX_COV_;   //!
   TBranch        *b_l1_Eta;   //!
   TBranch        *b_l1_Phi;   //!
   TBranch        *b_l1_MLoKi;   //!
   TBranch        *b_l1_MMLoKi;   //!
   TBranch        *b_l1_NTrk;   //!
   TBranch        *b_l1_N90;   //!
   TBranch        *b_l1_MTF;   //!
   TBranch        *b_l1_NSatCells;   //!
   TBranch        *b_l1_NHasPVInfo;   //!
   TBranch        *b_l1_JEC_Cor;   //!
   TBranch        *b_l1_JEC_PV;   //!
   TBranch        *b_l1_TRUEID;   //!
   TBranch        *b_l1_MC_MOTHER_ID;   //!
   TBranch        *b_l1_MC_MOTHER_KEY;   //!
   TBranch        *b_l1_MC_GD_MOTHER_ID;   //!
   TBranch        *b_l1_MC_GD_MOTHER_KEY;   //!
   TBranch        *b_l1_MC_GD_GD_MOTHER_ID;   //!
   TBranch        *b_l1_MC_GD_GD_MOTHER_KEY;   //!
   TBranch        *b_l1_TRUEP_E;   //!
   TBranch        *b_l1_TRUEP_X;   //!
   TBranch        *b_l1_TRUEP_Y;   //!
   TBranch        *b_l1_TRUEP_Z;   //!
   TBranch        *b_l1_TRUEPT;   //!
   TBranch        *b_l1_TRUEORIGINVERTEX_X;   //!
   TBranch        *b_l1_TRUEORIGINVERTEX_Y;   //!
   TBranch        *b_l1_TRUEORIGINVERTEX_Z;   //!
   TBranch        *b_l1_TRUEENDVERTEX_X;   //!
   TBranch        *b_l1_TRUEENDVERTEX_Y;   //!
   TBranch        *b_l1_TRUEENDVERTEX_Z;   //!
   TBranch        *b_l1_TRUEISSTABLE;   //!
   TBranch        *b_l1_TRUETAU;   //!
   TBranch        *b_l1_CombDLLMu;   //!
   TBranch        *b_l1_InMuonAcc;   //!
   TBranch        *b_l1_MuonDist2;   //!
   TBranch        *b_l1_regionInM2;   //!
   TBranch        *b_l1_isMuonLoose;   //!
   TBranch        *b_l1_NShared;   //!
   TBranch        *b_l1_MuonLLmu;   //!
   TBranch        *b_l1_MuonLLbg;   //!
   TBranch        *b_l1_isMuonFromProto;   //!
   TBranch        *b_l1_L0Global_Dec;   //!
   TBranch        *b_l1_L0Global_TIS;   //!
   TBranch        *b_l1_L0Global_TOS;   //!
   TBranch        *b_l1_Hlt1Global_Dec;   //!
   TBranch        *b_l1_Hlt1Global_TIS;   //!
   TBranch        *b_l1_Hlt1Global_TOS;   //!
   TBranch        *b_l1_Hlt1Phys_Dec;   //!
   TBranch        *b_l1_Hlt1Phys_TIS;   //!
   TBranch        *b_l1_Hlt1Phys_TOS;   //!
   TBranch        *b_l1_Hlt2Global_Dec;   //!
   TBranch        *b_l1_Hlt2Global_TIS;   //!
   TBranch        *b_l1_Hlt2Global_TOS;   //!
   TBranch        *b_l1_Hlt2Phys_Dec;   //!
   TBranch        *b_l1_Hlt2Phys_TIS;   //!
   TBranch        *b_l1_Hlt2Phys_TOS;   //!
   TBranch        *b_l1_L0MuonDecision_Dec;   //!
   TBranch        *b_l1_L0MuonDecision_TIS;   //!
   TBranch        *b_l1_L0MuonDecision_TOS;   //!
   TBranch        *b_l1_Hlt1TrackAllL0Decision_Dec;   //!
   TBranch        *b_l1_Hlt1TrackAllL0Decision_TIS;   //!
   TBranch        *b_l1_Hlt1TrackAllL0Decision_TOS;   //!
   TBranch        *b_l1_Hlt1TrackMuonDecision_Dec;   //!
   TBranch        *b_l1_Hlt1TrackMuonDecision_TIS;   //!
   TBranch        *b_l1_Hlt1TrackMuonDecision_TOS;   //!
   TBranch        *b_l1_TRACK_Type;   //!
   TBranch        *b_l1_TRACK_Key;   //!
   TBranch        *b_l1_TRACK_CHI2NDOF;   //!
   TBranch        *b_l1_TRACK_PCHI2;   //!
   TBranch        *b_l1_TRACK_MatchCHI2;   //!
   TBranch        *b_l1_TRACK_GhostProb;   //!
   TBranch        *b_l1_TRACK_CloneDist;   //!
   TBranch        *b_l1_TRACK_Likelihood;   //!
   TBranch        *b_l2_MC12TuneV2_ProbNNe;   //!
   TBranch        *b_l2_MC12TuneV2_ProbNNmu;   //!
   TBranch        *b_l2_MC12TuneV2_ProbNNpi;   //!
   TBranch        *b_l2_MC12TuneV2_ProbNNk;   //!
   TBranch        *b_l2_MC12TuneV2_ProbNNp;   //!
   TBranch        *b_l2_MC12TuneV2_ProbNNghost;   //!
   TBranch        *b_l2_MC12TuneV3_ProbNNe;   //!
   TBranch        *b_l2_MC12TuneV3_ProbNNmu;   //!
   TBranch        *b_l2_MC12TuneV3_ProbNNpi;   //!
   TBranch        *b_l2_MC12TuneV3_ProbNNk;   //!
   TBranch        *b_l2_MC12TuneV3_ProbNNp;   //!
   TBranch        *b_l2_MC12TuneV3_ProbNNghost;   //!
   TBranch        *b_l2_P;   //!
   TBranch        *b_l2_PT;   //!
   TBranch        *b_l2_PE;   //!
   TBranch        *b_l2_PX;   //!
   TBranch        *b_l2_PY;   //!
   TBranch        *b_l2_PZ;   //!
   TBranch        *b_l2_M;   //!
   TBranch        *b_l2_L0Calo_HCAL_realET;   //!
   TBranch        *b_l2_L0Calo_HCAL_xProjection;   //!
   TBranch        *b_l2_L0Calo_HCAL_yProjection;   //!
   TBranch        *b_l2_L0Calo_HCAL_region;   //!
   TBranch        *b_l2_L0Calo_HCAL_TriggerET;   //!
   TBranch        *b_l2_L0Calo_HCAL_TriggerHCALET;   //!
   TBranch        *b_l2_L0Calo_HCAL_xTrigger;   //!
   TBranch        *b_l2_L0Calo_HCAL_yTrigger;   //!
   TBranch        *b_l2_ID;   //!
   TBranch        *b_l2_PIDe;   //!
   TBranch        *b_l2_PIDmu;   //!
   TBranch        *b_l2_PIDK;   //!
   TBranch        *b_l2_PIDp;   //!
   TBranch        *b_l2_ProbNNe;   //!
   TBranch        *b_l2_ProbNNk;   //!
   TBranch        *b_l2_ProbNNp;   //!
   TBranch        *b_l2_ProbNNpi;   //!
   TBranch        *b_l2_ProbNNmu;   //!
   TBranch        *b_l2_ProbNNghost;   //!
   TBranch        *b_l2_hasMuon;   //!
   TBranch        *b_l2_isMuon;   //!
   TBranch        *b_l2_hasRich;   //!
   TBranch        *b_l2_hasCalo;   //!
   TBranch        *b_l2_CosTheta;   //!
   TBranch        *b_l2_HasBremAdded;   //!
   TBranch        *b_l2_BremMultiplicity;   //!
   TBranch        *b_l2_BremPE;   //!
   TBranch        *b_l2_BremPX;   //!
   TBranch        *b_l2_BremPY;   //!
   TBranch        *b_l2_BremPZ;   //!
   TBranch        *b_l2_BremOriginX;   //!
   TBranch        *b_l2_BremOriginY;   //!
   TBranch        *b_l2_BremOriginZ;   //!
   TBranch        *b_l2_OWNPV_X;   //!
   TBranch        *b_l2_OWNPV_Y;   //!
   TBranch        *b_l2_OWNPV_Z;   //!
   TBranch        *b_l2_OWNPV_XERR;   //!
   TBranch        *b_l2_OWNPV_YERR;   //!
   TBranch        *b_l2_OWNPV_ZERR;   //!
   TBranch        *b_l2_OWNPV_CHI2;   //!
   TBranch        *b_l2_OWNPV_NDOF;   //!
   TBranch        *b_l2_OWNPV_COV_;   //!
   TBranch        *b_l2_IP_OWNPV;   //!
   TBranch        *b_l2_IPCHI2_OWNPV;   //!
   TBranch        *b_l2_ORIVX_X;   //!
   TBranch        *b_l2_ORIVX_Y;   //!
   TBranch        *b_l2_ORIVX_Z;   //!
   TBranch        *b_l2_ORIVX_XERR;   //!
   TBranch        *b_l2_ORIVX_YERR;   //!
   TBranch        *b_l2_ORIVX_ZERR;   //!
   TBranch        *b_l2_ORIVX_CHI2;   //!
   TBranch        *b_l2_ORIVX_NDOF;   //!
   TBranch        *b_l2_ORIVX_COV_;   //!
   TBranch        *b_l2_Eta;   //!
   TBranch        *b_l2_Phi;   //!
   TBranch        *b_l2_MLoKi;   //!
   TBranch        *b_l2_MMLoKi;   //!
   TBranch        *b_l2_NTrk;   //!
   TBranch        *b_l2_N90;   //!
   TBranch        *b_l2_MTF;   //!
   TBranch        *b_l2_NSatCells;   //!
   TBranch        *b_l2_NHasPVInfo;   //!
   TBranch        *b_l2_JEC_Cor;   //!
   TBranch        *b_l2_JEC_PV;   //!
   TBranch        *b_l2_TRUEID;   //!
   TBranch        *b_l2_MC_MOTHER_ID;   //!
   TBranch        *b_l2_MC_MOTHER_KEY;   //!
   TBranch        *b_l2_MC_GD_MOTHER_ID;   //!
   TBranch        *b_l2_MC_GD_MOTHER_KEY;   //!
   TBranch        *b_l2_MC_GD_GD_MOTHER_ID;   //!
   TBranch        *b_l2_MC_GD_GD_MOTHER_KEY;   //!
   TBranch        *b_l2_TRUEP_E;   //!
   TBranch        *b_l2_TRUEP_X;   //!
   TBranch        *b_l2_TRUEP_Y;   //!
   TBranch        *b_l2_TRUEP_Z;   //!
   TBranch        *b_l2_TRUEPT;   //!
   TBranch        *b_l2_TRUEORIGINVERTEX_X;   //!
   TBranch        *b_l2_TRUEORIGINVERTEX_Y;   //!
   TBranch        *b_l2_TRUEORIGINVERTEX_Z;   //!
   TBranch        *b_l2_TRUEENDVERTEX_X;   //!
   TBranch        *b_l2_TRUEENDVERTEX_Y;   //!
   TBranch        *b_l2_TRUEENDVERTEX_Z;   //!
   TBranch        *b_l2_TRUEISSTABLE;   //!
   TBranch        *b_l2_TRUETAU;   //!
   TBranch        *b_l2_CombDLLMu;   //!
   TBranch        *b_l2_InMuonAcc;   //!
   TBranch        *b_l2_MuonDist2;   //!
   TBranch        *b_l2_regionInM2;   //!
   TBranch        *b_l2_isMuonLoose;   //!
   TBranch        *b_l2_NShared;   //!
   TBranch        *b_l2_MuonLLmu;   //!
   TBranch        *b_l2_MuonLLbg;   //!
   TBranch        *b_l2_isMuonFromProto;   //!
   TBranch        *b_l2_L0Global_Dec;   //!
   TBranch        *b_l2_L0Global_TIS;   //!
   TBranch        *b_l2_L0Global_TOS;   //!
   TBranch        *b_l2_Hlt1Global_Dec;   //!
   TBranch        *b_l2_Hlt1Global_TIS;   //!
   TBranch        *b_l2_Hlt1Global_TOS;   //!
   TBranch        *b_l2_Hlt1Phys_Dec;   //!
   TBranch        *b_l2_Hlt1Phys_TIS;   //!
   TBranch        *b_l2_Hlt1Phys_TOS;   //!
   TBranch        *b_l2_Hlt2Global_Dec;   //!
   TBranch        *b_l2_Hlt2Global_TIS;   //!
   TBranch        *b_l2_Hlt2Global_TOS;   //!
   TBranch        *b_l2_Hlt2Phys_Dec;   //!
   TBranch        *b_l2_Hlt2Phys_TIS;   //!
   TBranch        *b_l2_Hlt2Phys_TOS;   //!
   TBranch        *b_l2_L0MuonDecision_Dec;   //!
   TBranch        *b_l2_L0MuonDecision_TIS;   //!
   TBranch        *b_l2_L0MuonDecision_TOS;   //!
   TBranch        *b_l2_Hlt1TrackAllL0Decision_Dec;   //!
   TBranch        *b_l2_Hlt1TrackAllL0Decision_TIS;   //!
   TBranch        *b_l2_Hlt1TrackAllL0Decision_TOS;   //!
   TBranch        *b_l2_Hlt1TrackMuonDecision_Dec;   //!
   TBranch        *b_l2_Hlt1TrackMuonDecision_TIS;   //!
   TBranch        *b_l2_Hlt1TrackMuonDecision_TOS;   //!
   TBranch        *b_l2_TRACK_Type;   //!
   TBranch        *b_l2_TRACK_Key;   //!
   TBranch        *b_l2_TRACK_CHI2NDOF;   //!
   TBranch        *b_l2_TRACK_PCHI2;   //!
   TBranch        *b_l2_TRACK_MatchCHI2;   //!
   TBranch        *b_l2_TRACK_GhostProb;   //!
   TBranch        *b_l2_TRACK_CloneDist;   //!
   TBranch        *b_l2_TRACK_Likelihood;   //!
   TBranch        *b_d2_P;   //!
   TBranch        *b_d2_PT;   //!
   TBranch        *b_d2_PE;   //!
   TBranch        *b_d2_PX;   //!
   TBranch        *b_d2_PY;   //!
   TBranch        *b_d2_PZ;   //!
   TBranch        *b_d2_MM;   //!
   TBranch        *b_d2_MMERR;   //!
   TBranch        *b_d2_M;   //!
   TBranch        *b_d2_ID;   //!
   TBranch        *b_d2_M01;   //!
   TBranch        *b_d2_VtxChi2_01;   //!
   TBranch        *b_d2_VtxnDoF01;   //!
   TBranch        *b_d2_VtxM01;   //!
   TBranch        *b_d2_IP01;   //!
   TBranch        *b_d2_IPChi2_01;   //!
   TBranch        *b_d2_CosTheta;   //!
   TBranch        *b_d2_ENDVERTEX_X;   //!
   TBranch        *b_d2_ENDVERTEX_Y;   //!
   TBranch        *b_d2_ENDVERTEX_Z;   //!
   TBranch        *b_d2_ENDVERTEX_XERR;   //!
   TBranch        *b_d2_ENDVERTEX_YERR;   //!
   TBranch        *b_d2_ENDVERTEX_ZERR;   //!
   TBranch        *b_d2_ENDVERTEX_CHI2;   //!
   TBranch        *b_d2_ENDVERTEX_NDOF;   //!
   TBranch        *b_d2_ENDVERTEX_COV_;   //!
   TBranch        *b_d2_OWNPV_X;   //!
   TBranch        *b_d2_OWNPV_Y;   //!
   TBranch        *b_d2_OWNPV_Z;   //!
   TBranch        *b_d2_OWNPV_XERR;   //!
   TBranch        *b_d2_OWNPV_YERR;   //!
   TBranch        *b_d2_OWNPV_ZERR;   //!
   TBranch        *b_d2_OWNPV_CHI2;   //!
   TBranch        *b_d2_OWNPV_NDOF;   //!
   TBranch        *b_d2_OWNPV_COV_;   //!
   TBranch        *b_d2_IP_OWNPV;   //!
   TBranch        *b_d2_IPCHI2_OWNPV;   //!
   TBranch        *b_d2_FD_OWNPV;   //!
   TBranch        *b_d2_FDCHI2_OWNPV;   //!
   TBranch        *b_d2_DIRA_OWNPV;   //!
   TBranch        *b_d2_ORIVX_X;   //!
   TBranch        *b_d2_ORIVX_Y;   //!
   TBranch        *b_d2_ORIVX_Z;   //!
   TBranch        *b_d2_ORIVX_XERR;   //!
   TBranch        *b_d2_ORIVX_YERR;   //!
   TBranch        *b_d2_ORIVX_ZERR;   //!
   TBranch        *b_d2_ORIVX_CHI2;   //!
   TBranch        *b_d2_ORIVX_NDOF;   //!
   TBranch        *b_d2_ORIVX_COV_;   //!
   TBranch        *b_d2_FD_ORIVX;   //!
   TBranch        *b_d2_FDCHI2_ORIVX;   //!
   TBranch        *b_d2_DIRA_ORIVX;   //!
   TBranch        *b_d2_Eta;   //!
   TBranch        *b_d2_Phi;   //!
   TBranch        *b_d2_MLoKi;   //!
   TBranch        *b_d2_MMLoKi;   //!
   TBranch        *b_d2_NTrk;   //!
   TBranch        *b_d2_N90;   //!
   TBranch        *b_d2_MTF;   //!
   TBranch        *b_d2_NSatCells;   //!
   TBranch        *b_d2_NHasPVInfo;   //!
   TBranch        *b_d2_JEC_Cor;   //!
   TBranch        *b_d2_JEC_PV;   //!
   TBranch        *b_d2_BKGCAT;   //!
   TBranch        *b_d2_TRUEID;   //!
   TBranch        *b_d2_MC_MOTHER_ID;   //!
   TBranch        *b_d2_MC_MOTHER_KEY;   //!
   TBranch        *b_d2_MC_GD_MOTHER_ID;   //!
   TBranch        *b_d2_MC_GD_MOTHER_KEY;   //!
   TBranch        *b_d2_MC_GD_GD_MOTHER_ID;   //!
   TBranch        *b_d2_MC_GD_GD_MOTHER_KEY;   //!
   TBranch        *b_d2_TRUEP_E;   //!
   TBranch        *b_d2_TRUEP_X;   //!
   TBranch        *b_d2_TRUEP_Y;   //!
   TBranch        *b_d2_TRUEP_Z;   //!
   TBranch        *b_d2_TRUEPT;   //!
   TBranch        *b_d2_TRUEORIGINVERTEX_X;   //!
   TBranch        *b_d2_TRUEORIGINVERTEX_Y;   //!
   TBranch        *b_d2_TRUEORIGINVERTEX_Z;   //!
   TBranch        *b_d2_TRUEENDVERTEX_X;   //!
   TBranch        *b_d2_TRUEENDVERTEX_Y;   //!
   TBranch        *b_d2_TRUEENDVERTEX_Z;   //!
   TBranch        *b_d2_TRUEISSTABLE;   //!
   TBranch        *b_d2_TRUETAU;   //!
   TBranch        *b_d2_TAU;   //!
   TBranch        *b_d2_TAUERR;   //!
   TBranch        *b_d2_TAUCHI2;   //!
   TBranch        *b_d2_L0Global_Dec;   //!
   TBranch        *b_d2_L0Global_TIS;   //!
   TBranch        *b_d2_L0Global_TOS;   //!
   TBranch        *b_d2_Hlt1Global_Dec;   //!
   TBranch        *b_d2_Hlt1Global_TIS;   //!
   TBranch        *b_d2_Hlt1Global_TOS;   //!
   TBranch        *b_d2_Hlt1Phys_Dec;   //!
   TBranch        *b_d2_Hlt1Phys_TIS;   //!
   TBranch        *b_d2_Hlt1Phys_TOS;   //!
   TBranch        *b_d2_Hlt2Global_Dec;   //!
   TBranch        *b_d2_Hlt2Global_TIS;   //!
   TBranch        *b_d2_Hlt2Global_TOS;   //!
   TBranch        *b_d2_Hlt2Phys_Dec;   //!
   TBranch        *b_d2_Hlt2Phys_TIS;   //!
   TBranch        *b_d2_Hlt2Phys_TOS;   //!
   TBranch        *b_d2_L0MuonDecision_Dec;   //!
   TBranch        *b_d2_L0MuonDecision_TIS;   //!
   TBranch        *b_d2_L0MuonDecision_TOS;   //!
   TBranch        *b_d2_Hlt1TrackAllL0Decision_Dec;   //!
   TBranch        *b_d2_Hlt1TrackAllL0Decision_TIS;   //!
   TBranch        *b_d2_Hlt1TrackAllL0Decision_TOS;   //!
   TBranch        *b_d2_Hlt1TrackMuonDecision_Dec;   //!
   TBranch        *b_d2_Hlt1TrackMuonDecision_TIS;   //!
   TBranch        *b_d2_Hlt1TrackMuonDecision_TOS;   //!
   TBranch        *b_h1_MC12TuneV2_ProbNNe;   //!
   TBranch        *b_h1_MC12TuneV2_ProbNNmu;   //!
   TBranch        *b_h1_MC12TuneV2_ProbNNpi;   //!
   TBranch        *b_h1_MC12TuneV2_ProbNNk;   //!
   TBranch        *b_h1_MC12TuneV2_ProbNNp;   //!
   TBranch        *b_h1_MC12TuneV2_ProbNNghost;   //!
   TBranch        *b_h1_MC12TuneV3_ProbNNe;   //!
   TBranch        *b_h1_MC12TuneV3_ProbNNmu;   //!
   TBranch        *b_h1_MC12TuneV3_ProbNNpi;   //!
   TBranch        *b_h1_MC12TuneV3_ProbNNk;   //!
   TBranch        *b_h1_MC12TuneV3_ProbNNp;   //!
   TBranch        *b_h1_MC12TuneV3_ProbNNghost;   //!
   TBranch        *b_h1_P;   //!
   TBranch        *b_h1_PT;   //!
   TBranch        *b_h1_PE;   //!
   TBranch        *b_h1_PX;   //!
   TBranch        *b_h1_PY;   //!
   TBranch        *b_h1_PZ;   //!
   TBranch        *b_h1_M;   //!
   TBranch        *b_h1_L0Calo_HCAL_realET;   //!
   TBranch        *b_h1_L0Calo_HCAL_xProjection;   //!
   TBranch        *b_h1_L0Calo_HCAL_yProjection;   //!
   TBranch        *b_h1_L0Calo_HCAL_region;   //!
   TBranch        *b_h1_L0Calo_HCAL_TriggerET;   //!
   TBranch        *b_h1_L0Calo_HCAL_TriggerHCALET;   //!
   TBranch        *b_h1_L0Calo_HCAL_xTrigger;   //!
   TBranch        *b_h1_L0Calo_HCAL_yTrigger;   //!
   TBranch        *b_h1_ID;   //!
   TBranch        *b_h1_PIDe;   //!
   TBranch        *b_h1_PIDmu;   //!
   TBranch        *b_h1_PIDK;   //!
   TBranch        *b_h1_PIDp;   //!
   TBranch        *b_h1_ProbNNe;   //!
   TBranch        *b_h1_ProbNNk;   //!
   TBranch        *b_h1_ProbNNp;   //!
   TBranch        *b_h1_ProbNNpi;   //!
   TBranch        *b_h1_ProbNNmu;   //!
   TBranch        *b_h1_ProbNNghost;   //!
   TBranch        *b_h1_hasMuon;   //!
   TBranch        *b_h1_isMuon;   //!
   TBranch        *b_h1_hasRich;   //!
   TBranch        *b_h1_hasCalo;   //!
   TBranch        *b_h1_CosTheta;   //!
   TBranch        *b_h1_OWNPV_X;   //!
   TBranch        *b_h1_OWNPV_Y;   //!
   TBranch        *b_h1_OWNPV_Z;   //!
   TBranch        *b_h1_OWNPV_XERR;   //!
   TBranch        *b_h1_OWNPV_YERR;   //!
   TBranch        *b_h1_OWNPV_ZERR;   //!
   TBranch        *b_h1_OWNPV_CHI2;   //!
   TBranch        *b_h1_OWNPV_NDOF;   //!
   TBranch        *b_h1_OWNPV_COV_;   //!
   TBranch        *b_h1_IP_OWNPV;   //!
   TBranch        *b_h1_IPCHI2_OWNPV;   //!
   TBranch        *b_h1_ORIVX_X;   //!
   TBranch        *b_h1_ORIVX_Y;   //!
   TBranch        *b_h1_ORIVX_Z;   //!
   TBranch        *b_h1_ORIVX_XERR;   //!
   TBranch        *b_h1_ORIVX_YERR;   //!
   TBranch        *b_h1_ORIVX_ZERR;   //!
   TBranch        *b_h1_ORIVX_CHI2;   //!
   TBranch        *b_h1_ORIVX_NDOF;   //!
   TBranch        *b_h1_ORIVX_COV_;   //!
   TBranch        *b_h1_Eta;   //!
   TBranch        *b_h1_Phi;   //!
   TBranch        *b_h1_MLoKi;   //!
   TBranch        *b_h1_MMLoKi;   //!
   TBranch        *b_h1_NTrk;   //!
   TBranch        *b_h1_N90;   //!
   TBranch        *b_h1_MTF;   //!
   TBranch        *b_h1_NSatCells;   //!
   TBranch        *b_h1_NHasPVInfo;   //!
   TBranch        *b_h1_JEC_Cor;   //!
   TBranch        *b_h1_JEC_PV;   //!
   TBranch        *b_h1_TRUEID;   //!
   TBranch        *b_h1_MC_MOTHER_ID;   //!
   TBranch        *b_h1_MC_MOTHER_KEY;   //!
   TBranch        *b_h1_MC_GD_MOTHER_ID;   //!
   TBranch        *b_h1_MC_GD_MOTHER_KEY;   //!
   TBranch        *b_h1_MC_GD_GD_MOTHER_ID;   //!
   TBranch        *b_h1_MC_GD_GD_MOTHER_KEY;   //!
   TBranch        *b_h1_TRUEP_E;   //!
   TBranch        *b_h1_TRUEP_X;   //!
   TBranch        *b_h1_TRUEP_Y;   //!
   TBranch        *b_h1_TRUEP_Z;   //!
   TBranch        *b_h1_TRUEPT;   //!
   TBranch        *b_h1_TRUEORIGINVERTEX_X;   //!
   TBranch        *b_h1_TRUEORIGINVERTEX_Y;   //!
   TBranch        *b_h1_TRUEORIGINVERTEX_Z;   //!
   TBranch        *b_h1_TRUEENDVERTEX_X;   //!
   TBranch        *b_h1_TRUEENDVERTEX_Y;   //!
   TBranch        *b_h1_TRUEENDVERTEX_Z;   //!
   TBranch        *b_h1_TRUEISSTABLE;   //!
   TBranch        *b_h1_TRUETAU;   //!
   TBranch        *b_h1_CombDLLMu;   //!
   TBranch        *b_h1_InMuonAcc;   //!
   TBranch        *b_h1_MuonDist2;   //!
   TBranch        *b_h1_regionInM2;   //!
   TBranch        *b_h1_isMuonLoose;   //!
   TBranch        *b_h1_NShared;   //!
   TBranch        *b_h1_MuonLLmu;   //!
   TBranch        *b_h1_MuonLLbg;   //!
   TBranch        *b_h1_isMuonFromProto;   //!
   TBranch        *b_h1_L0Global_Dec;   //!
   TBranch        *b_h1_L0Global_TIS;   //!
   TBranch        *b_h1_L0Global_TOS;   //!
   TBranch        *b_h1_Hlt1Global_Dec;   //!
   TBranch        *b_h1_Hlt1Global_TIS;   //!
   TBranch        *b_h1_Hlt1Global_TOS;   //!
   TBranch        *b_h1_Hlt1Phys_Dec;   //!
   TBranch        *b_h1_Hlt1Phys_TIS;   //!
   TBranch        *b_h1_Hlt1Phys_TOS;   //!
   TBranch        *b_h1_Hlt2Global_Dec;   //!
   TBranch        *b_h1_Hlt2Global_TIS;   //!
   TBranch        *b_h1_Hlt2Global_TOS;   //!
   TBranch        *b_h1_Hlt2Phys_Dec;   //!
   TBranch        *b_h1_Hlt2Phys_TIS;   //!
   TBranch        *b_h1_Hlt2Phys_TOS;   //!
   TBranch        *b_h1_L0MuonDecision_Dec;   //!
   TBranch        *b_h1_L0MuonDecision_TIS;   //!
   TBranch        *b_h1_L0MuonDecision_TOS;   //!
   TBranch        *b_h1_Hlt1TrackAllL0Decision_Dec;   //!
   TBranch        *b_h1_Hlt1TrackAllL0Decision_TIS;   //!
   TBranch        *b_h1_Hlt1TrackAllL0Decision_TOS;   //!
   TBranch        *b_h1_Hlt1TrackMuonDecision_Dec;   //!
   TBranch        *b_h1_Hlt1TrackMuonDecision_TIS;   //!
   TBranch        *b_h1_Hlt1TrackMuonDecision_TOS;   //!
   TBranch        *b_h1_TRACK_Type;   //!
   TBranch        *b_h1_TRACK_Key;   //!
   TBranch        *b_h1_TRACK_CHI2NDOF;   //!
   TBranch        *b_h1_TRACK_PCHI2;   //!
   TBranch        *b_h1_TRACK_MatchCHI2;   //!
   TBranch        *b_h1_TRACK_GhostProb;   //!
   TBranch        *b_h1_TRACK_CloneDist;   //!
   TBranch        *b_h1_TRACK_Likelihood;   //!
   TBranch        *b_h2_MC12TuneV2_ProbNNe;   //!
   TBranch        *b_h2_MC12TuneV2_ProbNNmu;   //!
   TBranch        *b_h2_MC12TuneV2_ProbNNpi;   //!
   TBranch        *b_h2_MC12TuneV2_ProbNNk;   //!
   TBranch        *b_h2_MC12TuneV2_ProbNNp;   //!
   TBranch        *b_h2_MC12TuneV2_ProbNNghost;   //!
   TBranch        *b_h2_MC12TuneV3_ProbNNe;   //!
   TBranch        *b_h2_MC12TuneV3_ProbNNmu;   //!
   TBranch        *b_h2_MC12TuneV3_ProbNNpi;   //!
   TBranch        *b_h2_MC12TuneV3_ProbNNk;   //!
   TBranch        *b_h2_MC12TuneV3_ProbNNp;   //!
   TBranch        *b_h2_MC12TuneV3_ProbNNghost;   //!
   TBranch        *b_h2_P;   //!
   TBranch        *b_h2_PT;   //!
   TBranch        *b_h2_PE;   //!
   TBranch        *b_h2_PX;   //!
   TBranch        *b_h2_PY;   //!
   TBranch        *b_h2_PZ;   //!
   TBranch        *b_h2_M;   //!
   TBranch        *b_h2_L0Calo_HCAL_realET;   //!
   TBranch        *b_h2_L0Calo_HCAL_xProjection;   //!
   TBranch        *b_h2_L0Calo_HCAL_yProjection;   //!
   TBranch        *b_h2_L0Calo_HCAL_region;   //!
   TBranch        *b_h2_L0Calo_HCAL_TriggerET;   //!
   TBranch        *b_h2_L0Calo_HCAL_TriggerHCALET;   //!
   TBranch        *b_h2_L0Calo_HCAL_xTrigger;   //!
   TBranch        *b_h2_L0Calo_HCAL_yTrigger;   //!
   TBranch        *b_h2_ID;   //!
   TBranch        *b_h2_PIDe;   //!
   TBranch        *b_h2_PIDmu;   //!
   TBranch        *b_h2_PIDK;   //!
   TBranch        *b_h2_PIDp;   //!
   TBranch        *b_h2_ProbNNe;   //!
   TBranch        *b_h2_ProbNNk;   //!
   TBranch        *b_h2_ProbNNp;   //!
   TBranch        *b_h2_ProbNNpi;   //!
   TBranch        *b_h2_ProbNNmu;   //!
   TBranch        *b_h2_ProbNNghost;   //!
   TBranch        *b_h2_hasMuon;   //!
   TBranch        *b_h2_isMuon;   //!
   TBranch        *b_h2_hasRich;   //!
   TBranch        *b_h2_hasCalo;   //!
   TBranch        *b_h2_CosTheta;   //!
   TBranch        *b_h2_OWNPV_X;   //!
   TBranch        *b_h2_OWNPV_Y;   //!
   TBranch        *b_h2_OWNPV_Z;   //!
   TBranch        *b_h2_OWNPV_XERR;   //!
   TBranch        *b_h2_OWNPV_YERR;   //!
   TBranch        *b_h2_OWNPV_ZERR;   //!
   TBranch        *b_h2_OWNPV_CHI2;   //!
   TBranch        *b_h2_OWNPV_NDOF;   //!
   TBranch        *b_h2_OWNPV_COV_;   //!
   TBranch        *b_h2_IP_OWNPV;   //!
   TBranch        *b_h2_IPCHI2_OWNPV;   //!
   TBranch        *b_h2_ORIVX_X;   //!
   TBranch        *b_h2_ORIVX_Y;   //!
   TBranch        *b_h2_ORIVX_Z;   //!
   TBranch        *b_h2_ORIVX_XERR;   //!
   TBranch        *b_h2_ORIVX_YERR;   //!
   TBranch        *b_h2_ORIVX_ZERR;   //!
   TBranch        *b_h2_ORIVX_CHI2;   //!
   TBranch        *b_h2_ORIVX_NDOF;   //!
   TBranch        *b_h2_ORIVX_COV_;   //!
   TBranch        *b_h2_Eta;   //!
   TBranch        *b_h2_Phi;   //!
   TBranch        *b_h2_MLoKi;   //!
   TBranch        *b_h2_MMLoKi;   //!
   TBranch        *b_h2_NTrk;   //!
   TBranch        *b_h2_N90;   //!
   TBranch        *b_h2_MTF;   //!
   TBranch        *b_h2_NSatCells;   //!
   TBranch        *b_h2_NHasPVInfo;   //!
   TBranch        *b_h2_JEC_Cor;   //!
   TBranch        *b_h2_JEC_PV;   //!
   TBranch        *b_h2_TRUEID;   //!
   TBranch        *b_h2_MC_MOTHER_ID;   //!
   TBranch        *b_h2_MC_MOTHER_KEY;   //!
   TBranch        *b_h2_MC_GD_MOTHER_ID;   //!
   TBranch        *b_h2_MC_GD_MOTHER_KEY;   //!
   TBranch        *b_h2_MC_GD_GD_MOTHER_ID;   //!
   TBranch        *b_h2_MC_GD_GD_MOTHER_KEY;   //!
   TBranch        *b_h2_TRUEP_E;   //!
   TBranch        *b_h2_TRUEP_X;   //!
   TBranch        *b_h2_TRUEP_Y;   //!
   TBranch        *b_h2_TRUEP_Z;   //!
   TBranch        *b_h2_TRUEPT;   //!
   TBranch        *b_h2_TRUEORIGINVERTEX_X;   //!
   TBranch        *b_h2_TRUEORIGINVERTEX_Y;   //!
   TBranch        *b_h2_TRUEORIGINVERTEX_Z;   //!
   TBranch        *b_h2_TRUEENDVERTEX_X;   //!
   TBranch        *b_h2_TRUEENDVERTEX_Y;   //!
   TBranch        *b_h2_TRUEENDVERTEX_Z;   //!
   TBranch        *b_h2_TRUEISSTABLE;   //!
   TBranch        *b_h2_TRUETAU;   //!
   TBranch        *b_h2_CombDLLMu;   //!
   TBranch        *b_h2_InMuonAcc;   //!
   TBranch        *b_h2_MuonDist2;   //!
   TBranch        *b_h2_regionInM2;   //!
   TBranch        *b_h2_isMuonLoose;   //!
   TBranch        *b_h2_NShared;   //!
   TBranch        *b_h2_MuonLLmu;   //!
   TBranch        *b_h2_MuonLLbg;   //!
   TBranch        *b_h2_isMuonFromProto;   //!
   TBranch        *b_h2_L0Global_Dec;   //!
   TBranch        *b_h2_L0Global_TIS;   //!
   TBranch        *b_h2_L0Global_TOS;   //!
   TBranch        *b_h2_Hlt1Global_Dec;   //!
   TBranch        *b_h2_Hlt1Global_TIS;   //!
   TBranch        *b_h2_Hlt1Global_TOS;   //!
   TBranch        *b_h2_Hlt1Phys_Dec;   //!
   TBranch        *b_h2_Hlt1Phys_TIS;   //!
   TBranch        *b_h2_Hlt1Phys_TOS;   //!
   TBranch        *b_h2_Hlt2Global_Dec;   //!
   TBranch        *b_h2_Hlt2Global_TIS;   //!
   TBranch        *b_h2_Hlt2Global_TOS;   //!
   TBranch        *b_h2_Hlt2Phys_Dec;   //!
   TBranch        *b_h2_Hlt2Phys_TIS;   //!
   TBranch        *b_h2_Hlt2Phys_TOS;   //!
   TBranch        *b_h2_L0MuonDecision_Dec;   //!
   TBranch        *b_h2_L0MuonDecision_TIS;   //!
   TBranch        *b_h2_L0MuonDecision_TOS;   //!
   TBranch        *b_h2_Hlt1TrackAllL0Decision_Dec;   //!
   TBranch        *b_h2_Hlt1TrackAllL0Decision_TIS;   //!
   TBranch        *b_h2_Hlt1TrackAllL0Decision_TOS;   //!
   TBranch        *b_h2_Hlt1TrackMuonDecision_Dec;   //!
   TBranch        *b_h2_Hlt1TrackMuonDecision_TIS;   //!
   TBranch        *b_h2_Hlt1TrackMuonDecision_TOS;   //!
   TBranch        *b_h2_TRACK_Type;   //!
   TBranch        *b_h2_TRACK_Key;   //!
   TBranch        *b_h2_TRACK_CHI2NDOF;   //!
   TBranch        *b_h2_TRACK_PCHI2;   //!
   TBranch        *b_h2_TRACK_MatchCHI2;   //!
   TBranch        *b_h2_TRACK_GhostProb;   //!
   TBranch        *b_h2_TRACK_CloneDist;   //!
   TBranch        *b_h2_TRACK_Likelihood;   //!
   TBranch        *b_nCandidate;   //!
   TBranch        *b_totCandidates;   //!
   TBranch        *b_EventInSequence;   //!
   TBranch        *b_runNumber;   //!
   TBranch        *b_eventNumber;   //!
   TBranch        *b_BCID;   //!
   TBranch        *b_BCType;   //!
   TBranch        *b_OdinTCK;   //!
   TBranch        *b_L0DUTCK;   //!
   TBranch        *b_HLT1TCK;   //!
   TBranch        *b_HLT2TCK;   //!
   TBranch        *b_GpsTime;   //!
   TBranch        *b_Polarity;   //!
   TBranch        *b_L0Data_DiMuon_Pt;   //!
   TBranch        *b_L0Data_DiMuonProd_Pt1Pt2;   //!
   TBranch        *b_L0Data_Electron_Et;   //!
   TBranch        *b_L0Data_GlobalPi0_Et;   //!
   TBranch        *b_L0Data_Hadron_Et;   //!
   TBranch        *b_L0Data_LocalPi0_Et;   //!
   TBranch        *b_L0Data_Muon1_Pt;   //!
   TBranch        *b_L0Data_Muon1_Sgn;   //!
   TBranch        *b_L0Data_Muon2_Pt;   //!
   TBranch        *b_L0Data_Muon2_Sgn;   //!
   TBranch        *b_L0Data_Muon3_Pt;   //!
   TBranch        *b_L0Data_Muon3_Sgn;   //!
   TBranch        *b_L0Data_PUHits_Mult;   //!
   TBranch        *b_L0Data_PUPeak1_Cont;   //!
   TBranch        *b_L0Data_PUPeak1_Pos;   //!
   TBranch        *b_L0Data_PUPeak2_Cont;   //!
   TBranch        *b_L0Data_PUPeak2_Pos;   //!
   TBranch        *b_L0Data_Photon_Et;   //!
   TBranch        *b_L0Data_Spd_Mult;   //!
   TBranch        *b_L0Data_Sum_Et;   //!
   TBranch        *b_L0Data_Sum_Et_Next1;   //!
   TBranch        *b_L0Data_Sum_Et_Next2;   //!
   TBranch        *b_L0Data_Sum_Et_Prev1;   //!
   TBranch        *b_L0Data_Sum_Et_Prev2;   //!
   TBranch        *b_nPVs;   //!
   TBranch        *b_nTracks;   //!
   TBranch        *b_nLongTracks;   //!
   TBranch        *b_nDownstreamTracks;   //!
   TBranch        *b_nUpstreamTracks;   //!
   TBranch        *b_nVeloTracks;   //!
   TBranch        *b_nTTracks;   //!
   TBranch        *b_nBackTracks;   //!
   TBranch        *b_nRich1Hits;   //!
   TBranch        *b_nRich2Hits;   //!
   TBranch        *b_nVeloClusters;   //!
   TBranch        *b_nITClusters;   //!
   TBranch        *b_nTTClusters;   //!
   TBranch        *b_nOTClusters;   //!
   TBranch        *b_nSPDHits;   //!
   TBranch        *b_nMuonCoordsS0;   //!
   TBranch        *b_nMuonCoordsS1;   //!
   TBranch        *b_nMuonCoordsS2;   //!
   TBranch        *b_nMuonCoordsS3;   //!
   TBranch        *b_nMuonCoordsS4;   //!
   TBranch        *b_nMuonTracks;   //!
   TBranch        *b_NumberOfHlt2NoCutsPions;   //!
   TBranch        *b_NumberOfHlt2GoodPions;   //!
   TBranch        *b_NumberOfHlt2Muons;   //!
   TBranch        *b_NumberOfHlt2Electrons;   //!
   TBranch        *b_NumberOfHlt2Photons;   //!
   TBranch        *b_NumberOfHlt2BiKalmanFittedRichKaons;   //!

   newntuple(TTree *tree=0);
   virtual ~newntuple();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
  // virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

newntuple::newntuple(TTree *tree) : fChain(0)
{
}

newntuple::~newntuple()
{
}

Int_t newntuple::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t newntuple::LoadTree(Long64_t entry)
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

void newntuple::Init(TTree *tree)
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

   fChain->SetBranchAddress("B_P", &B_P, &b_B_P);
   fChain->SetBranchAddress("B_PT", &B_PT, &b_B_PT);
   fChain->SetBranchAddress("B_PE", &B_PE, &b_B_PE);
   fChain->SetBranchAddress("B_PX", &B_PX, &b_B_PX);
   fChain->SetBranchAddress("B_PY", &B_PY, &b_B_PY);
   fChain->SetBranchAddress("B_PZ", &B_PZ, &b_B_PZ);
   fChain->SetBranchAddress("B_MM", &B_MM, &b_B_MM);
   fChain->SetBranchAddress("B_MMERR", &B_MMERR, &b_B_MMERR);
   fChain->SetBranchAddress("B_M", &B_M, &b_B_M);
   fChain->SetBranchAddress("B_ID", &B_ID, &b_B_ID);
   fChain->SetBranchAddress("B_M01", &B_M01, &b_B_M01);
   fChain->SetBranchAddress("B_VtxChi2_01", &B_VtxChi2_01, &b_B_VtxChi2_01);
   fChain->SetBranchAddress("B_VtxnDoF01", &B_VtxnDoF01, &b_B_VtxnDoF01);
   fChain->SetBranchAddress("B_VtxM01", &B_VtxM01, &b_B_VtxM01);
   fChain->SetBranchAddress("B_IP01", &B_IP01, &b_B_IP01);
   fChain->SetBranchAddress("B_IPChi2_01", &B_IPChi2_01, &b_B_IPChi2_01);
   fChain->SetBranchAddress("B_M02", &B_M02, &b_B_M02);
   fChain->SetBranchAddress("B_VtxChi2_02", &B_VtxChi2_02, &b_B_VtxChi2_02);
   fChain->SetBranchAddress("B_VtxnDoF02", &B_VtxnDoF02, &b_B_VtxnDoF02);
   fChain->SetBranchAddress("B_VtxM02", &B_VtxM02, &b_B_VtxM02);
   fChain->SetBranchAddress("B_IP02", &B_IP02, &b_B_IP02);
   fChain->SetBranchAddress("B_IPChi2_02", &B_IPChi2_02, &b_B_IPChi2_02);
   fChain->SetBranchAddress("B_M03", &B_M03, &b_B_M03);
   fChain->SetBranchAddress("B_VtxChi2_03", &B_VtxChi2_03, &b_B_VtxChi2_03);
   fChain->SetBranchAddress("B_VtxnDoF03", &B_VtxnDoF03, &b_B_VtxnDoF03);
   fChain->SetBranchAddress("B_VtxM03", &B_VtxM03, &b_B_VtxM03);
   fChain->SetBranchAddress("B_IP03", &B_IP03, &b_B_IP03);
   fChain->SetBranchAddress("B_IPChi2_03", &B_IPChi2_03, &b_B_IPChi2_03);
   fChain->SetBranchAddress("B_M12", &B_M12, &b_B_M12);
   fChain->SetBranchAddress("B_VtxChi2_12", &B_VtxChi2_12, &b_B_VtxChi2_12);
   fChain->SetBranchAddress("B_VtxnDoF12", &B_VtxnDoF12, &b_B_VtxnDoF12);
   fChain->SetBranchAddress("B_VtxM12", &B_VtxM12, &b_B_VtxM12);
   fChain->SetBranchAddress("B_IP12", &B_IP12, &b_B_IP12);
   fChain->SetBranchAddress("B_IPChi2_12", &B_IPChi2_12, &b_B_IPChi2_12);
   fChain->SetBranchAddress("B_M13", &B_M13, &b_B_M13);
   fChain->SetBranchAddress("B_VtxChi2_13", &B_VtxChi2_13, &b_B_VtxChi2_13);
   fChain->SetBranchAddress("B_VtxnDoF13", &B_VtxnDoF13, &b_B_VtxnDoF13);
   fChain->SetBranchAddress("B_VtxM13", &B_VtxM13, &b_B_VtxM13);
   fChain->SetBranchAddress("B_IP13", &B_IP13, &b_B_IP13);
   fChain->SetBranchAddress("B_IPChi2_13", &B_IPChi2_13, &b_B_IPChi2_13);
   fChain->SetBranchAddress("B_M23", &B_M23, &b_B_M23);
   fChain->SetBranchAddress("B_VtxChi2_23", &B_VtxChi2_23, &b_B_VtxChi2_23);
   fChain->SetBranchAddress("B_VtxnDoF23", &B_VtxnDoF23, &b_B_VtxnDoF23);
   fChain->SetBranchAddress("B_VtxM23", &B_VtxM23, &b_B_VtxM23);
   fChain->SetBranchAddress("B_IP23", &B_IP23, &b_B_IP23);
   fChain->SetBranchAddress("B_IPChi2_23", &B_IPChi2_23, &b_B_IPChi2_23);
   fChain->SetBranchAddress("B_M012", &B_M012, &b_B_M012);
   fChain->SetBranchAddress("B_VtxChi2_012", &B_VtxChi2_012, &b_B_VtxChi2_012);
   fChain->SetBranchAddress("B_VtxnDoF012", &B_VtxnDoF012, &b_B_VtxnDoF012);
   fChain->SetBranchAddress("B_VtxM012", &B_VtxM012, &b_B_VtxM012);
   fChain->SetBranchAddress("B_IP012", &B_IP012, &b_B_IP012);
   fChain->SetBranchAddress("B_IPChi2_012", &B_IPChi2_012, &b_B_IPChi2_012);
   fChain->SetBranchAddress("B_M013", &B_M013, &b_B_M013);
   fChain->SetBranchAddress("B_VtxChi2_013", &B_VtxChi2_013, &b_B_VtxChi2_013);
   fChain->SetBranchAddress("B_VtxnDoF013", &B_VtxnDoF013, &b_B_VtxnDoF013);
   fChain->SetBranchAddress("B_VtxM013", &B_VtxM013, &b_B_VtxM013);
   fChain->SetBranchAddress("B_IP013", &B_IP013, &b_B_IP013);
   fChain->SetBranchAddress("B_IPChi2_013", &B_IPChi2_013, &b_B_IPChi2_013);
   fChain->SetBranchAddress("B_M023", &B_M023, &b_B_M023);
   fChain->SetBranchAddress("B_VtxChi2_023", &B_VtxChi2_023, &b_B_VtxChi2_023);
   fChain->SetBranchAddress("B_VtxnDoF023", &B_VtxnDoF023, &b_B_VtxnDoF023);
   fChain->SetBranchAddress("B_VtxM023", &B_VtxM023, &b_B_VtxM023);
   fChain->SetBranchAddress("B_IP023", &B_IP023, &b_B_IP023);
   fChain->SetBranchAddress("B_IPChi2_023", &B_IPChi2_023, &b_B_IPChi2_023);
   fChain->SetBranchAddress("B_M123", &B_M123, &b_B_M123);
   fChain->SetBranchAddress("B_VtxChi2_123", &B_VtxChi2_123, &b_B_VtxChi2_123);
   fChain->SetBranchAddress("B_VtxnDoF123", &B_VtxnDoF123, &b_B_VtxnDoF123);
   fChain->SetBranchAddress("B_VtxM123", &B_VtxM123, &b_B_VtxM123);
   fChain->SetBranchAddress("B_IP123", &B_IP123, &b_B_IP123);
   fChain->SetBranchAddress("B_IPChi2_123", &B_IPChi2_123, &b_B_IPChi2_123);
   fChain->SetBranchAddress("B_M0123", &B_M0123, &b_B_M0123);
   fChain->SetBranchAddress("B_VtxChi2_0123", &B_VtxChi2_0123, &b_B_VtxChi2_0123);
   fChain->SetBranchAddress("B_VtxnDoF0123", &B_VtxnDoF0123, &b_B_VtxnDoF0123);
   fChain->SetBranchAddress("B_VtxM0123", &B_VtxM0123, &b_B_VtxM0123);
   fChain->SetBranchAddress("B_IP0123", &B_IP0123, &b_B_IP0123);
   fChain->SetBranchAddress("B_IPChi2_0123", &B_IPChi2_0123, &b_B_IPChi2_0123);
   fChain->SetBranchAddress("B_coneiso_DeltaEta", &B_coneiso_DeltaEta, &b_B_coneiso_DeltaEta);
   fChain->SetBranchAddress("B_coneiso_DeltaPhi", &B_coneiso_DeltaPhi, &b_B_coneiso_DeltaPhi);
   fChain->SetBranchAddress("B_coneiso_P", &B_coneiso_P, &b_B_coneiso_P);
   fChain->SetBranchAddress("B_coneiso_PAsy", &B_coneiso_PAsy, &b_B_coneiso_PAsy);
   fChain->SetBranchAddress("B_coneiso_PT", &B_coneiso_PT, &b_B_coneiso_PT);
   fChain->SetBranchAddress("B_coneiso_PTAsy", &B_coneiso_PTAsy, &b_B_coneiso_PTAsy);
   fChain->SetBranchAddress("B_coneiso_PX", &B_coneiso_PX, &b_B_coneiso_PX);
   fChain->SetBranchAddress("B_coneiso_PXAsy", &B_coneiso_PXAsy, &b_B_coneiso_PXAsy);
   fChain->SetBranchAddress("B_coneiso_PY", &B_coneiso_PY, &b_B_coneiso_PY);
   fChain->SetBranchAddress("B_coneiso_PYAsy", &B_coneiso_PYAsy, &b_B_coneiso_PYAsy);
   fChain->SetBranchAddress("B_coneiso_PZ", &B_coneiso_PZ, &b_B_coneiso_PZ);
   fChain->SetBranchAddress("B_coneiso_PZAsy", &B_coneiso_PZAsy, &b_B_coneiso_PZAsy);
   fChain->SetBranchAddress("B_coneiso_angle", &B_coneiso_angle, &b_B_coneiso_angle);
   fChain->SetBranchAddress("B_coneiso_mult", &B_coneiso_mult, &b_B_coneiso_mult);
   fChain->SetBranchAddress("B_vbdtiso_h1", &B_vbdtiso_h1, &b_B_vbdtiso_h1);
   fChain->SetBranchAddress("B_vbdtiso_h2", &B_vbdtiso_h2, &b_B_vbdtiso_h2);
   fChain->SetBranchAddress("B_vbdtiso_h3", &B_vbdtiso_h3, &b_B_vbdtiso_h3);
   fChain->SetBranchAddress("B_vbdtiso_s1", &B_vbdtiso_s1, &b_B_vbdtiso_s1);
   fChain->SetBranchAddress("B_vbdtiso_s2", &B_vbdtiso_s2, &b_B_vbdtiso_s2);
   fChain->SetBranchAddress("B_vbdtiso_s3", &B_vbdtiso_s3, &b_B_vbdtiso_s3);
   fChain->SetBranchAddress("B_vtxiso_dchi2_1", &B_vtxiso_dchi2_1, &b_B_vtxiso_dchi2_1);
   fChain->SetBranchAddress("B_vtxiso_dchi2_2", &B_vtxiso_dchi2_2, &b_B_vtxiso_dchi2_2);
   fChain->SetBranchAddress("B_vtxiso_dchi2_mass1", &B_vtxiso_dchi2_mass1, &b_B_vtxiso_dchi2_mass1);
   fChain->SetBranchAddress("B_vtxiso_dchi2_mass2", &B_vtxiso_dchi2_mass2, &b_B_vtxiso_dchi2_mass2);
   fChain->SetBranchAddress("B_vtxiso_num", &B_vtxiso_num, &b_B_vtxiso_num);
   fChain->SetBranchAddress("B_DiraAngleError", &B_DiraAngleError, &b_B_DiraAngleError);
   fChain->SetBranchAddress("B_DiraCosError", &B_DiraCosError, &b_B_DiraCosError);
   fChain->SetBranchAddress("B_DiraAngle", &B_DiraAngle, &b_B_DiraAngle);
   fChain->SetBranchAddress("B_DiraCos", &B_DiraCos, &b_B_DiraCos);
   fChain->SetBranchAddress("B_ENDVERTEX_X", &B_ENDVERTEX_X, &b_B_ENDVERTEX_X);
   fChain->SetBranchAddress("B_ENDVERTEX_Y", &B_ENDVERTEX_Y, &b_B_ENDVERTEX_Y);
   fChain->SetBranchAddress("B_ENDVERTEX_Z", &B_ENDVERTEX_Z, &b_B_ENDVERTEX_Z);
   fChain->SetBranchAddress("B_ENDVERTEX_XERR", &B_ENDVERTEX_XERR, &b_B_ENDVERTEX_XERR);
   fChain->SetBranchAddress("B_ENDVERTEX_YERR", &B_ENDVERTEX_YERR, &b_B_ENDVERTEX_YERR);
   fChain->SetBranchAddress("B_ENDVERTEX_ZERR", &B_ENDVERTEX_ZERR, &b_B_ENDVERTEX_ZERR);
   fChain->SetBranchAddress("B_ENDVERTEX_CHI2", &B_ENDVERTEX_CHI2, &b_B_ENDVERTEX_CHI2);
   fChain->SetBranchAddress("B_ENDVERTEX_NDOF", &B_ENDVERTEX_NDOF, &b_B_ENDVERTEX_NDOF);
   fChain->SetBranchAddress("B_ENDVERTEX_COV_", B_ENDVERTEX_COV_, &b_B_ENDVERTEX_COV_);
   fChain->SetBranchAddress("B_OWNPV_X", &B_OWNPV_X, &b_B_OWNPV_X);
   fChain->SetBranchAddress("B_OWNPV_Y", &B_OWNPV_Y, &b_B_OWNPV_Y);
   fChain->SetBranchAddress("B_OWNPV_Z", &B_OWNPV_Z, &b_B_OWNPV_Z);
   fChain->SetBranchAddress("B_OWNPV_XERR", &B_OWNPV_XERR, &b_B_OWNPV_XERR);
   fChain->SetBranchAddress("B_OWNPV_YERR", &B_OWNPV_YERR, &b_B_OWNPV_YERR);
   fChain->SetBranchAddress("B_OWNPV_ZERR", &B_OWNPV_ZERR, &b_B_OWNPV_ZERR);
   fChain->SetBranchAddress("B_OWNPV_CHI2", &B_OWNPV_CHI2, &b_B_OWNPV_CHI2);
   fChain->SetBranchAddress("B_OWNPV_NDOF", &B_OWNPV_NDOF, &b_B_OWNPV_NDOF);
   fChain->SetBranchAddress("B_OWNPV_COV_", B_OWNPV_COV_, &b_B_OWNPV_COV_);
   fChain->SetBranchAddress("B_IP_OWNPV", &B_IP_OWNPV, &b_B_IP_OWNPV);
   fChain->SetBranchAddress("B_IPCHI2_OWNPV", &B_IPCHI2_OWNPV, &b_B_IPCHI2_OWNPV);
   fChain->SetBranchAddress("B_FD_OWNPV", &B_FD_OWNPV, &b_B_FD_OWNPV);
   fChain->SetBranchAddress("B_FDCHI2_OWNPV", &B_FDCHI2_OWNPV, &b_B_FDCHI2_OWNPV);
   fChain->SetBranchAddress("B_DIRA_OWNPV", &B_DIRA_OWNPV, &b_B_DIRA_OWNPV);
   fChain->SetBranchAddress("B_Eta", &B_Eta, &b_B_Eta);
   fChain->SetBranchAddress("B_Phi", &B_Phi, &b_B_Phi);
   fChain->SetBranchAddress("B_MLoKi", &B_MLoKi, &b_B_MLoKi);
   fChain->SetBranchAddress("B_MMLoKi", &B_MMLoKi, &b_B_MMLoKi);
   fChain->SetBranchAddress("B_NTrk", &B_NTrk, &b_B_NTrk);
   fChain->SetBranchAddress("B_N90", &B_N90, &b_B_N90);
   fChain->SetBranchAddress("B_MTF", &B_MTF, &b_B_MTF);
   fChain->SetBranchAddress("B_NSatCells", &B_NSatCells, &b_B_NSatCells);
   fChain->SetBranchAddress("B_NHasPVInfo", &B_NHasPVInfo, &b_B_NHasPVInfo);
   fChain->SetBranchAddress("B_JEC_Cor", &B_JEC_Cor, &b_B_JEC_Cor);
   fChain->SetBranchAddress("B_JEC_PV", &B_JEC_PV, &b_B_JEC_PV);
   fChain->SetBranchAddress("B_BKGCAT", &B_BKGCAT, &b_B_BKGCAT);
   fChain->SetBranchAddress("B_TRUEID", &B_TRUEID, &b_B_TRUEID);
   fChain->SetBranchAddress("B_MC_MOTHER_ID", &B_MC_MOTHER_ID, &b_B_MC_MOTHER_ID);
   fChain->SetBranchAddress("B_MC_MOTHER_KEY", &B_MC_MOTHER_KEY, &b_B_MC_MOTHER_KEY);
   fChain->SetBranchAddress("B_MC_GD_MOTHER_ID", &B_MC_GD_MOTHER_ID, &b_B_MC_GD_MOTHER_ID);
   fChain->SetBranchAddress("B_MC_GD_MOTHER_KEY", &B_MC_GD_MOTHER_KEY, &b_B_MC_GD_MOTHER_KEY);
   fChain->SetBranchAddress("B_MC_GD_GD_MOTHER_ID", &B_MC_GD_GD_MOTHER_ID, &b_B_MC_GD_GD_MOTHER_ID);
   fChain->SetBranchAddress("B_MC_GD_GD_MOTHER_KEY", &B_MC_GD_GD_MOTHER_KEY, &b_B_MC_GD_GD_MOTHER_KEY);
   fChain->SetBranchAddress("B_TRUEP_E", &B_TRUEP_E, &b_B_TRUEP_E);
   fChain->SetBranchAddress("B_TRUEP_X", &B_TRUEP_X, &b_B_TRUEP_X);
   fChain->SetBranchAddress("B_TRUEP_Y", &B_TRUEP_Y, &b_B_TRUEP_Y);
   fChain->SetBranchAddress("B_TRUEP_Z", &B_TRUEP_Z, &b_B_TRUEP_Z);
   fChain->SetBranchAddress("B_TRUEPT", &B_TRUEPT, &b_B_TRUEPT);
   fChain->SetBranchAddress("B_TRUEORIGINVERTEX_X", &B_TRUEORIGINVERTEX_X, &b_B_TRUEORIGINVERTEX_X);
   fChain->SetBranchAddress("B_TRUEORIGINVERTEX_Y", &B_TRUEORIGINVERTEX_Y, &b_B_TRUEORIGINVERTEX_Y);
   fChain->SetBranchAddress("B_TRUEORIGINVERTEX_Z", &B_TRUEORIGINVERTEX_Z, &b_B_TRUEORIGINVERTEX_Z);
   fChain->SetBranchAddress("B_TRUEENDVERTEX_X", &B_TRUEENDVERTEX_X, &b_B_TRUEENDVERTEX_X);
   fChain->SetBranchAddress("B_TRUEENDVERTEX_Y", &B_TRUEENDVERTEX_Y, &b_B_TRUEENDVERTEX_Y);
   fChain->SetBranchAddress("B_TRUEENDVERTEX_Z", &B_TRUEENDVERTEX_Z, &b_B_TRUEENDVERTEX_Z);
   fChain->SetBranchAddress("B_TRUEISSTABLE", &B_TRUEISSTABLE, &b_B_TRUEISSTABLE);
   fChain->SetBranchAddress("B_TRUETAU", &B_TRUETAU, &b_B_TRUETAU);
   fChain->SetBranchAddress("B_ThetaL", &B_ThetaL, &b_B_ThetaL);
   fChain->SetBranchAddress("B_ThetaK", &B_ThetaK, &b_B_ThetaK);
   fChain->SetBranchAddress("B_ThetaTr", &B_ThetaTr, &b_B_ThetaTr);
   fChain->SetBranchAddress("B_PhiTr", &B_PhiTr, &b_B_PhiTr);
   fChain->SetBranchAddress("B_ThetaVtr", &B_ThetaVtr, &b_B_ThetaVtr);
   fChain->SetBranchAddress("B_TAU", &B_TAU, &b_B_TAU);
   fChain->SetBranchAddress("B_TAUERR", &B_TAUERR, &b_B_TAUERR);
   fChain->SetBranchAddress("B_TAUCHI2", &B_TAUCHI2, &b_B_TAUCHI2);
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
   fChain->SetBranchAddress("d1_P", &d1_P, &b_d1_P);
   fChain->SetBranchAddress("d1_PT", &d1_PT, &b_d1_PT);
   fChain->SetBranchAddress("d1_PE", &d1_PE, &b_d1_PE);
   fChain->SetBranchAddress("d1_PX", &d1_PX, &b_d1_PX);
   fChain->SetBranchAddress("d1_PY", &d1_PY, &b_d1_PY);
   fChain->SetBranchAddress("d1_PZ", &d1_PZ, &b_d1_PZ);
   fChain->SetBranchAddress("d1_MM", &d1_MM, &b_d1_MM);
   fChain->SetBranchAddress("d1_MMERR", &d1_MMERR, &b_d1_MMERR);
   fChain->SetBranchAddress("d1_M", &d1_M, &b_d1_M);
   fChain->SetBranchAddress("d1_ID", &d1_ID, &b_d1_ID);
   fChain->SetBranchAddress("d1_M01", &d1_M01, &b_d1_M01);
   fChain->SetBranchAddress("d1_VtxChi2_01", &d1_VtxChi2_01, &b_d1_VtxChi2_01);
   fChain->SetBranchAddress("d1_VtxnDoF01", &d1_VtxnDoF01, &b_d1_VtxnDoF01);
   fChain->SetBranchAddress("d1_VtxM01", &d1_VtxM01, &b_d1_VtxM01);
   fChain->SetBranchAddress("d1_IP01", &d1_IP01, &b_d1_IP01);
   fChain->SetBranchAddress("d1_IPChi2_01", &d1_IPChi2_01, &b_d1_IPChi2_01);
   fChain->SetBranchAddress("d1_CosTheta", &d1_CosTheta, &b_d1_CosTheta);
   fChain->SetBranchAddress("d1_ENDVERTEX_X", &d1_ENDVERTEX_X, &b_d1_ENDVERTEX_X);
   fChain->SetBranchAddress("d1_ENDVERTEX_Y", &d1_ENDVERTEX_Y, &b_d1_ENDVERTEX_Y);
   fChain->SetBranchAddress("d1_ENDVERTEX_Z", &d1_ENDVERTEX_Z, &b_d1_ENDVERTEX_Z);
   fChain->SetBranchAddress("d1_ENDVERTEX_XERR", &d1_ENDVERTEX_XERR, &b_d1_ENDVERTEX_XERR);
   fChain->SetBranchAddress("d1_ENDVERTEX_YERR", &d1_ENDVERTEX_YERR, &b_d1_ENDVERTEX_YERR);
   fChain->SetBranchAddress("d1_ENDVERTEX_ZERR", &d1_ENDVERTEX_ZERR, &b_d1_ENDVERTEX_ZERR);
   fChain->SetBranchAddress("d1_ENDVERTEX_CHI2", &d1_ENDVERTEX_CHI2, &b_d1_ENDVERTEX_CHI2);
   fChain->SetBranchAddress("d1_ENDVERTEX_NDOF", &d1_ENDVERTEX_NDOF, &b_d1_ENDVERTEX_NDOF);
   fChain->SetBranchAddress("d1_ENDVERTEX_COV_", d1_ENDVERTEX_COV_, &b_d1_ENDVERTEX_COV_);
   fChain->SetBranchAddress("d1_OWNPV_X", &d1_OWNPV_X, &b_d1_OWNPV_X);
   fChain->SetBranchAddress("d1_OWNPV_Y", &d1_OWNPV_Y, &b_d1_OWNPV_Y);
   fChain->SetBranchAddress("d1_OWNPV_Z", &d1_OWNPV_Z, &b_d1_OWNPV_Z);
   fChain->SetBranchAddress("d1_OWNPV_XERR", &d1_OWNPV_XERR, &b_d1_OWNPV_XERR);
   fChain->SetBranchAddress("d1_OWNPV_YERR", &d1_OWNPV_YERR, &b_d1_OWNPV_YERR);
   fChain->SetBranchAddress("d1_OWNPV_ZERR", &d1_OWNPV_ZERR, &b_d1_OWNPV_ZERR);
   fChain->SetBranchAddress("d1_OWNPV_CHI2", &d1_OWNPV_CHI2, &b_d1_OWNPV_CHI2);
   fChain->SetBranchAddress("d1_OWNPV_NDOF", &d1_OWNPV_NDOF, &b_d1_OWNPV_NDOF);
   fChain->SetBranchAddress("d1_OWNPV_COV_", d1_OWNPV_COV_, &b_d1_OWNPV_COV_);
   fChain->SetBranchAddress("d1_IP_OWNPV", &d1_IP_OWNPV, &b_d1_IP_OWNPV);
   fChain->SetBranchAddress("d1_IPCHI2_OWNPV", &d1_IPCHI2_OWNPV, &b_d1_IPCHI2_OWNPV);
   fChain->SetBranchAddress("d1_FD_OWNPV", &d1_FD_OWNPV, &b_d1_FD_OWNPV);
   fChain->SetBranchAddress("d1_FDCHI2_OWNPV", &d1_FDCHI2_OWNPV, &b_d1_FDCHI2_OWNPV);
   fChain->SetBranchAddress("d1_DIRA_OWNPV", &d1_DIRA_OWNPV, &b_d1_DIRA_OWNPV);
   fChain->SetBranchAddress("d1_ORIVX_X", &d1_ORIVX_X, &b_d1_ORIVX_X);
   fChain->SetBranchAddress("d1_ORIVX_Y", &d1_ORIVX_Y, &b_d1_ORIVX_Y);
   fChain->SetBranchAddress("d1_ORIVX_Z", &d1_ORIVX_Z, &b_d1_ORIVX_Z);
   fChain->SetBranchAddress("d1_ORIVX_XERR", &d1_ORIVX_XERR, &b_d1_ORIVX_XERR);
   fChain->SetBranchAddress("d1_ORIVX_YERR", &d1_ORIVX_YERR, &b_d1_ORIVX_YERR);
   fChain->SetBranchAddress("d1_ORIVX_ZERR", &d1_ORIVX_ZERR, &b_d1_ORIVX_ZERR);
   fChain->SetBranchAddress("d1_ORIVX_CHI2", &d1_ORIVX_CHI2, &b_d1_ORIVX_CHI2);
   fChain->SetBranchAddress("d1_ORIVX_NDOF", &d1_ORIVX_NDOF, &b_d1_ORIVX_NDOF);
   fChain->SetBranchAddress("d1_ORIVX_COV_", d1_ORIVX_COV_, &b_d1_ORIVX_COV_);
   fChain->SetBranchAddress("d1_FD_ORIVX", &d1_FD_ORIVX, &b_d1_FD_ORIVX);
   fChain->SetBranchAddress("d1_FDCHI2_ORIVX", &d1_FDCHI2_ORIVX, &b_d1_FDCHI2_ORIVX);
   fChain->SetBranchAddress("d1_DIRA_ORIVX", &d1_DIRA_ORIVX, &b_d1_DIRA_ORIVX);
   fChain->SetBranchAddress("d1_Eta", &d1_Eta, &b_d1_Eta);
   fChain->SetBranchAddress("d1_Phi", &d1_Phi, &b_d1_Phi);
   fChain->SetBranchAddress("d1_MLoKi", &d1_MLoKi, &b_d1_MLoKi);
   fChain->SetBranchAddress("d1_MMLoKi", &d1_MMLoKi, &b_d1_MMLoKi);
   fChain->SetBranchAddress("d1_NTrk", &d1_NTrk, &b_d1_NTrk);
   fChain->SetBranchAddress("d1_N90", &d1_N90, &b_d1_N90);
   fChain->SetBranchAddress("d1_MTF", &d1_MTF, &b_d1_MTF);
   fChain->SetBranchAddress("d1_NSatCells", &d1_NSatCells, &b_d1_NSatCells);
   fChain->SetBranchAddress("d1_NHasPVInfo", &d1_NHasPVInfo, &b_d1_NHasPVInfo);
   fChain->SetBranchAddress("d1_JEC_Cor", &d1_JEC_Cor, &b_d1_JEC_Cor);
   fChain->SetBranchAddress("d1_JEC_PV", &d1_JEC_PV, &b_d1_JEC_PV);
   fChain->SetBranchAddress("d1_BKGCAT", &d1_BKGCAT, &b_d1_BKGCAT);
   fChain->SetBranchAddress("d1_TRUEID", &d1_TRUEID, &b_d1_TRUEID);
   fChain->SetBranchAddress("d1_MC_MOTHER_ID", &d1_MC_MOTHER_ID, &b_d1_MC_MOTHER_ID);
   fChain->SetBranchAddress("d1_MC_MOTHER_KEY", &d1_MC_MOTHER_KEY, &b_d1_MC_MOTHER_KEY);
   fChain->SetBranchAddress("d1_MC_GD_MOTHER_ID", &d1_MC_GD_MOTHER_ID, &b_d1_MC_GD_MOTHER_ID);
   fChain->SetBranchAddress("d1_MC_GD_MOTHER_KEY", &d1_MC_GD_MOTHER_KEY, &b_d1_MC_GD_MOTHER_KEY);
   fChain->SetBranchAddress("d1_MC_GD_GD_MOTHER_ID", &d1_MC_GD_GD_MOTHER_ID, &b_d1_MC_GD_GD_MOTHER_ID);
   fChain->SetBranchAddress("d1_MC_GD_GD_MOTHER_KEY", &d1_MC_GD_GD_MOTHER_KEY, &b_d1_MC_GD_GD_MOTHER_KEY);
   fChain->SetBranchAddress("d1_TRUEP_E", &d1_TRUEP_E, &b_d1_TRUEP_E);
   fChain->SetBranchAddress("d1_TRUEP_X", &d1_TRUEP_X, &b_d1_TRUEP_X);
   fChain->SetBranchAddress("d1_TRUEP_Y", &d1_TRUEP_Y, &b_d1_TRUEP_Y);
   fChain->SetBranchAddress("d1_TRUEP_Z", &d1_TRUEP_Z, &b_d1_TRUEP_Z);
   fChain->SetBranchAddress("d1_TRUEPT", &d1_TRUEPT, &b_d1_TRUEPT);
   fChain->SetBranchAddress("d1_TRUEORIGINVERTEX_X", &d1_TRUEORIGINVERTEX_X, &b_d1_TRUEORIGINVERTEX_X);
   fChain->SetBranchAddress("d1_TRUEORIGINVERTEX_Y", &d1_TRUEORIGINVERTEX_Y, &b_d1_TRUEORIGINVERTEX_Y);
   fChain->SetBranchAddress("d1_TRUEORIGINVERTEX_Z", &d1_TRUEORIGINVERTEX_Z, &b_d1_TRUEORIGINVERTEX_Z);
   fChain->SetBranchAddress("d1_TRUEENDVERTEX_X", &d1_TRUEENDVERTEX_X, &b_d1_TRUEENDVERTEX_X);
   fChain->SetBranchAddress("d1_TRUEENDVERTEX_Y", &d1_TRUEENDVERTEX_Y, &b_d1_TRUEENDVERTEX_Y);
   fChain->SetBranchAddress("d1_TRUEENDVERTEX_Z", &d1_TRUEENDVERTEX_Z, &b_d1_TRUEENDVERTEX_Z);
   fChain->SetBranchAddress("d1_TRUEISSTABLE", &d1_TRUEISSTABLE, &b_d1_TRUEISSTABLE);
   fChain->SetBranchAddress("d1_TRUETAU", &d1_TRUETAU, &b_d1_TRUETAU);
   fChain->SetBranchAddress("d1_TAU", &d1_TAU, &b_d1_TAU);
   fChain->SetBranchAddress("d1_TAUERR", &d1_TAUERR, &b_d1_TAUERR);
   fChain->SetBranchAddress("d1_TAUCHI2", &d1_TAUCHI2, &b_d1_TAUCHI2);
   fChain->SetBranchAddress("d1_L0Global_Dec", &d1_L0Global_Dec, &b_d1_L0Global_Dec);
   fChain->SetBranchAddress("d1_L0Global_TIS", &d1_L0Global_TIS, &b_d1_L0Global_TIS);
   fChain->SetBranchAddress("d1_L0Global_TOS", &d1_L0Global_TOS, &b_d1_L0Global_TOS);
   fChain->SetBranchAddress("d1_Hlt1Global_Dec", &d1_Hlt1Global_Dec, &b_d1_Hlt1Global_Dec);
   fChain->SetBranchAddress("d1_Hlt1Global_TIS", &d1_Hlt1Global_TIS, &b_d1_Hlt1Global_TIS);
   fChain->SetBranchAddress("d1_Hlt1Global_TOS", &d1_Hlt1Global_TOS, &b_d1_Hlt1Global_TOS);
   fChain->SetBranchAddress("d1_Hlt1Phys_Dec", &d1_Hlt1Phys_Dec, &b_d1_Hlt1Phys_Dec);
   fChain->SetBranchAddress("d1_Hlt1Phys_TIS", &d1_Hlt1Phys_TIS, &b_d1_Hlt1Phys_TIS);
   fChain->SetBranchAddress("d1_Hlt1Phys_TOS", &d1_Hlt1Phys_TOS, &b_d1_Hlt1Phys_TOS);
   fChain->SetBranchAddress("d1_Hlt2Global_Dec", &d1_Hlt2Global_Dec, &b_d1_Hlt2Global_Dec);
   fChain->SetBranchAddress("d1_Hlt2Global_TIS", &d1_Hlt2Global_TIS, &b_d1_Hlt2Global_TIS);
   fChain->SetBranchAddress("d1_Hlt2Global_TOS", &d1_Hlt2Global_TOS, &b_d1_Hlt2Global_TOS);
   fChain->SetBranchAddress("d1_Hlt2Phys_Dec", &d1_Hlt2Phys_Dec, &b_d1_Hlt2Phys_Dec);
   fChain->SetBranchAddress("d1_Hlt2Phys_TIS", &d1_Hlt2Phys_TIS, &b_d1_Hlt2Phys_TIS);
   fChain->SetBranchAddress("d1_Hlt2Phys_TOS", &d1_Hlt2Phys_TOS, &b_d1_Hlt2Phys_TOS);
   fChain->SetBranchAddress("d1_L0MuonDecision_Dec", &d1_L0MuonDecision_Dec, &b_d1_L0MuonDecision_Dec);
   fChain->SetBranchAddress("d1_L0MuonDecision_TIS", &d1_L0MuonDecision_TIS, &b_d1_L0MuonDecision_TIS);
   fChain->SetBranchAddress("d1_L0MuonDecision_TOS", &d1_L0MuonDecision_TOS, &b_d1_L0MuonDecision_TOS);
   fChain->SetBranchAddress("d1_Hlt1TrackAllL0Decision_Dec", &d1_Hlt1TrackAllL0Decision_Dec, &b_d1_Hlt1TrackAllL0Decision_Dec);
   fChain->SetBranchAddress("d1_Hlt1TrackAllL0Decision_TIS", &d1_Hlt1TrackAllL0Decision_TIS, &b_d1_Hlt1TrackAllL0Decision_TIS);
   fChain->SetBranchAddress("d1_Hlt1TrackAllL0Decision_TOS", &d1_Hlt1TrackAllL0Decision_TOS, &b_d1_Hlt1TrackAllL0Decision_TOS);
   fChain->SetBranchAddress("d1_Hlt1TrackMuonDecision_Dec", &d1_Hlt1TrackMuonDecision_Dec, &b_d1_Hlt1TrackMuonDecision_Dec);
   fChain->SetBranchAddress("d1_Hlt1TrackMuonDecision_TIS", &d1_Hlt1TrackMuonDecision_TIS, &b_d1_Hlt1TrackMuonDecision_TIS);
   fChain->SetBranchAddress("d1_Hlt1TrackMuonDecision_TOS", &d1_Hlt1TrackMuonDecision_TOS, &b_d1_Hlt1TrackMuonDecision_TOS);
   fChain->SetBranchAddress("l1_MC12TuneV2_ProbNNe", &l1_MC12TuneV2_ProbNNe, &b_l1_MC12TuneV2_ProbNNe);
   fChain->SetBranchAddress("l1_MC12TuneV2_ProbNNmu", &l1_MC12TuneV2_ProbNNmu, &b_l1_MC12TuneV2_ProbNNmu);
   fChain->SetBranchAddress("l1_MC12TuneV2_ProbNNpi", &l1_MC12TuneV2_ProbNNpi, &b_l1_MC12TuneV2_ProbNNpi);
   fChain->SetBranchAddress("l1_MC12TuneV2_ProbNNk", &l1_MC12TuneV2_ProbNNk, &b_l1_MC12TuneV2_ProbNNk);
   fChain->SetBranchAddress("l1_MC12TuneV2_ProbNNp", &l1_MC12TuneV2_ProbNNp, &b_l1_MC12TuneV2_ProbNNp);
   fChain->SetBranchAddress("l1_MC12TuneV2_ProbNNghost", &l1_MC12TuneV2_ProbNNghost, &b_l1_MC12TuneV2_ProbNNghost);
   fChain->SetBranchAddress("l1_MC12TuneV3_ProbNNe", &l1_MC12TuneV3_ProbNNe, &b_l1_MC12TuneV3_ProbNNe);
   fChain->SetBranchAddress("l1_MC12TuneV3_ProbNNmu", &l1_MC12TuneV3_ProbNNmu, &b_l1_MC12TuneV3_ProbNNmu);
   fChain->SetBranchAddress("l1_MC12TuneV3_ProbNNpi", &l1_MC12TuneV3_ProbNNpi, &b_l1_MC12TuneV3_ProbNNpi);
   fChain->SetBranchAddress("l1_MC12TuneV3_ProbNNk", &l1_MC12TuneV3_ProbNNk, &b_l1_MC12TuneV3_ProbNNk);
   fChain->SetBranchAddress("l1_MC12TuneV3_ProbNNp", &l1_MC12TuneV3_ProbNNp, &b_l1_MC12TuneV3_ProbNNp);
   fChain->SetBranchAddress("l1_MC12TuneV3_ProbNNghost", &l1_MC12TuneV3_ProbNNghost, &b_l1_MC12TuneV3_ProbNNghost);
   fChain->SetBranchAddress("l1_P", &l1_P, &b_l1_P);
   fChain->SetBranchAddress("l1_PT", &l1_PT, &b_l1_PT);
   fChain->SetBranchAddress("l1_PE", &l1_PE, &b_l1_PE);
   fChain->SetBranchAddress("l1_PX", &l1_PX, &b_l1_PX);
   fChain->SetBranchAddress("l1_PY", &l1_PY, &b_l1_PY);
   fChain->SetBranchAddress("l1_PZ", &l1_PZ, &b_l1_PZ);
   fChain->SetBranchAddress("l1_M", &l1_M, &b_l1_M);
   fChain->SetBranchAddress("l1_L0Calo_HCAL_realET", &l1_L0Calo_HCAL_realET, &b_l1_L0Calo_HCAL_realET);
   fChain->SetBranchAddress("l1_L0Calo_HCAL_xProjection", &l1_L0Calo_HCAL_xProjection, &b_l1_L0Calo_HCAL_xProjection);
   fChain->SetBranchAddress("l1_L0Calo_HCAL_yProjection", &l1_L0Calo_HCAL_yProjection, &b_l1_L0Calo_HCAL_yProjection);
   fChain->SetBranchAddress("l1_L0Calo_HCAL_region", &l1_L0Calo_HCAL_region, &b_l1_L0Calo_HCAL_region);
   fChain->SetBranchAddress("l1_L0Calo_HCAL_TriggerET", &l1_L0Calo_HCAL_TriggerET, &b_l1_L0Calo_HCAL_TriggerET);
   fChain->SetBranchAddress("l1_L0Calo_HCAL_TriggerHCALET", &l1_L0Calo_HCAL_TriggerHCALET, &b_l1_L0Calo_HCAL_TriggerHCALET);
   fChain->SetBranchAddress("l1_L0Calo_HCAL_xTrigger", &l1_L0Calo_HCAL_xTrigger, &b_l1_L0Calo_HCAL_xTrigger);
   fChain->SetBranchAddress("l1_L0Calo_HCAL_yTrigger", &l1_L0Calo_HCAL_yTrigger, &b_l1_L0Calo_HCAL_yTrigger);
   fChain->SetBranchAddress("l1_ID", &l1_ID, &b_l1_ID);
   fChain->SetBranchAddress("l1_PIDe", &l1_PIDe, &b_l1_PIDe);
   fChain->SetBranchAddress("l1_PIDmu", &l1_PIDmu, &b_l1_PIDmu);
   fChain->SetBranchAddress("l1_PIDK", &l1_PIDK, &b_l1_PIDK);
   fChain->SetBranchAddress("l1_PIDp", &l1_PIDp, &b_l1_PIDp);
   fChain->SetBranchAddress("l1_ProbNNe", &l1_ProbNNe, &b_l1_ProbNNe);
   fChain->SetBranchAddress("l1_ProbNNk", &l1_ProbNNk, &b_l1_ProbNNk);
   fChain->SetBranchAddress("l1_ProbNNp", &l1_ProbNNp, &b_l1_ProbNNp);
   fChain->SetBranchAddress("l1_ProbNNpi", &l1_ProbNNpi, &b_l1_ProbNNpi);
   fChain->SetBranchAddress("l1_ProbNNmu", &l1_ProbNNmu, &b_l1_ProbNNmu);
   fChain->SetBranchAddress("l1_ProbNNghost", &l1_ProbNNghost, &b_l1_ProbNNghost);
   fChain->SetBranchAddress("l1_hasMuon", &l1_hasMuon, &b_l1_hasMuon);
   fChain->SetBranchAddress("l1_isMuon", &l1_isMuon, &b_l1_isMuon);
   fChain->SetBranchAddress("l1_hasRich", &l1_hasRich, &b_l1_hasRich);
   fChain->SetBranchAddress("l1_hasCalo", &l1_hasCalo, &b_l1_hasCalo);
   fChain->SetBranchAddress("l1_CosTheta", &l1_CosTheta, &b_l1_CosTheta);
   fChain->SetBranchAddress("l1_OWNPV_X", &l1_OWNPV_X, &b_l1_OWNPV_X);
   fChain->SetBranchAddress("l1_OWNPV_Y", &l1_OWNPV_Y, &b_l1_OWNPV_Y);
   fChain->SetBranchAddress("l1_OWNPV_Z", &l1_OWNPV_Z, &b_l1_OWNPV_Z);
   fChain->SetBranchAddress("l1_OWNPV_XERR", &l1_OWNPV_XERR, &b_l1_OWNPV_XERR);
   fChain->SetBranchAddress("l1_OWNPV_YERR", &l1_OWNPV_YERR, &b_l1_OWNPV_YERR);
   fChain->SetBranchAddress("l1_OWNPV_ZERR", &l1_OWNPV_ZERR, &b_l1_OWNPV_ZERR);
   fChain->SetBranchAddress("l1_OWNPV_CHI2", &l1_OWNPV_CHI2, &b_l1_OWNPV_CHI2);
   fChain->SetBranchAddress("l1_OWNPV_NDOF", &l1_OWNPV_NDOF, &b_l1_OWNPV_NDOF);
   fChain->SetBranchAddress("l1_OWNPV_COV_", l1_OWNPV_COV_, &b_l1_OWNPV_COV_);
   fChain->SetBranchAddress("l1_IP_OWNPV", &l1_IP_OWNPV, &b_l1_IP_OWNPV);
   fChain->SetBranchAddress("l1_IPCHI2_OWNPV", &l1_IPCHI2_OWNPV, &b_l1_IPCHI2_OWNPV);
   fChain->SetBranchAddress("l1_ORIVX_X", &l1_ORIVX_X, &b_l1_ORIVX_X);
   fChain->SetBranchAddress("l1_ORIVX_Y", &l1_ORIVX_Y, &b_l1_ORIVX_Y);
   fChain->SetBranchAddress("l1_ORIVX_Z", &l1_ORIVX_Z, &b_l1_ORIVX_Z);
   fChain->SetBranchAddress("l1_ORIVX_XERR", &l1_ORIVX_XERR, &b_l1_ORIVX_XERR);
   fChain->SetBranchAddress("l1_ORIVX_YERR", &l1_ORIVX_YERR, &b_l1_ORIVX_YERR);
   fChain->SetBranchAddress("l1_ORIVX_ZERR", &l1_ORIVX_ZERR, &b_l1_ORIVX_ZERR);
   fChain->SetBranchAddress("l1_ORIVX_CHI2", &l1_ORIVX_CHI2, &b_l1_ORIVX_CHI2);
   fChain->SetBranchAddress("l1_ORIVX_NDOF", &l1_ORIVX_NDOF, &b_l1_ORIVX_NDOF);
   fChain->SetBranchAddress("l1_ORIVX_COV_", l1_ORIVX_COV_, &b_l1_ORIVX_COV_);
   fChain->SetBranchAddress("l1_Eta", &l1_Eta, &b_l1_Eta);
   fChain->SetBranchAddress("l1_Phi", &l1_Phi, &b_l1_Phi);
   fChain->SetBranchAddress("l1_MLoKi", &l1_MLoKi, &b_l1_MLoKi);
   fChain->SetBranchAddress("l1_MMLoKi", &l1_MMLoKi, &b_l1_MMLoKi);
   fChain->SetBranchAddress("l1_NTrk", &l1_NTrk, &b_l1_NTrk);
   fChain->SetBranchAddress("l1_N90", &l1_N90, &b_l1_N90);
   fChain->SetBranchAddress("l1_MTF", &l1_MTF, &b_l1_MTF);
   fChain->SetBranchAddress("l1_NSatCells", &l1_NSatCells, &b_l1_NSatCells);
   fChain->SetBranchAddress("l1_NHasPVInfo", &l1_NHasPVInfo, &b_l1_NHasPVInfo);
   fChain->SetBranchAddress("l1_JEC_Cor", &l1_JEC_Cor, &b_l1_JEC_Cor);
   fChain->SetBranchAddress("l1_JEC_PV", &l1_JEC_PV, &b_l1_JEC_PV);
   fChain->SetBranchAddress("l1_TRUEID", &l1_TRUEID, &b_l1_TRUEID);
   fChain->SetBranchAddress("l1_MC_MOTHER_ID", &l1_MC_MOTHER_ID, &b_l1_MC_MOTHER_ID);
   fChain->SetBranchAddress("l1_MC_MOTHER_KEY", &l1_MC_MOTHER_KEY, &b_l1_MC_MOTHER_KEY);
   fChain->SetBranchAddress("l1_MC_GD_MOTHER_ID", &l1_MC_GD_MOTHER_ID, &b_l1_MC_GD_MOTHER_ID);
   fChain->SetBranchAddress("l1_MC_GD_MOTHER_KEY", &l1_MC_GD_MOTHER_KEY, &b_l1_MC_GD_MOTHER_KEY);
   fChain->SetBranchAddress("l1_MC_GD_GD_MOTHER_ID", &l1_MC_GD_GD_MOTHER_ID, &b_l1_MC_GD_GD_MOTHER_ID);
   fChain->SetBranchAddress("l1_MC_GD_GD_MOTHER_KEY", &l1_MC_GD_GD_MOTHER_KEY, &b_l1_MC_GD_GD_MOTHER_KEY);
   fChain->SetBranchAddress("l1_TRUEP_E", &l1_TRUEP_E, &b_l1_TRUEP_E);
   fChain->SetBranchAddress("l1_TRUEP_X", &l1_TRUEP_X, &b_l1_TRUEP_X);
   fChain->SetBranchAddress("l1_TRUEP_Y", &l1_TRUEP_Y, &b_l1_TRUEP_Y);
   fChain->SetBranchAddress("l1_TRUEP_Z", &l1_TRUEP_Z, &b_l1_TRUEP_Z);
   fChain->SetBranchAddress("l1_TRUEPT", &l1_TRUEPT, &b_l1_TRUEPT);
   fChain->SetBranchAddress("l1_TRUEORIGINVERTEX_X", &l1_TRUEORIGINVERTEX_X, &b_l1_TRUEORIGINVERTEX_X);
   fChain->SetBranchAddress("l1_TRUEORIGINVERTEX_Y", &l1_TRUEORIGINVERTEX_Y, &b_l1_TRUEORIGINVERTEX_Y);
   fChain->SetBranchAddress("l1_TRUEORIGINVERTEX_Z", &l1_TRUEORIGINVERTEX_Z, &b_l1_TRUEORIGINVERTEX_Z);
   fChain->SetBranchAddress("l1_TRUEENDVERTEX_X", &l1_TRUEENDVERTEX_X, &b_l1_TRUEENDVERTEX_X);
   fChain->SetBranchAddress("l1_TRUEENDVERTEX_Y", &l1_TRUEENDVERTEX_Y, &b_l1_TRUEENDVERTEX_Y);
   fChain->SetBranchAddress("l1_TRUEENDVERTEX_Z", &l1_TRUEENDVERTEX_Z, &b_l1_TRUEENDVERTEX_Z);
   fChain->SetBranchAddress("l1_TRUEISSTABLE", &l1_TRUEISSTABLE, &b_l1_TRUEISSTABLE);
   fChain->SetBranchAddress("l1_TRUETAU", &l1_TRUETAU, &b_l1_TRUETAU);
   fChain->SetBranchAddress("l1_CombDLLMu", &l1_CombDLLMu, &b_l1_CombDLLMu);
   fChain->SetBranchAddress("l1_InMuonAcc", &l1_InMuonAcc, &b_l1_InMuonAcc);
   fChain->SetBranchAddress("l1_MuonDist2", &l1_MuonDist2, &b_l1_MuonDist2);
   fChain->SetBranchAddress("l1_regionInM2", &l1_regionInM2, &b_l1_regionInM2);
   fChain->SetBranchAddress("l1_isMuonLoose", &l1_isMuonLoose, &b_l1_isMuonLoose);
   fChain->SetBranchAddress("l1_NShared", &l1_NShared, &b_l1_NShared);
   fChain->SetBranchAddress("l1_MuonLLmu", &l1_MuonLLmu, &b_l1_MuonLLmu);
   fChain->SetBranchAddress("l1_MuonLLbg", &l1_MuonLLbg, &b_l1_MuonLLbg);
   fChain->SetBranchAddress("l1_isMuonFromProto", &l1_isMuonFromProto, &b_l1_isMuonFromProto);
   fChain->SetBranchAddress("l1_L0Global_Dec", &l1_L0Global_Dec, &b_l1_L0Global_Dec);
   fChain->SetBranchAddress("l1_L0Global_TIS", &l1_L0Global_TIS, &b_l1_L0Global_TIS);
   fChain->SetBranchAddress("l1_L0Global_TOS", &l1_L0Global_TOS, &b_l1_L0Global_TOS);
   fChain->SetBranchAddress("l1_Hlt1Global_Dec", &l1_Hlt1Global_Dec, &b_l1_Hlt1Global_Dec);
   fChain->SetBranchAddress("l1_Hlt1Global_TIS", &l1_Hlt1Global_TIS, &b_l1_Hlt1Global_TIS);
   fChain->SetBranchAddress("l1_Hlt1Global_TOS", &l1_Hlt1Global_TOS, &b_l1_Hlt1Global_TOS);
   fChain->SetBranchAddress("l1_Hlt1Phys_Dec", &l1_Hlt1Phys_Dec, &b_l1_Hlt1Phys_Dec);
   fChain->SetBranchAddress("l1_Hlt1Phys_TIS", &l1_Hlt1Phys_TIS, &b_l1_Hlt1Phys_TIS);
   fChain->SetBranchAddress("l1_Hlt1Phys_TOS", &l1_Hlt1Phys_TOS, &b_l1_Hlt1Phys_TOS);
   fChain->SetBranchAddress("l1_Hlt2Global_Dec", &l1_Hlt2Global_Dec, &b_l1_Hlt2Global_Dec);
   fChain->SetBranchAddress("l1_Hlt2Global_TIS", &l1_Hlt2Global_TIS, &b_l1_Hlt2Global_TIS);
   fChain->SetBranchAddress("l1_Hlt2Global_TOS", &l1_Hlt2Global_TOS, &b_l1_Hlt2Global_TOS);
   fChain->SetBranchAddress("l1_Hlt2Phys_Dec", &l1_Hlt2Phys_Dec, &b_l1_Hlt2Phys_Dec);
   fChain->SetBranchAddress("l1_Hlt2Phys_TIS", &l1_Hlt2Phys_TIS, &b_l1_Hlt2Phys_TIS);
   fChain->SetBranchAddress("l1_Hlt2Phys_TOS", &l1_Hlt2Phys_TOS, &b_l1_Hlt2Phys_TOS);
   fChain->SetBranchAddress("l1_L0MuonDecision_Dec", &l1_L0MuonDecision_Dec, &b_l1_L0MuonDecision_Dec);
   fChain->SetBranchAddress("l1_L0MuonDecision_TIS", &l1_L0MuonDecision_TIS, &b_l1_L0MuonDecision_TIS);
   fChain->SetBranchAddress("l1_L0MuonDecision_TOS", &l1_L0MuonDecision_TOS, &b_l1_L0MuonDecision_TOS);
   fChain->SetBranchAddress("l1_Hlt1TrackAllL0Decision_Dec", &l1_Hlt1TrackAllL0Decision_Dec, &b_l1_Hlt1TrackAllL0Decision_Dec);
   fChain->SetBranchAddress("l1_Hlt1TrackAllL0Decision_TIS", &l1_Hlt1TrackAllL0Decision_TIS, &b_l1_Hlt1TrackAllL0Decision_TIS);
   fChain->SetBranchAddress("l1_Hlt1TrackAllL0Decision_TOS", &l1_Hlt1TrackAllL0Decision_TOS, &b_l1_Hlt1TrackAllL0Decision_TOS);
   fChain->SetBranchAddress("l1_Hlt1TrackMuonDecision_Dec", &l1_Hlt1TrackMuonDecision_Dec, &b_l1_Hlt1TrackMuonDecision_Dec);
   fChain->SetBranchAddress("l1_Hlt1TrackMuonDecision_TIS", &l1_Hlt1TrackMuonDecision_TIS, &b_l1_Hlt1TrackMuonDecision_TIS);
   fChain->SetBranchAddress("l1_Hlt1TrackMuonDecision_TOS", &l1_Hlt1TrackMuonDecision_TOS, &b_l1_Hlt1TrackMuonDecision_TOS);
   fChain->SetBranchAddress("l1_TRACK_Type", &l1_TRACK_Type, &b_l1_TRACK_Type);
   fChain->SetBranchAddress("l1_TRACK_Key", &l1_TRACK_Key, &b_l1_TRACK_Key);
   fChain->SetBranchAddress("l1_TRACK_CHI2NDOF", &l1_TRACK_CHI2NDOF, &b_l1_TRACK_CHI2NDOF);
   fChain->SetBranchAddress("l1_TRACK_PCHI2", &l1_TRACK_PCHI2, &b_l1_TRACK_PCHI2);
   fChain->SetBranchAddress("l1_TRACK_MatchCHI2", &l1_TRACK_MatchCHI2, &b_l1_TRACK_MatchCHI2);
   fChain->SetBranchAddress("l1_TRACK_GhostProb", &l1_TRACK_GhostProb, &b_l1_TRACK_GhostProb);
   fChain->SetBranchAddress("l1_TRACK_CloneDist", &l1_TRACK_CloneDist, &b_l1_TRACK_CloneDist);
   fChain->SetBranchAddress("l1_TRACK_Likelihood", &l1_TRACK_Likelihood, &b_l1_TRACK_Likelihood);
   fChain->SetBranchAddress("l2_MC12TuneV2_ProbNNe", &l2_MC12TuneV2_ProbNNe, &b_l2_MC12TuneV2_ProbNNe);
   fChain->SetBranchAddress("l2_MC12TuneV2_ProbNNmu", &l2_MC12TuneV2_ProbNNmu, &b_l2_MC12TuneV2_ProbNNmu);
   fChain->SetBranchAddress("l2_MC12TuneV2_ProbNNpi", &l2_MC12TuneV2_ProbNNpi, &b_l2_MC12TuneV2_ProbNNpi);
   fChain->SetBranchAddress("l2_MC12TuneV2_ProbNNk", &l2_MC12TuneV2_ProbNNk, &b_l2_MC12TuneV2_ProbNNk);
   fChain->SetBranchAddress("l2_MC12TuneV2_ProbNNp", &l2_MC12TuneV2_ProbNNp, &b_l2_MC12TuneV2_ProbNNp);
   fChain->SetBranchAddress("l2_MC12TuneV2_ProbNNghost", &l2_MC12TuneV2_ProbNNghost, &b_l2_MC12TuneV2_ProbNNghost);
   fChain->SetBranchAddress("l2_MC12TuneV3_ProbNNe", &l2_MC12TuneV3_ProbNNe, &b_l2_MC12TuneV3_ProbNNe);
   fChain->SetBranchAddress("l2_MC12TuneV3_ProbNNmu", &l2_MC12TuneV3_ProbNNmu, &b_l2_MC12TuneV3_ProbNNmu);
   fChain->SetBranchAddress("l2_MC12TuneV3_ProbNNpi", &l2_MC12TuneV3_ProbNNpi, &b_l2_MC12TuneV3_ProbNNpi);
   fChain->SetBranchAddress("l2_MC12TuneV3_ProbNNk", &l2_MC12TuneV3_ProbNNk, &b_l2_MC12TuneV3_ProbNNk);
   fChain->SetBranchAddress("l2_MC12TuneV3_ProbNNp", &l2_MC12TuneV3_ProbNNp, &b_l2_MC12TuneV3_ProbNNp);
   fChain->SetBranchAddress("l2_MC12TuneV3_ProbNNghost", &l2_MC12TuneV3_ProbNNghost, &b_l2_MC12TuneV3_ProbNNghost);
   fChain->SetBranchAddress("l2_P", &l2_P, &b_l2_P);
   fChain->SetBranchAddress("l2_PT", &l2_PT, &b_l2_PT);
   fChain->SetBranchAddress("l2_PE", &l2_PE, &b_l2_PE);
   fChain->SetBranchAddress("l2_PX", &l2_PX, &b_l2_PX);
   fChain->SetBranchAddress("l2_PY", &l2_PY, &b_l2_PY);
   fChain->SetBranchAddress("l2_PZ", &l2_PZ, &b_l2_PZ);
   fChain->SetBranchAddress("l2_M", &l2_M, &b_l2_M);
   fChain->SetBranchAddress("l2_L0Calo_HCAL_realET", &l2_L0Calo_HCAL_realET, &b_l2_L0Calo_HCAL_realET);
   fChain->SetBranchAddress("l2_L0Calo_HCAL_xProjection", &l2_L0Calo_HCAL_xProjection, &b_l2_L0Calo_HCAL_xProjection);
   fChain->SetBranchAddress("l2_L0Calo_HCAL_yProjection", &l2_L0Calo_HCAL_yProjection, &b_l2_L0Calo_HCAL_yProjection);
   fChain->SetBranchAddress("l2_L0Calo_HCAL_region", &l2_L0Calo_HCAL_region, &b_l2_L0Calo_HCAL_region);
   fChain->SetBranchAddress("l2_L0Calo_HCAL_TriggerET", &l2_L0Calo_HCAL_TriggerET, &b_l2_L0Calo_HCAL_TriggerET);
   fChain->SetBranchAddress("l2_L0Calo_HCAL_TriggerHCALET", &l2_L0Calo_HCAL_TriggerHCALET, &b_l2_L0Calo_HCAL_TriggerHCALET);
   fChain->SetBranchAddress("l2_L0Calo_HCAL_xTrigger", &l2_L0Calo_HCAL_xTrigger, &b_l2_L0Calo_HCAL_xTrigger);
   fChain->SetBranchAddress("l2_L0Calo_HCAL_yTrigger", &l2_L0Calo_HCAL_yTrigger, &b_l2_L0Calo_HCAL_yTrigger);
   fChain->SetBranchAddress("l2_ID", &l2_ID, &b_l2_ID);
   fChain->SetBranchAddress("l2_PIDe", &l2_PIDe, &b_l2_PIDe);
   fChain->SetBranchAddress("l2_PIDmu", &l2_PIDmu, &b_l2_PIDmu);
   fChain->SetBranchAddress("l2_PIDK", &l2_PIDK, &b_l2_PIDK);
   fChain->SetBranchAddress("l2_PIDp", &l2_PIDp, &b_l2_PIDp);
   fChain->SetBranchAddress("l2_ProbNNe", &l2_ProbNNe, &b_l2_ProbNNe);
   fChain->SetBranchAddress("l2_ProbNNk", &l2_ProbNNk, &b_l2_ProbNNk);
   fChain->SetBranchAddress("l2_ProbNNp", &l2_ProbNNp, &b_l2_ProbNNp);
   fChain->SetBranchAddress("l2_ProbNNpi", &l2_ProbNNpi, &b_l2_ProbNNpi);
   fChain->SetBranchAddress("l2_ProbNNmu", &l2_ProbNNmu, &b_l2_ProbNNmu);
   fChain->SetBranchAddress("l2_ProbNNghost", &l2_ProbNNghost, &b_l2_ProbNNghost);
   fChain->SetBranchAddress("l2_hasMuon", &l2_hasMuon, &b_l2_hasMuon);
   fChain->SetBranchAddress("l2_isMuon", &l2_isMuon, &b_l2_isMuon);
   fChain->SetBranchAddress("l2_hasRich", &l2_hasRich, &b_l2_hasRich);
   fChain->SetBranchAddress("l2_hasCalo", &l2_hasCalo, &b_l2_hasCalo);
   fChain->SetBranchAddress("l2_CosTheta", &l2_CosTheta, &b_l2_CosTheta);
   fChain->SetBranchAddress("l2_HasBremAdded", &l2_HasBremAdded, &b_l2_HasBremAdded);
   fChain->SetBranchAddress("l2_BremMultiplicity", &l2_BremMultiplicity, &b_l2_BremMultiplicity);
   fChain->SetBranchAddress("l2_BremPE", &l2_BremPE, &b_l2_BremPE);
   fChain->SetBranchAddress("l2_BremPX", &l2_BremPX, &b_l2_BremPX);
   fChain->SetBranchAddress("l2_BremPY", &l2_BremPY, &b_l2_BremPY);
   fChain->SetBranchAddress("l2_BremPZ", &l2_BremPZ, &b_l2_BremPZ);
   fChain->SetBranchAddress("l2_BremOriginX", &l2_BremOriginX, &b_l2_BremOriginX);
   fChain->SetBranchAddress("l2_BremOriginY", &l2_BremOriginY, &b_l2_BremOriginY);
   fChain->SetBranchAddress("l2_BremOriginZ", &l2_BremOriginZ, &b_l2_BremOriginZ);
   fChain->SetBranchAddress("l2_OWNPV_X", &l2_OWNPV_X, &b_l2_OWNPV_X);
   fChain->SetBranchAddress("l2_OWNPV_Y", &l2_OWNPV_Y, &b_l2_OWNPV_Y);
   fChain->SetBranchAddress("l2_OWNPV_Z", &l2_OWNPV_Z, &b_l2_OWNPV_Z);
   fChain->SetBranchAddress("l2_OWNPV_XERR", &l2_OWNPV_XERR, &b_l2_OWNPV_XERR);
   fChain->SetBranchAddress("l2_OWNPV_YERR", &l2_OWNPV_YERR, &b_l2_OWNPV_YERR);
   fChain->SetBranchAddress("l2_OWNPV_ZERR", &l2_OWNPV_ZERR, &b_l2_OWNPV_ZERR);
   fChain->SetBranchAddress("l2_OWNPV_CHI2", &l2_OWNPV_CHI2, &b_l2_OWNPV_CHI2);
   fChain->SetBranchAddress("l2_OWNPV_NDOF", &l2_OWNPV_NDOF, &b_l2_OWNPV_NDOF);
   fChain->SetBranchAddress("l2_OWNPV_COV_", l2_OWNPV_COV_, &b_l2_OWNPV_COV_);
   fChain->SetBranchAddress("l2_IP_OWNPV", &l2_IP_OWNPV, &b_l2_IP_OWNPV);
   fChain->SetBranchAddress("l2_IPCHI2_OWNPV", &l2_IPCHI2_OWNPV, &b_l2_IPCHI2_OWNPV);
   fChain->SetBranchAddress("l2_ORIVX_X", &l2_ORIVX_X, &b_l2_ORIVX_X);
   fChain->SetBranchAddress("l2_ORIVX_Y", &l2_ORIVX_Y, &b_l2_ORIVX_Y);
   fChain->SetBranchAddress("l2_ORIVX_Z", &l2_ORIVX_Z, &b_l2_ORIVX_Z);
   fChain->SetBranchAddress("l2_ORIVX_XERR", &l2_ORIVX_XERR, &b_l2_ORIVX_XERR);
   fChain->SetBranchAddress("l2_ORIVX_YERR", &l2_ORIVX_YERR, &b_l2_ORIVX_YERR);
   fChain->SetBranchAddress("l2_ORIVX_ZERR", &l2_ORIVX_ZERR, &b_l2_ORIVX_ZERR);
   fChain->SetBranchAddress("l2_ORIVX_CHI2", &l2_ORIVX_CHI2, &b_l2_ORIVX_CHI2);
   fChain->SetBranchAddress("l2_ORIVX_NDOF", &l2_ORIVX_NDOF, &b_l2_ORIVX_NDOF);
   fChain->SetBranchAddress("l2_ORIVX_COV_", l2_ORIVX_COV_, &b_l2_ORIVX_COV_);
   fChain->SetBranchAddress("l2_Eta", &l2_Eta, &b_l2_Eta);
   fChain->SetBranchAddress("l2_Phi", &l2_Phi, &b_l2_Phi);
   fChain->SetBranchAddress("l2_MLoKi", &l2_MLoKi, &b_l2_MLoKi);
   fChain->SetBranchAddress("l2_MMLoKi", &l2_MMLoKi, &b_l2_MMLoKi);
   fChain->SetBranchAddress("l2_NTrk", &l2_NTrk, &b_l2_NTrk);
   fChain->SetBranchAddress("l2_N90", &l2_N90, &b_l2_N90);
   fChain->SetBranchAddress("l2_MTF", &l2_MTF, &b_l2_MTF);
   fChain->SetBranchAddress("l2_NSatCells", &l2_NSatCells, &b_l2_NSatCells);
   fChain->SetBranchAddress("l2_NHasPVInfo", &l2_NHasPVInfo, &b_l2_NHasPVInfo);
   fChain->SetBranchAddress("l2_JEC_Cor", &l2_JEC_Cor, &b_l2_JEC_Cor);
   fChain->SetBranchAddress("l2_JEC_PV", &l2_JEC_PV, &b_l2_JEC_PV);
   fChain->SetBranchAddress("l2_TRUEID", &l2_TRUEID, &b_l2_TRUEID);
   fChain->SetBranchAddress("l2_MC_MOTHER_ID", &l2_MC_MOTHER_ID, &b_l2_MC_MOTHER_ID);
   fChain->SetBranchAddress("l2_MC_MOTHER_KEY", &l2_MC_MOTHER_KEY, &b_l2_MC_MOTHER_KEY);
   fChain->SetBranchAddress("l2_MC_GD_MOTHER_ID", &l2_MC_GD_MOTHER_ID, &b_l2_MC_GD_MOTHER_ID);
   fChain->SetBranchAddress("l2_MC_GD_MOTHER_KEY", &l2_MC_GD_MOTHER_KEY, &b_l2_MC_GD_MOTHER_KEY);
   fChain->SetBranchAddress("l2_MC_GD_GD_MOTHER_ID", &l2_MC_GD_GD_MOTHER_ID, &b_l2_MC_GD_GD_MOTHER_ID);
   fChain->SetBranchAddress("l2_MC_GD_GD_MOTHER_KEY", &l2_MC_GD_GD_MOTHER_KEY, &b_l2_MC_GD_GD_MOTHER_KEY);
   fChain->SetBranchAddress("l2_TRUEP_E", &l2_TRUEP_E, &b_l2_TRUEP_E);
   fChain->SetBranchAddress("l2_TRUEP_X", &l2_TRUEP_X, &b_l2_TRUEP_X);
   fChain->SetBranchAddress("l2_TRUEP_Y", &l2_TRUEP_Y, &b_l2_TRUEP_Y);
   fChain->SetBranchAddress("l2_TRUEP_Z", &l2_TRUEP_Z, &b_l2_TRUEP_Z);
   fChain->SetBranchAddress("l2_TRUEPT", &l2_TRUEPT, &b_l2_TRUEPT);
   fChain->SetBranchAddress("l2_TRUEORIGINVERTEX_X", &l2_TRUEORIGINVERTEX_X, &b_l2_TRUEORIGINVERTEX_X);
   fChain->SetBranchAddress("l2_TRUEORIGINVERTEX_Y", &l2_TRUEORIGINVERTEX_Y, &b_l2_TRUEORIGINVERTEX_Y);
   fChain->SetBranchAddress("l2_TRUEORIGINVERTEX_Z", &l2_TRUEORIGINVERTEX_Z, &b_l2_TRUEORIGINVERTEX_Z);
   fChain->SetBranchAddress("l2_TRUEENDVERTEX_X", &l2_TRUEENDVERTEX_X, &b_l2_TRUEENDVERTEX_X);
   fChain->SetBranchAddress("l2_TRUEENDVERTEX_Y", &l2_TRUEENDVERTEX_Y, &b_l2_TRUEENDVERTEX_Y);
   fChain->SetBranchAddress("l2_TRUEENDVERTEX_Z", &l2_TRUEENDVERTEX_Z, &b_l2_TRUEENDVERTEX_Z);
   fChain->SetBranchAddress("l2_TRUEISSTABLE", &l2_TRUEISSTABLE, &b_l2_TRUEISSTABLE);
   fChain->SetBranchAddress("l2_TRUETAU", &l2_TRUETAU, &b_l2_TRUETAU);
   fChain->SetBranchAddress("l2_CombDLLMu", &l2_CombDLLMu, &b_l2_CombDLLMu);
   fChain->SetBranchAddress("l2_InMuonAcc", &l2_InMuonAcc, &b_l2_InMuonAcc);
   fChain->SetBranchAddress("l2_MuonDist2", &l2_MuonDist2, &b_l2_MuonDist2);
   fChain->SetBranchAddress("l2_regionInM2", &l2_regionInM2, &b_l2_regionInM2);
   fChain->SetBranchAddress("l2_isMuonLoose", &l2_isMuonLoose, &b_l2_isMuonLoose);
   fChain->SetBranchAddress("l2_NShared", &l2_NShared, &b_l2_NShared);
   fChain->SetBranchAddress("l2_MuonLLmu", &l2_MuonLLmu, &b_l2_MuonLLmu);
   fChain->SetBranchAddress("l2_MuonLLbg", &l2_MuonLLbg, &b_l2_MuonLLbg);
   fChain->SetBranchAddress("l2_isMuonFromProto", &l2_isMuonFromProto, &b_l2_isMuonFromProto);
   fChain->SetBranchAddress("l2_L0Global_Dec", &l2_L0Global_Dec, &b_l2_L0Global_Dec);
   fChain->SetBranchAddress("l2_L0Global_TIS", &l2_L0Global_TIS, &b_l2_L0Global_TIS);
   fChain->SetBranchAddress("l2_L0Global_TOS", &l2_L0Global_TOS, &b_l2_L0Global_TOS);
   fChain->SetBranchAddress("l2_Hlt1Global_Dec", &l2_Hlt1Global_Dec, &b_l2_Hlt1Global_Dec);
   fChain->SetBranchAddress("l2_Hlt1Global_TIS", &l2_Hlt1Global_TIS, &b_l2_Hlt1Global_TIS);
   fChain->SetBranchAddress("l2_Hlt1Global_TOS", &l2_Hlt1Global_TOS, &b_l2_Hlt1Global_TOS);
   fChain->SetBranchAddress("l2_Hlt1Phys_Dec", &l2_Hlt1Phys_Dec, &b_l2_Hlt1Phys_Dec);
   fChain->SetBranchAddress("l2_Hlt1Phys_TIS", &l2_Hlt1Phys_TIS, &b_l2_Hlt1Phys_TIS);
   fChain->SetBranchAddress("l2_Hlt1Phys_TOS", &l2_Hlt1Phys_TOS, &b_l2_Hlt1Phys_TOS);
   fChain->SetBranchAddress("l2_Hlt2Global_Dec", &l2_Hlt2Global_Dec, &b_l2_Hlt2Global_Dec);
   fChain->SetBranchAddress("l2_Hlt2Global_TIS", &l2_Hlt2Global_TIS, &b_l2_Hlt2Global_TIS);
   fChain->SetBranchAddress("l2_Hlt2Global_TOS", &l2_Hlt2Global_TOS, &b_l2_Hlt2Global_TOS);
   fChain->SetBranchAddress("l2_Hlt2Phys_Dec", &l2_Hlt2Phys_Dec, &b_l2_Hlt2Phys_Dec);
   fChain->SetBranchAddress("l2_Hlt2Phys_TIS", &l2_Hlt2Phys_TIS, &b_l2_Hlt2Phys_TIS);
   fChain->SetBranchAddress("l2_Hlt2Phys_TOS", &l2_Hlt2Phys_TOS, &b_l2_Hlt2Phys_TOS);
   fChain->SetBranchAddress("l2_L0MuonDecision_Dec", &l2_L0MuonDecision_Dec, &b_l2_L0MuonDecision_Dec);
   fChain->SetBranchAddress("l2_L0MuonDecision_TIS", &l2_L0MuonDecision_TIS, &b_l2_L0MuonDecision_TIS);
   fChain->SetBranchAddress("l2_L0MuonDecision_TOS", &l2_L0MuonDecision_TOS, &b_l2_L0MuonDecision_TOS);
   fChain->SetBranchAddress("l2_Hlt1TrackAllL0Decision_Dec", &l2_Hlt1TrackAllL0Decision_Dec, &b_l2_Hlt1TrackAllL0Decision_Dec);
   fChain->SetBranchAddress("l2_Hlt1TrackAllL0Decision_TIS", &l2_Hlt1TrackAllL0Decision_TIS, &b_l2_Hlt1TrackAllL0Decision_TIS);
   fChain->SetBranchAddress("l2_Hlt1TrackAllL0Decision_TOS", &l2_Hlt1TrackAllL0Decision_TOS, &b_l2_Hlt1TrackAllL0Decision_TOS);
   fChain->SetBranchAddress("l2_Hlt1TrackMuonDecision_Dec", &l2_Hlt1TrackMuonDecision_Dec, &b_l2_Hlt1TrackMuonDecision_Dec);
   fChain->SetBranchAddress("l2_Hlt1TrackMuonDecision_TIS", &l2_Hlt1TrackMuonDecision_TIS, &b_l2_Hlt1TrackMuonDecision_TIS);
   fChain->SetBranchAddress("l2_Hlt1TrackMuonDecision_TOS", &l2_Hlt1TrackMuonDecision_TOS, &b_l2_Hlt1TrackMuonDecision_TOS);
   fChain->SetBranchAddress("l2_TRACK_Type", &l2_TRACK_Type, &b_l2_TRACK_Type);
   fChain->SetBranchAddress("l2_TRACK_Key", &l2_TRACK_Key, &b_l2_TRACK_Key);
   fChain->SetBranchAddress("l2_TRACK_CHI2NDOF", &l2_TRACK_CHI2NDOF, &b_l2_TRACK_CHI2NDOF);
   fChain->SetBranchAddress("l2_TRACK_PCHI2", &l2_TRACK_PCHI2, &b_l2_TRACK_PCHI2);
   fChain->SetBranchAddress("l2_TRACK_MatchCHI2", &l2_TRACK_MatchCHI2, &b_l2_TRACK_MatchCHI2);
   fChain->SetBranchAddress("l2_TRACK_GhostProb", &l2_TRACK_GhostProb, &b_l2_TRACK_GhostProb);
   fChain->SetBranchAddress("l2_TRACK_CloneDist", &l2_TRACK_CloneDist, &b_l2_TRACK_CloneDist);
   fChain->SetBranchAddress("l2_TRACK_Likelihood", &l2_TRACK_Likelihood, &b_l2_TRACK_Likelihood);
   fChain->SetBranchAddress("d2_P", &d2_P, &b_d2_P);
   fChain->SetBranchAddress("d2_PT", &d2_PT, &b_d2_PT);
   fChain->SetBranchAddress("d2_PE", &d2_PE, &b_d2_PE);
   fChain->SetBranchAddress("d2_PX", &d2_PX, &b_d2_PX);
   fChain->SetBranchAddress("d2_PY", &d2_PY, &b_d2_PY);
   fChain->SetBranchAddress("d2_PZ", &d2_PZ, &b_d2_PZ);
   fChain->SetBranchAddress("d2_MM", &d2_MM, &b_d2_MM);
   fChain->SetBranchAddress("d2_MMERR", &d2_MMERR, &b_d2_MMERR);
   fChain->SetBranchAddress("d2_M", &d2_M, &b_d2_M);
   fChain->SetBranchAddress("d2_ID", &d2_ID, &b_d2_ID);
   fChain->SetBranchAddress("d2_M01", &d2_M01, &b_d2_M01);
   fChain->SetBranchAddress("d2_VtxChi2_01", &d2_VtxChi2_01, &b_d2_VtxChi2_01);
   fChain->SetBranchAddress("d2_VtxnDoF01", &d2_VtxnDoF01, &b_d2_VtxnDoF01);
   fChain->SetBranchAddress("d2_VtxM01", &d2_VtxM01, &b_d2_VtxM01);
   fChain->SetBranchAddress("d2_IP01", &d2_IP01, &b_d2_IP01);
   fChain->SetBranchAddress("d2_IPChi2_01", &d2_IPChi2_01, &b_d2_IPChi2_01);
   fChain->SetBranchAddress("d2_CosTheta", &d2_CosTheta, &b_d2_CosTheta);
   fChain->SetBranchAddress("d2_ENDVERTEX_X", &d2_ENDVERTEX_X, &b_d2_ENDVERTEX_X);
   fChain->SetBranchAddress("d2_ENDVERTEX_Y", &d2_ENDVERTEX_Y, &b_d2_ENDVERTEX_Y);
   fChain->SetBranchAddress("d2_ENDVERTEX_Z", &d2_ENDVERTEX_Z, &b_d2_ENDVERTEX_Z);
   fChain->SetBranchAddress("d2_ENDVERTEX_XERR", &d2_ENDVERTEX_XERR, &b_d2_ENDVERTEX_XERR);
   fChain->SetBranchAddress("d2_ENDVERTEX_YERR", &d2_ENDVERTEX_YERR, &b_d2_ENDVERTEX_YERR);
   fChain->SetBranchAddress("d2_ENDVERTEX_ZERR", &d2_ENDVERTEX_ZERR, &b_d2_ENDVERTEX_ZERR);
   fChain->SetBranchAddress("d2_ENDVERTEX_CHI2", &d2_ENDVERTEX_CHI2, &b_d2_ENDVERTEX_CHI2);
   fChain->SetBranchAddress("d2_ENDVERTEX_NDOF", &d2_ENDVERTEX_NDOF, &b_d2_ENDVERTEX_NDOF);
   fChain->SetBranchAddress("d2_ENDVERTEX_COV_", d2_ENDVERTEX_COV_, &b_d2_ENDVERTEX_COV_);
   fChain->SetBranchAddress("d2_OWNPV_X", &d2_OWNPV_X, &b_d2_OWNPV_X);
   fChain->SetBranchAddress("d2_OWNPV_Y", &d2_OWNPV_Y, &b_d2_OWNPV_Y);
   fChain->SetBranchAddress("d2_OWNPV_Z", &d2_OWNPV_Z, &b_d2_OWNPV_Z);
   fChain->SetBranchAddress("d2_OWNPV_XERR", &d2_OWNPV_XERR, &b_d2_OWNPV_XERR);
   fChain->SetBranchAddress("d2_OWNPV_YERR", &d2_OWNPV_YERR, &b_d2_OWNPV_YERR);
   fChain->SetBranchAddress("d2_OWNPV_ZERR", &d2_OWNPV_ZERR, &b_d2_OWNPV_ZERR);
   fChain->SetBranchAddress("d2_OWNPV_CHI2", &d2_OWNPV_CHI2, &b_d2_OWNPV_CHI2);
   fChain->SetBranchAddress("d2_OWNPV_NDOF", &d2_OWNPV_NDOF, &b_d2_OWNPV_NDOF);
   fChain->SetBranchAddress("d2_OWNPV_COV_", d2_OWNPV_COV_, &b_d2_OWNPV_COV_);
   fChain->SetBranchAddress("d2_IP_OWNPV", &d2_IP_OWNPV, &b_d2_IP_OWNPV);
   fChain->SetBranchAddress("d2_IPCHI2_OWNPV", &d2_IPCHI2_OWNPV, &b_d2_IPCHI2_OWNPV);
   fChain->SetBranchAddress("d2_FD_OWNPV", &d2_FD_OWNPV, &b_d2_FD_OWNPV);
   fChain->SetBranchAddress("d2_FDCHI2_OWNPV", &d2_FDCHI2_OWNPV, &b_d2_FDCHI2_OWNPV);
   fChain->SetBranchAddress("d2_DIRA_OWNPV", &d2_DIRA_OWNPV, &b_d2_DIRA_OWNPV);
   fChain->SetBranchAddress("d2_ORIVX_X", &d2_ORIVX_X, &b_d2_ORIVX_X);
   fChain->SetBranchAddress("d2_ORIVX_Y", &d2_ORIVX_Y, &b_d2_ORIVX_Y);
   fChain->SetBranchAddress("d2_ORIVX_Z", &d2_ORIVX_Z, &b_d2_ORIVX_Z);
   fChain->SetBranchAddress("d2_ORIVX_XERR", &d2_ORIVX_XERR, &b_d2_ORIVX_XERR);
   fChain->SetBranchAddress("d2_ORIVX_YERR", &d2_ORIVX_YERR, &b_d2_ORIVX_YERR);
   fChain->SetBranchAddress("d2_ORIVX_ZERR", &d2_ORIVX_ZERR, &b_d2_ORIVX_ZERR);
   fChain->SetBranchAddress("d2_ORIVX_CHI2", &d2_ORIVX_CHI2, &b_d2_ORIVX_CHI2);
   fChain->SetBranchAddress("d2_ORIVX_NDOF", &d2_ORIVX_NDOF, &b_d2_ORIVX_NDOF);
   fChain->SetBranchAddress("d2_ORIVX_COV_", d2_ORIVX_COV_, &b_d2_ORIVX_COV_);
   fChain->SetBranchAddress("d2_FD_ORIVX", &d2_FD_ORIVX, &b_d2_FD_ORIVX);
   fChain->SetBranchAddress("d2_FDCHI2_ORIVX", &d2_FDCHI2_ORIVX, &b_d2_FDCHI2_ORIVX);
   fChain->SetBranchAddress("d2_DIRA_ORIVX", &d2_DIRA_ORIVX, &b_d2_DIRA_ORIVX);
   fChain->SetBranchAddress("d2_Eta", &d2_Eta, &b_d2_Eta);
   fChain->SetBranchAddress("d2_Phi", &d2_Phi, &b_d2_Phi);
   fChain->SetBranchAddress("d2_MLoKi", &d2_MLoKi, &b_d2_MLoKi);
   fChain->SetBranchAddress("d2_MMLoKi", &d2_MMLoKi, &b_d2_MMLoKi);
   fChain->SetBranchAddress("d2_NTrk", &d2_NTrk, &b_d2_NTrk);
   fChain->SetBranchAddress("d2_N90", &d2_N90, &b_d2_N90);
   fChain->SetBranchAddress("d2_MTF", &d2_MTF, &b_d2_MTF);
   fChain->SetBranchAddress("d2_NSatCells", &d2_NSatCells, &b_d2_NSatCells);
   fChain->SetBranchAddress("d2_NHasPVInfo", &d2_NHasPVInfo, &b_d2_NHasPVInfo);
   fChain->SetBranchAddress("d2_JEC_Cor", &d2_JEC_Cor, &b_d2_JEC_Cor);
   fChain->SetBranchAddress("d2_JEC_PV", &d2_JEC_PV, &b_d2_JEC_PV);
   fChain->SetBranchAddress("d2_BKGCAT", &d2_BKGCAT, &b_d2_BKGCAT);
   fChain->SetBranchAddress("d2_TRUEID", &d2_TRUEID, &b_d2_TRUEID);
   fChain->SetBranchAddress("d2_MC_MOTHER_ID", &d2_MC_MOTHER_ID, &b_d2_MC_MOTHER_ID);
   fChain->SetBranchAddress("d2_MC_MOTHER_KEY", &d2_MC_MOTHER_KEY, &b_d2_MC_MOTHER_KEY);
   fChain->SetBranchAddress("d2_MC_GD_MOTHER_ID", &d2_MC_GD_MOTHER_ID, &b_d2_MC_GD_MOTHER_ID);
   fChain->SetBranchAddress("d2_MC_GD_MOTHER_KEY", &d2_MC_GD_MOTHER_KEY, &b_d2_MC_GD_MOTHER_KEY);
   fChain->SetBranchAddress("d2_MC_GD_GD_MOTHER_ID", &d2_MC_GD_GD_MOTHER_ID, &b_d2_MC_GD_GD_MOTHER_ID);
   fChain->SetBranchAddress("d2_MC_GD_GD_MOTHER_KEY", &d2_MC_GD_GD_MOTHER_KEY, &b_d2_MC_GD_GD_MOTHER_KEY);
   fChain->SetBranchAddress("d2_TRUEP_E", &d2_TRUEP_E, &b_d2_TRUEP_E);
   fChain->SetBranchAddress("d2_TRUEP_X", &d2_TRUEP_X, &b_d2_TRUEP_X);
   fChain->SetBranchAddress("d2_TRUEP_Y", &d2_TRUEP_Y, &b_d2_TRUEP_Y);
   fChain->SetBranchAddress("d2_TRUEP_Z", &d2_TRUEP_Z, &b_d2_TRUEP_Z);
   fChain->SetBranchAddress("d2_TRUEPT", &d2_TRUEPT, &b_d2_TRUEPT);
   fChain->SetBranchAddress("d2_TRUEORIGINVERTEX_X", &d2_TRUEORIGINVERTEX_X, &b_d2_TRUEORIGINVERTEX_X);
   fChain->SetBranchAddress("d2_TRUEORIGINVERTEX_Y", &d2_TRUEORIGINVERTEX_Y, &b_d2_TRUEORIGINVERTEX_Y);
   fChain->SetBranchAddress("d2_TRUEORIGINVERTEX_Z", &d2_TRUEORIGINVERTEX_Z, &b_d2_TRUEORIGINVERTEX_Z);
   fChain->SetBranchAddress("d2_TRUEENDVERTEX_X", &d2_TRUEENDVERTEX_X, &b_d2_TRUEENDVERTEX_X);
   fChain->SetBranchAddress("d2_TRUEENDVERTEX_Y", &d2_TRUEENDVERTEX_Y, &b_d2_TRUEENDVERTEX_Y);
   fChain->SetBranchAddress("d2_TRUEENDVERTEX_Z", &d2_TRUEENDVERTEX_Z, &b_d2_TRUEENDVERTEX_Z);
   fChain->SetBranchAddress("d2_TRUEISSTABLE", &d2_TRUEISSTABLE, &b_d2_TRUEISSTABLE);
   fChain->SetBranchAddress("d2_TRUETAU", &d2_TRUETAU, &b_d2_TRUETAU);
   fChain->SetBranchAddress("d2_TAU", &d2_TAU, &b_d2_TAU);
   fChain->SetBranchAddress("d2_TAUERR", &d2_TAUERR, &b_d2_TAUERR);
   fChain->SetBranchAddress("d2_TAUCHI2", &d2_TAUCHI2, &b_d2_TAUCHI2);
   fChain->SetBranchAddress("d2_L0Global_Dec", &d2_L0Global_Dec, &b_d2_L0Global_Dec);
   fChain->SetBranchAddress("d2_L0Global_TIS", &d2_L0Global_TIS, &b_d2_L0Global_TIS);
   fChain->SetBranchAddress("d2_L0Global_TOS", &d2_L0Global_TOS, &b_d2_L0Global_TOS);
   fChain->SetBranchAddress("d2_Hlt1Global_Dec", &d2_Hlt1Global_Dec, &b_d2_Hlt1Global_Dec);
   fChain->SetBranchAddress("d2_Hlt1Global_TIS", &d2_Hlt1Global_TIS, &b_d2_Hlt1Global_TIS);
   fChain->SetBranchAddress("d2_Hlt1Global_TOS", &d2_Hlt1Global_TOS, &b_d2_Hlt1Global_TOS);
   fChain->SetBranchAddress("d2_Hlt1Phys_Dec", &d2_Hlt1Phys_Dec, &b_d2_Hlt1Phys_Dec);
   fChain->SetBranchAddress("d2_Hlt1Phys_TIS", &d2_Hlt1Phys_TIS, &b_d2_Hlt1Phys_TIS);
   fChain->SetBranchAddress("d2_Hlt1Phys_TOS", &d2_Hlt1Phys_TOS, &b_d2_Hlt1Phys_TOS);
   fChain->SetBranchAddress("d2_Hlt2Global_Dec", &d2_Hlt2Global_Dec, &b_d2_Hlt2Global_Dec);
   fChain->SetBranchAddress("d2_Hlt2Global_TIS", &d2_Hlt2Global_TIS, &b_d2_Hlt2Global_TIS);
   fChain->SetBranchAddress("d2_Hlt2Global_TOS", &d2_Hlt2Global_TOS, &b_d2_Hlt2Global_TOS);
   fChain->SetBranchAddress("d2_Hlt2Phys_Dec", &d2_Hlt2Phys_Dec, &b_d2_Hlt2Phys_Dec);
   fChain->SetBranchAddress("d2_Hlt2Phys_TIS", &d2_Hlt2Phys_TIS, &b_d2_Hlt2Phys_TIS);
   fChain->SetBranchAddress("d2_Hlt2Phys_TOS", &d2_Hlt2Phys_TOS, &b_d2_Hlt2Phys_TOS);
   fChain->SetBranchAddress("d2_L0MuonDecision_Dec", &d2_L0MuonDecision_Dec, &b_d2_L0MuonDecision_Dec);
   fChain->SetBranchAddress("d2_L0MuonDecision_TIS", &d2_L0MuonDecision_TIS, &b_d2_L0MuonDecision_TIS);
   fChain->SetBranchAddress("d2_L0MuonDecision_TOS", &d2_L0MuonDecision_TOS, &b_d2_L0MuonDecision_TOS);
   fChain->SetBranchAddress("d2_Hlt1TrackAllL0Decision_Dec", &d2_Hlt1TrackAllL0Decision_Dec, &b_d2_Hlt1TrackAllL0Decision_Dec);
   fChain->SetBranchAddress("d2_Hlt1TrackAllL0Decision_TIS", &d2_Hlt1TrackAllL0Decision_TIS, &b_d2_Hlt1TrackAllL0Decision_TIS);
   fChain->SetBranchAddress("d2_Hlt1TrackAllL0Decision_TOS", &d2_Hlt1TrackAllL0Decision_TOS, &b_d2_Hlt1TrackAllL0Decision_TOS);
   fChain->SetBranchAddress("d2_Hlt1TrackMuonDecision_Dec", &d2_Hlt1TrackMuonDecision_Dec, &b_d2_Hlt1TrackMuonDecision_Dec);
   fChain->SetBranchAddress("d2_Hlt1TrackMuonDecision_TIS", &d2_Hlt1TrackMuonDecision_TIS, &b_d2_Hlt1TrackMuonDecision_TIS);
   fChain->SetBranchAddress("d2_Hlt1TrackMuonDecision_TOS", &d2_Hlt1TrackMuonDecision_TOS, &b_d2_Hlt1TrackMuonDecision_TOS);
   fChain->SetBranchAddress("h1_MC12TuneV2_ProbNNe", &h1_MC12TuneV2_ProbNNe, &b_h1_MC12TuneV2_ProbNNe);
   fChain->SetBranchAddress("h1_MC12TuneV2_ProbNNmu", &h1_MC12TuneV2_ProbNNmu, &b_h1_MC12TuneV2_ProbNNmu);
   fChain->SetBranchAddress("h1_MC12TuneV2_ProbNNpi", &h1_MC12TuneV2_ProbNNpi, &b_h1_MC12TuneV2_ProbNNpi);
   fChain->SetBranchAddress("h1_MC12TuneV2_ProbNNk", &h1_MC12TuneV2_ProbNNk, &b_h1_MC12TuneV2_ProbNNk);
   fChain->SetBranchAddress("h1_MC12TuneV2_ProbNNp", &h1_MC12TuneV2_ProbNNp, &b_h1_MC12TuneV2_ProbNNp);
   fChain->SetBranchAddress("h1_MC12TuneV2_ProbNNghost", &h1_MC12TuneV2_ProbNNghost, &b_h1_MC12TuneV2_ProbNNghost);
   fChain->SetBranchAddress("h1_MC12TuneV3_ProbNNe", &h1_MC12TuneV3_ProbNNe, &b_h1_MC12TuneV3_ProbNNe);
   fChain->SetBranchAddress("h1_MC12TuneV3_ProbNNmu", &h1_MC12TuneV3_ProbNNmu, &b_h1_MC12TuneV3_ProbNNmu);
   fChain->SetBranchAddress("h1_MC12TuneV3_ProbNNpi", &h1_MC12TuneV3_ProbNNpi, &b_h1_MC12TuneV3_ProbNNpi);
   fChain->SetBranchAddress("h1_MC12TuneV3_ProbNNk", &h1_MC12TuneV3_ProbNNk, &b_h1_MC12TuneV3_ProbNNk);
   fChain->SetBranchAddress("h1_MC12TuneV3_ProbNNp", &h1_MC12TuneV3_ProbNNp, &b_h1_MC12TuneV3_ProbNNp);
   fChain->SetBranchAddress("h1_MC12TuneV3_ProbNNghost", &h1_MC12TuneV3_ProbNNghost, &b_h1_MC12TuneV3_ProbNNghost);
   fChain->SetBranchAddress("h1_P", &h1_P, &b_h1_P);
   fChain->SetBranchAddress("h1_PT", &h1_PT, &b_h1_PT);
   fChain->SetBranchAddress("h1_PE", &h1_PE, &b_h1_PE);
   fChain->SetBranchAddress("h1_PX", &h1_PX, &b_h1_PX);
   fChain->SetBranchAddress("h1_PY", &h1_PY, &b_h1_PY);
   fChain->SetBranchAddress("h1_PZ", &h1_PZ, &b_h1_PZ);
   fChain->SetBranchAddress("h1_M", &h1_M, &b_h1_M);
   fChain->SetBranchAddress("h1_L0Calo_HCAL_realET", &h1_L0Calo_HCAL_realET, &b_h1_L0Calo_HCAL_realET);
   fChain->SetBranchAddress("h1_L0Calo_HCAL_xProjection", &h1_L0Calo_HCAL_xProjection, &b_h1_L0Calo_HCAL_xProjection);
   fChain->SetBranchAddress("h1_L0Calo_HCAL_yProjection", &h1_L0Calo_HCAL_yProjection, &b_h1_L0Calo_HCAL_yProjection);
   fChain->SetBranchAddress("h1_L0Calo_HCAL_region", &h1_L0Calo_HCAL_region, &b_h1_L0Calo_HCAL_region);
   fChain->SetBranchAddress("h1_L0Calo_HCAL_TriggerET", &h1_L0Calo_HCAL_TriggerET, &b_h1_L0Calo_HCAL_TriggerET);
   fChain->SetBranchAddress("h1_L0Calo_HCAL_TriggerHCALET", &h1_L0Calo_HCAL_TriggerHCALET, &b_h1_L0Calo_HCAL_TriggerHCALET);
   fChain->SetBranchAddress("h1_L0Calo_HCAL_xTrigger", &h1_L0Calo_HCAL_xTrigger, &b_h1_L0Calo_HCAL_xTrigger);
   fChain->SetBranchAddress("h1_L0Calo_HCAL_yTrigger", &h1_L0Calo_HCAL_yTrigger, &b_h1_L0Calo_HCAL_yTrigger);
   fChain->SetBranchAddress("h1_ID", &h1_ID, &b_h1_ID);
   fChain->SetBranchAddress("h1_PIDe", &h1_PIDe, &b_h1_PIDe);
   fChain->SetBranchAddress("h1_PIDmu", &h1_PIDmu, &b_h1_PIDmu);
   fChain->SetBranchAddress("h1_PIDK", &h1_PIDK, &b_h1_PIDK);
   fChain->SetBranchAddress("h1_PIDp", &h1_PIDp, &b_h1_PIDp);
   fChain->SetBranchAddress("h1_ProbNNe", &h1_ProbNNe, &b_h1_ProbNNe);
   fChain->SetBranchAddress("h1_ProbNNk", &h1_ProbNNk, &b_h1_ProbNNk);
   fChain->SetBranchAddress("h1_ProbNNp", &h1_ProbNNp, &b_h1_ProbNNp);
   fChain->SetBranchAddress("h1_ProbNNpi", &h1_ProbNNpi, &b_h1_ProbNNpi);
   fChain->SetBranchAddress("h1_ProbNNmu", &h1_ProbNNmu, &b_h1_ProbNNmu);
   fChain->SetBranchAddress("h1_ProbNNghost", &h1_ProbNNghost, &b_h1_ProbNNghost);
   fChain->SetBranchAddress("h1_hasMuon", &h1_hasMuon, &b_h1_hasMuon);
   fChain->SetBranchAddress("h1_isMuon", &h1_isMuon, &b_h1_isMuon);
   fChain->SetBranchAddress("h1_hasRich", &h1_hasRich, &b_h1_hasRich);
   fChain->SetBranchAddress("h1_hasCalo", &h1_hasCalo, &b_h1_hasCalo);
   fChain->SetBranchAddress("h1_CosTheta", &h1_CosTheta, &b_h1_CosTheta);
   fChain->SetBranchAddress("h1_OWNPV_X", &h1_OWNPV_X, &b_h1_OWNPV_X);
   fChain->SetBranchAddress("h1_OWNPV_Y", &h1_OWNPV_Y, &b_h1_OWNPV_Y);
   fChain->SetBranchAddress("h1_OWNPV_Z", &h1_OWNPV_Z, &b_h1_OWNPV_Z);
   fChain->SetBranchAddress("h1_OWNPV_XERR", &h1_OWNPV_XERR, &b_h1_OWNPV_XERR);
   fChain->SetBranchAddress("h1_OWNPV_YERR", &h1_OWNPV_YERR, &b_h1_OWNPV_YERR);
   fChain->SetBranchAddress("h1_OWNPV_ZERR", &h1_OWNPV_ZERR, &b_h1_OWNPV_ZERR);
   fChain->SetBranchAddress("h1_OWNPV_CHI2", &h1_OWNPV_CHI2, &b_h1_OWNPV_CHI2);
   fChain->SetBranchAddress("h1_OWNPV_NDOF", &h1_OWNPV_NDOF, &b_h1_OWNPV_NDOF);
   fChain->SetBranchAddress("h1_OWNPV_COV_", h1_OWNPV_COV_, &b_h1_OWNPV_COV_);
   fChain->SetBranchAddress("h1_IP_OWNPV", &h1_IP_OWNPV, &b_h1_IP_OWNPV);
   fChain->SetBranchAddress("h1_IPCHI2_OWNPV", &h1_IPCHI2_OWNPV, &b_h1_IPCHI2_OWNPV);
   fChain->SetBranchAddress("h1_ORIVX_X", &h1_ORIVX_X, &b_h1_ORIVX_X);
   fChain->SetBranchAddress("h1_ORIVX_Y", &h1_ORIVX_Y, &b_h1_ORIVX_Y);
   fChain->SetBranchAddress("h1_ORIVX_Z", &h1_ORIVX_Z, &b_h1_ORIVX_Z);
   fChain->SetBranchAddress("h1_ORIVX_XERR", &h1_ORIVX_XERR, &b_h1_ORIVX_XERR);
   fChain->SetBranchAddress("h1_ORIVX_YERR", &h1_ORIVX_YERR, &b_h1_ORIVX_YERR);
   fChain->SetBranchAddress("h1_ORIVX_ZERR", &h1_ORIVX_ZERR, &b_h1_ORIVX_ZERR);
   fChain->SetBranchAddress("h1_ORIVX_CHI2", &h1_ORIVX_CHI2, &b_h1_ORIVX_CHI2);
   fChain->SetBranchAddress("h1_ORIVX_NDOF", &h1_ORIVX_NDOF, &b_h1_ORIVX_NDOF);
   fChain->SetBranchAddress("h1_ORIVX_COV_", h1_ORIVX_COV_, &b_h1_ORIVX_COV_);
   fChain->SetBranchAddress("h1_Eta", &h1_Eta, &b_h1_Eta);
   fChain->SetBranchAddress("h1_Phi", &h1_Phi, &b_h1_Phi);
   fChain->SetBranchAddress("h1_MLoKi", &h1_MLoKi, &b_h1_MLoKi);
   fChain->SetBranchAddress("h1_MMLoKi", &h1_MMLoKi, &b_h1_MMLoKi);
   fChain->SetBranchAddress("h1_NTrk", &h1_NTrk, &b_h1_NTrk);
   fChain->SetBranchAddress("h1_N90", &h1_N90, &b_h1_N90);
   fChain->SetBranchAddress("h1_MTF", &h1_MTF, &b_h1_MTF);
   fChain->SetBranchAddress("h1_NSatCells", &h1_NSatCells, &b_h1_NSatCells);
   fChain->SetBranchAddress("h1_NHasPVInfo", &h1_NHasPVInfo, &b_h1_NHasPVInfo);
   fChain->SetBranchAddress("h1_JEC_Cor", &h1_JEC_Cor, &b_h1_JEC_Cor);
   fChain->SetBranchAddress("h1_JEC_PV", &h1_JEC_PV, &b_h1_JEC_PV);
   fChain->SetBranchAddress("h1_TRUEID", &h1_TRUEID, &b_h1_TRUEID);
   fChain->SetBranchAddress("h1_MC_MOTHER_ID", &h1_MC_MOTHER_ID, &b_h1_MC_MOTHER_ID);
   fChain->SetBranchAddress("h1_MC_MOTHER_KEY", &h1_MC_MOTHER_KEY, &b_h1_MC_MOTHER_KEY);
   fChain->SetBranchAddress("h1_MC_GD_MOTHER_ID", &h1_MC_GD_MOTHER_ID, &b_h1_MC_GD_MOTHER_ID);
   fChain->SetBranchAddress("h1_MC_GD_MOTHER_KEY", &h1_MC_GD_MOTHER_KEY, &b_h1_MC_GD_MOTHER_KEY);
   fChain->SetBranchAddress("h1_MC_GD_GD_MOTHER_ID", &h1_MC_GD_GD_MOTHER_ID, &b_h1_MC_GD_GD_MOTHER_ID);
   fChain->SetBranchAddress("h1_MC_GD_GD_MOTHER_KEY", &h1_MC_GD_GD_MOTHER_KEY, &b_h1_MC_GD_GD_MOTHER_KEY);
   fChain->SetBranchAddress("h1_TRUEP_E", &h1_TRUEP_E, &b_h1_TRUEP_E);
   fChain->SetBranchAddress("h1_TRUEP_X", &h1_TRUEP_X, &b_h1_TRUEP_X);
   fChain->SetBranchAddress("h1_TRUEP_Y", &h1_TRUEP_Y, &b_h1_TRUEP_Y);
   fChain->SetBranchAddress("h1_TRUEP_Z", &h1_TRUEP_Z, &b_h1_TRUEP_Z);
   fChain->SetBranchAddress("h1_TRUEPT", &h1_TRUEPT, &b_h1_TRUEPT);
   fChain->SetBranchAddress("h1_TRUEORIGINVERTEX_X", &h1_TRUEORIGINVERTEX_X, &b_h1_TRUEORIGINVERTEX_X);
   fChain->SetBranchAddress("h1_TRUEORIGINVERTEX_Y", &h1_TRUEORIGINVERTEX_Y, &b_h1_TRUEORIGINVERTEX_Y);
   fChain->SetBranchAddress("h1_TRUEORIGINVERTEX_Z", &h1_TRUEORIGINVERTEX_Z, &b_h1_TRUEORIGINVERTEX_Z);
   fChain->SetBranchAddress("h1_TRUEENDVERTEX_X", &h1_TRUEENDVERTEX_X, &b_h1_TRUEENDVERTEX_X);
   fChain->SetBranchAddress("h1_TRUEENDVERTEX_Y", &h1_TRUEENDVERTEX_Y, &b_h1_TRUEENDVERTEX_Y);
   fChain->SetBranchAddress("h1_TRUEENDVERTEX_Z", &h1_TRUEENDVERTEX_Z, &b_h1_TRUEENDVERTEX_Z);
   fChain->SetBranchAddress("h1_TRUEISSTABLE", &h1_TRUEISSTABLE, &b_h1_TRUEISSTABLE);
   fChain->SetBranchAddress("h1_TRUETAU", &h1_TRUETAU, &b_h1_TRUETAU);
   fChain->SetBranchAddress("h1_CombDLLMu", &h1_CombDLLMu, &b_h1_CombDLLMu);
   fChain->SetBranchAddress("h1_InMuonAcc", &h1_InMuonAcc, &b_h1_InMuonAcc);
   fChain->SetBranchAddress("h1_MuonDist2", &h1_MuonDist2, &b_h1_MuonDist2);
   fChain->SetBranchAddress("h1_regionInM2", &h1_regionInM2, &b_h1_regionInM2);
   fChain->SetBranchAddress("h1_isMuonLoose", &h1_isMuonLoose, &b_h1_isMuonLoose);
   fChain->SetBranchAddress("h1_NShared", &h1_NShared, &b_h1_NShared);
   fChain->SetBranchAddress("h1_MuonLLmu", &h1_MuonLLmu, &b_h1_MuonLLmu);
   fChain->SetBranchAddress("h1_MuonLLbg", &h1_MuonLLbg, &b_h1_MuonLLbg);
   fChain->SetBranchAddress("h1_isMuonFromProto", &h1_isMuonFromProto, &b_h1_isMuonFromProto);
   fChain->SetBranchAddress("h1_L0Global_Dec", &h1_L0Global_Dec, &b_h1_L0Global_Dec);
   fChain->SetBranchAddress("h1_L0Global_TIS", &h1_L0Global_TIS, &b_h1_L0Global_TIS);
   fChain->SetBranchAddress("h1_L0Global_TOS", &h1_L0Global_TOS, &b_h1_L0Global_TOS);
   fChain->SetBranchAddress("h1_Hlt1Global_Dec", &h1_Hlt1Global_Dec, &b_h1_Hlt1Global_Dec);
   fChain->SetBranchAddress("h1_Hlt1Global_TIS", &h1_Hlt1Global_TIS, &b_h1_Hlt1Global_TIS);
   fChain->SetBranchAddress("h1_Hlt1Global_TOS", &h1_Hlt1Global_TOS, &b_h1_Hlt1Global_TOS);
   fChain->SetBranchAddress("h1_Hlt1Phys_Dec", &h1_Hlt1Phys_Dec, &b_h1_Hlt1Phys_Dec);
   fChain->SetBranchAddress("h1_Hlt1Phys_TIS", &h1_Hlt1Phys_TIS, &b_h1_Hlt1Phys_TIS);
   fChain->SetBranchAddress("h1_Hlt1Phys_TOS", &h1_Hlt1Phys_TOS, &b_h1_Hlt1Phys_TOS);
   fChain->SetBranchAddress("h1_Hlt2Global_Dec", &h1_Hlt2Global_Dec, &b_h1_Hlt2Global_Dec);
   fChain->SetBranchAddress("h1_Hlt2Global_TIS", &h1_Hlt2Global_TIS, &b_h1_Hlt2Global_TIS);
   fChain->SetBranchAddress("h1_Hlt2Global_TOS", &h1_Hlt2Global_TOS, &b_h1_Hlt2Global_TOS);
   fChain->SetBranchAddress("h1_Hlt2Phys_Dec", &h1_Hlt2Phys_Dec, &b_h1_Hlt2Phys_Dec);
   fChain->SetBranchAddress("h1_Hlt2Phys_TIS", &h1_Hlt2Phys_TIS, &b_h1_Hlt2Phys_TIS);
   fChain->SetBranchAddress("h1_Hlt2Phys_TOS", &h1_Hlt2Phys_TOS, &b_h1_Hlt2Phys_TOS);
   fChain->SetBranchAddress("h1_L0MuonDecision_Dec", &h1_L0MuonDecision_Dec, &b_h1_L0MuonDecision_Dec);
   fChain->SetBranchAddress("h1_L0MuonDecision_TIS", &h1_L0MuonDecision_TIS, &b_h1_L0MuonDecision_TIS);
   fChain->SetBranchAddress("h1_L0MuonDecision_TOS", &h1_L0MuonDecision_TOS, &b_h1_L0MuonDecision_TOS);
   fChain->SetBranchAddress("h1_Hlt1TrackAllL0Decision_Dec", &h1_Hlt1TrackAllL0Decision_Dec, &b_h1_Hlt1TrackAllL0Decision_Dec);
   fChain->SetBranchAddress("h1_Hlt1TrackAllL0Decision_TIS", &h1_Hlt1TrackAllL0Decision_TIS, &b_h1_Hlt1TrackAllL0Decision_TIS);
   fChain->SetBranchAddress("h1_Hlt1TrackAllL0Decision_TOS", &h1_Hlt1TrackAllL0Decision_TOS, &b_h1_Hlt1TrackAllL0Decision_TOS);
   fChain->SetBranchAddress("h1_Hlt1TrackMuonDecision_Dec", &h1_Hlt1TrackMuonDecision_Dec, &b_h1_Hlt1TrackMuonDecision_Dec);
   fChain->SetBranchAddress("h1_Hlt1TrackMuonDecision_TIS", &h1_Hlt1TrackMuonDecision_TIS, &b_h1_Hlt1TrackMuonDecision_TIS);
   fChain->SetBranchAddress("h1_Hlt1TrackMuonDecision_TOS", &h1_Hlt1TrackMuonDecision_TOS, &b_h1_Hlt1TrackMuonDecision_TOS);
   fChain->SetBranchAddress("h1_TRACK_Type", &h1_TRACK_Type, &b_h1_TRACK_Type);
   fChain->SetBranchAddress("h1_TRACK_Key", &h1_TRACK_Key, &b_h1_TRACK_Key);
   fChain->SetBranchAddress("h1_TRACK_CHI2NDOF", &h1_TRACK_CHI2NDOF, &b_h1_TRACK_CHI2NDOF);
   fChain->SetBranchAddress("h1_TRACK_PCHI2", &h1_TRACK_PCHI2, &b_h1_TRACK_PCHI2);
   fChain->SetBranchAddress("h1_TRACK_MatchCHI2", &h1_TRACK_MatchCHI2, &b_h1_TRACK_MatchCHI2);
   fChain->SetBranchAddress("h1_TRACK_GhostProb", &h1_TRACK_GhostProb, &b_h1_TRACK_GhostProb);
   fChain->SetBranchAddress("h1_TRACK_CloneDist", &h1_TRACK_CloneDist, &b_h1_TRACK_CloneDist);
   fChain->SetBranchAddress("h1_TRACK_Likelihood", &h1_TRACK_Likelihood, &b_h1_TRACK_Likelihood);
   fChain->SetBranchAddress("h2_MC12TuneV2_ProbNNe", &h2_MC12TuneV2_ProbNNe, &b_h2_MC12TuneV2_ProbNNe);
   fChain->SetBranchAddress("h2_MC12TuneV2_ProbNNmu", &h2_MC12TuneV2_ProbNNmu, &b_h2_MC12TuneV2_ProbNNmu);
   fChain->SetBranchAddress("h2_MC12TuneV2_ProbNNpi", &h2_MC12TuneV2_ProbNNpi, &b_h2_MC12TuneV2_ProbNNpi);
   fChain->SetBranchAddress("h2_MC12TuneV2_ProbNNk", &h2_MC12TuneV2_ProbNNk, &b_h2_MC12TuneV2_ProbNNk);
   fChain->SetBranchAddress("h2_MC12TuneV2_ProbNNp", &h2_MC12TuneV2_ProbNNp, &b_h2_MC12TuneV2_ProbNNp);
   fChain->SetBranchAddress("h2_MC12TuneV2_ProbNNghost", &h2_MC12TuneV2_ProbNNghost, &b_h2_MC12TuneV2_ProbNNghost);
   fChain->SetBranchAddress("h2_MC12TuneV3_ProbNNe", &h2_MC12TuneV3_ProbNNe, &b_h2_MC12TuneV3_ProbNNe);
   fChain->SetBranchAddress("h2_MC12TuneV3_ProbNNmu", &h2_MC12TuneV3_ProbNNmu, &b_h2_MC12TuneV3_ProbNNmu);
   fChain->SetBranchAddress("h2_MC12TuneV3_ProbNNpi", &h2_MC12TuneV3_ProbNNpi, &b_h2_MC12TuneV3_ProbNNpi);
   fChain->SetBranchAddress("h2_MC12TuneV3_ProbNNk", &h2_MC12TuneV3_ProbNNk, &b_h2_MC12TuneV3_ProbNNk);
   fChain->SetBranchAddress("h2_MC12TuneV3_ProbNNp", &h2_MC12TuneV3_ProbNNp, &b_h2_MC12TuneV3_ProbNNp);
   fChain->SetBranchAddress("h2_MC12TuneV3_ProbNNghost", &h2_MC12TuneV3_ProbNNghost, &b_h2_MC12TuneV3_ProbNNghost);
   fChain->SetBranchAddress("h2_P", &h2_P, &b_h2_P);
   fChain->SetBranchAddress("h2_PT", &h2_PT, &b_h2_PT);
   fChain->SetBranchAddress("h2_PE", &h2_PE, &b_h2_PE);
   fChain->SetBranchAddress("h2_PX", &h2_PX, &b_h2_PX);
   fChain->SetBranchAddress("h2_PY", &h2_PY, &b_h2_PY);
   fChain->SetBranchAddress("h2_PZ", &h2_PZ, &b_h2_PZ);
   fChain->SetBranchAddress("h2_M", &h2_M, &b_h2_M);
   fChain->SetBranchAddress("h2_L0Calo_HCAL_realET", &h2_L0Calo_HCAL_realET, &b_h2_L0Calo_HCAL_realET);
   fChain->SetBranchAddress("h2_L0Calo_HCAL_xProjection", &h2_L0Calo_HCAL_xProjection, &b_h2_L0Calo_HCAL_xProjection);
   fChain->SetBranchAddress("h2_L0Calo_HCAL_yProjection", &h2_L0Calo_HCAL_yProjection, &b_h2_L0Calo_HCAL_yProjection);
   fChain->SetBranchAddress("h2_L0Calo_HCAL_region", &h2_L0Calo_HCAL_region, &b_h2_L0Calo_HCAL_region);
   fChain->SetBranchAddress("h2_L0Calo_HCAL_TriggerET", &h2_L0Calo_HCAL_TriggerET, &b_h2_L0Calo_HCAL_TriggerET);
   fChain->SetBranchAddress("h2_L0Calo_HCAL_TriggerHCALET", &h2_L0Calo_HCAL_TriggerHCALET, &b_h2_L0Calo_HCAL_TriggerHCALET);
   fChain->SetBranchAddress("h2_L0Calo_HCAL_xTrigger", &h2_L0Calo_HCAL_xTrigger, &b_h2_L0Calo_HCAL_xTrigger);
   fChain->SetBranchAddress("h2_L0Calo_HCAL_yTrigger", &h2_L0Calo_HCAL_yTrigger, &b_h2_L0Calo_HCAL_yTrigger);
   fChain->SetBranchAddress("h2_ID", &h2_ID, &b_h2_ID);
   fChain->SetBranchAddress("h2_PIDe", &h2_PIDe, &b_h2_PIDe);
   fChain->SetBranchAddress("h2_PIDmu", &h2_PIDmu, &b_h2_PIDmu);
   fChain->SetBranchAddress("h2_PIDK", &h2_PIDK, &b_h2_PIDK);
   fChain->SetBranchAddress("h2_PIDp", &h2_PIDp, &b_h2_PIDp);
   fChain->SetBranchAddress("h2_ProbNNe", &h2_ProbNNe, &b_h2_ProbNNe);
   fChain->SetBranchAddress("h2_ProbNNk", &h2_ProbNNk, &b_h2_ProbNNk);
   fChain->SetBranchAddress("h2_ProbNNp", &h2_ProbNNp, &b_h2_ProbNNp);
   fChain->SetBranchAddress("h2_ProbNNpi", &h2_ProbNNpi, &b_h2_ProbNNpi);
   fChain->SetBranchAddress("h2_ProbNNmu", &h2_ProbNNmu, &b_h2_ProbNNmu);
   fChain->SetBranchAddress("h2_ProbNNghost", &h2_ProbNNghost, &b_h2_ProbNNghost);
   fChain->SetBranchAddress("h2_hasMuon", &h2_hasMuon, &b_h2_hasMuon);
   fChain->SetBranchAddress("h2_isMuon", &h2_isMuon, &b_h2_isMuon);
   fChain->SetBranchAddress("h2_hasRich", &h2_hasRich, &b_h2_hasRich);
   fChain->SetBranchAddress("h2_hasCalo", &h2_hasCalo, &b_h2_hasCalo);
   fChain->SetBranchAddress("h2_CosTheta", &h2_CosTheta, &b_h2_CosTheta);
   fChain->SetBranchAddress("h2_OWNPV_X", &h2_OWNPV_X, &b_h2_OWNPV_X);
   fChain->SetBranchAddress("h2_OWNPV_Y", &h2_OWNPV_Y, &b_h2_OWNPV_Y);
   fChain->SetBranchAddress("h2_OWNPV_Z", &h2_OWNPV_Z, &b_h2_OWNPV_Z);
   fChain->SetBranchAddress("h2_OWNPV_XERR", &h2_OWNPV_XERR, &b_h2_OWNPV_XERR);
   fChain->SetBranchAddress("h2_OWNPV_YERR", &h2_OWNPV_YERR, &b_h2_OWNPV_YERR);
   fChain->SetBranchAddress("h2_OWNPV_ZERR", &h2_OWNPV_ZERR, &b_h2_OWNPV_ZERR);
   fChain->SetBranchAddress("h2_OWNPV_CHI2", &h2_OWNPV_CHI2, &b_h2_OWNPV_CHI2);
   fChain->SetBranchAddress("h2_OWNPV_NDOF", &h2_OWNPV_NDOF, &b_h2_OWNPV_NDOF);
   fChain->SetBranchAddress("h2_OWNPV_COV_", h2_OWNPV_COV_, &b_h2_OWNPV_COV_);
   fChain->SetBranchAddress("h2_IP_OWNPV", &h2_IP_OWNPV, &b_h2_IP_OWNPV);
   fChain->SetBranchAddress("h2_IPCHI2_OWNPV", &h2_IPCHI2_OWNPV, &b_h2_IPCHI2_OWNPV);
   fChain->SetBranchAddress("h2_ORIVX_X", &h2_ORIVX_X, &b_h2_ORIVX_X);
   fChain->SetBranchAddress("h2_ORIVX_Y", &h2_ORIVX_Y, &b_h2_ORIVX_Y);
   fChain->SetBranchAddress("h2_ORIVX_Z", &h2_ORIVX_Z, &b_h2_ORIVX_Z);
   fChain->SetBranchAddress("h2_ORIVX_XERR", &h2_ORIVX_XERR, &b_h2_ORIVX_XERR);
   fChain->SetBranchAddress("h2_ORIVX_YERR", &h2_ORIVX_YERR, &b_h2_ORIVX_YERR);
   fChain->SetBranchAddress("h2_ORIVX_ZERR", &h2_ORIVX_ZERR, &b_h2_ORIVX_ZERR);
   fChain->SetBranchAddress("h2_ORIVX_CHI2", &h2_ORIVX_CHI2, &b_h2_ORIVX_CHI2);
   fChain->SetBranchAddress("h2_ORIVX_NDOF", &h2_ORIVX_NDOF, &b_h2_ORIVX_NDOF);
   fChain->SetBranchAddress("h2_ORIVX_COV_", h2_ORIVX_COV_, &b_h2_ORIVX_COV_);
   fChain->SetBranchAddress("h2_Eta", &h2_Eta, &b_h2_Eta);
   fChain->SetBranchAddress("h2_Phi", &h2_Phi, &b_h2_Phi);
   fChain->SetBranchAddress("h2_MLoKi", &h2_MLoKi, &b_h2_MLoKi);
   fChain->SetBranchAddress("h2_MMLoKi", &h2_MMLoKi, &b_h2_MMLoKi);
   fChain->SetBranchAddress("h2_NTrk", &h2_NTrk, &b_h2_NTrk);
   fChain->SetBranchAddress("h2_N90", &h2_N90, &b_h2_N90);
   fChain->SetBranchAddress("h2_MTF", &h2_MTF, &b_h2_MTF);
   fChain->SetBranchAddress("h2_NSatCells", &h2_NSatCells, &b_h2_NSatCells);
   fChain->SetBranchAddress("h2_NHasPVInfo", &h2_NHasPVInfo, &b_h2_NHasPVInfo);
   fChain->SetBranchAddress("h2_JEC_Cor", &h2_JEC_Cor, &b_h2_JEC_Cor);
   fChain->SetBranchAddress("h2_JEC_PV", &h2_JEC_PV, &b_h2_JEC_PV);
   fChain->SetBranchAddress("h2_TRUEID", &h2_TRUEID, &b_h2_TRUEID);
   fChain->SetBranchAddress("h2_MC_MOTHER_ID", &h2_MC_MOTHER_ID, &b_h2_MC_MOTHER_ID);
   fChain->SetBranchAddress("h2_MC_MOTHER_KEY", &h2_MC_MOTHER_KEY, &b_h2_MC_MOTHER_KEY);
   fChain->SetBranchAddress("h2_MC_GD_MOTHER_ID", &h2_MC_GD_MOTHER_ID, &b_h2_MC_GD_MOTHER_ID);
   fChain->SetBranchAddress("h2_MC_GD_MOTHER_KEY", &h2_MC_GD_MOTHER_KEY, &b_h2_MC_GD_MOTHER_KEY);
   fChain->SetBranchAddress("h2_MC_GD_GD_MOTHER_ID", &h2_MC_GD_GD_MOTHER_ID, &b_h2_MC_GD_GD_MOTHER_ID);
   fChain->SetBranchAddress("h2_MC_GD_GD_MOTHER_KEY", &h2_MC_GD_GD_MOTHER_KEY, &b_h2_MC_GD_GD_MOTHER_KEY);
   fChain->SetBranchAddress("h2_TRUEP_E", &h2_TRUEP_E, &b_h2_TRUEP_E);
   fChain->SetBranchAddress("h2_TRUEP_X", &h2_TRUEP_X, &b_h2_TRUEP_X);
   fChain->SetBranchAddress("h2_TRUEP_Y", &h2_TRUEP_Y, &b_h2_TRUEP_Y);
   fChain->SetBranchAddress("h2_TRUEP_Z", &h2_TRUEP_Z, &b_h2_TRUEP_Z);
   fChain->SetBranchAddress("h2_TRUEPT", &h2_TRUEPT, &b_h2_TRUEPT);
   fChain->SetBranchAddress("h2_TRUEORIGINVERTEX_X", &h2_TRUEORIGINVERTEX_X, &b_h2_TRUEORIGINVERTEX_X);
   fChain->SetBranchAddress("h2_TRUEORIGINVERTEX_Y", &h2_TRUEORIGINVERTEX_Y, &b_h2_TRUEORIGINVERTEX_Y);
   fChain->SetBranchAddress("h2_TRUEORIGINVERTEX_Z", &h2_TRUEORIGINVERTEX_Z, &b_h2_TRUEORIGINVERTEX_Z);
   fChain->SetBranchAddress("h2_TRUEENDVERTEX_X", &h2_TRUEENDVERTEX_X, &b_h2_TRUEENDVERTEX_X);
   fChain->SetBranchAddress("h2_TRUEENDVERTEX_Y", &h2_TRUEENDVERTEX_Y, &b_h2_TRUEENDVERTEX_Y);
   fChain->SetBranchAddress("h2_TRUEENDVERTEX_Z", &h2_TRUEENDVERTEX_Z, &b_h2_TRUEENDVERTEX_Z);
   fChain->SetBranchAddress("h2_TRUEISSTABLE", &h2_TRUEISSTABLE, &b_h2_TRUEISSTABLE);
   fChain->SetBranchAddress("h2_TRUETAU", &h2_TRUETAU, &b_h2_TRUETAU);
   fChain->SetBranchAddress("h2_CombDLLMu", &h2_CombDLLMu, &b_h2_CombDLLMu);
   fChain->SetBranchAddress("h2_InMuonAcc", &h2_InMuonAcc, &b_h2_InMuonAcc);
   fChain->SetBranchAddress("h2_MuonDist2", &h2_MuonDist2, &b_h2_MuonDist2);
   fChain->SetBranchAddress("h2_regionInM2", &h2_regionInM2, &b_h2_regionInM2);
   fChain->SetBranchAddress("h2_isMuonLoose", &h2_isMuonLoose, &b_h2_isMuonLoose);
   fChain->SetBranchAddress("h2_NShared", &h2_NShared, &b_h2_NShared);
   fChain->SetBranchAddress("h2_MuonLLmu", &h2_MuonLLmu, &b_h2_MuonLLmu);
   fChain->SetBranchAddress("h2_MuonLLbg", &h2_MuonLLbg, &b_h2_MuonLLbg);
   fChain->SetBranchAddress("h2_isMuonFromProto", &h2_isMuonFromProto, &b_h2_isMuonFromProto);
   fChain->SetBranchAddress("h2_L0Global_Dec", &h2_L0Global_Dec, &b_h2_L0Global_Dec);
   fChain->SetBranchAddress("h2_L0Global_TIS", &h2_L0Global_TIS, &b_h2_L0Global_TIS);
   fChain->SetBranchAddress("h2_L0Global_TOS", &h2_L0Global_TOS, &b_h2_L0Global_TOS);
   fChain->SetBranchAddress("h2_Hlt1Global_Dec", &h2_Hlt1Global_Dec, &b_h2_Hlt1Global_Dec);
   fChain->SetBranchAddress("h2_Hlt1Global_TIS", &h2_Hlt1Global_TIS, &b_h2_Hlt1Global_TIS);
   fChain->SetBranchAddress("h2_Hlt1Global_TOS", &h2_Hlt1Global_TOS, &b_h2_Hlt1Global_TOS);
   fChain->SetBranchAddress("h2_Hlt1Phys_Dec", &h2_Hlt1Phys_Dec, &b_h2_Hlt1Phys_Dec);
   fChain->SetBranchAddress("h2_Hlt1Phys_TIS", &h2_Hlt1Phys_TIS, &b_h2_Hlt1Phys_TIS);
   fChain->SetBranchAddress("h2_Hlt1Phys_TOS", &h2_Hlt1Phys_TOS, &b_h2_Hlt1Phys_TOS);
   fChain->SetBranchAddress("h2_Hlt2Global_Dec", &h2_Hlt2Global_Dec, &b_h2_Hlt2Global_Dec);
   fChain->SetBranchAddress("h2_Hlt2Global_TIS", &h2_Hlt2Global_TIS, &b_h2_Hlt2Global_TIS);
   fChain->SetBranchAddress("h2_Hlt2Global_TOS", &h2_Hlt2Global_TOS, &b_h2_Hlt2Global_TOS);
   fChain->SetBranchAddress("h2_Hlt2Phys_Dec", &h2_Hlt2Phys_Dec, &b_h2_Hlt2Phys_Dec);
   fChain->SetBranchAddress("h2_Hlt2Phys_TIS", &h2_Hlt2Phys_TIS, &b_h2_Hlt2Phys_TIS);
   fChain->SetBranchAddress("h2_Hlt2Phys_TOS", &h2_Hlt2Phys_TOS, &b_h2_Hlt2Phys_TOS);
   fChain->SetBranchAddress("h2_L0MuonDecision_Dec", &h2_L0MuonDecision_Dec, &b_h2_L0MuonDecision_Dec);
   fChain->SetBranchAddress("h2_L0MuonDecision_TIS", &h2_L0MuonDecision_TIS, &b_h2_L0MuonDecision_TIS);
   fChain->SetBranchAddress("h2_L0MuonDecision_TOS", &h2_L0MuonDecision_TOS, &b_h2_L0MuonDecision_TOS);
   fChain->SetBranchAddress("h2_Hlt1TrackAllL0Decision_Dec", &h2_Hlt1TrackAllL0Decision_Dec, &b_h2_Hlt1TrackAllL0Decision_Dec);
   fChain->SetBranchAddress("h2_Hlt1TrackAllL0Decision_TIS", &h2_Hlt1TrackAllL0Decision_TIS, &b_h2_Hlt1TrackAllL0Decision_TIS);
   fChain->SetBranchAddress("h2_Hlt1TrackAllL0Decision_TOS", &h2_Hlt1TrackAllL0Decision_TOS, &b_h2_Hlt1TrackAllL0Decision_TOS);
   fChain->SetBranchAddress("h2_Hlt1TrackMuonDecision_Dec", &h2_Hlt1TrackMuonDecision_Dec, &b_h2_Hlt1TrackMuonDecision_Dec);
   fChain->SetBranchAddress("h2_Hlt1TrackMuonDecision_TIS", &h2_Hlt1TrackMuonDecision_TIS, &b_h2_Hlt1TrackMuonDecision_TIS);
   fChain->SetBranchAddress("h2_Hlt1TrackMuonDecision_TOS", &h2_Hlt1TrackMuonDecision_TOS, &b_h2_Hlt1TrackMuonDecision_TOS);
   fChain->SetBranchAddress("h2_TRACK_Type", &h2_TRACK_Type, &b_h2_TRACK_Type);
   fChain->SetBranchAddress("h2_TRACK_Key", &h2_TRACK_Key, &b_h2_TRACK_Key);
   fChain->SetBranchAddress("h2_TRACK_CHI2NDOF", &h2_TRACK_CHI2NDOF, &b_h2_TRACK_CHI2NDOF);
   fChain->SetBranchAddress("h2_TRACK_PCHI2", &h2_TRACK_PCHI2, &b_h2_TRACK_PCHI2);
   fChain->SetBranchAddress("h2_TRACK_MatchCHI2", &h2_TRACK_MatchCHI2, &b_h2_TRACK_MatchCHI2);
   fChain->SetBranchAddress("h2_TRACK_GhostProb", &h2_TRACK_GhostProb, &b_h2_TRACK_GhostProb);
   fChain->SetBranchAddress("h2_TRACK_CloneDist", &h2_TRACK_CloneDist, &b_h2_TRACK_CloneDist);
   fChain->SetBranchAddress("h2_TRACK_Likelihood", &h2_TRACK_Likelihood, &b_h2_TRACK_Likelihood);
   fChain->SetBranchAddress("nCandidate", &nCandidate, &b_nCandidate);
   fChain->SetBranchAddress("totCandidates", &totCandidates, &b_totCandidates);
   fChain->SetBranchAddress("EventInSequence", &EventInSequence, &b_EventInSequence);
   fChain->SetBranchAddress("runNumber", &runNumber, &b_runNumber);
   fChain->SetBranchAddress("eventNumber", &eventNumber, &b_eventNumber);
   fChain->SetBranchAddress("BCID", &BCID, &b_BCID);
   fChain->SetBranchAddress("BCType", &BCType, &b_BCType);
   fChain->SetBranchAddress("OdinTCK", &OdinTCK, &b_OdinTCK);
   fChain->SetBranchAddress("L0DUTCK", &L0DUTCK, &b_L0DUTCK);
   fChain->SetBranchAddress("HLT1TCK", &HLT1TCK, &b_HLT1TCK);
   fChain->SetBranchAddress("HLT2TCK", &HLT2TCK, &b_HLT2TCK);
   fChain->SetBranchAddress("GpsTime", &GpsTime, &b_GpsTime);
   fChain->SetBranchAddress("Polarity", &Polarity, &b_Polarity);
   fChain->SetBranchAddress("L0Data_DiMuon_Pt", &L0Data_DiMuon_Pt, &b_L0Data_DiMuon_Pt);
   fChain->SetBranchAddress("L0Data_DiMuonProd_Pt1Pt2", &L0Data_DiMuonProd_Pt1Pt2, &b_L0Data_DiMuonProd_Pt1Pt2);
   fChain->SetBranchAddress("L0Data_Electron_Et", &L0Data_Electron_Et, &b_L0Data_Electron_Et);
   fChain->SetBranchAddress("L0Data_GlobalPi0_Et", &L0Data_GlobalPi0_Et, &b_L0Data_GlobalPi0_Et);
   fChain->SetBranchAddress("L0Data_Hadron_Et", &L0Data_Hadron_Et, &b_L0Data_Hadron_Et);
   fChain->SetBranchAddress("L0Data_LocalPi0_Et", &L0Data_LocalPi0_Et, &b_L0Data_LocalPi0_Et);
   fChain->SetBranchAddress("L0Data_Muon1_Pt", &L0Data_Muon1_Pt, &b_L0Data_Muon1_Pt);
   fChain->SetBranchAddress("L0Data_Muon1_Sgn", &L0Data_Muon1_Sgn, &b_L0Data_Muon1_Sgn);
   fChain->SetBranchAddress("L0Data_Muon2_Pt", &L0Data_Muon2_Pt, &b_L0Data_Muon2_Pt);
   fChain->SetBranchAddress("L0Data_Muon2_Sgn", &L0Data_Muon2_Sgn, &b_L0Data_Muon2_Sgn);
   fChain->SetBranchAddress("L0Data_Muon3_Pt", &L0Data_Muon3_Pt, &b_L0Data_Muon3_Pt);
   fChain->SetBranchAddress("L0Data_Muon3_Sgn", &L0Data_Muon3_Sgn, &b_L0Data_Muon3_Sgn);
   fChain->SetBranchAddress("L0Data_PUHits_Mult", &L0Data_PUHits_Mult, &b_L0Data_PUHits_Mult);
   fChain->SetBranchAddress("L0Data_PUPeak1_Cont", &L0Data_PUPeak1_Cont, &b_L0Data_PUPeak1_Cont);
   fChain->SetBranchAddress("L0Data_PUPeak1_Pos", &L0Data_PUPeak1_Pos, &b_L0Data_PUPeak1_Pos);
   fChain->SetBranchAddress("L0Data_PUPeak2_Cont", &L0Data_PUPeak2_Cont, &b_L0Data_PUPeak2_Cont);
   fChain->SetBranchAddress("L0Data_PUPeak2_Pos", &L0Data_PUPeak2_Pos, &b_L0Data_PUPeak2_Pos);
   fChain->SetBranchAddress("L0Data_Photon_Et", &L0Data_Photon_Et, &b_L0Data_Photon_Et);
   fChain->SetBranchAddress("L0Data_Spd_Mult", &L0Data_Spd_Mult, &b_L0Data_Spd_Mult);
   fChain->SetBranchAddress("L0Data_Sum_Et", &L0Data_Sum_Et, &b_L0Data_Sum_Et);
   fChain->SetBranchAddress("L0Data_Sum_Et,Next1", &L0Data_Sum_Et_Next1, &b_L0Data_Sum_Et_Next1);
   fChain->SetBranchAddress("L0Data_Sum_Et,Next2", &L0Data_Sum_Et_Next2, &b_L0Data_Sum_Et_Next2);
   fChain->SetBranchAddress("L0Data_Sum_Et,Prev1", &L0Data_Sum_Et_Prev1, &b_L0Data_Sum_Et_Prev1);
   fChain->SetBranchAddress("L0Data_Sum_Et,Prev2", &L0Data_Sum_Et_Prev2, &b_L0Data_Sum_Et_Prev2);
   fChain->SetBranchAddress("nPVs", &nPVs, &b_nPVs);
   fChain->SetBranchAddress("nTracks", &nTracks, &b_nTracks);
   fChain->SetBranchAddress("nLongTracks", &nLongTracks, &b_nLongTracks);
   fChain->SetBranchAddress("nDownstreamTracks", &nDownstreamTracks, &b_nDownstreamTracks);
   fChain->SetBranchAddress("nUpstreamTracks", &nUpstreamTracks, &b_nUpstreamTracks);
   fChain->SetBranchAddress("nVeloTracks", &nVeloTracks, &b_nVeloTracks);
   fChain->SetBranchAddress("nTTracks", &nTTracks, &b_nTTracks);
   fChain->SetBranchAddress("nBackTracks", &nBackTracks, &b_nBackTracks);
   fChain->SetBranchAddress("nRich1Hits", &nRich1Hits, &b_nRich1Hits);
   fChain->SetBranchAddress("nRich2Hits", &nRich2Hits, &b_nRich2Hits);
   fChain->SetBranchAddress("nVeloClusters", &nVeloClusters, &b_nVeloClusters);
   fChain->SetBranchAddress("nITClusters", &nITClusters, &b_nITClusters);
   fChain->SetBranchAddress("nTTClusters", &nTTClusters, &b_nTTClusters);
   fChain->SetBranchAddress("nOTClusters", &nOTClusters, &b_nOTClusters);
   fChain->SetBranchAddress("nSPDHits", &nSPDHits, &b_nSPDHits);
   fChain->SetBranchAddress("nMuonCoordsS0", &nMuonCoordsS0, &b_nMuonCoordsS0);
   fChain->SetBranchAddress("nMuonCoordsS1", &nMuonCoordsS1, &b_nMuonCoordsS1);
   fChain->SetBranchAddress("nMuonCoordsS2", &nMuonCoordsS2, &b_nMuonCoordsS2);
   fChain->SetBranchAddress("nMuonCoordsS3", &nMuonCoordsS3, &b_nMuonCoordsS3);
   fChain->SetBranchAddress("nMuonCoordsS4", &nMuonCoordsS4, &b_nMuonCoordsS4);
   fChain->SetBranchAddress("nMuonTracks", &nMuonTracks, &b_nMuonTracks);
   fChain->SetBranchAddress("NumberOfHlt2NoCutsPions", &NumberOfHlt2NoCutsPions, &b_NumberOfHlt2NoCutsPions);
   fChain->SetBranchAddress("NumberOfHlt2GoodPions", &NumberOfHlt2GoodPions, &b_NumberOfHlt2GoodPions);
   fChain->SetBranchAddress("NumberOfHlt2Muons", &NumberOfHlt2Muons, &b_NumberOfHlt2Muons);
   fChain->SetBranchAddress("NumberOfHlt2Electrons", &NumberOfHlt2Electrons, &b_NumberOfHlt2Electrons);
   fChain->SetBranchAddress("NumberOfHlt2Photons", &NumberOfHlt2Photons, &b_NumberOfHlt2Photons);
   fChain->SetBranchAddress("NumberOfHlt2BiKalmanFittedRichKaons", &NumberOfHlt2BiKalmanFittedRichKaons, &b_NumberOfHlt2BiKalmanFittedRichKaons);
   Notify();
}

Bool_t newntuple::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void newntuple::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t newntuple::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef newntuple_cxx
