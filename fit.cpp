
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
#include <TF1.h>
#include <algorithm>
#include <TGraph.h>
#include <TLine.h>
#include <iterator>
#include <numeric>


//to compile: g++ -std=c++0x -g -Wall `root-config --cflags --libs` -lSpectrum  fit.cpp -o fit
//to run: ./fit
//input data file: data.txt
 
using namespace std;

struct point{ 

  double x,y;
  double gradX,gradY,interX,interY;//equation of a vertical line is x=gradY*y+interY
  bool lineSetX,lineSetY;


  point(double x=0,double y=0):x(x),y(y),lineSetX(false),lineSetY(false){

  }

  double dispY(){ //calculates distance between the point and the intersection of two corresponding lines
    
    double yTrue=(gradX*interY+interX)/(1-gradX*gradY);
    //  cout<<"y: "<<y<< " "<<yTrue<<endl;
    return y-yTrue;
  }
  double dispX(){
    
    double xTrue=(gradY*interX+interY)/(1-gradX*gradY);
   
    //  cout<<"x: "<<x<< " "<<xTrue<<endl;
  
    return x-xTrue;
  }

};

struct points{ //structure containing a group of points

  vector<point*> coords;
 
  TGraph* gr;
  double grad,inter;
  TLine* l;
  points(){
    gr=new TGraph;
    l=NULL;
  }


  void add(point* pt){
    this->coords.push_back(pt);
    gr->SetPoint(gr->GetN(), pt->x,pt->y);
  }
  
  double meanDispX(){ //average of displacements of points for which lines have been fitted
    double s=0;
    int n=0;
    for(int i=0;i<coords.size();i++){ 
      if(coords[i]->lineSetX && coords[i]->lineSetY){
	s+=coords[i]->dispX();
	n++;
      }
    }
    return s/n;
  }
   double meanDispY(){
    double s=0;
    int n=0;
    for(int i=0;i<coords.size();i++){
      if(coords[i]->lineSetY && coords[i]->lineSetX){
	s+=coords[i]->dispY();
	n++;
      }
    }
    return s/n;
  }
  

  void draw(int color=4){
   
    if(gr->GetN()>0){   
    gr->SetMarkerColor(color);
   
    if(l!=NULL){
      l->SetLineColor(color);
      l->Draw("same"); //vertical line
    }
    else {
      TF1* f=gr->GetFunction("pol1");
      if(f!=NULL) { //horizontal line
	//f->Draw("* same");
	f->SetLineColor(color);
      }
      gr->Draw("* same");
    }
  }

  }

  void fitLine(bool vertical=false){ //y=ax+b for horizontal,  x=ay+b for vertical lines

    if(gr->GetN()>1){
      if(vertical){
	
	
	vector<double> x,y;
	for(int i=0;i<coords.size();i++){
	  x.push_back(coords[i]->x);
	  y.push_back(coords[i]->y);
	}
	TGraph *g = new TGraph(x.size(),&y[0],&x[0]); //swap x and y to avoid infinite gradients
	g->Fit("pol1");
	
	double a=g->GetFunction("pol1")->GetParameter(1);
	double b=g->GetFunction("pol1")->GetParameter(0);

	grad= a;
	inter=b;
	
	double y1=*min_element(y.begin(),y.end());
	double x1=a*y1+b;
	
	double y2=*max_element(y.begin(),y.end());
	double x2=a*y2+b;

	l=new TLine(x1,y1,x2,y2);

      }
      else{
	gr->Fit("pol1");
	grad=gr->GetFunction("pol1")->GetParameter(1);
	inter=gr->GetFunction("pol1")->GetParameter(0);
      }
      for(int i=0;i<coords.size();i++){
	
	
	if(vertical){
	  coords[i]->gradY=grad;
	  coords[i]->interY=inter;
	  coords[i]->lineSetY=true;
	}
	else{
	  coords[i]->gradX=grad;
	  coords[i]->interX=inter;
	  coords[i]->lineSetX=true;
	}
	
      }
    }
    
}
  
};
bool contains(vector<int> v, int val){
  for(int i=0;i<v.size();i++)
    if(v[i]==val) return true;
  return false;
}



int main(){
  
  TApplication app("a", 0, 0);
  char outputFileName[]="output.txt";
  ifstream file("data.txt");
  if(file.is_open()){
  const int n=10764;
  int patNum;
  double x,y;
  double maxDistInCol = 10.;
  double tempDouble;
  int row,col;
  map<int, points> patternsH; //key patNum
  map<pair<int,int>,points> patternsV; //key (int)x/10 and t1
  point allPts[n];
  map<pair<int,int>,points> detectors; //key row and column
  vector<int> patternL = {0, 5, 7, 15};//{0,2,4,6,8,10,12, 14};//
  
  for(int i=0;i<n;i++){

    file>>row>>col>>patNum>>tempDouble>>tempDouble>>x>>y;
    allPts[i]=point(x,y); //store point

    int t1=(patNum-64)%96;
  
    if(col==9 && row==6 && patNum==1797) //bad point
      continue;

    if(!contains(patternL,t1)) //ignore other points
      continue;

    pair <int,int> rowCol=make_pair<int,int>(row,col);

    auto itDet=detectors.insert(make_pair<pair<int,int>,points >(rowCol,points()));//returns pair of iterator to existing detector and bool or inserts new detector
    itDet.first->second.add(&allPts[i]);

  
    
    auto itH=patternsH.insert(make_pair<int,points>(patNum,points()));
    itH.first->second.add(&allPts[i]);   
      

    pair<int,int> p=make_pair(round(x/maxDistInCol),t1);
    auto itV=patternsV.insert(make_pair<pair<int,int>,points >(p,points()));
    itV.first->second.add(&allPts[i]);
  

    
  }



  TCanvas* c=new TCanvas;
  c->DrawFrame(-700,-300,700,300);
  vector<double> meanX,meanY;
 
  TH1F* hGradV=new TH1F("gradientsV","gradients of vertical lines",20,-.015,.01);
  TH1F* hGradH=new TH1F("gradientsH","gradients of horinzontal lines",20,-.008,.008);

  


   //plot vertical lines
  for(auto it= patternsV.begin();it!=patternsV.end();it++){
     
    it->second.fitLine(true);     
    it->second.draw(it->first.second/2+1);	  
    hGradV->Fill(it->second.grad);
  }


  //plot horizontal lines
  for(auto it= patternsH.begin();it!=patternsH.end();it++){
  
    it->second.fitLine(false);  
    it->second.draw((it->first-64)%96/2+1);
    hGradH->Fill(it->second.grad);

  }


  TCanvas* c1=new TCanvas;
  c1->Divide(1,2);
  c1->cd(1);
  hGradH->Draw();
  c1->cd(2);
  hGradV->Draw();



  //print displacements of the circles that have points on them to txt file
  ofstream outFile(outputFileName);
  if(outFile.is_open())
  for(auto it=detectors.begin();it!=detectors.end();it++){
    double dx=it->second.meanDispX();
    double dy=it->second.meanDispY();
      outFile<<it->first.first<<" "<<it->first.second<<" "<< dx<<" "<<dy<<endl;//prints row column dx dy
    cout<<"detector: "<<it->first.first<<" "<<it->first.second<<" displacement:"<< dx<<" "<<dy<<endl; 

   }
  else cout<<"cannot open "<<outputFileName<<endl;

  
  
  outFile.close();
  file.close();
  c->Connect("TCanvas","Closed()","TApplication",&app,"Terminate()"); //exit program if canvas is closed
  app.Run();
  }
  else cout<<"cannnot open input file\n";
  
  return 0;
}

