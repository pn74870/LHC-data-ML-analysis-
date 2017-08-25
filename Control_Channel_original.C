////////This code produces s-plots of the control channel for the variables
//////// chosen to be in the MVA as well as the MVAs themselves



#include "newntuple.h"

using namespace RooFit;
using namespace RooStats;

void MakePlot(RooDataSet *data, RooDataSet *data_unchanged, RooDataSet *mc, RooRealVar control, TString control_string, float ndata, float
nmc, float max);

void Control_Channel_original()
{



//////Set up variables//////////////////

RooRealVar B_MM("B_MM","B_MM",5000,5600);
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
RooRealVar MVA("MVA","MVA",0,1);
RooRealVar MVAlower("MVAlower","MVAlower",0,1);


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
obs->add(MVAlower);

/////////Get data////////////////////

TChain *fChain = new TChain("MuMuPhi");

fChain->Add("/opt/ppd/lhcb/ivw96271/TMVA_folder/MuMuPhi-data-2011U-MVAadded-BothBands.root");
fChain->Add("/opt/ppd/lhcb/ivw96271/TMVA_folder/MuMuPhi-data-2011D-MVAadded-BothBands.root");
fChain->Add("/opt/ppd/lhcb/ivw96271/TMVA_folder/MuMuPhi-data-2012D-MVAadded-BothBands.root");
fChain->Add("/opt/ppd/lhcb/ivw96271/TMVA_folder/MuMuPhi-data-2012U-MVAadded-BothBands.root");

RooDataSet *data_unchanged = new RooDataSet("data_unchanged","data_unchanged",*obs,Import(*fChain));
RooDataSet *data = new RooDataSet("data","data",*obs,Import(*fChain));


fChain2 = new TChain("MuMuPhi");	

fChain2->Add("/opt/ppd/lhcb/ivw96271/TMVA_folder/MuMuPhi-mc-MVAadded.root");	
RooDataSet *mc = new RooDataSet("mc","mc",*obs,Import(*fChain2));

float ndata = data->sumEntries();
float nmc = mc->sumEntries();

cout << "Amount of data: " << ndata << endl;
cout << "Amount of mc: " << nmc << endl;

//////Make model/////////////////

  Double_t lowRange = 5250, highRange = 5600;

  // make mass model for Bs
  RooRealVar mB("mB", "Bs Mass", 5366.3, lowRange, highRange);
  RooRealVar sigmaB("sigmaB", "Width of Gaussian", 25,20,100,"GeV");
  RooGaussian mBModel1("Gauss1", "Gaussian1", B_MM, mB, sigmaB);

  RooRealVar mB2("mB2", "Bs Mass2", 5366.3, lowRange, highRange);
  RooRealVar sigmaB2("sigmaB2", "Width of Gaussian2", 14,5,20,"GeV");
  RooGaussian mBModel2("Gauss2", "Gaussian2", B_MM, mB2, sigmaB2);

  RooRealVar sigfrac("sig1frac","fraction of component 1 in signal",0.01, 0, 1);
  RooAddPdf mBModel = RooAddPdf("2GaussSum","Signal", RooArgList(mBModel1, mBModel2), sigfrac);
 
  
  RooRealVar partRecDecConst("PartRecDecayConst", "Partial Rec Decay Const", -0.005, -100, 100);
  RooExponential partRecBkgModel("PartRecBkgModel", "Partial Rec Bkg Model", B_MM, partRecDecConst);

  
  RooRealVar BsYield("BsYield","Fitted Yield for Bs",29300 ,0.,10000000);
  RooRealVar PartRecYield("PartRecYield","Fitted Yield for Part Rec", 5000 ,0.,100000);
  RooRealVar CombYield("CombYield","Fitted Yield for Combinatorial bkg",1400.,0.0,100000.);

  
  RooAddPdf *model = new RooAddPdf("model","Signal + background models",RooArgList(mBModel,partRecBkgModel),RooArgList(BsYield, PartRecYield));

 /* model->fitTo(*data);

  sigmaB.setConstant();
  sigmaB2.setConstant();
  mB.setConstant();
  mB2.setConstant();
  partRecDecConst.setConstant();


/// do sPlot////////////
 
  RooStats::SPlot *sData = new RooStats::SPlot("sData","An SPlot", *data, model,RooArgList(BsYield,PartRecYield));
*/
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
model.plotOn(frame,Normalization(ndata));
  model.plotOn(frame,Components(mBModel),LineStyle(kDashed),LineColor(kRed),Normalization(ndata));
  model.plotOn(frame,Components(partRecBkgModel),LineStyle(kDashed),LineColor(kGreen),Normalization(ndata));
  data->plotOn(frame);
frame->Draw();
//c1->Print("/net/home/ppd/ivw96271/PlotFiles/B_Mass_Splot.eps");
//c1->Print("/net/home/ppd/ivw96271/PlotFiles/B_Mass_Splot.png");

TCanvas *c2 = new TCanvas;
MakePlot(data, data_unchanged, mc, h1_PT, "h1_PT", ndata, nmc,0.04);
//c2->Print("/net/home/ppd/ivw96271/PlotFiles/h1_PT_Splot.eps");
//c2->Print("/net/home/ppd/ivw96271/PlotFiles/h1_PT_Splot.png");
TCanvas *c3 = new TCanvas;
MakePlot(data, data_unchanged, mc, h2_PT, "h2_PT", ndata, nmc,0.04);
//c3->Print("/net/home/ppd/ivw96271/PlotFiles/h2_PT_Splot.eps");
//c3->Print("/net/home/ppd/ivw96271/PlotFiles/h2_PT_Splot.png");
TCanvas *c4 = new TCanvas;
MakePlot(data, data_unchanged, mc, B_TAU, "B_TAU", ndata, nmc,0.06);
//c4->Print("/net/home/ppd/ivw96271/PlotFiles/B_TAU_Splot.eps");
//c4->Print("/net/home/ppd/ivw96271/PlotFiles/B_TAU_Splot.png");


TCanvas *c5 = new TCanvas;
MakePlot(data, data_unchanged, mc, l1_PT, "l1_PT", ndata, nmc,0.023);
//c5->Print("/net/home/ppd/ivw96271/PlotFiles/l1_PT_Splot.eps");
//c5->Print("/net/home/ppd/ivw96271/PlotFiles/l1_PT_Splot.png");
TCanvas *c6 = new TCanvas;
MakePlot(data, data_unchanged, mc, l2_PT, "l2_PT", ndata, nmc,0.023);
//c6->Print("/net/home/ppd/ivw96271/PlotFiles/l2_PT_Splot.eps");
//c6->Print("/net/home/ppd/ivw96271/PlotFiles/l2_PT_Splot.png");
TCanvas *c7 = new TCanvas;
MakePlot(data, data_unchanged, mc, B_P, "B_P", ndata, nmc,0.06);
//c7->Print("/net/home/ppd/ivw96271/PlotFiles/B_P_Splot.eps");
//c7->Print("/net/home/ppd/ivw96271/PlotFiles/B_P_Splot.png");
TCanvas *c8 = new TCanvas;
MakePlot(data, data_unchanged, mc, B_DIRA_OWNPV, "B_DIRA_OWNPV", ndata, nmc,0.03);
//c8->Print("/net/home/ppd/ivw96271/PlotFiles/B_DIRA_OWNPV_Splot.eps");
//c8->Print("/net/home/ppd/ivw96271/PlotFiles/B_DIRA_OWNPV_Splot.png");


TCanvas *c9 = new TCanvas;
MakePlot(data, data_unchanged, mc, B_IPCHI2_OWNPV, "B_IPCHI2_OWNPV", ndata, nmc,0.1);
//c9->Print("/net/home/ppd/ivw96271/PlotFiles/B_IPCHI2_OWNPV_Splot.eps");
//c9->Print("/net/home/ppd/ivw96271/PlotFiles/B_IPCHI2_OWNPV_Splot.png");
TCanvas *c10 = new TCanvas;
MakePlot(data, data_unchanged, mc, B_CDF_isol, "B_CDF_isol", ndata, nmc,0.023);
//c10->Print("/net/home/ppd/ivw96271/PlotFiles/B_CDF_isol_Splot.eps");
//c10->Print("/net/home/ppd/ivw96271/PlotFiles/B_CDF_isol_Splot.png");
TCanvas *c11 = new TCanvas;
MakePlot(data, data_unchanged, mc, B_ENDVERTEX_CHI2, "B_ENDVERTEX_CHI2", ndata, nmc,0.035);
//c11->Print("/net/home/ppd/ivw96271/PlotFiles/B_ENDVERTEX_CHI2_Splot.eps");
//c11->Print("/net/home/ppd/ivw96271/PlotFiles/B_ENDVERTEX_CHI2_Splot.png");
TCanvas *c12 = new TCanvas;
MakePlot(data, data_unchanged, mc, B_PT, "B_PT", ndata, nmc,0.07);
//c12->Print("/net/home/ppd/ivw96271/PlotFiles/B_PT_Splot.eps");
//c12->Print("/net/home/ppd/ivw96271/PlotFiles/B_PT_Splot.png");

TCanvas *c13 = new TCanvas;
MakePlot(data, data_unchanged, mc, h1_IPCHI2_OWNPV, "h1_IPCHI2_OWNPV", ndata, nmc,0.21);
//c13->Print("/net/home/ppd/ivw96271/PlotFiles/h1_IPCHI2_OWNPV_Splot.eps");
//c13->Print("/net/home/ppd/ivw96271/PlotFiles/h1_IPCHI2_OWNPV_Splot.png");
TCanvas *c14 = new TCanvas;
MakePlot(data, data_unchanged, mc, h2_IPCHI2_OWNPV, "h2_IPCHI2_OWNPV", ndata,nmc,0.21);
//c14->Print("/net/home/ppd/ivw96271/PlotFiles/h2_IPCHI2_OWNPV_Splot.eps");
//c14->Print("/net/home/ppd/ivw96271/PlotFiles/h2_IPCHI2_OWNPV_Splot.png");
TCanvas *c15 = new TCanvas;
MakePlot(data, data_unchanged, mc, l1_IPCHI2_OWNPV, "l1_IPCHI2_OWNPV", ndata, nmc,0.1);
//c15->Print("/net/home/ppd/ivw96271/PlotFiles/l1_IPCHI2_OWNPV_Splot.eps");
//c15->Print("/net/home/ppd/ivw96271/PlotFiles/l1_IPCHI2_OWNPV_Splot.png");
TCanvas *c16 = new TCanvas;
MakePlot(data, data_unchanged, mc, l2_IPCHI2_OWNPV, "l2_IPCHI2_OWNPV", ndata, nmc,0.1);
//c16->Print("/net/home/ppd/ivw96271/PlotFiles/l2_IPCHI2_OWNPV_Splot.eps");
//c16->Print("/net/home/ppd/ivw96271/PlotFiles/l2_IPCHI2_OWNPV_Splot.png");


TCanvas *c17 = new TCanvas;
MakePlot(data, data_unchanged, mc, MVA, "MVA", ndata, nmc,0.025);
//c17->Print("/net/home/ppd/ivw96271/PlotFiles/MVA_Splot.eps");
//c17->Print("/net/home/ppd/ivw96271/PlotFiles/MVA_Splot.png");

TCanvas *c18 = new TCanvas;
MakePlot(data, data_unchanged, mc, MVAlower, "MVA_lower", ndata, nmc,0.025);
//c18->Print("/net/home/ppd/ivw96271/PlotFiles/MVA_lower_Splot.eps");
//c18->Print("/net/home/ppd/ivw96271/PlotFiles/MVA_lower_Splot.png");




}

void MakePlot(RooDataSet *data, RooDataSet *data_unchanged, RooDataSet *mc, RooRealVar control, TString control_string,
float ndata, float nmc, float max)
{

control.setBins(100);
RooPlot *frame = control.frame(Title(control_string),Bins(100));


char cuts = 0;
char wgtVarName = 0;
int intorder = 0;



  RooDataSet *data_unchanged2 = data_unchanged->reduce(SelectVars(control));
  RooDataHist *hist_unchanged =data_unchanged2->binnedClone();
  RooHistPdf *hist_unchanged2 = new RooHistPdf("hist_unchanged2","hist_unchanged2",control, *hist_unchanged,intorder);
  hist_unchanged2->plotOn(frame,LineWidth(1),LineColor(kBlack));
  
  RooDataSet *dataw_b = new RooDataSet(data->GetName(),data->GetTitle(),data,*data->get(),0,"BsYield_sw");
  RooDataSet *dataw_b2 = dataw_b->reduce(SelectVars(control));
  RooDataHist *histw_b =dataw_b2->binnedClone();
  RooHistPdf *histw_b2 = new RooHistPdf("histw_b2","histw_b2",control, *histw_b,intorder);
  histw_b2->plotOn(frame,LineColor(kRed),LineWidth(1));
  
  RooDataSet *mc2 = mc->reduce(SelectVars(control));
  RooDataHist *histmc =mc2->binnedClone();
  RooHistPdf *histmc2 = new RooHistPdf("histmc2","histmc2",control, *histmc,intorder);
  histmc2->plotOn(frame,LineColor(kBlue),LineWidth(1));



  //data_unchanged->plotOn(frame,DrawOption("BX"),Rescale(1/ndata),FillColor(0),LineStyle(kDashed));
  RooDataSet *dataw_b = new RooDataSet(data->GetName(),data->GetTitle(),data,*data->get(),0,"BsYield_sw");
  //ndataw_b = dataw_b->sumEntries();
  
  dataw_b->plotOn(frame,DrawOption("HIST"),LineColor(kRed),Rescale(1/ndataw_b),FillColor(0));
  //mc->plotOn(frame,DrawOption("HIST"),LineColor(kBlue),Rescaledataw_b->plotOn(frame,DrawOption("HIST"),LineColor(kRed),Rescale(1/ndataw_b),FillColor(0));
  //mc->plotOn(frame,DrawOption("HIST"),LineColor(kBlue),Rescale(1/nmc),FillColor(0));



  frame->SetMaximum(max);
  frame->SetMinimum(0);
  frame->Draw();
  

  
  }

