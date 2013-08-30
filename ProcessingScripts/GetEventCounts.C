// ============================================================================ //
//                                                                              // 
//      Macro to Produce Histograms of pT for High/Low R9 and EB/EE bins        //  
//                   and Event Counts within individual pT bins                 //
//                      PHOSPHOR MuMuGamma 2013 MC and Data                     //
//                                                                              //
//                       Valere Lambert, Caltech 8-23-2013                      //
//                                                                              //
// ============================================================================ //
#ifndef __CINT__
#include <iostream>
#include <string>
#include <ifstream>
#include <fstream>
#include <sstream>
#include <stdio.h>
#endif

#include <math.h>
#include <TROOT.h>
#include <TFile.h>
#include <TTree.h>
#include <TH1F.h>
#include <THStack.h>
#include <TLegend.h>
#include <TCanvas.h>
#include <TH1F.h>
#include "TGraph.h"
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include "TGraphPainter.h"
#include "TMarker.h"

void GetEventCounts() {

  // Select the PHOSPHOR style Data or MC source
  //TFile *InFile = TFile::Open("Sintuples/MC_sixie_muon_corr_2012.root");     // Si's Monte Carlo
  //TFile *InFile = TFile::Open("MuMuGamma_MC.root");                          // Vecbos Monte Carlo
  TFile *InFile = TFile::Open("ZmumuGammaNtuple_Full2012_MuCorr.root");        // Data

  // Set output file for the LaTeX Table
  string OutTable = "OutTable.txt";
  
  // Set up PT and NVtx histograms
  TH1F *PT = new TH1F("pt","",25,0,100);
  TH1F *nvtx = new TH1F("nvtx","",50,0,50);
  TH1F *HR9PT = new TH1F("High R9","",26,0,80);
  TH1F *LR9PT = new TH1F("Low R9","",26,0,80);
  TH1F *EBPT = new TH1F("EB","",26,0,80);
  TH1F *EEPT = new TH1F("EE","",26,0,80);
  TH1F *HR9EBPT = new TH1F("High R9 EB","",26,0,80);
  TH1F *LR9EBPT = new TH1F("Low R9 EB","",26,0,80);
  TH1F *HR9EEPT = new TH1F("High R9 EE","",26,0,80);
  TH1F *LR9EEPT = new TH1F("Low R9 EE","",26,0,80);

  // Set up tree
  TTree *tree = (TTree*)InFile->Get("ZmumuGammaEvent");
  Int_t nentries = tree->GetEntriesFast();

  // Initialize Event Counts
  Int_t nbytes = 0; 
  Int_t BLten = 0;
  Int_t BLtwelve = 0;
  Int_t BLfifteen = 0;
  Int_t BLtwenty = 0;
  Int_t BLtwentyfive = 0;
  Int_t BLthirtyfive = 0;
  Int_t BLtwentytothirty = 0;
  Int_t BLthirtytohigh = 0;
  Int_t BLtwentytohigh = 0;
  Int_t BHten = 0;
  Int_t BHtwelve = 0;
  Int_t BHfifteen = 0;
  Int_t BHtwenty = 0;
  Int_t BHtwentyfive = 0;
  Int_t BHthirtyfive = 0;
  Int_t BHtwentytothirty = 0;
  Int_t BHthirtytohigh = 0;
  Int_t BHtwentytohigh = 0;
  Int_t ELten = 0;
  Int_t ELtwelve = 0;
  Int_t ELfifteen = 0;
  Int_t ELtwenty = 0;
  Int_t ELtwentyfive = 0;
  Int_t ELthirtyfive = 0;
  Int_t ELtwentytothirty = 0;
  Int_t ELthirtytohigh = 0;
  Int_t ELtwentytohigh = 0;
  Int_t EHten = 0;
  Int_t EHtwelve = 0;
  Int_t EHfifteen = 0;
  Int_t EHtwenty = 0;
  Int_t EHtwentyfive = 0;
  Int_t EHthirtyfive = 0;
  Int_t EHtwentytothirty = 0;
  Int_t EHthirtytohigh = 0;
  Int_t EHtwentytohigh = 0;

  // Fill Histograms and count events
  for (Int_t i=0; i<nentries;i++) {
    nbytes += tree->GetEvent(i);
    Float_t PhotonPt;
    Float_t PhotonIsEB;
    Float_t PhotonR9;
    UInt_t NVertices;
    tree->SetBranchAddress("PhotonR9", &PhotonR9);
    tree->SetBranchAddress("PhotonIsEB",&PhotonIsEB);
    tree->SetBranchAddress("PhotonPt", &PhotonPt);
    tree->SetBranchAddress("NVertices",&NVertices);
    PT->Fill(PhotonPt);
    nvtx->Fill(NVertices);
    // Barrel
    if (PhotonIsEB == 0.0) {
      EBPT->Fill(PhotonPt);
      // Low R9
      if (PhotonR9<0.94) {
	LR9PT->Fill(PhotonPt);
	LR9EBPT->Fill(PhotonPt);
	if (PhotonPt >= 10 && PhotonPt <=12) {
	  BLten++;
	}
	if (PhotonPt>12 && PhotonPt <=15) {
	  BLtwelve++;
	}
	if (PhotonPt>15 && PhotonPt <=20) {
	  BLfifteen++;
	}
	if (PhotonPt>20 && PhotonPt <=25){
	  BLtwenty++;
	}
	if (PhotonPt>25 && PhotonPt <=35){
	  BLtwentyfive++;
	}
	if (PhotonPt>35 && PhotonPt <=999){
	  BLthirtyfive++;
	}
	if (PhotonPt>20 && PhotonPt <=30){
	  BLtwentytothirty++;
	}
	if (PhotonPt>30 && PhotonPt <999){
	  BLthirtytohigh++;
	}
	if (PhotonPt>20 && PhotonPt <999){
	  BLtwentytohigh++;
	}
      }
      // High R9
      if (PhotonR9>0.94) {
	HR9PT->Fill(PhotonPt);
	HR9EBPT->Fill(PhotonPt);
	if (PhotonPt >= 10 && PhotonPt <=12) {
	  BHten++;
	}
	if (PhotonPt>12 && PhotonPt <=15) {
	  BHtwelve++;
	}
	if (PhotonPt>15 && PhotonPt <=20) {
	  BHfifteen++;
	}
	if (PhotonPt>20 && PhotonPt <=25){
	  BHtwenty++;
	}
	if (PhotonPt>25 && PhotonPt <=35){
	  BHtwentyfive++;
	}
	if (PhotonPt>35 && PhotonPt <=999){
	  BHthirtyfive++;
	}
        if (PhotonPt>20 && PhotonPt <=30){
          BHtwentytothirty++;
        }
        if (PhotonPt>30 && PhotonPt <999){
          BHthirtytohigh++;
        }
	if (PhotonPt>20 && PhotonPt <999){
	  BHtwentytohigh++;
	}
      }
    }
    // End Caps
    if (!PhotonIsEB == 1.0) {
      EEPT->Fill(PhotonPt);
      // Low R9
      if (PhotonR9<0.94) {
	LR9PT->Fill(PhotonPt);
	LR9EEPT->Fill(PhotonPt);
	if (PhotonPt >= 10 && PhotonPt <=12) {
	  ELten++;
	}
	if (PhotonPt>12 && PhotonPt <=15) {
	  ELtwelve++;
	}
	if (PhotonPt>15 && PhotonPt <=20) {
	  ELfifteen++;
	}
	if (PhotonPt>20 && PhotonPt <=25){
	  ELtwenty++;
	}
	if (PhotonPt>25 && PhotonPt <=35){
	  ELtwentyfive++;
	}
	if (PhotonPt>35 && PhotonPt <=999){
	  ELthirtyfive++;
	}
        if (PhotonPt>20 && PhotonPt <=30){
          ELtwentytothirty++;
        }
        if (PhotonPt>30 && PhotonPt <999){
          ELthirtytohigh++;
        }
	if (PhotonPt>20 && PhotonPt <999){
	  ELtwentytohigh++;
	}
      }
      // High R9
      if (PhotonR9>0.94) {
        HR9EEPT->Fill(PhotonPt);
	HR9PT->Fill(PhotonPt);
        if (PhotonPt >= 10 && PhotonPt <=12) {
          EHten++;
        }
        if (PhotonPt>12 && PhotonPt <=15) {
          EHtwelve++;
        }
        if (PhotonPt>15 && PhotonPt <=20) {
          EHfifteen++;
        }
        if (PhotonPt>20 && PhotonPt <=25){
          EHtwenty++;
        }
        if (PhotonPt>25 && PhotonPt <=35){
          EHtwentyfive++;
        }
        if (PhotonPt>35 && PhotonPt <=999){
          EHthirtyfive++;
        }
        if (PhotonPt>20 && PhotonPt <=30){
          EHtwentytothirty++;
        }
        if (PhotonPt>30 && PhotonPt <999){
          EHthirtytohigh++;
        }
        if (PhotonPt>20 && PhotonPt <999){
          EHtwentytohigh++;
        }
      }
    }
  }
  // Produce Pt and Nvtx plots
  TCanvas *cv = 0;
  cv= new TCanvas("cv","cv",800, 600);
  PT->Draw("");
  cv->SaveAs("pt.pdf");

  cv= new TCanvas("cv","cv",800,600);
  nvtx->Draw("");
  cv->SaveAs("nvtx.pdf");

  cv = new TCanvas("cv", "cv", 800, 600);
  HR9PT->Draw("");
  cv->SaveAs("ptHighR9.pdf");

  cv = new TCanvas("cv","cv", 800, 600);
  LR9PT->Draw("");
  cv->SaveAs("ptLowR9.pdf");

  cv = new TCanvas("cv", "cv", 800, 600);
  EBPT->Draw("");
  cv->SaveAs("ptEB.pdf");

  cv = new TCanvas("cv","cv", 800, 600);
  EEPT->Draw("");
  cv->SaveAs("ptEE.pdf");

  cv = new TCanvas("cv", "cv", 800, 600);
  HR9EBPT->Draw("");
  cv->SaveAs("ptHighR9EB.pdf");

  cv = new TCanvas("cv","cv", 800, 600);
  LR9EBPT->Draw("");
  cv->SaveAs("ptLowR9EB.pdf");

  cv = new TCanvas("cv", "cv", 800, 600);
  HR9EEPT->Draw("");
  cv->SaveAs("ptHighR9EE.pdf");

  cv = new TCanvas("cv","cv", 800, 600);
  LR9EEPT->Draw("");
  cv->SaveAs("ptLowR9EE.pdf");
  
  // Save the plots  
  TFile *file = TFile::Open("MC.root","UPDATE");
  file->cd();
  file->WriteTObject(PT,PT->GetName(),"WriteDelete");
  file->WriteTObject(nvtx,nvtx->GetName(),"WriteDelete");
  file->WriteTObject(HR9PT,HR9PT->GetName(),"WriteDelete");
  file->WriteTObject(LR9PT,LR9PT->GetName(),"WriteDelete");
  file->WriteTObject(EBPT,EBPT->GetName(),"WriteDelete");
  file->WriteTObject(EEPT,EEPT->GetName(),"WriteDelete");
  file->WriteTObject(HR9EBPT,HR9EBPT->GetName(),"WriteDelete");
  file->WriteTObject(HR9EEPT,HR9EEPT->GetName(),"WriteDelete");
  file->WriteTObject(LR9EBPT,LR9EBPT->GetName(),"WriteDelete");
  file->WriteTObject(LR9EEPT,LR9EEPT->GetName(),"WriteDelete");
  file->Close();
  
  // Output the event counts in a  LaTeX table to a text files
  //string outputfile = "OutTable.txt";
  ofstream outfile(OutTable.c_str());
  outfile<< "\\begin{multicols}{2}"<<endl;
  outfile << "\\begin{center}"<<endl;
  outfile << "\\begin{tabular}{| C{3.0cm}|| C{3.0cm}|}" <<endl;
  outfile << "\\hline" << endl;
  outfile << "\\multicolumn{2}{|c|}{\\textbf{End Caps: High R9}}\\\\ \\hline" <<endl;
  outfile << "pT Bin  & Cross Section \\\\ \\hline"<< endl;
  outfile<< " 10-12 events: &" << EHten <<"\\\\ \\hline"<<endl;
  outfile<< " 12-15 events &" << EHtwelve <<"\\\\ \\hline"<<endl;
  outfile<< " 15-20 events &" << EHfifteen <<"\\\\ \\hline"<<endl;
  outfile<< " 20-25 events &" << EHtwenty<<"\\\\ \\hline"<<endl;
  outfile<< " 25-35 events &" << EHtwentyfive<< "\\\\ \\hline"<<endl;
  outfile<< " 35-999 events &" << EHthirtyfive<<"\\\\ \\hline"<<endl;
  outfile<< " 20-30 events &" << EHtwentytothirty<<"\\\\ \\hline"<<endl;
  outfile<< " 30-999 events &" << EHthirtytohigh<<"\\\\ \\hline"<<endl;
  outfile<< " 20-999 events &" << EHtwentytohigh<<"\\\\ \\hline"<<endl;
  outfile << "\\multicolumn{2}{|c|}{\\textbf{End Caps: Low R9}}\\\\ \\hline" <<endl;
  outfile << "pT Bin & Cross Section \\\\ \\hline"<< endl; 
  outfile<< " 10-12 events &" << ELten <<"\\\\ \\hline"<<endl;
  outfile<< " 12-15 events &" << ELtwelve <<"\\\\ \\hline"<<endl;
  outfile<< " 15-20 events &" << ELfifteen <<"\\\\ \\hline"<<endl;
  outfile<< " 20-35 events &" << ELtwenty<<"\\\\ \\hline"<<endl;
  outfile<< " 25-35 events &" << ELtwentyfive<< "\\\\ \\hline"<<endl;
  outfile<< " 35-999 events &" << ELthirtyfive<<"\\\\ \\hline"<<endl;
  outfile<< " 20-30 events &" << ELtwentytothirty<<"\\\\ \\hline"<<endl;
  outfile<< " 30-999 events &" << ELthirtytohigh<<"\\\\ \\hline"<<endl;
  outfile<< " 20-999 events &" << ELtwentytohigh<<"\\\\ \\hline"<<endl;
  outfile<< "\\end{tabular}"<<endl;
  outfile<< "\\end{center}"<<endl;

  outfile << "\\begin{center}"<<endl;
  outfile << "\\begin{tabular}{| C{3.0cm}|| C{3.0cm}|}" <<endl;
  outfile << "\\hline" << endl;
  outfile << "\\multicolumn{2}{|c|}{\\textbf{Barrel: High R9}}\\\\ \\hline" <<endl;
  outfile << "pT Bin & Cross Section \\\\ \\hline"<< endl; 
  outfile<< " 10-12 events &" << BHten <<"\\\\ \\hline"<<endl;
  outfile<< " 12-15 events &" << BHtwelve <<"\\\\ \\hline"<<endl;
  outfile<< " 15-20 events &" << BHfifteen <<"\\\\ \\hline"<<endl;
  outfile<< " 20-25 events &" << BHtwenty<<"\\\\ \\hline"<<endl;
  outfile<< " 25-35 events &" << BHtwentyfive<< "\\\\ \\hline"<<endl;
  outfile<< " 35-999 events &" << BHthirtyfive<<"\\\\ \\hline"<<endl;
  outfile<< " 20-30 events &" << BHtwentytothirty<<"\\\\ \\hline"<<endl;
  outfile<< " 30-999 events &" << BHthirtytohigh<<"\\\\ \\hline"<<endl;
  outfile<< " 20-999 events &" << BHtwentytohigh<<"\\\\ \\hline"<<endl;
  outfile << "\\multicolumn{2}{|c|}{\\textbf{Barrel: Low R9}}\\\\ \\hline" <<endl;
  outfile << "pT Bin & Cross Section \\\\ \\hline"<< endl; 
  outfile<< " 10-12 events &" << BLten <<"\\\\ \\hline"<<endl;
  outfile<< " 12-15 events &" << BLtwelve <<"\\\\ \\hline"<<endl;
  outfile<< " 15-20 events &" << BLfifteen <<"\\\\ \\hline"<<endl;
  outfile<< " 20-35 events &" << BLtwenty<<"\\\\ \\hline"<<endl;
  outfile<< " 25-35 events &" << BLtwentyfive<< "\\\\ \\hline"<<endl;
  outfile<< " 35-999 events &" << BLthirtyfive<<"\\\\ \\hline"<<endl;
  outfile<< " 20-30 events &" << BLtwentytothirty<<"\\\\ \\hline"<<endl;
  outfile<< " 30-999 events &" << BLthirtytohigh<<"\\\\ \\hline"<<endl;
  outfile<< " 20-999 events &" << BLtwentytohigh<<"\\\\ \\hline"<<endl;
  outfile << "\\end{tabular}"<<endl;
  outfile << "\\end{center}" <<endl;
  outfile <<"\\end{multicols}" <<endl;
  outfile.close();
}

