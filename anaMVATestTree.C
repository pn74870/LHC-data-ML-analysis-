#define anaMVATestTree_cxx
// The class definition in anaMVATestTree.h has been generated automatically
// by the ROOT utility TTree::MakeSelector(). This class is derived
// from the ROOT class TSelector. For more information on the TSelector
// framework see $ROOTSYS/README/README.SELECTOR or the ROOT User Manual.

// The following methods are defined in this file:
//    Begin():        called every time a loop on the tree starts,
//                    a convenient place to create your histograms.
//    SlaveBegin():   called after Begin(), when on PROOF called only on the
//                    slave servers.
//    Process():      called for each event, in this function you decide what
//                    to read and fill your histograms.
//    SlaveTerminate: called at the end of the loop on the tree, when on PROOF
//                    called only on the slave servers.
//    Terminate():    called at the end of the loop on the tree,
//                    a convenient place to draw/fit your histograms.
//
// To use this file, try the following session on your Tree T:
//
// Root > T->Process("anaMVATestTree.C")
// Root > T->Process("anaMVATestTree.C","some options")
// Root > T->Process("anaMVATestTree.C+")
//

#include "anaMVATestTree.h"
#include <TH2.h>
#include <TStyle.h>


void anaMVATestTree::Begin(TTree * /*tree*/)
{
   // The Begin() function is called at the start of the query.
   // When running with PROOF Begin() is only called on the client.
   // The tree argument is deprecated (on PROOF 0 is passed).

   TString option = GetOption();
   TH1F *hBmass          = new TH1F("hBmass",  "mass of the B", 100, 4200.,6000.);
   TH1F *hBmassS          = new TH1F("hBmassS",  "mass of the B MC", 100, 5000.,5500.);
   TH1F *hBmassB          = new TH1F("hBmassB",  "mass of the B data sideband", 100, 5000.,6000.);
   //   TH2F *hMVAvsBmass     = new TH2F("hMVAvsBmass",  "MVA vs Bmass", 120, 4200.,6200., 100, -1.,1.);
   TProfile *pMVAvsBmassS     = new TProfile("pMVAvsBmassS",  "MVA profile signal", 50, 5000.,5500., -1.,1., " ");
   TProfile *pMVAvsBmassB     = new TProfile("pMVAvsBmassB",  "MVA profile data sideband", 50, 5000.,6000., -1.,1., " ");
   TH1F *hl2ProbNNeS           = new TH1F("hl2ProbNNeS",  "l2ProbNNe signal", 100, 0.,1.);
   TH1F *hl2ProbNNeB           = new TH1F("hl2ProbNNeB",  "l2ProbNNe data sideband", 100, 0.,1.);
   TProfile *pl2ProbNNeS     = new TProfile("pl2ProbNNeS",  "MVA profile signal", 50, 0.,1., -1.,1., " ");
   TProfile *pl2ProbNNeB     = new TProfile("pl2ProbNNeB",  "MVA profile data sideband", 50, 0.,1., -1.,1., " ");
}

void anaMVATestTree::SlaveBegin(TTree * /*tree*/)
{
   // The SlaveBegin() function is called after the Begin() function.
   // When running with PROOF SlaveBegin() is called on each slave server.
   // The tree argument is deprecated (on PROOF 0 is passed).

   TString option = GetOption();

}

Bool_t anaMVATestTree::Process(Long64_t entry)
{
   // The Process() function is called for each entry in the tree (or possibly
   // keyed object in the case of PROOF) to be processed. The entry argument
   // specifies which entry in the currently loaded tree is to be processed.
   // It can be passed to either anaMVATestTree::GetEntry() or TBranch::GetEntry()
   // to read either all or the required parts of the data. When processing
   // keyed objects with PROOF, the object is already loaded and is available
   // via the fObject pointer.
   //
   // This function should contain the "body" of the analysis. It can contain
   // simple or elaborate selection criteria, run algorithms on the data
   // of the event and typically fill histograms.
   //
   // The processing can be stopped by calling Abort().
   //
   // Use fStatus to set the return value of TTree::Process().
   //
   // The return value is currently not used.

  b_B_MM->GetEntry(entry);
  //b_BDTG0->GetEntry(entry);
  //b_BDTNW0->GetEntry(entry);
  b_MLPCE->GetEntry(entry);
  b_BKGCAT->GetEntry(entry);
  b_l2_ProbNNe->GetEntry(entry);
  b_BKGCAT->GetEntry(entry);
  //  hBmass->Fill(B_MM);      
  //cout << "Bmass " << B_MM <<" " << BDTG0 << " " << BDTNW0 << endl;
  //  hMVAvsBmass->Fill(B_MM, BDTG0);  
  if(BKGCAT ==10){pMVAvsBmassS->Fill(B_MM, MLPCE);};
  if(BKGCAT !=10){pMVAvsBmassB->Fill(B_MM, MLPCE);};

  if(BKGCAT ==10){hBmassS->Fill(B_MM);};
  if(BKGCAT !=10){hBmassB->Fill(B_MM);};
  if(BKGCAT ==10){pl2ProbNNeS->Fill(l2_ProbNNe, MLPCE);};
  if(BKGCAT !=10){pl2ProbNNeB->Fill(l2_ProbNNe, MLPCE);};
  if(BKGCAT ==10){hl2ProbNNeS->Fill(l2_ProbNNe);};
  if(BKGCAT !=10){hl2ProbNNeB->Fill(l2_ProbNNe);};
   return kTRUE;
}

void anaMVATestTree::SlaveTerminate()
{
   // The SlaveTerminate() function is called after all entries or objects
   // have been processed. When running with PROOF SlaveTerminate() is called
   // on each slave server.

}

void anaMVATestTree::Terminate()
{
  
   // The Terminate() function is the last function to be called during
   // a query. It always runs on the client, it can be used to present
   // the results graphically or save the results to file.
  gStyle->SetOptStat(0);
  //  gStyle->SetGridStyle(0);
  TCanvas *c1 = new TCanvas("c1","Plots",800, 800);
  pMVAvsBmassS->SetMaximum(1.);
  pMVAvsBmassS->SetMinimum(0.6);
  pMVAvsBmassB->SetMaximum(0.4);
  pMVAvsBmassB->SetMinimum(0.);

  

 

  c1->Divide(2,2);
  c1->SetGrid();
  c1->cd(1);
  hBmassS->Draw();
  c1->cd(2);
  hBmassB->Draw();
  c1->cd(3);
  pMVAvsBmassS->Draw();
  c1->cd(4);
  pMVAvsBmassB->Draw();
  c1->Print("Bmass.eps");
  c1->Print("Bmass.png");
  
  TCanvas *c2 = new TCanvas("c2","Plots ProBNNe",800, 800);
  c2->SetGrid();
  // pl2ProbNNeS->SetMaximum(1.);
  // pl2ProbNNeS->SetMinimum(0.6);
  // pl2ProbNNeB->SetMaximum(-0.6);
  // pl2ProbNNeB->SetMinimum(-1.);
  c2->Divide(2,2);
  c2->cd(1);
  hl2ProbNNeS->Draw();
  c2->cd(2);
  hl2ProbNNeB->Draw();
  c2->cd(3);
  pl2ProbNNeS->Draw();
  c2->cd(4);
  pl2ProbNNeB->Draw();
  c2->Print("ProbNNe.eps");
  c2->Print("ProbNNe.png");
  TFile* f = TFile::Open("BmassCorr2011-2012.root","RECREATE");
  c1->Write();
  c2->Write();
  //  cout << "hit return to continue" << endl;
  //  gets(s);

}
