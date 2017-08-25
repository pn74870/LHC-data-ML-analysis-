void overlaySideband(){
  TFile* f1=new TFile("/home/ppd/sds61239/link/mva/addMva/cuts/MueKst-data-ta1-histograms-BDTNW_1mil.root");
  TFile* f2=new TFile("/home/ppd/sds61239/link/mva/addMva/cuts/MueKst-data-ta1-histograms-MLPCE_mcCut.root");
  TString dir="/home/ppd/sds61239/link/mva/addMva/cuts";
  TH1F* hBmass1=(TH1F*) f1->Get("hBmass");
  TH1F* hBmass2=(TH1F*) f2->Get("hBmass");
  TH1F* hBmassP1=(TH1F*) f1->Get("hBmassP");
  TH1F* hBmassP2=(TH1F*) f2->Get("hBmassP");
  TH1F* hBmassPP1=(TH1F*) f1->Get("hBmassPP");
  TH1F* hBmassPP2=(TH1F*) f2->Get("hBmassPP");
  TH1F* hBmassPT1=(TH1F*) f1->Get("hBmassPT");
  TH1F* hBmassPT2=(TH1F*) f2->Get("hBmassPT");
hBmass1->SetStats(kFALSE);
hBmass2->SetStats(kFALSE);
 hBmassP1->SetStats(kFALSE);
   hBmassP2->SetStats(kFALSE);
   hBmassPP1->SetStats(kFALSE);
 hBmassPP2->SetStats(kFALSE);
 hBmassPT1->SetStats(kFALSE);
 hBmassPT2->SetStats(kFALSE);
 TCanvas *c1 = new TCanvas("c1","Bmass plots with cuts",1200, 1200);


  c1->Divide(1,4);

  c1->cd(1);
  hBmass1->Draw();

  hBmass2->Draw("same");

  c1->cd(2);
  hBmassP1->GetFunction("expo")->SetLineColor(kGreen);
  hBmassP1->Draw();
  hBmassP2->SetLineColor(kOrange);
  hBmassP2->Draw("same");
   auto legend = new TLegend(0.6,0.6,0.89,.89);
 legend->AddEntry(hBmassP1,"BDTNW cut > 0","l");
legend->AddEntry(hBmassP1->GetFunction("expo"),"BDTNW fitted exponential","l");
legend->AddEntry(hBmassP2,"MLPCE cut >0.574","l");
legend->AddEntry(hBmassP2->GetFunction("expo"),"MLPCE fitted exponential","l");
 legend->Draw();
  			 
  c1->cd(3);
  hBmassPP1->GetFunction("expo")->SetLineColor(kGreen);
  hBmassPP1->Draw();
  hBmassPP2->SetLineColor(kOrange);
  hBmassPP2->Draw("same");
  c1->cd(4);
  hBmassPT1->GetFunction("expo")->SetLineColor(kGreen);
  hBmassPT1->Draw();
  hBmassPT2->SetLineColor(kOrange);
  hBmassPT2->Draw("same");
  /*
  TLegend* l=c1->BuildLegend();
  l->Draw();*/
  c1->Print(dir+"sideBand-MLPCE_BDTNW.ps");
  c1->Print(dir+"sideBand-MLPCE_BDTNW.png");
}
