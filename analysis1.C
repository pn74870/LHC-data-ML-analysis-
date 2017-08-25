



#include "TCanvas.h"
#include "TStyle.h"
#include "TH1.h"
#include "TGaxis.h"
#include <typeinfo>
#include <vector>
using namespace std;
TString dirGraphs="/net/home/ppd/sds61239/graphs/SS2011-2012/";
TString decay = "MueKst", decayr="MueKstSS", option="dataSS";
TFile file("/home/ppd/sds61239/hist/MueKst-mc-xll-new-BKstmumu.root");
TFile file1("/home/ppd/sds61239/hist/MueKst-mc-xll-new-MueKst.root");
TFile file("/opt/ppd/lhcb/sds61239/hist/cuts/MueKstSS-xll-data-2011-2012-OneFifth-MueKst.root");
//"//new-MueKst.root");//"/opt/ppd/lhcb/ricciars/Xemu/MueKst-mc-xll-new.root"
//TFile file1("/net/home/ppd/sds61239/hist/MueKst-mc-xll-new-BKstmumu.root");

TFile file1("/opt/ppd/lhcb/sds61239/hist/cuts/MueKst-xll-data-2011-2012-OneFifth-MueKst.root");
 //"JpsStripping"
 /* c3->Print(dirGraphs + decayr + "-" + option + "HadronStripping.pdf");	
  c4->Print(dirGraphs + decayr + "-" + option + "LeptonStripping.pdf");
  c5->Print(dirGraphs + decayr + "-" + option + "BAdditional.pdf");
  c6->Print(dirGraphs + decayr + "-" + option + "PID-variables.pdf");
  c7->Print(dirGraphs + decayr + "-" + option + "IP-tracks.pdf");
  c8->Print(dirGraphs + decayr + "-" + option + "P-tracks.pdf");*/




TString histNames[] ={
    "hBmass",
    "hBmasssel",
    "hBvchi2",
    "hBdira",
    "hBipchi2",
    "hBfdchi2",
 
    "hd1mass",
    "hd1pT",
    "hd1vchi2",
    "hd1ipchi2",
    "hd1fdchi2",

    "hd2mass",
    "hd2pT",
    "hd2vchi2", 
    "hd2ipchi2",
				 
    "hl2pide",
    "hl2ipchi2",
    "hl2pt",
    "hl1ismuon",
    "hl1ipchi2",
    "hl1pt",

    "hBtau", 
    "hBp",
    "hBpt",
    "hBip",
    "hBisol",
    "hBmult",

    "hh1pidK",
    "hh2pidK",
    "hl1pidmu",
    "hl2pide",

    "hh1ipchi2",
    "hh2ipchi2",
    "hl1ip",
    "hl2ip",
    "htracks_minip",
    "htracks_minipchi2",

    "hh1p",
    "hh2p",
    "hl1p",
    "hl2p",
    "htracks_minpt",

    "hBmassHOP",
    "hAlphaHOP"
};
int nGraphs[]={6,5,4,6,6,4,6,5,2};
int nGraphsLength=9;
TString graphNames[]={"BStripping","JpsStripping","HadronStripping",  "LeptonStripping",  "BAdditional",
		      "PID-variables",  "IP-tracks","P-tracks","HOP" };

void analysis1(int histN){
  /*
  TFile file ("/data/nraja/xemu_rootfiles/data-MagUp-2011-1.root");
  TDirectoryFile* dir=(TDirectoryFile*)file.Get("MueKst");
  TTree* signal=(TTree*)dir->Get("DecayTree");
  TMVAClassificationApplication("Fisher",signal);
  */
  drawGraphs(histN);
 
  //int a[]={(int)1.5};
  
}
void analysis1(){
  /*
  TFile file ("/data/nraja/xemu_rootfiles/data-MagUp-2011-1.root");
  TDirectoryFile* dir=(TDirectoryFile*)file.Get("MueKst");
  TTree* signal=(TTree*)dir->Get("DecayTree");
  TMVAClassificationApplication("Fisher",signal);
  */
  // for(int i=0;i<44;i++)
   drawGraphs();
 
  //int a[]={(int)1.5};
  
}
void drawGraphs(){
  int s=0;
  for(int i=0;i<nGraphsLength;i++){
     TCanvas *c1 = new TCanvas;
 
     if(nGraphs[i]>4)
       c1->Divide(2,3);
     else if(nGraphs[i]>2) c1->Divide(2,2);
     else c1->Divide(1,2);
     
     for (int j=0;j<nGraphs[i];j++){
       c1->cd(j+1);
       int histN=s+j;
       TString histName=histNames[histN];
       TH1F* h1 = (TH1F*)file.Get(histName);
       TH1F* h2 = (TH1F*)file1.Get(histName);


//Float_t scale =(float)h1->GetEntries()/h2->GetEntries();


       h1->Scale(1./h1->GetEntries());
       h2->Scale(1./h2->GetEntries());

        Double_t max1=h1->GetMaximum();
        Double_t max2=h2->GetMaximum();

 

       if(max1>max2){
	 h1->Draw();
	 c1->Update();
	 h2->SetLineColor(kRed);

	 h2->Draw("same");
    
       }
       else{
  
	 h2->SetLineColor(kRed);
	 h2->Draw();
	 c1->Update();
    
	 h1->SetLineColor(kBlue);

	 h1->Draw("same");


       }
      
       c1->Update();

       


     }
     s+=nGraphs[i];
       c1->Print(dirGraphs + decayr + "-" + option +"-"+ graphNames[i]+".pdf");

     //  delete c1;

}
}
void drawGraphs(int histN)
{




	 TCanvas *c1 = new TCanvas("c1", "", 1);
	
	 
	/* TCanvas *c2 = new TCanvas("c2", "J/psi stripping cuts", 1);
	 TCanvas *c3 = new TCanvas("c3", "Hadron stripping cuts", 1);
	 TCanvas *c4 = new TCanvas("c4", "Leptons stripping cuts", 1);
	 TCanvas *c5 = new TCanvas("c5", "B additional variables", 1);
	 TCanvas *c6 = new TCanvas("c6", "PID variables", 1);
	 TCanvas *c7 = new TCanvas("c7", "IP tracks", 1);
	 TCanvas *c8 = new TCanvas("c8", "P tracks", 1);*/
	 // c1->Divide(2,3);


 // printHist("/opt/ppd/lhcb/ricciars/Xemu/MueKst-mc-xll-new.root",c1);
 // c1->Update();
  //printHist("/net/home/ppd/sds61239/hist/MueKst-mc-xll-new-BKstmumu.root");
	 // printGraph("hBmass",c1,1);
	 //printGraph("hBmasssel", c1, 2,true);
	


 TString histName=histNames[histN];

 
TH1F* h1 = (TH1F*)file.Get(histName);
TH1F* h2 = (TH1F*)file1.Get(histName);


//Float_t scale =(float)h1->GetEntries()/h2->GetEntries();


 h1->Scale(1./h1->GetEntries());
 h2->Scale(1./h2->GetEntries());

 Double_t max1=h1->GetMaximum();
 Double_t max2=h2->GetMaximum();


 if(max1>max2){
    h1->Draw();
    c1->Update();
    h2->SetLineColor(kRed);

    h2->Draw("same");
    
 }
 else{
  
    h2->SetLineColor(kRed);
    h2->Draw();
    c1->Update();
    
    h1->SetLineColor(kBlue);

    h1->Draw("same");


}

c1->Update();

 c1->Print(dirGraphs + decayr + "-" + option + histName+".pdf");

  
}
 void printGraph(TString histName,TCanvas *c1, int subplot,bool print=false) {
   c1->cd(subplot);
	 h1->Draw("same");
	 c1->Update();

	 //create hint1 filled with the bins integral of h1

	 //scale hint1 to the pad coordinates
	 Float_t rightmax = 1.1*hint1->GetMaximum();
	 Float_t scale = gPad->GetUymax() / rightmax;
	 hint1->SetLineColor(kRed);
	 hint1->Scale(scale);
	 hint1->Draw("same");
	 c1->Update();
	
}
void printHist(TString fileName, TCanvas *c1){
  TFile file (fileName);//"/opt/ppd/lhcb/ricciars/Xemu/MueKst-mc-xll-new.root"
 



  
  int n=0;
  cout << MuMuKstArray[n]->GetEntries() << endl;
  c1->cd(1);
  MuMuKstArray[n++]->Draw();
  //c1->Print(dirGraphs + "-" + option + "BStripping.pdf");
  /*c1->cd(2);
  
  MuMuKstArray[n++]->Draw("same");
  c1->cd(3); 

  MuMuKstArray[n++]->Draw("same");
  c1->cd(4);
  
  MuMuKstArray[n++]->Draw("same");
  c1->cd(5);      
  
  MuMuKstArray[n++]->Draw("same");
  c1->cd(6);
 
  c2->cd(1);
 
  MuMuKstArray[n++]->Draw("same");
  c2->cd(2);      
  
  MuMuKstArray[n++]->Draw("same");
  c2->cd(3);

  MuMuKstArray[n++]->Draw("same");
  c2->cd(4);      
 
  MuMuKstArray[n++]->Draw("same");
  c2->cd(5);
 
  MuMuKstArray[n++]->Draw("same");
  
  c3->cd(1);
  
  MuMuKstArray[n++]->Draw("same");
  c3->cd(2);
 
  MuMuKstArray[n++]->Draw("same");
  c3->cd(3);

  MuMuKstArray[n++]->Draw("same");
  c3->cd(4);

  MuMuKstArray[n++]->Draw("same");
 
  
  c4->cd(1);
 
  MuMuKstArray[n++]->Draw("same");
  c4->cd(2);

  MuMuKstArray[n++]->Draw("same");
  c4->cd(3);
 
  MuMuKstArray[n++]->Draw("same");
  c4->cd(4);
 
  MuMuKstArray[n++]->Draw("same");
  c4->cd(5);

  MuMuKstArray[n++]->Draw("same");
  c4->cd(6);

  MuMuKstArray[n++]->Draw("same");
  
  c5->cd(1);
 
  MuMuKstArray[n++]->Draw("same");
  c5->cd(2);      

  MuMuKstArray[n++]->Draw("same");
  c5->cd(3);

  MuMuKstArray[n++]->Draw("same");
  c5->cd(4);      

  MuMuKstArray[n++]->Draw("same");
  c5->cd(5);

  MuMuKstArray[n++]->Draw("same");
  c5->cd(6);
 
  MuMuKstArray[n++]->Draw("same");

  c6->cd(1);
  
  MuMuKstArray[n++]->Draw("same");
  c6->cd(2);      

  MuMuKstArray[n++]->Draw("same");
  c6->cd(3);
 
  MuMuKstArray[n++]->Draw("same");
  c6->cd(4);      
  
  MuMuKstArray[n++]->Draw("same");
  
  c7->cd(1);
 
  MuMuKstArray[n++]->Draw("same");
  c7->cd(2);    

  MuMuKstArray[n++]->Draw("same");
  c7->cd(3);

  MuMuKstArray[n++]->Draw("same");
  c7->cd(4);    
 
  MuMuKstArray[n++]->Draw("same");
  c7->cd(5);

  MuMuKstArray[n++]->Draw("same");
  c7->cd(6);
 
  MuMuKstArray[n++]->Draw("same");
 
  c8->cd(1);

  MuMuKstArray[n++]->Draw("same");
  c8->cd(2);    
 
  MuMuKstArray[n++]->Draw("same");
  c8->cd(3);
  cout << n << endl;
  /*
  MuMuKstArray[n++]->Draw("same");
  c8->cd(4);    

  MuMuKstArray[n++]->Draw("same");
  c8->cd(5);
  cout<<n<<endl;
  MuMuKstArray[n++]->Draw("same");
  */

}





