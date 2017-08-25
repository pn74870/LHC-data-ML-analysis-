////////This code produces s-plots of the control channel for the variables
//////// chosen to be in the MVA as well as the MVAs themselves



#include "newntuple.h"

using namespace RooFit;
using namespace RooStats;

void MakePlot(RooDataSet *data, RooDataSet *data_unchanged, RooDataSet *mc, RooRealVar control, TString control_string, float ndata, float
	      nmc, float max, float min=0);

void Control_Channel_MuMu()
{



//////Set up variables//////////////////

RooRealVar B_MM("B_MM","B_MM",5000,5600);
//RooRealVar BmassHOP("BmassHOP","BmassHOP",5000,5600);
RooRealVar h1_PT("h1_PT","h1_PT",0,6000);
RooRealVar h2_PT("h2_PT","h2_PT",0,6000);
RooRealVar B_TAU("B_TAU","B_TAU",0,0.01);
RooRealVar B_PT("B_PT","B_PT",0,50000);
RooRealVar l1_PT("l1_PT","l1_PT",0,6000);
RooRealVar l2_PT("l2_PT","l2_PT",0,6000);
RooRealVar B_P("B_P","B_P",0,500000);
RooRealVar B_DIRA_OWNPV("B_DIRA_OWNPV","B_DIRA_OWNPV",0.9995,1);
RooRealVar B_IPCHI2_OWNPV("B_IPCHI2_OWNPV","B_IPCHI2_OWNPV",0,25);
RooRealVar B_CDF_isol("B_CDF_isol","B_CDF_isol",0,1);
RooRealVar B_ENDVERTEX_CHI2("B_ENDVERTEX_CHI2","B_ENDVERTEX_CHI2",0,30);
RooRealVar B_OWNPV_CHI2("B_OWNPV_CHI2","B_OWNPV_CHI2",0,50);
RooRealVar h1_IPCHI2_OWNPV("h1_IPCHI2_OWNPV","h1_IPCHI2_OWNPV",0,4000);
RooRealVar h2_IPCHI2_OWNPV("h2_IPCHI2_OWNPV","h2_IPCHI2_OWNPV",0,4000);
RooRealVar l1_IPCHI2_OWNPV("l1_IPCHI2_OWNPV","l1_IPCHI2_OWNPV",0,4000);
RooRealVar l2_IPCHI2_OWNPV("l2_IPCHI2_OWNPV","l2_IPCHI2_OWNPV",0,4000);
RooRealVar MVA("MVA","MVA",-1,1);
RooRealVar MVAJ("MVAJ","MVAJ",0.,1);
RooRealVar MVAlowerJ("MVAlowerJ","MVAlowerJ",0,1);
RooRealVar MVApartJ("MVApartJ","MVApartJ",-1,1);
RooRealVar MVAJ16var("MVAJ16var","MVAJ16var",0.,1);

//RooRealVar l2_ProbNNe("l2_ProbNNe","l2_ProbNNe",0.3,1.);
//RooRealVar l1_ProbNNmu("l2_ProbNNmu","l2_ProbNNmu",0.,1.);
RooRealVar h1_ProbNNk("h1_ProbNNk","h1_ProbNNk",0.1,1.);
//fabs(A.d2_MM-895.81) > 50
 RooRealVar d2_MM("d2_MM","d2_MM",800.,1000.);
 RooRealVar alphaHOP("alphaHOP","alphaHOP",0.,2.);

RooArgSet *obs = new RooArgSet("Variables");
obs->add(B_MM);
obs->add(h1_PT);
obs->add(h2_PT);
obs->add(B_TAU);
obs->add(B_PT);
obs->add(l1_PT);
obs->add(l2_PT);
obs->add(B_P);
obs->add(B_DIRA_OWNPV);
obs->add(B_IPCHI2_OWNPV);
obs->add(B_CDF_isol);
obs->add(B_ENDVERTEX_CHI2);
obs->add(B_OWNPV_CHI2);
obs->add(h1_IPCHI2_OWNPV);
obs->add(h2_IPCHI2_OWNPV);
obs->add(l1_IPCHI2_OWNPV);
obs->add(l2_IPCHI2_OWNPV);
obs->add(MVA);
obs->add(MVAJ);
obs->add(MVAJ16var);
 obs->add(d2_MM);
 // obs->add(l2_ProbNNe);
 obs->add(alphaHOP);
 // obs->add(BmassHOP);
 // obs->add(l1_ProbNNmu);
 obs->add(h1_ProbNNk);
 obs->add(MVAlowerJ);
 obs->add(MVApartJ);
/////////Get data////////////////////
 bool doSplot=1;
 TString decay="MuMuKst";
 TChain *fChain = new TChain(decay);
 TString dir="/opt/ppd/lhcb/sds61239/mva/addMva/sPlots/"+decay+"/";

 fChain->Add("/opt/ppd/lhcb/sds61239/mva/addMva/BDTNW/"+decay+"-data-xll-2011U.root");
 fChain->Add("/opt/ppd/lhcb/sds61239/mva/addMva/BDTNW/"+decay+"-data-xll-2011D.root");
 fChain->Add("/opt/ppd/lhcb/sds61239/mva/addMva/BDTNW/"+decay+"-data-xll-2012D.root");
 fChain->Add("/opt/ppd/lhcb/sds61239/mva/addMva/BDTNW/"+decay+"-data-xll-2012U.root");

 RooDataSet *data_unchanged = new RooDataSet("data_unchanged","data_unchanged",*obs,Import(*fChain));//,Cut("l2_ProbNNe>0.01"));
 RooDataSet *data = new RooDataSet("data","data",*obs,Import(*fChain));//,Cut("l2_ProbNNe>0.01"));


 fChain2 = new TChain(decay);	

 fChain2->Add("/opt/ppd/lhcb/sds61239/mva/addMva/BDTNW/"+decay+"-mc-xll-new.root");	
 RooDataSet *mc = new RooDataSet("mc","mc",*obs,Import(*fChain2));

 float ndata = data->sumEntries();
 float nmc = mc->sumEntries();

 cout << "Amount of data: " << ndata << endl;
 cout << "Amount of mc: " << nmc << endl;

//////Make model/////////////////

  Double_t lowRange = 5000, highRange = 5600;
  RooRealVar invMass("B_MM", "M_{inv}", lowRange, highRange,"MeV"); 
  // make mass model for Bs
  //double invMass=5279.61;
   RooRealVar mB("mB", "Bs Mass", 5279.61., lowRange, highRange);
   RooRealVar sigma("sigma", "Width of Gaussian", 22.,10.,100.,"GeV");
  //RooGaussian mBModel1("Gauss1", "Gaussian1", B_MM, mB, sigma);

  RooRealVar mB2("mB2", "Bs Mass2",  5279.61, lowRange, highRange);
  RooRealVar sigma2("sigma2", "Width of Gaussian2", 5.,2.,40,"GeV");
  // RooGaussian mBModel2("Gauss2", "Gaussian2", B_MM, mB2, sigma2);
  RooRealVar mean("mean", "mean", 5279.61, 5000, 5400, "MeV"); 
  //RooRealVar sigma("sigma", "sigma", 5, 0., 1000., "MeV"); 
  RooRealVar alphaCB("alphaCB", "alpha CB", 1., 0., 100.); 
  RooRealVar nCB("nCB", "n CB", 1., 0., 999.); 
  //RooRealVar sigma2("sigma2", "sigma CB2", 20, 0., 1000., "MeV"); 
  RooRealVar alphaCB2("alphaCB2", "alpha CB2", -1.,-100., 0.); 
  RooRealVar nCB2("nCB2", "n CB2", 1., 0., 999.); 
  RooCBShape mBModel1("CBall1", "Crystall Ball shape", invMass, mean, sigma, alphaCB, nCB);
  RooCBShape mBModel2("CBall2", "second Crystall Ball shape", invMass, mean, sigma2, alphaCB2, nCB2);
  //  RooRealVar CBfrac("CBfrac", "fraction of CB1 in model", 0.5, 0., 1.);

  RooRealVar sigfrac("sig1frac","fraction of component 1 in signal",0.5, 0, 1);
  RooAddPdf mBModel = RooAddPdf("2CBSum","Signal", RooArgList(mBModel1, mBModel2), sigfrac);
 
  
  RooRealVar partRecDecConst("PartRecDecayConst", "Partial Rec Decay Const", -0.005, -100, 100);
  RooExponential partRecBkgModel("PartRecBkgModel", "Partial Rec Bkg Model", B_MM, partRecDecConst);

  
  RooRealVar BsYield("BsYield","Fitted Yield for Bs",ndata/2 ,0.,10000000);
  RooRealVar PartRecYield("PartRecYield","Fitted Yield for Part Rec", 1000 ,0.,10000000);
  RooRealVar CombYield("CombYield","Fitted Yield for Combinatorial bkg",1000.,0.0,10000000.);

  
  RooAddPdf *model = new RooAddPdf("model","Signal + background models",RooArgList(mBModel,partRecBkgModel),RooArgList(BsYield, PartRecYield));
  
  model->fitTo(*data);

  sigma.setConstant();
  sigma2.setConstant();
  mB.setConstant();
  mB2.setConstant();
  alphaCB.setConstant();
  alphaCB2.setConstant();
  nCB2.setConstant();
  nCB.setConstant();
  partRecDecConst.setConstant();
  

/// do sPlot////////////
 
  if(doSplot)  RooStats::SPlot *sData = new RooStats::SPlot("sData","An SPlot", *data, model,RooArgList(BsYield,PartRecYield));

//////////Plot results///////////////

////This comented out code produces cavases with multiple graphs on them
/*
TCanvas *c1 = new TCanvas;
c1->Divide(2,2);
c1->cd(1);
RooPlot *frame = B_MM.frame(Title("B mass"));
model.plotOn(frame,Normalization(ndata));
  model.plotOn(frame,Components(mBModel),LineStyle(kDashed),LineColor(kRed),Normalization(ndata));
  model.plotOn(frame,Components(partRecBkgModel),LineStyle(kDashed),LineColor(kGreen),Normalization(ndata));
  data->plotOn(frame);
frame->Draw();
c1->cd(2);
MakePlot(data, data_unchanged, mc, h1_PT, "h1_PT", ndata, nmc);
c1->cd(3);
MakePlot(data, data_unchanged, mc, h2_PT, "h2_PT", ndata, nmc);
c1->cd(4);
MakePlot(data, data_unchanged, mc, B_TAU, "B_TAU", ndata, nmc);
c1->Draw();

TCanvas *c2 = new TCanvas;
c2->Divide(2,2);
c2->cd(1);
MakePlot(data, data_unchanged, mc, l1_PT, "l1_PT", ndata, nmc);
c2->cd(2);
MakePlot(data, data_unchanged, mc, l2_PT, "l2_PT", ndata, nmc);
c2->cd(3);
MakePlot(data, data_unchanged, mc, B_P, "B_P", ndata, nmc);
c2->cd(4);
MakePlot(data, data_unchanged, mc, B_DIRA_OWNPV, "B_DIRA_OWNPV", ndata, nmc);
c2->Draw();

TCanvas *c3 = new TCanvas;
c3->Divide(2,2);
c3->cd(1);
MakePlot(data, data_unchanged, mc, B_IPCHI2_OWNPV, "B_IPCHI2_OWNPV", ndata, nmc);
c3->cd(2);
MakePlot(data, data_unchanged, mc, B_CDF_isol, "B_CDF_isol", ndata, nmc);
c3->cd(3);
MakePlot(data, data_unchanged, mc, B_ENDVERTEX_CHI2, "B_ENDVERTEX_CHI2", ndata, nmc);
c3->cd(4);
MakePlot(data, data_unchanged, mc, B_PT, "B_PT", ndata, nmc);
c3->Draw();

TCanvas *c4 = new TCanvas;
c4->Divide(2,2);
c4->cd(1);
MakePlot(data, data_unchanged, mc, h1_IPCHI2_OWNPV, "h1_IPCHI2_OWNPV", ndata, nmc);
c4->cd(2);
MakePlot(data, data_unchanged, mc, h2_IPCHI2_OWNPV, "h2_IPCHI2_OWNPV", ndata,nmc);
c4->cd(3);
MakePlot(data, data_unchanged, mc, l1_IPCHI2_OWNPV, "l1_IPCHI2_OWNPV", ndata, nmc);
c4->cd(4);
MakePlot(data, data_unchanged, mc, l2_IPCHI2_OWNPV, "l2_IPCHI2_OWNPV", ndata, nmc);
c4->Draw();

TCanvas *c5 = new TCanvas;
c5->Divide(2,1);
c5->cd(1);
MakePlot(data, data_unchanged, mc, MVA, "MVA", ndata, nmc);

c5->cd(2);
MakePlot(data, data_unchanged, mc, MVAlower, "MVAlower", ndata, nmc);

*/


  TCanvas *c1 = new TCanvas;

  RooPlot *frame = B_MM.frame(Title("B mass"));
 
  RooPlot* frame2 = B_MM.frame(Title("Residual Distribution")) ;
 RooPlot* frame3 = B_MM.frame(Title("Pull Distribution"));

 model->plotOn(frame,Name("Total fitted function"),Normalization(ndata));
 data->plotOn(frame,Name("Data"));
   RooHist* hpull = frame ->pullHist() ;
    RooHist* hresid = frame->residHist() ;
    model->plotOn(frame,Name("Sum of two CB functions"),Components(mBModel),LineStyle(kDashed),LineColor(kRed));
    model->plotOn(frame,Name("Background model"),Components(partRecBkgModel),LineStyle(kDashed),LineColor(kGreen));
  
  frame->Draw();

TLegend *leg = new TLegend(0.65,0.73,0.86,0.87);

  leg->AddEntry("Data","Data", "LP");
  leg->AddEntry("Sum of two CB functions","Sum of two CB functions","LP");
  leg->AddEntry("Background model","Background model", "LP");
 leg->AddEntry("Total fitted function","Total fitted function", "LP");
  leg->Draw("same");

cout << "chi^2 = " << frame->chiSquare() << endl ;


 
frame2->addPlotable(hresid,"P") ;

  // Create a new frame to draw the pull distribution and add the distribution to the frame
  
 frame3->addPlotable(hpull,"P") ;


  
  TCanvas* c = new TCanvas("chi2residpull","chi2residpull",1) ;
  c->Divide(1,3) ;
  c->cd(1) ; gPad->SetLeftMargin(0.15) ; frame->GetYaxis()->SetTitleOffset(1.6) ; frame->Draw() ;
  c->cd(2) ; gPad->SetLeftMargin(0.15) ; frame2->GetYaxis()->SetTitleOffset(1.6) ; frame2->Draw() ;
  c->cd(3) ; gPad->SetLeftMargin(0.15) ; frame3->GetYaxis()->SetTitleOffset(1.6) ; frame3->Draw() ;
if(doSplot){
c->Print(dir+decay+"-"+"B_Mass_Res.eps");
c->Print(dir+decay+"-"+"B_Mass_Res.png");


c1->Print(dir+decay+"-"+"B_Mass_Splot.eps");
c1->Print(dir+decay+"-"+"B_Mass_Splot.png");
 
TCanvas *c2 = new TCanvas;
MakePlot(data, data_unchanged, mc, h1_PT, "h1_PT", ndata, nmc,0.1);
c2->Print(dir+decay+"-"+"h1_PT_Splot.eps");
c2->Print(dir+decay+"-"+"h1_PT_Splot.png");
TCanvas *c3 = new TCanvas;
MakePlot(data, data_unchanged, mc, h2_PT, "h2_PT", ndata, nmc,0.1);
c3->Print(dir+decay+"-"+"h2_PT_Splot.eps");
c3->Print(dir+decay+"-"+"h2_PT_Splot.png");
TCanvas *c4 = new TCanvas;
MakePlot(data, data_unchanged, mc, B_TAU, "B_TAU", ndata, nmc,0.1);
c4->Print(dir+decay+"-"+"B_TAU_Splot.eps");
c4->Print(dir+decay+"-"+"B_TAU_Splot.png");


TCanvas *c5 = new TCanvas;
MakePlot(data, data_unchanged, mc, l1_PT, "l1_PT", ndata, nmc,0.033);
c5->Print(dir+decay+"-"+"l1_PT_Splot.eps");
c5->Print(dir+decay+"-"+"l1_PT_Splot.png");
TCanvas *c6 = new TCanvas;
MakePlot(data, data_unchanged, mc, l2_PT, "l2_PT", ndata, nmc,0.033);
c6->Print(dir+decay+"-"+"l2_PT_Splot.eps");
c6->Print(dir+decay+"-"+"l2_PT_Splot.png");
TCanvas *c7 = new TCanvas;
MakePlot(data, data_unchanged, mc, B_P, "B_P", ndata, nmc,0.1);
c7->Print(dir+decay+"-"+"B_P_Splot.eps");
c7->Print(dir+decay+"-"+"B_P_Splot.png");
TCanvas *c8 = new TCanvas;
MakePlot(data, data_unchanged, mc, B_DIRA_OWNPV, "B_DIRA_OWNPV", ndata, nmc,0.12);
c8->Print(dir+decay+"-"+"B_DIRA_OWNPV_Splot.eps");
c8->Print(dir+decay+"-"+"B_DIRA_OWNPV_Splot.png");


TCanvas *c9 = new TCanvas;
MakePlot(data, data_unchanged, mc, B_IPCHI2_OWNPV, "B_IPCHI2_OWNPV", ndata, nmc,0.1);
c9->Print(dir+decay+"-"+"B_IPCHI2_OWNPV_Splot.eps");
c9->Print(dir+decay+"-"+"B_IPCHI2_OWNPV_Splot.png");
TCanvas *c10 = new TCanvas;
MakePlot(data, data_unchanged, mc, B_CDF_isol, "B_CDF_isol", ndata, nmc,0.023);
c10->Print(dir+decay+"-"+"B_CDF_isol_Splot.eps");
c10->Print(dir+decay+"-"+"B_CDF_isol_Splot.png");
TCanvas *c11 = new TCanvas;
MakePlot(data, data_unchanged, mc, B_ENDVERTEX_CHI2, "B_ENDVERTEX_CHI2", ndata, nmc,0.04);
c11->Print(dir+decay+"-"+"B_ENDVERTEX_CHI2_Splot.eps");
c11->Print(dir+decay+"-"+"B_ENDVERTEX_CHI2_Splot.png");
TCanvas *c12 = new TCanvas;
MakePlot(data, data_unchanged, mc, B_PT, "B_PT", ndata, nmc,0.1);
c12->Print(dir+decay+"-"+"B_PT_Splot.eps");
c12->Print(dir+decay+"-"+"B_PT_Splot.png");

TCanvas *c13 = new TCanvas;
MakePlot(data, data_unchanged, mc, h1_IPCHI2_OWNPV, "h1_IPCHI2_OWNPV", ndata, nmc,0.21);
c13->Print(dir+decay+"-"+"h1_IPCHI2_OWNPV_Splot.eps");
c13->Print(dir+decay+"-"+"h1_IPCHI2_OWNPV_Splot.png");
TCanvas *c14 = new TCanvas;
MakePlot(data, data_unchanged, mc, h2_IPCHI2_OWNPV, "h2_IPCHI2_OWNPV", ndata,nmc,0.21);
c14->Print(dir+decay+"-"+"h2_IPCHI2_OWNPV_Splot.eps");
c14->Print(dir+decay+"-"+"h2_IPCHI2_OWNPV_Splot.png");
TCanvas *c15 = new TCanvas;
MakePlot(data, data_unchanged, mc, l1_IPCHI2_OWNPV, "l1_IPCHI2_OWNPV", ndata, nmc,0.1);
c15->Print(dir+decay+"-"+"l1_IPCHI2_OWNPV_Splot.eps");
c15->Print(dir+decay+"-"+"l1_IPCHI2_OWNPV_Splot.png");
TCanvas *c16 = new TCanvas;
MakePlot(data, data_unchanged, mc, l2_IPCHI2_OWNPV, "l2_IPCHI2_OWNPV", ndata, nmc,0.1);
c16->Print(dir+decay+"-"+"l2_IPCHI2_OWNPV_Splot.eps");
c16->Print(dir+decay+"-"+"l2_IPCHI2_OWNPV_Splot.png");


TCanvas *c17 = new TCanvas;
MakePlot(data, data_unchanged, mc, MVA, "MVA", ndata, nmc,0.08);
c17->Print(dir+decay+"-"+"MVA_Splot.eps");
c17->Print(dir+decay+"-"+"MVA_Splot.png");

TCanvas *c18l = new TCanvas;
 c18l->SetLogy();
 MakePlot(data, data_unchanged, mc, MVAJ, "MVAJ", ndata, nmc,.5,0.001);

c18l->Print(dir+decay+"-"+"MVAJ_log_Splot.eps");
c18l->Print(dir+decay+"-"+"MVAJ_log_Splot.png");


TCanvas *c18 = new TCanvas;

 MakePlot(data, data_unchanged, mc, MVAJ, "MVAJ", ndata, nmc,.2);

c18->Print(dir+decay+"-"+"MVAJ_Splot.eps");
c18->Print(dir+decay+"-"+"MVAJ_Splot.png");

TCanvas *c22 = new TCanvas;
 
 MakePlot(data, data_unchanged, mc, MVAlowerJ, "MVAlowerJ", ndata, nmc,.1);

c22->Print(dir+decay+"-"+"MVAlowerJ_Splot.eps");
c22->Print(dir+decay+"-"+"MVAlowerJ_Splot.png");

TCanvas *c23 = new TCanvas;
 
 MakePlot(data, data_unchanged, mc, MVApartJ, "MVApartJ", ndata, nmc,.08);

c23->Print(dir+decay+"-"+"MVApartJ_Splot.eps");
 c23->Print(dir+decay+"-"+"MVApartJ_Splot.png");

 TCanvas *c24 = new TCanvas;
 
 MakePlot(data, data_unchanged, mc, MVAJ16var, "MVAJ16var", ndata, nmc,.2);

 c24->Print(dir+decay+"-"+"MVApartJ16var_Splot.eps");
 c24->Print(dir+decay+"-"+"MVApartJ16var_Splot.png");

TCanvas *c19 = new TCanvas;
MakePlot(data, data_unchanged, mc, d2_MM, "d2_MM", ndata, nmc,0.03);

c19->Print(dir+decay+"-"+"d2_MM_Splot.eps");
c19->Print(dir+decay+"-"+"d2_MM_Splot.png");
/*
TCanvas *c20 = new TCanvas;
MakePlot(data, data_unchanged, mc, l2_ProbNNe, "l2_ProbNNe", ndata, nmc,0.1);

c20->Print(dir+decay+"-"+"l2_ProbNNe.eps");
c20->Print(dir+decay+"-"+"l2_ProbNNe.png");*/
TCanvas *c21 = new TCanvas;
MakePlot(data, data_unchanged, mc, alphaHOP, "alphaHOP", ndata, nmc,0.1);

c21->Print(dir+decay+"-"+"alphaHOP.eps");
c21->Print(dir+decay+"-"+"alphaHOP.png");
/*
TCanvas *c21 = new TCanvas;
MakePlot(data, data_unchanged, mc, l1_ProbNNmu, "l1_ProbNNmu", ndata, nmc,0.04);

c21->Print(dir+decay+"-"+"BmassHOP.eps");
c21->Print(dir+decay+"-"+"BmassHOP.png");

TCanvas *c21 = new TCanvas;
MakePlot(data, data_unchanged, mc, l1_ProbNNmu, "l1_ProbNNmu", ndata, nmc,0.04);

c21->Print(dir+decay+"-"+"l1_ProbNNmu.eps");
c21->Print(dir+decay+"-"+"l1_ProbNNmu.png");

TCanvas *c22 = new TCanvas;
MakePlot(data, data_unchanged, mc, l2_ProbNNk, "l2_ProbNNk", ndata, nmc,0.1);

c22->Print(dir+decay+"-"+"l2_ProbNNk.eps");
c22->Print(dir+decay+"-"+"l2_ProbNNk.png");
*/
 
 }


}

void MakePlot(RooDataSet *data, RooDataSet *data_unchanged, RooDataSet *mc, RooRealVar control, TString control_string,
	      float ndata, float nmc, float max,float min)
{

  control.setBins(100);
  RooPlot *frame = control.frame(Title(control_string),Bins(100));


  char cuts = 0;
  char wgtVarName = 0;
  int intorder = 0;



  RooDataSet *data_unchanged2 = data_unchanged->reduce(SelectVars(control));
  RooDataHist *hist_unchanged =data_unchanged2->binnedClone();
  RooHistPdf *hist_unchanged2 = new RooHistPdf("hist_unchanged2","hist_unchanged2",control, *hist_unchanged,intorder);
  hist_unchanged2->plotOn(frame,Name("data unchanged"),LineWidth(1),LineColor(kBlack));
  
  RooDataSet *dataw_b = new RooDataSet(data->GetName(),data->GetTitle(),data,*data->get(),0,"BsYield_sw");
  RooDataSet *dataw_b2 = dataw_b->reduce(SelectVars(control));
  RooDataHist *histw_b =dataw_b2->binnedClone();
  RooHistPdf *histw_b2 = new RooHistPdf("histw_b2","histw_b2",control, *histw_b,intorder);
  histw_b2->plotOn(frame,Name("S-weighted data"),LineColor(kRed),LineWidth(1));
  
  RooDataSet *mc2 = mc->reduce(SelectVars(control));
  RooDataHist *histmc =mc2->binnedClone();
  RooHistPdf *histmc2 = new RooHistPdf("histmc2","histmc2",control, *histmc,intorder);
  histmc2->plotOn(frame,Name("MC"),LineColor(kBlue),LineWidth(1));


  

  //data_unchanged->plotOn(frame,DrawOption("BX"),Rescale(1/ndata),FillColor(0),LineStyle(kDashed));
  //RooDataSet *dataw_b = new RooDataSet(data->GetName(),data->GetTitle(),data,*data->get(),0,"BsYield_sw");
  //int ndataw_b = dataw_b->sumEntries();
  
  // dataw_b->plotOn(frame,DrawOption("HIST"),LineColor(kRed),Rescale(1./ndataw_b),FillColor(0));
  //mc->plotOn(frame,DrawOption("HIST"),LineColor(kBlue),Rescaledataw_b->plotOn(frame,DrawOption("HIST"),LineColor(kRed),Rescale(1/ndataw_b),FillColor(0));
  //mc->plotOn(frame,DrawOption("HIST"),LineColor(kBlue),Rescale(1/nmc),FillColor(0));


  // if(max>0)
  frame->SetMaximum(max);
  frame->SetMinimum(min);
  frame->Draw();
  TLegend *leg1 = new TLegend(0.65,0.73,0.86,0.87);

  leg1->AddEntry("data unchanged","data unchanged", "LP");
  leg1->AddEntry("S-weighted data","S-weighted data","LP");
  leg1->AddEntry("MC","MC", "LP");
  leg1->Draw("same");

  
  }

