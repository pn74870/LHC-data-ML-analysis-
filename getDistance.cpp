
#include <unordered_map>
#include <map>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <iostream>
#include <ostream>
#include "TROOT.h"
#include "TCanvas.h"
#include "TApplication.h"
#include "TSpectrum.h"
#include <TH1.h>
#include <algorithm>
using namespace std;


struct pattern{
  int index;
  int n;
  double min,max;
  pattern(int index):index(index){
    n=0;
    min=1e7;
    max=-1e7;}
};

int main(){
  
  TApplication app("a", 0, 0);
 
  ifstream file("data.txt");
  if(file.is_open()){
  const int n=10764;
  int step;
  double x;
  double tempDouble;
  int tempInt;
  map<int, pattern> patterns;
  //int inMax,intMin;
  
  for(int i=0;i<n;i++){

    file>>tempInt>>tempInt>>step>>tempDouble>>tempDouble>>x>>tempDouble;
    //auto itMax=maxCoord.find(step);
    //auto itMin=minCoord.find(step);
    auto it=patterns.find(step);
    if(it==patterns.end())
      patterns.insert(make_pair<int,pattern>(step,pattern(step)));
    
    else{
      if(it->second.max<x) it->second.max=x; 
      if(it->second.min>x) it->second.min=x;
    }
    it->second.n++;
  }
  TH1F* hist=new TH1F("distances","distance between max and min x",1500,0.,1300.);
  for(auto it= patterns.begin();it!=patterns.end();it++){
    cout<<"pattern index "<<it->first<<" number of entries "<<it->second.n<<" min "<<it->second.min<<" max "<<it->second.max<<endl;
    hist->Fill(it->second.max-it->second.min);
    
}
 
  TCanvas* c=new TCanvas;
  hist->Draw();
 
  TSpectrum* s=new TSpectrum(40);
  int nPeaks=s->Search(hist,1,"",.2);
  Float_t *xpeaks = s->GetPositionX();
  sort(xpeaks, xpeaks + nPeaks);
   for (int p=0;p<nPeaks;p++) {
     cout<< "peak at "<<xpeaks[p];
     if(p>0)
       cout<<" distance to previous peak "<<xpeaks[p]-xpeaks[p-1]<<" "<<(xpeaks[p]-xpeaks[p-1])/140<<" units" ;
     cout<<endl;
     // Int_t bin = h->GetXaxis()->FindBin(xp);

   }
   
   delete s;
  file.close();
  c->Connect("TCanvas","Closed()","TApplication",&app,"Terminate()");
  app.Run();
  }
  else cout<<"no file\n";
  
  return 0;
}

