//-----------------------------------------------------------------------//
//                                                                       //
//        Macro for creating pile up distribution histograms for         //
//          reweighting Monte Carlo with PHOSPHOR interface              //
//                                                                       //
//                 Valere Lambert, Caltech/CMS 2013                      //
//                                                                       //
//-----------------------------------------------------------------------//

#ifndef __CINT__
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <stdio.h>
#endif

#include <math.h>
#include <TROOT.h>
#include <TFile.h>
#include <TTree.h>
#include <TH1F.h>
#include <TCanvas.h>
#include <TH1F.h>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

void PileUpMaker() {
  // Access data file
  TFile *file = TFile::Open("ZmumuGammaNtuple_Full2012_MuCorr.root");
  TTree *Datatree = (TTree*)file->Get("ZmumuGammaEvent");

  // Set up histogram for data pile up
  TH1F *pileupraw = new TH1F("pileup","",40,0,80);
 
  // Fill pile up distribution
  Int_t nentries = Datatree->GetEntriesFast();
  Int_t nbytes = 0; 
  for (Int_t i=0; i<nentries;i++) {
    nbytes += Datatree->GetEvent(i);
    UInt_t NVertices;
    Datatree->SetBranchAddress("NVertices",&NVertices);
    pileupraw->Fill(float(NVertices)/0.7);
  }

  // Normalize the distribution
  TH1F* PU = (TH1F*)pileupraw->Clone("pileup");
  PU->Scale(1./PU->Integral());

  // Plot both the normalized and unnormalized pile up
  TCanvas *cv = 0;
  cv= new TCanvas("cv","cv",800, 600);
  pileupraw->Draw("");
  cv->SaveAs("DataPU.pdf");

  cv= new TCanvas("cv","cv",800,600);
  PU->Draw("");
  cv->SaveAs("DataPU_normalized.pdf");

  // Save the normalized distribution to a root file for weighting MC
  TFile *file = TFile::Open("2012_PhosphorData_PileUp.root","UPDATE");
  file->cd();
  file->WriteTObject(PU,PU->GetName(),"WriteDelete");
  file->Close();
  delete file;
}

