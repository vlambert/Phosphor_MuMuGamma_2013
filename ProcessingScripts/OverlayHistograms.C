// ============================================================ //
//                                                              //
//    Macro for overlaying Pt and nVtx distributins for         //
//                     Data and MC samples                      //
//                                                              //
//                 Valere Lambert, Caltech 2013                 //
//                                                              //
// ============================================================ //

#include <TH1F.h>
#include <TGraphAsymmErrors.h>
#include "TGraph.h"
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include "TMultiGraph.h"
#include "TGraphPainter.h"

void OverlayHistograms() {

  // Choose samples to overlay
  TFile *mcfile = TFile::Open("MC/MC.root");
  TFile *datafile = TFile::Open("Data/MC.root");
  //TFile *oldmcfile = TFile::Open("oldMC/MC.root");
  //TFile *simcfile = TFile::Open("SiMC/MC.root");

  // Set output files
  const char* ptout = "MC_DATA_pt.pdf";
  const char* nvtxout = "MC_DATA_nvtx.pdf";

  // Access the saved histograms for pt and nvtx
  TH1F *mc = (TH1F*)mcfile->Get("pt");
  TH1F *data = (TH1F*)datafile->Get("pt");
  //TH1F *oldmc = (TH1F*)oldmcfile->Get("pt");
  //TH1F *simc = (TH1F*)simcfile->Get("pt");

  TH1F *mcv = (TH1F*)mcfile->Get("nvtx");
  TH1F *datav = (TH1F*)datafile->Get("nvtx");
  //TH1F *oldmcv = (TH1F*)oldmcfile->Get("nvtx");
  //TH1F *simcv = (TH1F*)simcfile->Get("nvtx");

  // Normalize the Histograms
  mc->Scale(1./mc->Integral());
  data->Scale(1./data->Integral());
  //oldmc->Scale(1./oldmc->Integral());
  //simc->Scale(1./simc->Integral());

  mcv->Scale(1./mcv->Integral());
  datav->Scale(1./datav->Integral());
  //oldmcv->Scale(1./oldmcv->Integral());
  //simcv->Scale(1./simcv->Integral());

  // Set Line Colors
  mc->SetLineColor(kRed);
  data->SetLineColor(kBlack);
  //oldmc->SetLineColor(kBlue);
  //simc->SetLineColor(kBlue);
  
  mcv->SetLineColor(kRed);
  datav->SetLineColor(kBlack);
  //oldmcv->SetLineColor(kBlue);
  //simcv->SetLineColor(kBlue);

  // Plot the overlays
  TCanvas *cv = 0;

  // Pt
  cv = new TCanvas("cv", "cv", 800, 600);
  mc->Draw("");
  data->Draw("same");
  //oldmc->Draw("same");
  //simc->Draw("same");
  TLegend *l = new TLegend(0.5, 0.7, 0.8, 0.8, NULL, "NDC");
  l->AddEntry(mc,"Monte Carlo", "l");
  l->AddEntry(data,"Data", "l");
  //l->AddEntry(oldmc,"Raw Monte Carlo","l");
  //l->AddEntry(simc,"SiXie Monte Carlo","l");
  l->Draw();
  cv->SaveAs(ptout);

  // Nvtx
  cv = new TCanvas("cv", "cv", 800, 600);
  mcv->Draw("");
  datav->Draw("same");
  //oldmcv->Draw("same");
  //simcv->Draw("same");
  TLegend *lv = new TLegend(0.5, 0.7, 0.8, 0.8, NULL, "NDC");
  lv->AddEntry(mcv,"Monte Carlo", "l");
  lv->AddEntry(datav,"Data", "l");
  //lv->AddEntry(oldmcv,"Raw Monte Carlo","l");
  //lv->AddEntry(simcv,"SiXie Monte Carlo","l");
  lv->Draw();
  cv->SaveAs(nvtxout);
}
