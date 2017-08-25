#include "newntuple.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <algorithm> //std::min_element
//#include "sumOfDigits.C"

// Please copy out both analysis.C and ntuple.h into the same directory.
// To run : root -l -b -q reduceNtuple.C
TTree *tre;
newntuple A;
float tracks_minPt;
float tracks_minIPchi2;
float tracks_minIP;
float B_isol;
int ranInt;
int BKGCAT;
double dofB, ptXe, ptXh, pXh, pXe_X, pXe_Y, pXe_Z, alphaHOP, EXe, BpHOP2, BEHOP, BmassHOP;
int L0Flag, HLT1Flag, HLT2Flag;
TString dirGraphs="/net/home/ppd/sds61239/graphs/";
TString histDir="/opt/ppd/lhcb/sds61239/hist/SS2011-2012/";
float bMassCutDown=5100;
float d2MassCutRange=100;

void treeToFill();
//int sumOfDigits();

bool cut(){
  return A.B_MM<bMassCutDown;// && A.h1_ProbNNk>0.1 && abs(A.d2_MM-895.8)<d2MassCutRange;
}

void reduceNtuple() {

  // The generated ntuple (mode) we are looking at
  TString decay ="MuePhi";//"BKstmumu";//"MuePhi"; or "MuePhi" or "KstKst" or "BsphiKst" or "phiphi" or ..this is the data/mc sample
  // The reconstructed ntuple (mode) we are looking at
  TString decayr ="MuePhiSS"; //"MueKstSS";// "eeKst" or "MuePhi" or "MuMuKst" or "MueKstSS" or ..this is the name in the tree
  TString option ="data-xll-2012U";//"xemu-xll";// "mc-xll-new";//"xll-data-2011-2012-OneFifth";//"xll-data-2011-OneFifth";//  //mc or mc-xll-new or data-2011/2/5/6U (or D) or data-xll-2011/2/5/6U (or D)
   TString option1="";
  TChain *fChain;
  
  fChain = new TChain(decayr + "/DecayTree");

  // The file can be either local or on dCache - your pick.
  TString file1, file2, file3, file4, file5, file6, file7, file8, file9, file10;
  if (option == "test")
  {
    file1= "/data/nraja/xll-validation/xll-validation-s24r0p1-19May2017.root";
  }
  if(option== "xll-data-2011-OneFifth"){
     file1= "/data/nraja/xemu_rootfiles/xll-data-2011-MagUp-OneFifth.root";
     file2= "/data/nraja/xemu_rootfiles/xll-data-2011-MagDown-OneFifth.root";

  }
  if(option== "xll-data-2011-2012-OneFifth"){
     file1= "/data/nraja/xemu_rootfiles/xll-data-2011-MagUp-OneFifth.root";
     file2= "/data/nraja/xemu_rootfiles/xll-data-2011-MagDown-OneFifth.root";
     file3= "/data/nraja/xemu_rootfiles/xll-data-2012-MagUp-OneFifth.root";
     file4= "/data/nraja/xemu_rootfiles/xll-data-2012-MagDown-OneFifth.root";
  }

   if(option=="xemu-xll"){
    file1="/home/ppd/nraja/ppd_raja/xemu/simulation/11574084/xemu-XLL-11574084.root";  
  }

  if (option == "data-2011D"){
    //TString file1 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/background-sample.root";
    file1 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagDown-2011-1.root";
    file2 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagDown-2011-2.root";
    file3 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagDown-2011-3.root";
    file4 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagDown-2011-4.root";
    file5 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagDown-2011-5.root";
    file6 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagDown-2011-6.root";
    file7 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagDown-2011-7.root";
    file8 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagDown-2011-8.root";
    file9 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagDown-2011-9.root";
    file10 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagDown-2011-10.root";
  }
  if (option == "data-2011U"){
    file1 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagUp-2011-1.root";
    file2 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagUp-2011-2.root";
    file3 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagUp-2011-3.root";
    file4 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagUp-2011-4.root";
    file5 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagUp-2011-5.root";
    file6 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagUp-2011-6.root";
    file7 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagUp-2011-7.root";
    file8 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagUp-2011-8.root";
    file9 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagUp-2011-9.root";
    file10 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagUp-2011-10.root";
  }
  if (option == "data-2012D"){
    file1 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagDown-2012-1.root";;
    file2 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagDown-2012-2.root";
    file3 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagDown-2012-3.root";
    file4 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagDown-2012-4.root";
    file5 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagDown-2012-5.root";
    file6 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagDown-2012-6.root";
    file7 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagDown-2012-7.root";
    file8 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagDown-2012-8.root";
    file9 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagDown-2012-9.root";
    file10 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagDown-2012-10.root";
  }
  if (option == "data-2012U"){
    file1 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagUp-2012-1.root";;
    file2 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagUp-2012-2.root";
    file3 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagUp-2012-3.root";
    file4 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagUp-2012-4.root";
    file5 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagUp-2012-5.root";
    file6 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagUp-2012-6.root";
    file7 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagUp-2012-7.root";
    file8 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagUp-2012-8.root";
    file9 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagUp-2012-9.root";
    file10 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagUp-2012-10.root";
  }
   if (option == "data-llk2-2015D"){
    file1 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-llk2-MagDown-2015-1.root";;
    file2 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-llk2-MagDown-2015-2.root";
    file3 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-llk2-MagDown-2015-3.root";
    file4 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-llk2-MagDown-2015-4.root";
    file5 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-llk2-MagDown-2015-5.root";
    file6 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-llk2-MagDown-2015-6.root";
    file7 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-llk2-MagDown-2015-7.root";
    file8 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-llk2-MagDown-2015-8.root";
    file9 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-llk2-MagDown-2015-9.root";
    file10 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-llk2-MagDown-2015-10.root";
  }
  if (option == "data-llk2-2015U"){
    file1 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-llk2-MagUp-2015-1.root";;
    file2 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-llk2-MagUp-2015-2.root";
    file3 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-llk2-MagUp-2015-3.root";
    file4 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-llk2-MagUp-2015-4.root";
    file5 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-llk2-MagUp-2015-5.root";
    file6 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-llk2-MagUp-2015-6.root";
    file7 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-llk2-MagUp-2015-7.root";
    file8 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-llk2-MagUp-2015-8.root";
    file9 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-llk2-MagUp-2015-9.root";
    file10 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-llk2-MagUp-2015-10.root";
  }
   if (option == "data-2016D"){
    file1 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagDown-2016-1.root";;
    file2 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagDown-2016-2.root";
    file3 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagDown-2016-3.root";
    file4 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagDown-2016-4.root";
    file5 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagDown-2016-5.root";
    file6 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagDown-2016-6.root";
    file7 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagDown-2016-7.root";
    file8 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagDown-2016-8.root";
    file9 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagDown-2016-9.root";
    file10 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagDown-2016-10.root";
  }
  if (option == "data-2016U"){
    file1 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagUp-2016-1.root";;
    file2 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagUp-2016-2.root";
    file3 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagUp-2016-3.root";
    file4 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagUp-2016-4.root";
    file5 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagUp-2016-5.root";
    file6 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagUp-2016-6.root";
    file7 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagUp-2016-7.root";
    file8 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagUp-2016-8.root";
    file9 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagUp-2016-9.root";
    file10 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-MagUp-2016-10.root";
  }
  if (option == "data-xll-2011D_1") 
	  file1 = "/data/nraja/xemu_rootfiles/xll-data-2011-MagDown-full14Jul2017-1.root";

  if (option == "data-xll-2011U_1") 
	  file1 = "/data/nraja/xemu_rootfiles/xll-data-2011-MagUp-full14Jul2017-1.root";
  if (option == "data-xll-2012D_1") 
	  file1 = "/data/nraja/xemu_rootfiles/xll-data-2012-MagDown-full14Jul2017-1.root";

  if (option == "data-xll-2012U_1") 
	  file1 = "/data/nraja/xemu_rootfiles/xll-data-2012-MagUp-full14Jul2017-1.root";

   if (option == "data-xll-2011D"){
     file1 = "/data/nraja/xemu_rootfiles/xll-data-2011-MagDown-full14Jul2017-1.root";
     file2 = "/data/nraja/xemu_rootfiles/xll-data-2011-MagDown-full14Jul2017-2.root";
     file3 = "/data/nraja/xemu_rootfiles/xll-data-2011-MagDown-full14Jul2017-3.root";
     file4 = "/data/nraja/xemu_rootfiles/xll-data-2011-MagDown-full14Jul2017-4.root";
     file5 = "/data/nraja/xemu_rootfiles/xll-data-2011-MagDown-full14Jul2017-5.root";
     file6 = "/data/nraja/xemu_rootfiles/xll-data-2011-MagDown-full14Jul2017-6.root";
     file7 = "/data/nraja/xemu_rootfiles/xll-data-2011-MagDown-full14Jul2017-7.root";
     file8 = "/data/nraja/xemu_rootfiles/xll-data-2011-MagDown-full14Jul2017-8.root";
     file9 = "/data/nraja/xemu_rootfiles/xll-data-2011-MagDown-full14Jul2017-9.root";
     file10 = "/data/nraja/xemu_rootfiles/xll-data-2011-MagDown-full14Jul2017-10.root";
     /*
     file1 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-xll-MagDown-2011-1.root"; 
     file2 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-xll-MagDown-2011-2.root";
     file3 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-xll-MagDown-2011-3.root";
     file4 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-xll-MagDown-2011-4.root";
     file5 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-xll-MagDown-2011-5.root";
     file6 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-xll-MagDown-2011-6.root";
    // file7 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-xll-MagDown-2011-7.root";
    // file8 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-xll-MagDown-2011-8.root";
    // file9 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-xll-MagDown-2011-9.root";
    // file10 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-xll-MagDown-2011-10.root";*/
     // file1 = "/data/nraja/xemu_rootfiles/xll-data-2011-MagDown-OneFifth.root";
   }
   if (option == "data-xll-2011U"){
     file1 = "/data/nraja/xemu_rootfiles/xll-data-2011-MagUp-full14Jul2017-1.root";
     file2 = "/data/nraja/xemu_rootfiles/xll-data-2011-MagUp-full14Jul2017-2.root";
     file3 = "/data/nraja/xemu_rootfiles/xll-data-2011-MagUp-full14Jul2017-3.root";
     file4 = "/data/nraja/xemu_rootfiles/xll-data-2011-MagUp-full14Jul2017-4.root";
     file5 = "/data/nraja/xemu_rootfiles/xll-data-2011-MagUp-full14Jul2017-5.root";
     file6 = "/data/nraja/xemu_rootfiles/xll-data-2011-MagUp-full14Jul2017-6.root";
     file7 = "/data/nraja/xemu_rootfiles/xll-data-2011-MagUp-full14Jul2017-7.root";
     file8 = "/data/nraja/xemu_rootfiles/xll-data-2011-MagUp-full14Jul2017-8.root";
     file9 = "/data/nraja/xemu_rootfiles/xll-data-2011-MagUp-full14Jul2017-9.root";
     file10 = "/data/nraja/xemu_rootfiles/xll-data-2011-MagUp-full14Jul2017-10.root";


    // file1 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-xll-MagUp-2011-1.root";;
    // file2 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-xll-MagUp-2011-2.root";
    // file3 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-xll-MagUp-2011-3.root";
    // file4 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-xll-MagUp-2011-4.root";
    // file5 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-xll-MagUp-2011-5.root";
    // file6 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-xll-MagUp-2011-6.root";
    // file7 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-xll-MagUp-2011-7.root";
    // file8 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-xll-MagUp-2011-8.root";
    // file9 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-xll-MagUp-2011-9.root";
    // file10 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-xll-MagUp-2011-10.root";
     //file1 = "/data/nraja/xemu_rootfiles/xll-data-2011-MagUp-OneFifth.root";
   }
   
      if (option == "data-xll-2012D"){
     file1 = "/data/nraja/xemu_rootfiles/xll-data-2012-MagDown-full14Jul2017-1.root";
     file2 = "/data/nraja/xemu_rootfiles/xll-data-2012-MagDown-full14Jul2017-2.root";
     file3 = "/data/nraja/xemu_rootfiles/xll-data-2012-MagDown-full14Jul2017-3.root";
     file4 = "/data/nraja/xemu_rootfiles/xll-data-2012-MagDown-full14Jul2017-4.root";
     file5 = "/data/nraja/xemu_rootfiles/xll-data-2012-MagDown-full14Jul2017-5.root";
     file6 = "/data/nraja/xemu_rootfiles/xll-data-2012-MagDown-full14Jul2017-6.root";
     file7 = "/data/nraja/xemu_rootfiles/xll-data-2012-MagDown-full14Jul2017-7.root";
     file8 = "/data/nraja/xemu_rootfiles/xll-data-2012-MagDown-full14Jul2017-8.root";
     file9 = "/data/nraja/xemu_rootfiles/xll-data-2012-MagDown-full14Jul2017-9.root";
     file10 = "/data/nraja/xemu_rootfiles/xll-data-2012-MagDown-full14Jul2017-10.root";
    
   }
   if (option == "data-xll-2012U"){
     file1 = "/data/nraja/xemu_rootfiles/xll-data-2012-MagUp-full14Jul2017-1.root";
     file2 = "/data/nraja/xemu_rootfiles/xll-data-2012-MagUp-full14Jul2017-2.root";
     file3 = "/data/nraja/xemu_rootfiles/xll-data-2012-MagUp-full14Jul2017-3.root";
     file4 = "/data/nraja/xemu_rootfiles/xll-data-2012-MagUp-full14Jul2017-4.root";
     file5 = "/data/nraja/xemu_rootfiles/xll-data-2012-MagUp-full14Jul2017-5.root";
     file6 = "/data/nraja/xemu_rootfiles/xll-data-2012-MagUp-full14Jul2017-6.root";
     file7 = "/data/nraja/xemu_rootfiles/xll-data-2012-MagUp-full14Jul2017-7.root";
     file8 = "/data/nraja/xemu_rootfiles/xll-data-2012-MagUp-full14Jul2017-8.root";
     file9 = "/data/nraja/xemu_rootfiles/xll-data-2012-MagUp-full14Jul2017-9.root";
     file10 = "/data/nraja/xemu_rootfiles/xll-data-2012-MagUp-full14Jul2017-10.root";


   }



   if (option == "data-xll-2015D"){
    // file1 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-xll-MagDown-2015-1.root";;
    // file2 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-xll-MagDown-2015-2.root";
    // file3 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-xll-MagDown-2015-3.root";
    // file4 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-xll-MagDown-2015-4.root";
    // file5 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-xll-MagDown-2015-5.root";
    // file6 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-xll-MagDown-2015-6.root";
    // file7 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-xll-MagDown-2015-7.root";
    // file8 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-xll-MagDown-2015-8.root";
    // file9 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-xll-MagDown-2015-9.root";
    // file10 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-xll-MagDown-2015-10.root";
     file1 = "/data/nraja/xemu_rootfiles/xll-data-2015-MagDown-OneFifth.root";
   }
   if (option == "data-xll-2015U"){
    // file1 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-xll-MagUp-2015-1.root";;
    // file2 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-xll-MagUp-2015-2.root";
    // file3 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-xll-MagUp-2015-3.root";
    // file4 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-xll-MagUp-2015-4.root";
    // file5 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-xll-MagUp-2015-5.root";
    // file6 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-xll-MagUp-2015-6.root";
    // file7 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-xll-MagUp-2015-7.root";
    // file8 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-xll-MagUp-2015-8.root";
    // file9 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-xll-MagUp-2015-9.root";
    // file10 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/data-xll-MagUp-2015-10.root";
     file1 = "/data/nraja/xemu_rootfiles/xll-data-2015-MagUp-OneFifth.root";
   }
   if (option == "data-xll-2016D"){
     file1 = "/data/nraja/xemu_rootfiles/xll-data-2016-MagDown-OneFifth.root";
   }
   if (option == "data-xll-2016U"){
     file1 = "/data/nraja/xemu_rootfiles/xll-data-2016-MagUp-OneFifth.root";
   }
   
  if (option == "mc"){
    if (decay == "MuePhi"){
      file2 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/MC12-13314000-MagUp-Pythia8.root";
      file1 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/MC12-13314000-MagDown-Pythia8.root";
    }
    if (decay == "MueKst"){
      file1 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/MC12-11314000-MagDown-Pythia8.root";
      file2 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/MC12-11314000-MagUp-Pythia8.root";
    }
  }
  
  if (option == "mc-xll-new"){
    if (decay == "MuePhi"){
      //      file2 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/MC12-restripXLL-13314000-MagUp-Pythia8.root";
      //      file1 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/MC12-restripXLL-13314000-MagDown-Pythia8.root";
      file1 = "/data/nraja/xemu_rootfiles/xll-MC12-13314000-MagUp-Pythia8.root";
      file2 = "/data/nraja/xemu_rootfiles/xll-MC12-13314000-MagDown-Pythia8.root";
    }
    if (decay == "MueKst"){
      //      file1 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/MC12-restripXLL-11314000-MagDown-Pythia8.root";
      //file2 = "dcap://dcap.pp.rl.ac.uk:22125//pnfs/pp.rl.ac.uk/data/lhcb/nraja/xemu/MC12-restripXLL-11314000-MagUp-Pythia8.root";
      // file1 = "/data/nraja/xemu_rootfiles/xll-MC12-11314000-MagUp-Pythia8.root";
      // file2 = "/data/nraja/xemu_rootfiles/xll-MC12-11314000-MagDown-Pythia8.root";
      file1 = "/opt/ppd/lhcb/ricciars/Xemu/MueKst-mc-xll-new.root";
      //file2 = "/opt/ppd/lhcb/ricciars/Xemu/MueKst-mc-xll-new.root";
    }
    if (decay == "KstKst"){
      file1 = "/data/nraja/xemu_rootfiles/xll-MC12-11104002-MagUpPythia8.root";
      file2 = "/data/nraja/xemu_rootfiles/xll-MC12-11104002-MagDownPythia8.root";
    }
    if (decay == "BdphiKst"){
      file1 = "/data/nraja/xemu_rootfiles/xll-MC12-11104020-MagUpPythia8.root";
      file2 = "/data/nraja/xemu_rootfiles/xll-MC12-11104020-MagDownPythia8.root";
    }
    if (decay == "BsphiKst"){
      file1 = "/data/nraja/xemu_rootfiles/xll-MC12-13104021-MagUpPythia8.root";
      file2 = "/data/nraja/xemu_rootfiles/xll-MC12-13104021-MagDownPythia8.root";
    }
    if (decay == "phiphi"){
      file1 = "/data/nraja/xemu_rootfiles/xll-MC12-11104080-MagUpPythia8.root";
      file2 = "/data/nraja/xemu_rootfiles/xll-MC12-11104080-MagDownPythia8.root";
    }
    if (decay == "phiee"){
      file1 = "/data/nraja/xemu_rootfiles/xll-MC12-13124006-MagUpPythia8.root";
      file2 = "/data/nraja/xemu_rootfiles/xll-MC12-13124006-MagDownPythia8.root";
    }
    if (decay == "Kstee"){
      file1 = "/data/nraja/xemu_rootfiles/xll-MC12-11124001-MagUpPythia8.root";
      file2 = "/data/nraja/xemu_rootfiles/xll-MC12-11124001-MagDownPythia8.root";
    }
    if (decay == "Kstmumu"){
      file1 = "/data/nraja/xemu_rootfiles/xll-MC12-11114001-MagUpPythia8.root";
      file2 = "/data/nraja/xemu_rootfiles/xll-MC12-11114001-MagDownPythia8.root";
    }
   if (decay == "BKstmumu"){
      file1 ="/net/home/ppd/ricciars/lhcb/Xemu/rootFiles/MC12-11574030-MagUp-Pythia8.root";
      file2 ="/net/home/ppd/ricciars/lhcb/Xemu/rootFiles/MC12-11574030-MagDown-Pythia8.root";
    }

  }


  // You chain multiple files this way
  fChain->Add(file1); // Chain the files
  if (option == "mc" ||option=="xll-data-2011-OneFifth"){
    cout << " adding file 2 " << endl;
    fChain->Add(file2);
  }
  else {
   if (option == "data-2011D" || option== "data-2011U" || option == "data-2012D" || option== "data-2012U"||
       option == "data-2015D" || option== "data-2015U" || option == "data-2016D" || option== "data-2016U"||
       option=="data-xll-2011D"||option=="data-xll-2011U"||option=="data-xll-2012D"||option=="data-xll-2012U"){
    fChain->Add(file2);
    fChain->Add(file3);
    fChain->Add(file4);
    fChain->Add(file5);
    fChain->Add(file6);
    fChain->Add(file7);
    fChain->Add(file8);
    fChain->Add(file9);
    fChain->Add(file10);
  }
   if(option=="xll-data-2011-2012-OneFifth"){
    fChain->Add(file2);
    fChain->Add(file3);
    fChain->Add(file4);
   }

  }
  
  tre = new TTree(decayr,decayr);
  treeToFill();

  A.Init(fChain); // Initialise the branches and their locations
  Long64_t nentries = fChain->GetEntries(); // The total number of entries in the ntuple
  Long64_t nbytes = 0, nb = 0; // Probably do not need these
  
  cout << " Total Number of entries " << nentries << endl;
  int nTotal = 0; 
  int nBKGCAT = 0;
  //TFile fhistos("/opt/ppd/lhcb/ricciars/Xemu/"+decayr+"-"+option+".root", "RECREATE");
  TFile fhistos(histDir+decayr+"-"+option+"-"+decay+"-"+option1+".root", "RECREATE");
  TH1F *hBDTG       = new TH1F("hBDTG",  "BDTG output", 100, -1.,1.);
  TH1F *hBmass       = new TH1F("hBmass",  "mass of the B", 120, 4200.,6200.);
  TH1F *hBmasssel    = new TH1F("hBmasssel","mass of selected B", 120, 4800.,6000.);
  TH1F *hBisol    = new TH1F("hBisol","B isolation", 100, 0.,1.);
  TH1F *hBmult    = new TH1F("hBmult","number of tracks inside cone", 50, 0.,50.);
  TH1F *hBvchi2   = new TH1F("hBvchi2", "B decay vertex chi2", 100, 0.,50.); // stripping divides by the number of degrees of freedom which is 5
  TH1F *hBdira    = new TH1F("hBdira",  "B cos dira", 60, 0.9995,1.0001);
  TH1F *hBipchi2  = new TH1F("hBipchi2","B IP chi2 own PV", 100, 0.,25.);
  TH1F *hBfdchi2  = new TH1F("hBfdchi2","B FD chi2 own PV", 200, 0.,5000.);
  TH1F *hBtau     = new TH1F("hBtau",  "B lifetime", 100, 0., 0.01);
  TH1F *hBp       = new TH1F("hBp",   "B momentum", 100, 0.,500000.); // stripping divides by the number of degrees of freedom which is 5
  TH1F *hBpt      = new TH1F("hBpt",  "B transverse momentum", 100, 0.,50000.);
  TH1F *hBip      = new TH1F("hBip",  "B IP own PV", 100, 0.,0.2);
  TH1F *hd1mass   = new TH1F("hd1mass", "mass of the e mu pair", 100, 0.,5000.);
  TH1F *hd1pT     = new TH1F("hd1pT",   "pT of the e mu pair", 100, 0.,40000.);
  TH1F *hd1vchi2  = new TH1F("hd1vchi2", "vertex chi2 e mu pair", 100, 0.,50.); // stripping divides by the number of degrees of freedom which is 5
  TH1F *hd1ipchi2 = new TH1F("hd1ipchi2","IP chi2 e mu pair", 100, 0.,100.);
  TH1F *hd1fdchi2 = new TH1F("hd1fdchi2","FD chi2 e mu pair", 100, 0.,10000.);
  TH1F *hd2mass   = new TH1F("hd2mass", "mass of the hadron", 100, 500.,1500.);
  TH1F *hd2pT     = new TH1F("hd2pT",   "pT of the hadron", 100, 0.,40000.);
  TH1F *hd2vchi2  = new TH1F("hd2vchi2", "vertex chi2 of hadron", 100, 0.,50.); 
  TH1F *hd2ipchi2 = new TH1F("hd2ipchi2","IP chi2 of hadron", 100, 0.,100.);
  TH1F *hl2pide   = new TH1F("hl2pide", "electron PIDe", 100, 0., 20.);
  TH1F *hl2ipchi2 = new TH1F("hl2ipchi2", "electron IP chi2 own PV", 100, 0., 100.);
  TH1F *hl2pt     = new TH1F("hl2pt", "electron pT", 150, 0., 15000.);
  TH1F *hl1ismuon = new TH1F("hl1ismuon", "ismuon", 3, 0., 3.);
  TH1F *hl1ipchi2 = new TH1F("hl1ipchi2", "muon IP chi2 own PV", 100, 0., 100.);
  TH1F *hl1pt     = new TH1F("hl1pt", "muon pT", 150, 0., 15000.);
  TH1F *hh1pidK   = new TH1F("hh1pidK", "h1 PIDK", 150, -20., 130.);
  TH1F *hh2pidK   = new TH1F("hh2pidK", "h2 PIDK", 150, -20., 130.);
  TH1F *hl1pidmu  = new TH1F("hl1pidmu","l1 PIDmu",80, -20., 20.);
  TH1F *hh1ipchi2     = new TH1F("hh1ipchi2","h1 IP chi2",100, 0., 500.);
  TH1F *hh2ipchi2     = new TH1F("hh2ipchi2","h2 IP chi2",100, 0., 500.);
  TH1F *hl1ip     = new TH1F("hl1ip","l1 IP ",100, 0., 1.);
  TH1F *hl2ip     = new TH1F("hl2ip","l2 IP ",100, 0., 1.);
  TH1F *htracks_minip     = new TH1F("htracks_minip","tracks min IP",100, 0., 1.);
  TH1F *htracks_minipchi2 = new TH1F("htracks_minipchi2","tracks min IP chi2",100, 0., 2000.);
  TH1F *hh1p    = new TH1F("hh1p","h1 P",100, 0., 200000.);
  TH1F *hh2p     = new TH1F("hh2p","h2 P ",100, 0., 200000.);
  TH1F *hl1p     = new TH1F("hl1p","l1 P ",100, 0., 200000.);
  TH1F *hl2p     = new TH1F("hl2p","l2 P ",100, 0., 200000.);
  TH1F *htracks_minpt     = new TH1F("htracks_minpt","tracks min PT",100, 0., 1000.);
  TH1F *hAlphaHOP   = new TH1F("hAlphaHOP",  "HOP variable", 100, 0.,2.);
  TH1F *hBmassHOP    = new TH1F("hBmassHOP",  "mass of the B with HOP correction", 120, 4200.,6200.);
  TH1F *hcheckrandom     = new TH1F("hcheckrandom","random number",12, -1., 11.);
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
  // for (Long64_t jentry=0; jentry<1000;jentry++) { // To run on just the first n events
    //Long64_t ientry = A.LoadTree(jentry);
    //if (ientry < 0) break;
     
     
    nTotal = nTotal + 1;
    if (nTotal%1000 ==0) cout << "Looping on event " << nTotal <<" "<<100.0*nTotal/nentries<<" % completed\n";
    nb = fChain->GetEntry(jentry); nbytes += nb;
    //    ranInt=sumOfDigits(A.eventNumber);
    ranInt=A.eventNumber%10;
    hcheckrandom->Fill(ranInt);
    BKGCAT = 999999;
    if(option=="mc"|| option=="mc-xll-new"){
      BKGCAT = A.B_BKGCAT;
      if (abs(A.B_BKGCAT) == 10) {
        nBKGCAT = nBKGCAT + 1;
      }
    }


    //Trigger flags
    L0Flag=1;
    HLT1Flag=1;
    HLT2Flag=1;
    if ((A.B_L0MuonDecision_TOS||A.B_L0HadronDecision_TOS||A.B_L0ElectronDecision_TOS||A.B_L0Global_TIS) == 0) {
      L0Flag=0;
     }
    if (A.B_Hlt1TrackAllL0Decision_TOS!=1  && A.B_Hlt1TrackMuonDecision_TOS != 1) {
      HLT1Flag=0;
     }

    if (A.B_Hlt2Topo2BodyBBDTDecision_TOS!=1 &&  A.B_Hlt2Topo3BodyBBDTDecision_TOS!=1 && A.B_Hlt2Topo4BodyBBDTDecision_TOS!=1){
     if (A.B_Hlt2TopoMu2BodyBBDTDecision_TOS!=1 &&  A.B_Hlt2TopoMu3BodyBBDTDecision_TOS!=1 && A.B_Hlt2TopoMu4BodyBBDTDecision_TOS!=1){
       {
         if (A.B_Hlt2SingleMuonDecision_TOS !=1){
           HLT2Flag=0;
         }
       }
     }
    }




    if(true){//cut() && L0Flag && HLT1Flag && HLT2Flag){
    
    hBmass->Fill(A.B_MM);      
    hBvchi2->Fill(A.B_ENDVERTEX_CHI2);      
    hBdira->Fill(A.B_DIRA_OWNPV);      
    hBipchi2->Fill(A.B_IPCHI2_OWNPV);      
    hBfdchi2->Fill(A.B_FDCHI2_OWNPV);      
    hd1mass->Fill(A.d1_MM);
    hd1pT->Fill(A.d1_PT);
    hd1vchi2->Fill(A.d1_ORIVX_CHI2);      
    hd1ipchi2->Fill(A.d1_IPCHI2_OWNPV);      
    hd1fdchi2->Fill(A.d1_FDCHI2_OWNPV);            
    hd2mass->Fill(A.d2_MM);
    hd2pT->Fill(A.d2_PT);
    hd2vchi2->Fill(A.d2_ENDVERTEX_CHI2);      
    hd2ipchi2->Fill(A.d2_IPCHI2_OWNPV);            
    hl2pide->Fill(A.l2_PIDe);      
    hl2ipchi2->Fill(A.l2_IPCHI2_OWNPV);      
    hl2pt->Fill(A.l2_PT);      
    hl1ismuon->Fill(A.l1_isMuon);      
    hl1ipchi2->Fill(A.l1_IPCHI2_OWNPV);      
    hl1pt->Fill(A.l1_PT);  
    //add plots of other interesting variables
    hBtau->Fill(A.B_TAU);      
    hBp->Fill(A.B_P);      
    hBpt->Fill(A.B_PT);      
    hBip->Fill(A.B_IP_OWNPV);      
    hh1pidK->Fill(A.h1_PIDK);      
    hh2pidK->Fill(A.h2_PIDK);      
    hl1pidmu->Fill(A.l1_PIDmu);      
    // isolation CDF
    B_isol = A.B_PT/(A.B_PT+A.B_coneiso_PT);
    hBisol->Fill(B_isol);
    hBmult->Fill(A.B_coneiso_mult);
    // * hadron isolation
    // * muon isolation
    double iptracks[] = {A.h1_IP_OWNPV,A.h2_IP_OWNPV,A.l1_IP_OWNPV,A.l2_IP_OWNPV};
    tracks_minIP=*std:: min_element(iptracks,iptracks+4);
    htracks_minip->Fill(tracks_minIP);
    //cout << "IP tracks " << A.h1_IP_OWNPV << " " << A.h2_IP_OWNPV << " " <<  A.l1_IP_OWNPV << " " << A.l2_IP_OWNPV << endl;
    //cout << "min IP tracks " << *std:: min_element(iptracks,iptracks+4) << endl;
    hh1ipchi2->Fill(A.h1_IPCHI2_OWNPV); 
    hh2ipchi2->Fill(A.h2_IPCHI2_OWNPV); 
    hl1ip->Fill(A.l1_IP_OWNPV); 
    hl2ip->Fill(A.l2_IP_OWNPV); 
    double ipchi2tracks[] = {A.h1_IPCHI2_OWNPV,A.h2_IPCHI2_OWNPV,A.l1_IPCHI2_OWNPV,A.l2_IPCHI2_OWNPV};
    tracks_minIPchi2=*std:: min_element(ipchi2tracks,ipchi2tracks+4);
    htracks_minipchi2->Fill(tracks_minIPchi2);
    // track chi2 (cut)
    hh1p->Fill(A.h1_P); 
    hh2p->Fill(A.h2_P); 
    hl1p->Fill(A.l1_P); 
    hl2p->Fill(A.l2_P); 
    double pttracks[] = {A.h1_PT,A.h2_PT,A.l1_PT,A.l2_PT};
    tracks_minPt = *std:: min_element(pttracks,pttracks+4);
    htracks_minpt->Fill(tracks_minPt);
    // track p and pT (cuts)   
    //
    hBmasssel->Fill(A.B_MM);
   // // Hop variable
     dofB = (A.B_ENDVERTEX_X-A.B_OWNPV_X)*(A.B_ENDVERTEX_X-A.B_OWNPV_X) + 
      (A.B_ENDVERTEX_Y-A.B_OWNPV_Y)*(A.B_ENDVERTEX_Y-A.B_OWNPV_Y) + 
      (A.B_ENDVERTEX_Z-A.B_OWNPV_Z)*(A.B_ENDVERTEX_Z-A.B_OWNPV_Z);
    if(dofB >0) dofB=sqrt(dofB);
    ptXe = A.l2_PX * (A.B_ENDVERTEX_X-A.B_OWNPV_X) +
      A.l2_PY * (A.B_ENDVERTEX_Y-A.B_OWNPV_Y) +
      A.l2_PZ * (A.B_ENDVERTEX_Z-A.B_OWNPV_Z);
    ptXe = A.l2_P*sin(acos(ptXe/(dofB*A.l2_P)));    
    ptXh = (A.l1_PX + A.d2_PX) * (A.B_ENDVERTEX_X-A.B_OWNPV_X) +
           (A.l1_PY + A.d2_PY) * (A.B_ENDVERTEX_Y-A.B_OWNPV_Y) +
           (A.l1_PZ + A.d2_PZ) * (A.B_ENDVERTEX_Z-A.B_OWNPV_Z);
    //    cout << " ptXh 1" << ptXh <<endl;
    pXh = sqrt((A.l1_PX+A.d2_PX)*(A.l1_PX+A.d2_PX)+
               (A.l1_PY+A.d2_PY)*(A.l1_PY+A.d2_PY)+
               (A.l1_PZ+A.d2_PZ)*(A.l1_PZ+A.d2_PZ));
    // cout << " pXh  " << pXh << " pl1 + ph " << A.l1_P+A.d2_P << endl;//ok
    ptXh = pXh * sin(acos(ptXh/(dofB*pXh)));
    alphaHOP = 1.;
    if(abs(ptXe)>0)alphaHOP = ptXh/ptXe;

    hAlphaHOP->Fill(alphaHOP);

    //cout << " ptXe  " << ptXe << " " << ptXh << " " << alphaHOP << " " << A.l2_PX << endl;
    pXe_X = alphaHOP * A.l2_PX;
    pXe_Y = alphaHOP * A.l2_PY;
    pXe_Z = alphaHOP * A.l2_PZ;
    //cout << "pXe_X " << pXe_X << " " << pXe_Y << " " << pXe_Z << endl;
    EXe = sqrt(pXe_X*pXe_X + pXe_Y*pXe_Y + pXe_Z*pXe_Z + 0.511*0.511);
    BpHOP2 = (A.d2_PX + A.l1_PX + pXe_X) * (A.d2_PX + A.l1_PX + pXe_X) +
      (A.d2_PY + A.l1_PY + pXe_Y) * (A.d2_PY + A.l1_PY + pXe_Y) +
      (A.d2_PZ + A.l1_PZ + pXe_Z) * (A.d2_PZ + A.l1_PZ + pXe_Z);
    BEHOP = A.d2_PE + A.l1_PE + EXe;
    BmassHOP = BEHOP*BEHOP - BpHOP2;
    if (BmassHOP >0) BmassHOP = sqrt(BmassHOP);

    hBmassHOP->Fill(BmassHOP);

    tre->Fill();
 }     
  } //end event loop

  cout << "Total BKGCAT = 10     = " << nBKGCAT   << endl;


  TCanvas *c1 = new TCanvas("c1","B stripping cuts",1);
  c1->Divide(2,3);
  c1->cd(1);
  hBmass->Draw();
  c1->cd(2);
  hBmasssel->Draw();
  c1->cd(3);      
  hBvchi2->Draw();
  c1->cd(4);
  hBdira->Draw();
  c1->cd(5);      
  hBipchi2->Draw();
  c1->cd(6);
  hBfdchi2->Draw();
  c1->Print(dirGraphs+decayr+"-"+option+option1+"BStripping.ps");

  TCanvas *c2 = new TCanvas("c2","J/psi stripping cuts",1);
  c2->Divide(2,3);
  c2->cd(1);
  hd1mass->Draw();
  c2->cd(2);      
  hd1pT->Draw();
  c2->cd(3);
  hd1vchi2->Draw();
  c2->cd(4);      
  hd1ipchi2->Draw();
  c2->cd(5);
  hd1fdchi2->Draw();
  c2->Print(dirGraphs+decayr+"-"+option+option1+"JpsiStripping.ps");

  TCanvas *c3 = new TCanvas("c3","Hadron stripping cuts",1);
  c3->Divide(2,2);
  c3->cd(1);
  hd2mass->Draw();
  c3->cd(2);
  hd2pT->Draw();
  c3->cd(3);
  hd2vchi2->Draw();
  c3->cd(4);
  hd2ipchi2->Draw();
  c3->Print(dirGraphs+decayr+"-"+option+option1+"HadronStripping.ps");

  TCanvas *c4 = new TCanvas("c4","Leptons stripping cuts",1);
  c4->Divide(3,2);
  c4->cd(1);
  hl2pide->Draw();
  c4->cd(2);
  hl2ipchi2->Draw();
  c4->cd(3);
  hl2pt->Draw();
  c4->cd(4);
  hl1ismuon->Draw();
  c4->cd(5);
  hl1ipchi2->Draw();
  c4->cd(6);
  hl1pt->Draw();
  c4->Print(dirGraphs+decayr+"-"+option+option1+"LeptonStripping.ps");

  TCanvas *c5 = new TCanvas("c5","B additional variables",1);
  c5->Divide(2,3);
  c5->cd(1);
  hBtau->Draw();
  c5->cd(2);      
  hBp->Draw();
  c5->cd(3);
  hBpt->Draw();
  c5->cd(4);      
  hBip->Draw();
  c5->cd(5);
  hBisol->Draw();
  c5->cd(6);
  hBmult->Draw();
  c5->Print(dirGraphs+decayr+"-"+option+option1+"BAdditional.ps");

  TCanvas *c6 = new TCanvas("c6","PID variables",1);
  c6->Divide(2,2);
  c6->cd(1);
  hh1pidK->Draw();
  c6->cd(2);      
  hh2pidK->Draw();
  c6->cd(3);
  hl1pidmu->Draw();
  c6->cd(4);      
  hl2pide->Draw();
  c6->Print(dirGraphs+decayr+"-"+option+option1+"PID-variables.ps");

  TCanvas *c7 = new TCanvas("c7","IP tracks",1);
  c7->Divide(2,3);
  c7->cd(1);
  hh1ipchi2->Draw();
  c7->cd(2);    
  hh2ipchi2->Draw();  
  c7->cd(3);
  hl1ip->Draw();
  c7->cd(4);    
  hl2ip->Draw();  
  c7->cd(5);
  htracks_minip->Draw();
  c7->cd(6);
  htracks_minipchi2->Draw();
  c7->Print(dirGraphs+decayr+"-"+option+option1+"IP-tracks.ps");

  TCanvas *c8 = new TCanvas("c8","P tracks",1);
  c8->Divide(2,3);
  c8->cd(1);
  hh1p->Draw();
  c8->cd(2);    
  hh2p->Draw();  
  c8->cd(3);
  hl1p->Draw();
  c8->cd(4);    
  hl2p->Draw();  
  c8->cd(5);
  htracks_minpt->Draw();
  c8->Print(dirGraphs+decayr+"-"+option+option1+"P-tracks.ps");

  TCanvas *c9 = new TCanvas("c9","MVA",1);
  c9->Divide(1,1);
  c9->cd(1);
  hBDTG->Draw();
  c9->Print(dirGraphs+decayr+"-"+option+option1+"MVA.ps");

  TCanvas *c10=new TCanvas("c10","HOP variable",1);
  c10->Divide(2,1);
  c10->cd(1);
  hBmassHOP->Draw();
  c10->cd(2);
  hAlphaHOP->Draw();
  c10->Print(dirGraphs+decayr+"-"+option+option1+"HOP.pdf");

  tre->Write();
  fhistos.Write();
  fhistos.Close();

  

}

void treeToFill() {


  TBranch *t0c = tre->Branch("runNumber", &A.runNumber);
  TBranch *t1c = tre->Branch("eventNumber", &A.eventNumber);
  TBranch *t2c = tre->Branch("ranInt", &ranInt);
  TBranch *t3c = tre->Branch("BKGCAT", &BKGCAT);
  TBranch *t4c = tre->Branch("B_MM", &A.B_MM);      
  TBranch *t5c = tre->Branch("B_ENDVERTEX_CHI2",&A.B_ENDVERTEX_CHI2);      
  TBranch *t6c = tre->Branch("B_DIRA_OWNPV", &A.B_DIRA_OWNPV);      
  TBranch *t7c = tre->Branch("B_IPCHI2_OWNPV", &A.B_IPCHI2_OWNPV);      
  TBranch *t8c = tre->Branch("B_FDCHI2_OWNPV",&A.B_FDCHI2_OWNPV);      
  TBranch *t9c = tre->Branch("B_TAU",&A.B_TAU);      
  TBranch *t10c = tre->Branch("B_P", &A.B_P);      
  TBranch *t11c = tre->Branch("B_PT",&A.B_PT);      
  TBranch *t12c = tre->Branch("B_IP_OWNPV", &A.B_IP_OWNPV);      
  TBranch *t13c = tre->Branch("B_CDF_isol",&B_isol);
  TBranch *t14c = tre->Branch("B_coneiso_PTAsy", &A.B_coneiso_PTAsy); 
  TBranch *t15c = tre->Branch("B_coneiso_mult", &A.B_coneiso_mult);
  TBranch *t16c = tre->Branch("d1_MM", &A.d1_MM);
  TBranch *t17c = tre->Branch("d1_PT", &A.d1_PT);
  TBranch *t18c = tre->Branch("d1_ORIVX_CHI2", &A.d1_ORIVX_CHI2);      
  TBranch *t19c = tre->Branch("d1_IPCHI2_OWNPV", &A.d1_IPCHI2_OWNPV);      
  TBranch *t20c = tre->Branch("d1_FDCHI2_OWNPV", &A.d1_FDCHI2_OWNPV);            
  TBranch *t21c = tre->Branch("d2_MM", &A.d2_MM);
  TBranch *t22c = tre->Branch("d2_PT", &A.d2_PT);
  TBranch *t23c = tre->Branch("d2_ENDVERTEX_CHI2", &A.d2_ENDVERTEX_CHI2);      
  TBranch *t24c = tre->Branch("d2_IPCHI2_OWNPV", &A.d2_IPCHI2_OWNPV);            
  TBranch *t25c = tre->Branch("l1_isMuon", &A.l1_isMuon);      
  TBranch *t26c = tre->Branch("l1_hasMuon", &A.l1_hasMuon);      
  TBranch *t27c = tre->Branch("l1_PIDe", &A.l1_PIDe);            
  TBranch *t28c = tre->Branch("l1_PIDmu", &A.l1_PIDmu);      
  TBranch *t29c = tre->Branch("l1_PIDK", &A.l1_PIDK);
  TBranch *t30c = tre->Branch("l1_PIDp", &A.l1_PIDp);
  TBranch *t31c = tre->Branch("l1_ProbNNe", &A.l1_ProbNNe);            
  TBranch *t32c = tre->Branch("l1_ProbNNmu", &A.l1_ProbNNmu);      
  TBranch *t33c = tre->Branch("l1_ProbNNk", &A.l1_ProbNNk);
  TBranch *t34c = tre->Branch("l1_ProbNNp", &A.l1_ProbNNp);
  TBranch *t35c = tre->Branch("l1_ProbNNpi", &A.l1_ProbNNpi);
  TBranch *t36c = tre->Branch("l1_ProbNNghost", &A.l1_ProbNNghost);
  TBranch *t37c = tre->Branch("l1_IP_OWNPV",&A.l1_IP_OWNPV); 
  TBranch *t38c = tre->Branch("l1_IPCHI2_OWNPV", &A.l1_IPCHI2_OWNPV);      
  TBranch *t39c = tre->Branch("l1_P",&A.l1_P); 
  TBranch *t40c = tre->Branch("l1_PT", &A.l1_PT);      
  TBranch *t41c = tre->Branch("l2_hasCalo", &A.l2_hasCalo);      
  TBranch *t42c = tre->Branch("l2_PIDe", &A.l2_PIDe);            
  TBranch *t43c = tre->Branch("l2_PIDmu", &A.l2_PIDmu);      
  TBranch *t44c = tre->Branch("l2_PIDK", &A.l2_PIDK);
  TBranch *t45c = tre->Branch("l2_PIDp", &A.l2_PIDp);
  TBranch *t46c = tre->Branch("l2_ProbNNe", &A.l2_ProbNNe);            
  TBranch *t47c = tre->Branch("l2_ProbNNmu", &A.l2_ProbNNmu);      
  TBranch *t48c = tre->Branch("l2_ProbNNk", &A.l2_ProbNNk);
  TBranch *t49c = tre->Branch("l2_ProbNNp", &A.l2_ProbNNp);
  TBranch *t50c = tre->Branch("l2_ProbNNpi", &A.l2_ProbNNpi);
  TBranch *t51c = tre->Branch("l2_ProbNNghost", &A.l2_ProbNNghost);
  TBranch *t52c = tre->Branch("l2_IP_OWNPV",&A.l2_IP_OWNPV); 
  TBranch *t53c = tre->Branch("l2_IPCHI2_OWNPV", &A.l2_IPCHI2_OWNPV);      
  TBranch *t54c = tre->Branch("l2_P", &A.l2_P); 
  TBranch *t55c = tre->Branch("l2_PT", &A.l2_PT);
  TBranch *t56c = tre->Branch("h1_P", &A.h1_P); 
  TBranch *t57c = tre->Branch("h1_PT", &A.h1_PT);       
  TBranch *t58c = tre->Branch("h1_hasRich", &A.h1_hasRich);
  TBranch *t59c = tre->Branch("h1_PIDe", &A.h1_PIDe);            
  TBranch *t60c = tre->Branch("h1_PIDmu", &A.h1_PIDmu);      
  TBranch *t61c = tre->Branch("h1_PIDK", &A.h1_PIDK);
  TBranch *t62c = tre->Branch("h1_PIDp", &A.h1_PIDp);
  TBranch *t63c = tre->Branch("h1_ProbNNe", &A.h1_ProbNNe);            
  TBranch *t64c = tre->Branch("h1_ProbNNmu", &A.h1_ProbNNmu);      
  TBranch *t65c = tre->Branch("h1_ProbNNk", &A.h1_ProbNNk);
  TBranch *t66c = tre->Branch("h1_ProbNNp", &A.h1_ProbNNp);
  TBranch *t67c = tre->Branch("h1_ProbNNpi", &A.h1_ProbNNpi);
  TBranch *t68c = tre->Branch("h1_ProbNNghost", &A.h1_ProbNNghost);      
  TBranch *t69c = tre->Branch("h1_IPCHI2_OWNPV", &A.h1_IPCHI2_OWNPV); 
  TBranch *t70c = tre->Branch("h2_P", &A.h2_P); 
  TBranch *t71c = tre->Branch("h2_PT", &A.h2_PT); 
  TBranch *t72c = tre->Branch("h2_hasRich", &A.h2_hasRich);
  TBranch *t73c = tre->Branch("h2_PIDe", &A.h2_PIDe);            
  TBranch *t74c = tre->Branch("h2_PIDmu", &A.h2_PIDmu);      
  TBranch *t75c = tre->Branch("h2_PIDK", &A.h2_PIDK);
  TBranch *t76c = tre->Branch("h2_PIDp", &A.h2_PIDp);
  TBranch *t77c = tre->Branch("h2_ProbNNe", &A.h2_ProbNNe);            
  TBranch *t78c = tre->Branch("h2_ProbNNmu", &A.h2_ProbNNmu);      
  TBranch *t79c = tre->Branch("h2_ProbNNk", &A.h2_ProbNNk);
  TBranch *t80c = tre->Branch("h2_ProbNNp", &A.h2_ProbNNp);
  TBranch *t81c = tre->Branch("h2_ProbNNpi", &A.h2_ProbNNpi);
  TBranch *t82c = tre->Branch("h2_ProbNNghost", &A.h2_ProbNNghost);      
  TBranch *t83c = tre->Branch("h2_IPCHI2_OWNPV", &A.h2_IPCHI2_OWNPV); 
  TBranch *t84c = tre->Branch("tracks_minPt", &tracks_minPt);
  TBranch *t85c = tre->Branch("tracks_minIP", &tracks_minIP);
  TBranch *t86c = tre->Branch("tracks_minIPchi2", &tracks_minIPchi2);
  TBranch *t87c = tre->Branch("B_L0Global_Dec", &A.B_L0Global_Dec);
  TBranch *t88c = tre->Branch("B_L0Global_TIS", &A.B_L0Global_TIS);
  TBranch *t89c = tre->Branch("B_L0Global_TOS", &A.B_L0Global_TOS);
  TBranch *t90c = tre->Branch("B_Hlt1Global_Dec", &A.B_Hlt1Global_Dec);
  TBranch *t91c = tre->Branch("B_Hlt1Global_TIS", &A.B_Hlt1Global_TIS);
  TBranch *t92c = tre->Branch("B_Hlt1Global_TOS", &A.B_Hlt1Global_TOS);
  TBranch *t93c = tre->Branch("B_Hlt1Phys_Dec", &A.B_Hlt1Phys_Dec);
  TBranch *t94c = tre->Branch("B_Hlt1Phys_TIS", &A.B_Hlt1Phys_TIS);
  TBranch *t95c = tre->Branch("B_Hlt1Phys_TOS", &A.B_Hlt1Phys_TOS);
  TBranch *t96c = tre->Branch("B_Hlt2Global_Dec", &A.B_Hlt2Global_Dec);
  TBranch *t97c = tre->Branch("B_Hlt2Global_TIS", &A.B_Hlt2Global_TIS);
  TBranch *t98c = tre->Branch("B_Hlt2Global_TOS", &A.B_Hlt2Global_TOS);
  TBranch *t99c = tre->Branch("B_Hlt2Phys_Dec", &A.B_Hlt2Phys_Dec);
  TBranch *t100c = tre->Branch("B_Hlt2Phys_TIS", &A.B_Hlt2Phys_TIS);
  TBranch *t101c = tre->Branch("B_Hlt2Phys_TOS", &A.B_Hlt2Phys_TOS);
  TBranch *t102c = tre->Branch("B_L0HadronDecision_Dec", &A.B_L0HadronDecision_Dec);
  TBranch *t103c = tre->Branch("B_L0HadronDecision_TIS", &A.B_L0HadronDecision_TIS);
  TBranch *t104c = tre->Branch("B_L0HadronDecision_TOS", &A.B_L0HadronDecision_TOS);
  TBranch *t105c = tre->Branch("B_L0MuonDecision_Dec", &A.B_L0MuonDecision_Dec);
  TBranch *t106c = tre->Branch("B_L0MuonDecision_TIS", &A.B_L0MuonDecision_TIS);
  TBranch *t107c = tre->Branch("B_L0MuonDecision_TOS", &A.B_L0MuonDecision_TOS);
  TBranch *t108c = tre->Branch("B_L0DiMuonDecision_Dec", &A.B_L0DiMuonDecision_Dec);
  TBranch *t109c = tre->Branch("B_L0DiMuonDecision_TIS", &A.B_L0DiMuonDecision_TIS);
  TBranch *t110c = tre->Branch("B_L0DiMuonDecision_TOS", &A.B_L0DiMuonDecision_TOS);
  TBranch *t111c = tre->Branch("B_L0ElectronDecision_Dec", &A.B_L0ElectronDecision_Dec);
  TBranch *t112c = tre->Branch("B_L0ElectronDecision_TIS", &A.B_L0ElectronDecision_TIS);
  TBranch *t113c = tre->Branch("B_L0ElectronDecision_TOS", &A.B_L0ElectronDecision_TOS);
  TBranch *t114c = tre->Branch("B_L0PhotonDecision_Dec", &A.B_L0PhotonDecision_Dec);
  TBranch *t115c = tre->Branch("B_L0PhotonDecision_TIS", &A.B_L0PhotonDecision_TIS);
  TBranch *t116c = tre->Branch("B_L0PhotonDecision_TOS", &A.B_L0PhotonDecision_TOS);
  TBranch *t117c = tre->Branch("B_Hlt1TrackAllL0Decision_Dec", &A.B_Hlt1TrackAllL0Decision_Dec);
  TBranch *t118c = tre->Branch("B_Hlt1TrackAllL0Decision_TIS", &A.B_Hlt1TrackAllL0Decision_TIS);
  TBranch *t119c = tre->Branch("B_Hlt1TrackAllL0Decision_TOS", &A.B_Hlt1TrackAllL0Decision_TOS);
  TBranch *t120c = tre->Branch("B_Hlt1TrackMuonDecision_Dec", &A.B_Hlt1TrackMuonDecision_Dec);
  TBranch *t121c = tre->Branch("B_Hlt1TrackMuonDecision_TIS", &A.B_Hlt1TrackMuonDecision_TIS);
  TBranch *t122c = tre->Branch("B_Hlt1TrackMuonDecision_TOS", &A.B_Hlt1TrackMuonDecision_TOS);
  TBranch *t123c = tre->Branch("B_Hlt2SingleMuonDecision_Dec", &A.B_Hlt2SingleMuonDecision_Dec);
  TBranch *t124c = tre->Branch("B_Hlt2SingleMuonDecision_TIS", &A.B_Hlt2SingleMuonDecision_TIS);
  TBranch *t125c = tre->Branch("B_Hlt2SingleMuonDecision_TOS", &A.B_Hlt2SingleMuonDecision_TOS);
  TBranch *t126c = tre->Branch("B_Hlt2Topo2BodyBBDTDecision_Dec", &A.B_Hlt2Topo2BodyBBDTDecision_Dec);
  TBranch *t127c = tre->Branch("B_Hlt2Topo2BodyBBDTDecision_TIS", &A.B_Hlt2Topo2BodyBBDTDecision_TIS);
  TBranch *t128c = tre->Branch("B_Hlt2Topo2BodyBBDTDecision_TOS", &A.B_Hlt2Topo2BodyBBDTDecision_TOS);
  TBranch *t129c = tre->Branch("B_Hlt2Topo2BodySimpleDecision_Dec", &A.B_Hlt2Topo2BodySimpleDecision_Dec);
  TBranch *t130c = tre->Branch("B_Hlt2Topo2BodySimpleDecision_TIS", &A.B_Hlt2Topo2BodySimpleDecision_TIS);
  TBranch *t131c = tre->Branch("B_Hlt2Topo2BodySimpleDecision_TOS", &A.B_Hlt2Topo2BodySimpleDecision_TOS);
  TBranch *t132c = tre->Branch("B_Hlt2Topo3BodyBBDTDecision_Dec", &A.B_Hlt2Topo3BodyBBDTDecision_Dec);
  TBranch *t133c = tre->Branch("B_Hlt2Topo3BodyBBDTDecision_TIS", &A.B_Hlt2Topo3BodyBBDTDecision_TIS);
  TBranch *t134c = tre->Branch("B_Hlt2Topo3BodyBBDTDecision_TOS", &A.B_Hlt2Topo3BodyBBDTDecision_TOS);
  TBranch *t135c = tre->Branch("B_Hlt2Topo3BodySimpleDecision_Dec", &A.B_Hlt2Topo3BodySimpleDecision_Dec);
  TBranch *t136c = tre->Branch("B_Hlt2Topo3BodySimpleDecision_TIS", &A.B_Hlt2Topo3BodySimpleDecision_TIS);
  TBranch *t137c = tre->Branch("B_Hlt2Topo3BodySimpleDecision_TOS", &A.B_Hlt2Topo3BodySimpleDecision_TOS);
  TBranch *t138c = tre->Branch("B_Hlt2Topo4BodyBBDTDecision_Dec", &A.B_Hlt2Topo4BodyBBDTDecision_Dec);
  TBranch *t139c = tre->Branch("B_Hlt2Topo4BodyBBDTDecision_TIS", &A.B_Hlt2Topo4BodyBBDTDecision_TIS);
  TBranch *t140c = tre->Branch("B_Hlt2Topo4BodyBBDTDecision_TOS", &A.B_Hlt2Topo4BodyBBDTDecision_TOS);
  TBranch *t141c = tre->Branch("B_Hlt2Topo4BodySimpleDecision_Dec", &A.B_Hlt2Topo4BodySimpleDecision_Dec);
  TBranch *t142c = tre->Branch("B_Hlt2Topo4BodySimpleDecision_TIS", &A.B_Hlt2Topo4BodySimpleDecision_TIS);
  TBranch *t143c = tre->Branch("B_Hlt2Topo4BodySimpleDecision_TOS", &A.B_Hlt2Topo4BodySimpleDecision_TOS);
  TBranch *t144c = tre->Branch("B_Hlt2TopoE2BodyBBDTDecision_Dec", &A.B_Hlt2TopoE2BodyBBDTDecision_Dec);
  TBranch *t145c = tre->Branch("B_Hlt2TopoE2BodyBBDTDecision_TIS", &A.B_Hlt2TopoE2BodyBBDTDecision_TIS);
  TBranch *t146c = tre->Branch("B_Hlt2TopoE2BodyBBDTDecision_TOS", &A.B_Hlt2TopoE2BodyBBDTDecision_TOS);
  TBranch *t147c = tre->Branch("B_Hlt2TopoE3BodyBBDTDecision_Dec", &A.B_Hlt2TopoE3BodyBBDTDecision_Dec);
  TBranch *t148c = tre->Branch("B_Hlt2TopoE3BodyBBDTDecision_TIS", &A.B_Hlt2TopoE3BodyBBDTDecision_TIS);
  TBranch *t149c = tre->Branch("B_Hlt2TopoE3BodyBBDTDecision_TOS", &A.B_Hlt2TopoE3BodyBBDTDecision_TOS);
  TBranch *t150c = tre->Branch("B_Hlt2TopoE4BodyBBDTDecision_Dec", &A.B_Hlt2TopoE4BodyBBDTDecision_Dec);
  TBranch *t151c = tre->Branch("B_Hlt2TopoE4BodyBBDTDecision_TIS", &A.B_Hlt2TopoE4BodyBBDTDecision_TIS);
  TBranch *t152c = tre->Branch("B_Hlt2TopoE4BodyBBDTDecision_TOS", &A.B_Hlt2TopoE4BodyBBDTDecision_TOS);
  TBranch *t153c = tre->Branch("B_Hlt2TopoMu2BodyBBDTDecision_Dec", &A.B_Hlt2TopoMu2BodyBBDTDecision_Dec);
  TBranch *t154c = tre->Branch("B_Hlt2TopoMu2BodyBBDTDecision_TIS", &A.B_Hlt2TopoMu2BodyBBDTDecision_TIS);
  TBranch *t155c = tre->Branch("B_Hlt2TopoMu2BodyBBDTDecision_TOS", &A.B_Hlt2TopoMu2BodyBBDTDecision_TOS);
  TBranch *t156c = tre->Branch("B_Hlt2TopoMu3BodyBBDTDecision_Dec", &A.B_Hlt2TopoMu3BodyBBDTDecision_Dec);
  TBranch *t157c = tre->Branch("B_Hlt2TopoMu3BodyBBDTDecision_TIS", &A.B_Hlt2TopoMu3BodyBBDTDecision_TIS);
  TBranch *t158c = tre->Branch("B_Hlt2TopoMu3BodyBBDTDecision_TOS", &A.B_Hlt2TopoMu3BodyBBDTDecision_TOS);
  TBranch *t159c = tre->Branch("B_Hlt2TopoMu4BodyBBDTDecision_Dec", &A.B_Hlt2TopoMu4BodyBBDTDecision_Dec);
  TBranch *t160c = tre->Branch("B_Hlt2TopoMu4BodyBBDTDecision_TIS", &A.B_Hlt2TopoMu4BodyBBDTDecision_TIS);
  TBranch *t161c = tre->Branch("B_Hlt2TopoMu4BodyBBDTDecision_TOS", &A.B_Hlt2TopoMu4BodyBBDTDecision_TOS);
  TBranch *t162c = tre->Branch("l1_TRACK_GhostProb", &A.l1_TRACK_GhostProb); 
  TBranch *t163c = tre->Branch("l2_TRACK_GhostProb", &A.l2_TRACK_GhostProb); 
  TBranch *t164c = tre->Branch("h1_TRACK_GhostProb", &A.h1_TRACK_GhostProb); 
  TBranch *t165c = tre->Branch("h2_TRACK_GhostProb", &A.h2_TRACK_GhostProb); 
  TBranch *t166c = tre->Branch("B_OWNPV_CHI2", &A.B_OWNPV_CHI2);
  TBranch *t167c = tre->Branch("alphaHOP", &alphaHOP);
  TBranch *t168c = tre->Branch("BmassHOP", &BmassHOP);
  TBranch *t169c = tre->Branch("L0Flag", &L0Flag);
  TBranch *t170c = tre->Branch("HLT1Flag", &HLT1Flag);
  TBranch *t171c = tre->Branch("HLT2Flag", &HLT2Flag);
}
