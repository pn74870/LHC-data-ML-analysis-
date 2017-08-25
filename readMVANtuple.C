# include "TFile.h"
# include "TNtuple.h"
# include <math.h>

void readMVANtuple(){
  char *s = new char[1];
  TFile *f1 = TFile::Open("/opt/ppd/lhcb/sds61239/mva/TMVA_MueKsttracks_minIPchi2_lIpChi2_NoBmassCut_alphaHop_2012+2011_NN_100cyc.root");     //MVA training output ntuple
  // TFile *f1 = TFile::Open("/opt/ppd/lhcb/sds61239/mva/TMVA_MueKsttracks_minIPchi2_lIpChi2_NoBpt_NoBmassCut_opt_NN_transG_N-1neur_reg.root");  
if (!f1) return;
  TNtuple *ntuple = (TNtuple*) f1->Get("TestTree");
  //  ntuple->MakeSelector("anaMVATestTree"); // pay attention overwirte anaMVATestTree.C as well..
  ntuple->Draw("B_MM");//,"B_MM>4800&&B_MM<6000");
  ntuple->Process("anaMVATestTree.C");
}
