
#include <TFile.h>
#include <TH1.h>
#include <TF1.h>
//TFile file1("/opt/ppd/lhcb/sds61239/mva/TMVA_MueKsttracks_minIPchi2_lIpChi2_NoBmassCut_alphaHop_2012+2011_1000BDT.root");
//TFile file1("/opt/ppd/lhcb/sds61239/mva/TMVA_MueKsttracks_minIPchi2_lIpChi2_NoBmassCut_alphaHop_2012_500BDT.root");
//TFile file2("/opt/ppd/lhcb/sds61239/mva/TMVA_MueKsttracks_minIPchi2_lIpChi2_NoBmassCut_alphaHop_2012data.root");
TFile file1("/opt/ppd/lhcb/sds61239/mva/TMVA_MueKstNoBmassCut_2011+2012_MLPCE_500_N-1_transG_No_l2_PT_No_tracksMinIP_lowerSideband.root");
TFile file2("/opt/ppd/lhcb/sds61239/mva/TMVA_MueKstNoBmassCut_2011+2012_MLPCE_500_N-1_transU_No_l2_PT_No_tracksMinIP_lowerSideband.root");
TFile file3("/opt/ppd/lhcb/sds61239/mva/TMVA_MueKstNoBmassCut_2011+2012_BDT_1000_2_transG_No_l2_PT_No_tracksMinIP_lowerSideband.root");
//TFile file4("/opt/ppd/lhcb/sds61239/mva/TMVA_MueKstNoBmassCut_2012+2011.root");//ref
TFile file4("/opt/ppd/lhcb/sds61239/mva/TMVA_MueKstNoBmassCut_2011+2012_MLPCE_500_N-1_transN_BG_G_Sig_No_l2_PT_No_tracksMinIP_lowerSideband.root");
TFile file5("/opt/ppd/lhcb/sds61239/mva/TMVA_MueKstNoBmassCut_2011+2012_BDT_1000_3_transU_No_l2_PT_No_tracksMinIP_lowerSideband.root");
/*TFile file2("/opt/ppd/lhcb/sds61239/mva/TMVA_MueKstNoBmassCut_2012+2011_1000BDT_MLPCE_1000_N+2_transG_No_l2_PT.root");
TFile file3("/opt/ppd/lhcb/sds61239/mva/TMVA_MueKstNoBmassCut_2012+2011_MLPCE_1000_N+2_transG_No_alpha.root");
TFile file4("/opt/ppd/lhcb/sds61239/mva/TMVA_MueKstNoBmassCut_2011+2012_MLPCE_1000_N+2_transG_No_l2_PT_No_tracksMinIP.root");
TFile file5("/opt/ppd/lhcb/sds61239/mva/TMVA_MueKstNoBmassCut_2011+2012_MLPCE_1000_N+2_transG_No_l2_PT_No_tracksMinIP_No_alpha.root");*/
//TFile file6("/opt/ppd/lhcb/sds61239/mva/TMVA_MueKstNoBmassCut_2011+2012_MLPCE_1000_N-1_transG_No_l2_PT_No_tracksMinIP.root");
//TFile file7("/opt/ppd/lhcb/sds61239/mva/TMVA_MueKstNoBmassCut_2011+2012_MLPCE_500_N-1_transG_No_l2_PT_No_tracksMinIP_No_alpha.root");


void combineGraphs(){
  TCanvas *c=new TCanvas("c","rej B vs S",1);
  TH1F* h1M=(TH1F*)file1.Get("/Method_MLP/MLPCE/MVA_MLPCE_rejBvsS");
  // TH1F* h1BN=(TH1F*)file1.Get("/Method_BDT/BDTNW/MVA_BDTNW_rejBvsS");
  TH1F* h2M=(TH1F*)file2.Get("/Method_MLP/MLPCE/MVA_MLPCE_rejBvsS");
  TH1F* h3BG=(TH1F*)file3.Get("/Method_BDT/BDTG/MVA_BDTG_rejBvsS");
  TH1F* h3BN=(TH1F*)file3.Get("/Method_BDT/BDTNW/MVA_BDTNW_rejBvsS");
  TH1F* h4M=(TH1F*)file4.Get("/Method_MLP/MLPCE/MVA_MLPCE_rejBvsS");
  TH1F* h5BG=(TH1F*)file5.Get("/Method_BDT/BDTG/MVA_BDTG_rejBvsS");
  TH1F* h5BN=(TH1F*)file5.Get("/Method_BDT/BDTNW/MVA_BDTNW_rejBvsS");
  // TH1F* h3=(TH1F*)file2.Get("/Method_MLP/MLPCE/MVA_MLPCE_rejBvsS");
  //TH1F* h4=(TH1F*)file3.Get("/Method_BDT/BDTG/MVA_BDTG_rejBvsS");
  //TH1F* h5=(TH1F*)file3.Get("/Method_BDT/BDTNW/MVA_BDTNW_rejBvsS");
/*  TH1F* h2=(TH1F*)file1.Get("/Method_MLP/MLPCE/MVA_MLPCE_rejBvsS");

  TH1F* h3=(TH1F*)file3.Get("/Method_MLP/MLPCE/MVA_MLPCE_rejBvsS");
  TH1F* h4=(TH1F*)file4.Get("/Method_MLP/MLPCE/MVA_MLPCE_rejBvsS");
  TH1F* h5=(TH1F*)file5.Get("/Method_MLP/MLPCE/MVA_MLPCE_rejBvsS");
  
  TH1F* h6=(TH1F*)file6.Get("/Method_MLP/MLPCE/MVA_MLPCE_rejBvsS");
  TH1F* h7=(TH1F*)file7.Get("/Method_MLP/MLPCE/MVA_MLPCE_rejBvsS");
*/
  gPad->SetGrid();

  gStyle->SetOptStat(0);


  h2M->SetLineWidth(2);
  h2M->Draw() ;
  
  h1M->SetLineWidth(2);
  h1M->SetLineColor(kGreen);
  h1M->Draw("same");



  
  h3BG->SetLineStyle(2);
  h3BG->SetLineWidth(2);
  h3BG->SetLineColor(kRed);
  h3BG->Draw("same");
  
  
  h3BN->SetLineStyle(2);
  h3BN->SetLineWidth(2);
  h3BN->SetLineColor(kGreen);
  h3BN->Draw("same");
  
  
  //h4M->SetLineStyle(2);
  h4M->SetLineWidth(2);
  h4M->SetLineColor(kRed);
  h4M->Draw("same");
  
  h5BG->SetLineStyle(2);
  h5BG->SetLineWidth(2);
  h5BG->SetLineColor(kBlue);
  h5BG->Draw("same");
  
  
  h5BN->SetLineStyle(2);
  h5BN->SetLineWidth(2);
  h5BN->SetLineColor(kBlack);
  h5BN->Draw("same");
 
  //h4->SetLineStyle(2);
  /*h2->SetLineColor(kOrange);
  h2->SetLineWidth(2);
  h2->Draw("same");
  
  h3->SetLineColor(kMagenta);
  h3->SetLineWidth(2);
  h3->Draw("same");

  h4->SetLineColor(kBrown);
  h4->SetLineWidth(2);
  h4->Draw("same");

  // h5->SetLineStyle(2);
  h5->SetLineWidth(2);
  h5->SetLineColor(kRed);
  h5->Draw("same");
  */
  
  //h6->SetLineStyle(2);
/*
  h6->SetLineWidth(2);
  h6->SetLineColor(kRed);
  h6->Draw("same");
  
  //h7->SetLineStyle(2);
  h7->SetLineWidth(2);
  h7->SetLineColor(kGreen);
  h7->Draw("same");*/
  
  //TString s1=" l IP Chi2 + alpha HOP";
  TString slPt=" l2_pt,";
  TString sAlpha=" alphaHOP";
  TString sMinIp=" tracksMinIP";
  
  TString s2=" alphaHOP, tracksMinIP";
  
  auto legend = new TLegend(0.1,0.3,0.6,.8);
  //  legend->AddEntry(h1,"BDTG var transform G, max depth=3, 1000 trees, shrink=0.01;"+s1,"l");
  //legend->AddEntry(h2,"BDTNW var transform G, max depth=3, 1000 trees;"+s1,"l");
  legend->AddEntry(h1M,"MLPCE 500 cycles, var transform G, N-1 neurons, KS test:0.002(0.023)"+sAlpha,"l");
  legend->AddEntry(h2M,"MLPCE 500 cycles, var transform U, N-1 neurons, KS test:0.026(0.022)"+sAlpha,"lpf");//, var transform G, max depth=3, 1000 trees, shrink=0.01;
  legend->AddEntry(h3BN,"BDTNW 1000 trees,var transform G, max depth 2, KS test:0.005(0.227)"+sAlpha,"lpf");

  legend->AddEntry(h3BG,"BDTG 1000 trees, var transform G, max depth 2, KS test:0.004(0.018)"+sAlpha,"lpf");
  legend->AddEntry(h4M,"MLPCE 500 cycles, var transform N for bckg G for signal, N-1 neurons, KS test:0.05(0.042)"+sAlpha,"lpf");
  
  legend->AddEntry(h5BN,"BDTNW 1000 trees,var transform U, max depth 3, KS test:0.001(0.203)"+sAlpha,"lpf");

  legend->AddEntry(h5BG,"BDTG 1000 trees, var transform U, max depth 3, KS test:0.004(0.348)"+sAlpha,"lpf");
  /*  legend->AddEntry(h2,"MLPCE 1000 cycles, var transform G, N+2 neurons, KS test:0.001(0.206)"+sAlpha+sMinIp,"lpf");
  legend->AddEntry(h3,"MLPCE 1000 cycles, var transform G, N+2 neurons, KS test:0.009(0.257) "+slPt+sMinIp,"lpf");
  legend->AddEntry(h4,"MLPCE no alpha"+s2,"lpf");
  legend->AddEntry(h5,"MLPCE no l2_PT no tracks min IP"+s2,"lpf");
  legend->AddEntry(h6,"MLPCE 1000 cycles, var transform G, N-1 neurons, KS test:0.036(0.215)"+sAlpha,"lpf");
    legend->AddEntry(h7,"MLPCE 1000 cycles, var transform G, N-1 neurons, KS test:0.008(0.504)","lpf");
*/
  //legend->AddEntry(h5,"BDTNW, max depth=4, 700 trees"+s2,"lpf");
  //legend->AddEntry(h6,"MLPCE   "+s2,"lpf");
  //legend->AddEntry(h6,"MLPCE var transform G"+s2,"lpf");
  legend->Draw("same");

  //c->Print("TMVA_results_transG_all_BDTH_shrink.pdf");  
  TString fileName="ROC_MVA_lowerSideband";
  TFile* f = TFile::Open(fileName+".root","RECREATE");
 
  c->Write();
  c->Print(fileName+".pdf");

}
