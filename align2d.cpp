#include <cstdlib>
#include <vector>
#include <iostream>
#include <ostream>
# include "TRandom.h"
#include "TROOT.h"
#include "TAxis.h"
#include "TCanvas.h"
#include "TLine.h"
#include "TApplication.h"
#include "TEllipse.h"
#include "TMarker.h"
#include "TF1.h"
#include "TMath.h"
#include <TFile.h>
#include <TH1.h>
#include "TProfile.h"
#include <TH2.h> 
#include <TGraph.h>
#include <TColor.h>
#include "TMinuit.h"
#include <TFitter.h>
#include <cmath>
using namespace std;

# ifndef __CINT__
const double pi=3.14159265358979323846;
//lines
const int NlinesH = 40; 
const int NlinesV = 40;
const double alpha =0./180*pi;

//numbers of circles
const int NinRow = 5;
const int Nrows = 5;

const double radius = 10.;
const double distCen = 2.3*radius;
const double margin = 0;
const double stdevCircle=1.;
const double stdevPoint=0.5 ;


const double scale = .9/NinRow/distCen;

//coord system

const double width=100.;
const double height=100;

const double lineHdist=height/NlinesH;
const double lineVdist=width/NlinesV;



struct vec2 { //2d vector 
	double x, y;
	vec2() {};
	vec2(double x, double y) :x(x), y(y) {};
  
  double lengthSq(){
    return x*x+y*y;
  }
  double length(){
    return sqrt(lengthSq());
 }
	vec2 operator+(const vec2& v) {
		vec2 sum(v.x + x, v.y + y);
		return sum;

	}
	vec2 operator-(const vec2& v) {
		vec2 diff(-v.x + x, -v.y + y);
		return diff;

	}

	vec2 operator*(const double& n) {
		vec2 ans(x*n, y*n);
		return ans;

	}
	vec2& operator*=(const double& n) {
		this->x *= n;
		this->y *= n;
		return *this;

	}
	vec2& operator+=(const vec2 v) {
		this->x += v.x;
		this->y += v.y;
		return *this;

	}
	vec2& operator-=(const vec2 v) {

		this->x -= v.x;
		this->y -= v.y;
		return *this;

	}
	friend ostream& operator<<(ostream &os, const vec2& v);

};
ostream& operator<<(ostream &os, const vec2& v) {
	os << v.x << " " << v.y << endl;
	return os;
}

class line;
struct circle;

struct point{
  vec2 pos; 
  circle* circ; //circle inside which the point is 
  line* lineH; //horizontal line on which the point should be
  line* lineV; //vertical line
  TMarker* mark;
  
  point(vec2 pos, line* lineH, line* lineV):pos(pos),lineH(lineH),lineV(lineV){
    
  }



  point(){}
  void move(vec2 disp){
    pos+=disp;
    
    
  }
  void Draw(int color=1){
    mark=new TMarker(pos.x, pos.y,7);
    mark->SetMarkerColor(color);
    mark->Draw("same");
  }
};


struct circle {

  vec2 centrePos;
  vector<point*> points; //points inside the circle
 
  int color;
  circle(){};
  circle(vec2 p,int color=1):centrePos(p),color(color) {
    }
  bool addPoint(point* p){
    vec2 dist=p->pos-centrePos;
    if(dist.length()<radius){
      points.push_back(p);
      p->circ=this;
      //p->Draw(color);
      return 1;
    }
    return 0;
  }
  void Draw(){
    TEllipse* e= new TEllipse(centrePos.x,  centrePos.y, radius, radius);
    e->SetLineColor(color);
    e->Draw("same");
    for(vector<point*>:: iterator it=points.begin();it!=points.end();it++){
      (*it)->Draw(color);
    }
   
  }
  void move(vec2 disp){
    centrePos+=disp;
    for(vector<point*>:: iterator it=points.begin();it!=points.end();it++){
      (*it)->move(disp);
    }
   
   
  }
  void randomizePoints(TRandom* rand){
    for(vector<point*>:: iterator it=points.begin();it!=points.end();it++){

      vec2 disp(rand->Gaus(0,stdevPoint),rand->Gaus(0,stdevPoint));
      (*it)->move(disp);
    }
  }
};




class line{ 
private:
  bool vertical;
  double x1,x2,h;//points where line intersects two sides of the screen
public:
  
  line(){};
  line(double a, double b, bool vertical):x1(a),x2(b),vertical(vertical) {
    if(vertical){
      h=height;
     
    }
    else{
      h=width;
     
    }
 
};
   void print(){
      cout<<"vertical: "<<vertical<<" x1: "<<x1<<" x2: "<<x2<<endl;
    }
  double dist2PointSq(vec2 point){
    if(vertical)
      return pow(point.y*(x2-x1)+h*(x1-point.x),2)/(pow(x2-x1,2)+h*h);
    return pow(point.x*(x2-x1)+h*(x1-point.y),2)/(pow(x2-x1,2)+h*h);
  }
  void Draw(){
    TLine* lineGO;
 if(vertical){
    
      lineGO=new TLine (x1,0,x2,h);
    }
    else{
     
      lineGO=new TLine(0,x1,h,x2);
    }
    lineGO->Draw("same");
}

 
};






void drawCircle(circle &cir,int color){
  TEllipse* e = new TEllipse(cir.centrePos.x,  cir.centrePos.y, radius, radius);

  e->SetLineColor(color);
  e->Draw("same");


}

vec2 rotate(vec2 v){
  return vec2(v.x*cos(alpha)-v.y*sin(alpha),v.x*sin(alpha)+v.y*cos(alpha));
}

circle circles[Nrows][NinRow];
line linesH[NlinesH];
line linesV[NlinesV];
point points[NlinesH*NlinesV];
vector<vec2> randDisplacements;



void sumOfRes(int &npar,double *gin, double &f, double *par, int flag=0 )
{
  double sum=0;
  for(int i=0;i<Nrows;i++){
    for(int j=0;j<NinRow;j++){
      
      for(vector<point*>::iterator it= circles[i][j].points.begin();it!=circles[i][j].points.end();it++){
	
	vec2 disp(par[2*(i*NinRow+j)],par[2*(i*NinRow+j)+1]);

	sum+=(*it)->lineH->dist2PointSq((*it)->pos+disp)+(*it)->lineV->dist2PointSq((*it)->pos+disp);

      }
     
    }
  }
  f= sum;


}

TFitter* minimize(){
  TFitter *minimizer = new TFitter(2*Nrows*NinRow);
  minimizer->SetFCN(sumOfRes);
  
  
  for(int i=0;i<Nrows;i++){
	for (int j = 0; j < NinRow; j++) {
		
		char buffer[20];
		sprintf(buffer,"dev x %d",i*NinRow+j);
		minimizer->SetParameter(2*(i*NinRow+j),buffer,randDisplacements[i*NinRow+j].x,stdevCircle,-3*stdevCircle,3*stdevCircle);
		sprintf(buffer,"dev y %d",i*NinRow+j);
		minimizer->SetParameter(2*(i*NinRow+j)+1,buffer,randDisplacements[i*NinRow+j].y,stdevCircle,-3*stdevCircle,3*stdevCircle);
	}
  }
  minimizer->ExecuteCommand("SIMPLEX",0,0);
  minimizer->ExecuteCommand("MIGRAD",0,0);
  
  return minimizer;
  }





int main() {
	TApplication app("a", 0, 0);
	TRandom* rand=new TRandom();
	//rand->SetSeed(1);
	TCanvas* c = new TCanvas("c", "Before/after correction", 2*(int)(width/height*500),500);
	c->Divide(2,1);
	c->cd(1);
	gPad->Range(-margin,-margin,width+margin,height+margin);
	

	//initialize circles
	vec2 startPos(0,distCen*sqrt(3)/4);
	vec2 rowDisp1(distCen/2,distCen*sqrt(3)/2);
	vec2 rowDisp2(-distCen/2,distCen*sqrt(3)/2);
	for(int i=0;i<Nrows;i++){
	  
	     
	  for(int j=0;j<NinRow;j++){
	  
	    circles[i][j]= circle(startPos + vec2(j*distCen, 0));
		
	    // circles[i][j].Draw();
	  }
	  startPos+=i%2==0?rowDisp1:rowDisp2;
	}


	//initialize lines & points
	for(int i=0;i<NlinesH;i++){  
	  linesH[i]= line(i*lineHdist / cos(alpha), i*lineHdist / cos(alpha) + width*tan(alpha), 0);
	  //linesH[i].Draw();

	}
	for(int i=0;i<NlinesV;i++){
	  linesV[i]= line(i*lineVdist / cos(alpha), i*lineVdist / cos(alpha) - height*tan(alpha), 1);
	  //linesV[i].Draw();

	}
	
	for(int i=0; i<NlinesH;i++){
	   for(int j=0;j<NlinesV;j++){
	    vec2 ptPos(j*lineVdist,i*lineHdist);
	    ptPos=rotate(ptPos);
	    points[i*NlinesV+j]= point(ptPos, &linesH[i], &linesV[j]);
	    // points[i*NlinesV+j].Draw(1);
	    int row=(int)((ptPos.y)/(distCen*sqrt(3)/2)+0.0);
	    int col=(int)((ptPos.x)/distCen);
	   
	    for(int k=-1;k<2;k++){
	      int circleRow=row+k;
	      
	      if(circleRow>=0 && circleRow<Nrows){
		for(int l=0;l<2-row%2 && l+col<NinRow;l++){
		 
		  circles[circleRow][l+col].addPoint(&points[i*NlinesV+j]);
		}
	      }
	    }
	  } 
	}
	

	//random displacement of circles

	for(int i=0;i<Nrows;i++){
	  
	     
	  for(int j=0;j<NinRow;j++){
	    vec2 randDisp(rand->Gaus(0,stdevCircle),rand->Gaus(0,stdevCircle));
	    randDisplacements.push_back(randDisp);
	    circles[i][j].move(randDisp);
	    circles[i][j].randomizePoints(rand);	//random displacement of indvidual points
	    circles[i][j].Draw();
	  }
	  
	}


	

       

	//draw lines
	for(int i=0;i<NlinesH;i++){

	 
	  linesH[i].Draw();

	}
	for(int i=0;i<NlinesV;i++){
	 
	  linesV[i].Draw();

	}

	
	TFitter* fitter=minimize(); //find displacements of each circle

	//	TCanvas* c2 = new TCanvas("c2", "After correction", (int)(width/height*500),500);
	c->cd(2);
	gPad->Range(-margin,-margin,width+margin,height+margin);

	
	
	//print results
	double sumErrX=0,sumErrY=0;
	double maxErrX=0,maxErrY=0;

	for(int i=0;i<Nrows;i++){
	  
	     
	  for(int j=0;j<NinRow;j++){
	    vec2 disp(fitter->GetParameter(2*(i*NinRow+j)),fitter->GetParameter(2*(i*NinRow+j)+1));
	    circles[i][j].move(disp);
	    cout<<"random displacement of circle:\n"<<randDisplacements[i*NinRow+j];
	    cout<<"correction:\n"<<disp;
	    cout<<endl;
	   
	    double errX=abs(randDisplacements[i*NinRow+j].x+disp.x);
	    double errY=abs(randDisplacements[i*NinRow+j].y+disp.y);
	    
	    sumErrX+=errX;
	    sumErrY+=errY;
	    
	    if(errX>maxErrX)maxErrX=errX;
	    if(errY>maxErrY)maxErrY=errY;
     
	    
	    circles[i][j].Draw();
	  }
	  
	}
	
	cout<<"maximum error in x direction: "<<maxErrX<<" average error x: "<<sumErrX/NinRow/Nrows<<endl;
	cout<<"maximum error in y direction: "<<maxErrY<<" average error y: "<<sumErrY/NinRow/Nrows<<endl;

	//draw circles after correction
	for(int i=0;i<NlinesH;i++){

	 
	  linesH[i].Draw();

	}
	for(int i=0;i<NlinesV;i++){
	 
	  linesV[i].Draw();

	}


	delete rand;
	c->Connect("TCanvas","Closed()","TApplication",&app,"Terminate()");
	c->Print("plot.eps");
	app.Run();


	return 0;
}






# endif
