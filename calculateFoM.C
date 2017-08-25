#include "ntuple_MVAJ.h"
#include <string>
 ntuple_MVAJ A;
 ntuple_MVAJ A1;

double normS=1.,normB=0.01;
double num=5/2;

TString decay="MueKst";
TChain * fChain = new TChain(decay);
TChain * fChainMC = new TChain(decay);
double signalWidth=150.;
const int N=40;


TCut dataCut="(abs(B_MM - 5300) > 150) && abs(d2_MM-895.81) < 50";
TCut mcCut="(abs(B_MM - 5300) < 150) && abs(d2_MM-895.81) < 50 && abs(BKGCAT) < 20";

bool cutData(double mvaCut){
  return (fabs(A.B_MM - 5300) > signalWidth) && fabs(A.d2_MM-895.81) < 50 && A.MVAJ > mvaCut;// && A.l2_ProbNNe>0.3 && A.l1_ProbNNmu>0.1 && A.h1_ProbNNk>0.1;
}
bool cutMC(double mvaCut){
  return (fabs(A1.B_MM - 5300) < signalWidth) && fabs(A1.d2_MM-895.81) < 50 && A1.MVAJ > mvaCut && abs(A1.BKGCAT) < 20;
}

double getFoM(double mvaCutVal,double eCutVal,double muCutVal,double kCutVal){
  // A.Init(fChain);
  //A1.Init(fChainMC);

  TH1F *hBmassData= new TH1F("hBmassData",  "mass of the B (data)", 100, 4600.,6000.);
  // TH1F *hBmassMC= new TH1F("hBmassMC",  "mass of the B (MC)", 1600, 4600.,6200.);
  // hBmass->Sumw2();
  int nEntriesData=fChain->GetEntries();//1e6;//
  int nEntriesMC=fChainMC->GetEntries();
  std::ostringstream s;
  s << "MVAJ>"<<mvaCutVal<<"&& l2_ProbNNe>"<<eCutVal<<"&& l1_ProbNNmu>"<<muCutVal<< "&& h1_ProbNNk>"<<kCutVal;
  
  TCut mvaCut= s.str().c_str();
  cout<<"cut:"<<s.str().c_str()<<endl;
  //TTree* tree=fChain->GetTree();
  fChain->Draw(">>elist",mvaCut && dataCut);
  TEventList *elist = (TEventList*)gDirectory->Get("elist");
  fChain->SetEventList(elist);  
  fChain->Project("hBmassData","B_MM");
  
  //TTree* tree1=fChainMC->GetTree();
  fChainMC->Draw(">>elist1",mvaCut+mcCut);
  TEventList *elist1 = (TEventList*)gDirectory->Get("elist1");
  //  fChainMC->SetEventList(elist1);  
  //fChainMC->Project("hBmassMC","B_MM");

  //int nTotal=
  
  /*
 for (Long64_t jentry=0; jentry<nEntriesData;jentry++) {
   //  if (jentry%100000 ==0) cout << "Looping on event data " << jentry << " " << 100.*jentry/nEntriesData <<" %\n";
   fChain->GetEntry(jentry);
   if(cutData(mvaCut))
     hBmassData->Fill(A.B_MM);
   
   

 }

  */





/*for (Long64_t jentry=0; jentry<nEntriesMC;jentry++) {
  //  if (jentry%10000 ==0) cout << "Looping on event MC " << jentry << " " << 100.*jentry/nEntriesMC <<" %\n";
   fChainMC->GetEntry(jentry);
   if(cutMC(mvaCut))
     hBmassMC->Fill(A1.B_MM);



     }*/

/*
int min = hBmassMC->FindBin(5300-signalWidth);
int max = hBmassMC->FindBin(5300+signalWidth);
*/
//cout<<hBmassMC->GetBinCenter(min)<< " "<<hBmassMC->GetBinCenter(max)<<endl;

 normS=35./nEntriesMC;
  double NS = elist1->GetN()*normS;
  /*int min = hBmassMC->FindBin(5300-signalWidth);
int max = hBmassMC->FindBin(5300+signalWidth); */
//cout<<hBmassMC->Integral(min,max)<< " vs "<<NS/normS<<endl;
  //double NS=hBmassMC->Integral(min,max)*normS;
 
 hBmassData->Fit("expo");


 TF1 *fit = hBmassData->GetFunction("expo");
 double NB=fit->Integral(5300-signalWidth,5300+signalWidth)/hBmassData->GetBinWidth(1)*1e6*normB/nEntriesData;
 cout<<mvaCutVal<<" "<<NS<<" "<<NB<<endl;
 


 delete hBmassData;

 delete elist;
 delete elist1;
fChain->SetEventList(0);  
//fChainMC->SetEventList(0);

 return NS/sqrt(num+NB);
}


void calculateFoM(){


  double FoM[N];
  double x[N];
  
   TString file1, file2,file3,file4,fileMC;
   //if(decay=="MueKst"){
     fileMC="/opt/ppd/lhcb/sds61239/mva/addMva/BDTNW/"+decay+"-mc-xll-new.root";
     file1="/opt/ppd/lhcb/sds61239/mva/addMva/BDTNW/"+decay+"-data-xll-2011U.root";
     file2="/opt/ppd/lhcb/sds61239/mva/addMva/BDTNW/"+decay+"-data-xll-2011D.root";
     file3="/opt/ppd/lhcb/sds61239/mva/addMva/BDTNW/"+decay+"-data-xll-2012D.root";
     file4="/opt/ppd/lhcb/sds61239/mva/addMva/BDTNW/"+decay+"-data-xll-2012U.root";
   
   fChain->Add(file1); // Chain the files
   fChain->Add(file2);
   fChain->Add(file3);
   fChain->Add(file4);
   fChainMC->Add(fileMC);
   /*
   double mva=0.876,nne=0.151,nnmu=0.303,nnk=.201;
   double max=0;
   int in[4];
   double a;
   int n=2;
   for(int i=-n;i<=n;i++){
     for(int j=-n;j<=n;j++)
       for(int k=-n;k<=n;k++)
	 for(int l=-n;l<=n;l++){
	   // x[i]=.001*i;
	   //FoM[i]=getFoM(0.88,.17,.2,x[i]);
	   // cout<<100./N*i<<" %\n";
	   a=getFoM(mva+i*.001,nne+j*.001,nnmu+k*.001,nnk+l*.001);
	   if(a>max){
	     in[0]=i;
	     in[1]=j;
	     in[2]=k;
	     in[3]=l;
	     max=a;
	   }
	   //cout<<a<<endl;
	 }
   }

   cout<<max<<" "<<in[0]<<" "<<in[1]<<" "<<in[2]<<" "<<in[3]<<endl;
   */
   for(int i=0;i<N;i++){
     x[i]=1./N*i;
     FoM[i]=getFoM(x[i],.3,.1,.1);
     cout<<100./N*i<<" %\n";
   }
   
   
   TCanvas* c1=new TCanvas;
   TGraph* graph=new TGraph(N,x,FoM);
   graph->Draw("A*");
   c1->Print("fom_check_"+decay+".pdf");

}
