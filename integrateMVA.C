
void integrateMVA(){
  TString fileDir ="/home/ppd/sds61239/link/mva/addMva/BDTNW/";
  // TString file ="MueKst-data-xll-2011U";
  TString file="MueKst-mc-xll-new";
  TString dir="/opt/ppd/lhcb/sds61239/mva/addMva/cuts/";
  TString histName="hMLPCE";
  TString histName2="hBDTNW";
  int min;
  
  TFile f(fileDir+file+".root");
  
  TH1F* hist=(TH1F*)f.Get(histName);
  TAxis* axis=hist->GetXaxis();
  int binMin=axis->GetFirst();
  int binMax=axis->GetLast();
  const int n=-binMin+binMax+1;

  double x[n];
  double y[n];
  int in = 0;
  for(int i=binMin;i<=binMax;i++){
    x[in]=axis->GetBinCenter(i);
    y[in]=hist->Integral(i,binMax)/hist->GetEntries();
    in++;
  }
  
  TCanvas* c=new TCanvas("c","integral",1);
  //c->DrawFrame(x[0],0,x[99],1);
  //c->Divide(1,2);
  TGraph *g = new TGraph(n,x,y); 
   g->SetTitle("");
  g->SetMarkerStyle(20);
g->SetMarkerSize(.5);
   g->SetMarkerColor(3);
  c->cd(1);

  g->Draw("apl");
 
  
  TH1F* hist1=(TH1F*)f.Get(histName2);
  TAxis* axis1=hist1->GetXaxis();
  int binMin1=axis1->GetFirst();
  int binMax1=axis1->GetLast();
  const int n1=axis1->GetNbins();
  
  double x1[100];
  double y1[100];
   in=0;
  for(int j=binMin1;j<=binMax1;j++){
    
    x1[in]=axis1->GetBinCenter(j);
    
    y1[in]=hist1->Integral(j,binMax1)/hist1->GetEntries();
    in++;
  }
  
  
  TGraph *g1 = new TGraph(100,x1,y1); 
  g1->SetMarkerStyle(22);
  
  g1->SetMarkerColor(2);
  g1->SetTitle(histName2);
  g1->SetMarkerSize(.7);
 // c->cd(2);
  g1->Draw("PL same");
  // c->Modified();
  // c->Update();
   auto legend = new TLegend(0.2,0.2,0.4,.4);
  legend->AddEntry(g,"MLPCE");
 legend->AddEntry(g1,"BDTNW");  
 legend->Draw("same");
 c->SetGrid();
 TLine* line=new TLine(x1[0],g1->Eval(0),x1[99],g1->Eval(0));
 line->Draw("same");
TLine* line1=new TLine(.574,0.27,.574,1);
 line1->Draw("same");
  c->Print(dir+"integral-"+file+".png");
}

