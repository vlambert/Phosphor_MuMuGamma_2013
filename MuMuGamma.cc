// ========================================================================= //
//                                                                           // 
//       Interface for Vecbos MuMuGamma Monte Carlo to PHOSPHOR              //
//                       Input Formatted Monte Carlo                         //
//                       Valere Lambert, Caltech 2013                        //
//                                                                           //
// ========================================================================= //
#define MuMuGamma_cxx
#include "MuMuGamma.hh"
#include <istream>
#include <stdlib.h>
#include <TH2.h>
#include <TH1.h>
#include <TAxis.h>
#include <TStyle.h>
#include <TCanvas.h>          
#include <iomanip>                 
#include <fstream>                  
#include <string>                   
#include <sstream> 
#include "PhosphorCorrectorFunctor.hh"
#include "rochcor2012v2.hh"

void MuMuGamma::Loop()
{
//   In a ROOT session, you can do:
//      Root > .L MuMuGamma.C
//      Root > MuMuGamma t
//      Root > t.GetEntry(12); // Fill t data members with entry number 12
//      Root > t.Show();       // Show values of entry 12
//      Root > t.Show(16);     // Read and show values of entry 16
//      Root > t.Loop();       // Loop on all entries
//

//     This is the loop skeleton where:
//    jentry is the global entry number in the chain
//    ientry is the entry number in the current Tree
//  Note that the argument to GetEntry must be:
//    jentry for TChain::GetEntry
//    ientry for TTree::GetEntry and TBranch::GetEntry
//
//       To read only selected branches, Insert statements like:
// METHOD1:
//    fChain->SetBranchStatus("*",0);  // disable all branches
//    fChain->SetBranchStatus("branchname",1);  // activate branchname
// METHOD2: replace line
//    fChain->GetEntry(jentry);       //read all branches
//by  b_branchname->GetEntry(ientry); //read only this branch

  if (fChain == 0) cout<<"no chain"<<endl;
  if (fChain == 0) return;

  //zgamma::PhosphorCorrectionFunctor* obj = new zgamma::PhosphorCorrectionFunctor("phosphor_numbers_oct9.txt");

  //Rochester corrections for Muons Creating an Object
  //rochcor *rmcor = new rochcor();
  rochcor2012 *rmcor = new rochcor2012();
  float qter = 1.0;

  TLorentzVector genmu; //TLorentzVector of the generated muon- : only forMC
  TLorentzVector genmubar; //TLorentzVector of the generated muon+ : only for MC
  TLorentzVector mu; //TLorentzVector of the reconstructed muon-
  TLorentzVector mubar; //TLorentzVector of the reconstructed muon+

  TLorentzVector* mmFV;//FV: Four Vector
 
  //Set up variables for new tree
  UInt_t NVertices_new;
  Float_t Weight_new, Mass_new, DileptonMass_new, PhotonPt_new, PhotonEta_new, PhotonPhi_new, PhotonR9_new, Mu1Pt_new, Mu1Eta_new, Mu1Phi_new, Mu2Pt_new, Mu2Eta_new, Mu2Phi_new, MinDeltaR_new, GenPhoE_new, PhotonIsEB_new, PhoSigmaIEtaIEta_new;
  bool IsFSR_new;
  
  // Access branches from Vecbos ntuples
  fChain->SetBranchStatus("*",0);  // disable all branches                                                             
  fChain->SetBranchStatus("puWeight",1);  // activate branchname
  fChain->SetBranchStatus("nMuMuG",1);
  fChain->SetBranchStatus("massMuMuGamma",1);
  fChain->SetBranchStatus("massMuMu",1);
  
  fChain->SetBranchStatus("Photon.correctedEnergy",1);
  fChain->SetBranchStatus("Photon.eta",1);
  fChain->SetBranchStatus("Photon.SC.eta",1);
  fChain->SetBranchStatus("Photon.SC.sigmaIEtaIEta",1);
  fChain->SetBranchStatus("Photon.phi",1);
  fChain->SetBranchStatus("Photon.SC.r9",1);
  fChain->SetBranchStatus("Photon.genMatch.energy",1);
  fChain->SetBranchStatus("Photon.genMatch.id",1);
  
  fChain->SetBranchStatus("Muon1.charge",1);
  fChain->SetBranchStatus("Muon1.pt",1);
  fChain->SetBranchStatus("Muon1.eta",1);
  fChain->SetBranchStatus("Muon1.phi",1);
  
  fChain->SetBranchStatus("Muon2.charge",1);
  fChain->SetBranchStatus("Muon2.pt",1);
  fChain->SetBranchStatus("Muon2.eta",1);
  fChain->SetBranchStatus("Muon2.phi",1);
  
  fChain->SetBranchStatus("Muon2.genMatch.phi",1);
  fChain->SetBranchStatus("Muon2.genMatch.eta",1);
  fChain->SetBranchStatus("Muon1.genMatch.eta",1);
  fChain->SetBranchStatus("Muon1.genMatch.phi",1);
  fChain->SetBranchStatus("Muon2.genMatch.pt",1);
  fChain->SetBranchStatus("Muon1.genMatch.pt",1);
  
  fChain->SetBranchStatus("nVtx",1);
  
  // Set output file and create new tree to fill
  TFile *newfile = new TFile("MuMuGamma_MC.root","recreate");
  TTree *newtree = new TTree("ZmumuGammaEvent", "");
  
  // Define the branches for the new tree
  newtree->Branch("Weight", &Weight_new, "Weight/F");
  newtree->Branch("Mass", &Mass_new, "Mass/F");
  newtree->Branch("DileptonMass", &DileptonMass_new, "DileptonMass/F");
  newtree->Branch("PhotonPt", &PhotonPt_new,"PhotonPt/F");
  newtree->Branch("PhotonEta", &PhotonEta_new, "PhotonEta/F");
  newtree->Branch("PhotonPhi", &PhotonPhi_new, "PhotonPhi/F");
  newtree->Branch("PhotonR9", &PhotonR9_new, "PhotonR9/F");
  newtree->Branch("PhotonIsEB", &PhotonIsEB_new, "PhotonIsEB/F");

  newtree->Branch("Mu1Pt", &Mu1Pt_new, "Mu1Pt/F");
  newtree->Branch("Mu1Eta", &Mu1Eta_new, "Mu1Eta/F");
  newtree->Branch("Mu1Phi", &Mu1Phi_new, "Mu1Phi/F");

  newtree->Branch("Mu2Pt", &Mu2Pt_new, "Mu2Pt/F");
  newtree->Branch("Mu2Eta", &Mu2Eta_new, "Mu2Eta/F");
  newtree->Branch("Mu2Phi", &Mu2Phi_new, "Mu2Phi/F");

  newtree->Branch("MinDeltaR", &MinDeltaR_new, "MinDeltaR/F");
  newtree->Branch("GenPhoE", &GenPhoE_new, "GenPhoE/F");
  newtree->Branch("IsFSR", &IsFSR_new, "IsFSR/O");  
  newtree->Branch("NVertices", &NVertices_new, "NVertices/i");

  // Get number of entries in the chain
  Long64_t nentries = fChain->GetEntriesFast();
  Long64_t nbytes = 0, nb = 0;
 
  // Load data pile up and access histogram
  //  TFile *datafile = TFile::Open("/home/apresyan/HggApp/PileupTarget_HCPDatasetForHZZ4l.obs.69400.root"); // Artur's file
  TFile *datafile = TFile::Open("2012_PhosphorData_PileUp.root");
  TH1F *dataPU = (TH1F*)datafile->Get("pileup");

  // Make sure MC has the same bins as the data
  Int_t nbins = dataPU->GetXaxis()->GetNbins();
  Double_t low = dataPU->GetXaxis()->GetBinLowEdge(dataPU->GetXaxis()->GetFirst());
  Double_t high = dataPU->GetXaxis()->GetBinUpEdge(dataPU->GetXaxis()->GetLast());
  // Create a histogram with MC nPU
  TH1F *mcPU = new TH1F ("nPu","",nbins ,low ,high );

  // Fill the histogram 
  for (Long64_t qentry=0; qentry<nentries;qentry++) {
    Long64_t pentry = LoadTree(qentry);
    nb = fChain->GetEntry(qentry);  nbytes +=nb;
    for (int p = 0; p <nMuMuG; p++) {
      if(pentry < 0) break;
      mcPU->Fill(float(nVtx)/0.7);   // nVtx = 0.7 * nPU
    }
  }
  
  // Normalize the MC pileup
  mcPU->Scale(1./mcPU->Integral());
  // Scale the  MC and data distribution
  TH1F* PU = (TH1F*)dataPU->Clone("pileup");
  PU->Divide(mcPU);

  nbytes=0;
  nb=0;
  // Calculate output values and fill new brances
  for (Long64_t jentry=0; jentry<nentries;jentry++) {
    Long64_t ientry = LoadTree(jentry);
    if (ientry < 0) break;
    nb = fChain->GetEntry(jentry);   nbytes += nb;
    for (int j = 0; j <nMuMuG; j++) {
      
      if(Muon1_charge[j] == -1 && Muon2_charge[j] == 1){
	mu.SetPxPyPzE( Muon1_pt[j]*cos(Muon1_phi[j]),			\
		       Muon1_pt[j]*sin(Muon1_phi[j]),			\
		       Muon1_pt[j]*sinh(Muon1_eta[j]),			\
		       Muon1_pt[j]*cosh(Muon1_eta[j]) );
	
	mubar.SetPxPyPzE( Muon2_pt[j]*cos(Muon2_phi[j]),   \
			  Muon2_pt[j]*sin(Muon2_phi[j]),   \
			  Muon2_pt[j]*sinh(Muon2_eta[j]),  \
			  Muon2_pt[j]*cosh(Muon2_eta[j]) );
	
	genmu.SetPxPyPzE( Muon1_genMatch_pt[j]*cos(Muon1_genMatch_phi[j]), \
			  Muon1_genMatch_pt[j]*sin(Muon1_genMatch_phi[j]), \
			  Muon1_genMatch_pt[j]*sinh(Muon1_genMatch_eta[j]), \
			  Muon1_genMatch_pt[j]*cosh(Muon1_genMatch_eta[j]));
	
	genmubar.SetPxPyPzE( Muon2_genMatch_pt[j]*cos(Muon2_genMatch_phi[j]), \
			     Muon2_genMatch_pt[j]*sin(Muon2_genMatch_phi[j]), \
			     Muon2_genMatch_pt[j]*sinh(Muon2_genMatch_eta[j]), \
			     Muon2_genMatch_pt[j]*cosh(Muon2_genMatch_eta[j]) );
	
	rmcor->momcor_mc(mu, -1., 0, qter);// for negative reconstructed muon
	rmcor->momcor_mc(mubar, 1., 0, qter); // for positive reconstructed muon
	Mu1Pt_new = mu.Pt();
	Mu1Eta_new = mu.Eta();
	Mu1Phi_new = mu.Phi();
	Mu2Pt_new = mubar.Pt();
	Mu2Eta_new = mubar.Eta();
	Mu2Phi_new = mubar.Phi();
	mmFV = new TLorentzVector(mu+mubar);
	DileptonMass_new =  mmFV->M();
	delete mmFV;
      }else if(Muon1_charge[j] == 1 && Muon2_charge[j] == -1){
	mubar.SetPxPyPzE( Muon1_pt[j]*cos(Muon1_phi[j]),		\
			  Muon1_pt[j]*sin(Muon1_phi[j]),		\
			  Muon1_pt[j]*sinh(Muon1_eta[j]),		\
			  Muon1_pt[j]*cosh(Muon1_eta[j]) );
	
	mu.SetPxPyPzE( Muon2_pt[j]*cos(Muon2_phi[j]),	   \
		       Muon2_pt[j]*sin(Muon2_phi[j]),	   \
		       Muon2_pt[j]*sinh(Muon2_eta[j]),	   \
		       Muon2_pt[j]*cosh(Muon2_eta[j]) );
	
	genmubar.SetPxPyPzE( Muon1_genMatch_pt[j]*cos(Muon1_genMatch_phi[j]), \
			     Muon1_genMatch_pt[j]*sin(Muon1_genMatch_phi[j]), \
			     Muon1_genMatch_pt[j]*sinh(Muon1_genMatch_eta[j]), \
			     Muon1_genMatch_pt[j]*cosh(Muon1_genMatch_eta[j]));
	
	genmu.SetPxPyPzE( Muon2_genMatch_pt[j]*cos(Muon2_genMatch_phi[j]), \
			  Muon2_genMatch_pt[j]*sin(Muon2_genMatch_phi[j]), \
			  Muon2_genMatch_pt[j]*sinh(Muon2_genMatch_eta[j]), \
			  Muon2_genMatch_pt[j]*cosh(Muon2_genMatch_eta[j]) );
	
	rmcor->momcor_mc(mu, -1., 0, qter);// for negative reconstructed muon
	rmcor->momcor_mc(mubar, 1., 0, qter); // for positive reconstructed muon
	Mu1Pt_new = mubar.Pt();
	Mu1Eta_new = mubar.Eta();
	Mu1Phi_new = mubar.Phi();
	Mu2Pt_new = mu.Pt();
	Mu2Eta_new = mu.Eta();
	Mu2Phi_new = mu.Phi();
	mmFV = new TLorentzVector(mu+mubar);
	DileptonMass_new =  mmFV->M();
	delete mmFV;
      }else{
	std::cout << "[INFO]--> No mu-mu+ pair was found!!, No correction applied" << std::endl;
	DileptonMass_new = massMuMu[j];//No correction applied
	Mu1Pt_new = Muon1_pt[j];
	Mu1Eta_new = Muon1_eta[j];
	Mu1Phi_new = Muon1_phi[j];
	Mu2Pt_new = Muon2_pt[j];
	Mu2Eta_new = Muon2_eta[j];
	Mu2Phi_new = Muon2_phi[j];
      }
      
      if(Photon_genMatch_id[j]== 22) {
	IsFSR_new = true;
      } else{
	IsFSR_new = false;
      }
      if(fabs(Photon_SC_eta[j])<1.5) { 
	PhotonIsEB_new = 1.0;
      } else{
	PhotonIsEB_new = 0.0;
      }
      PhotonPt_new = Photon_correctedEnergy[j]/cosh(Photon_eta[j]);
      MinDeltaR_new = pow(pow(Photon_phi[j]-Muon1_phi[j],2)+pow(Photon_eta[j]-Muon1_eta[j],2),0.5)<pow(pow(Photon_phi[j]-Muon2_phi[j],2)+pow(Photon_eta[j]-Muon2_eta[j],2),0.5)?sqrt(pow(Photon_phi[j]-Muon1_phi[j],2)+pow(Photon_eta[j]-Muon1_eta[j],2)):pow(pow(Photon_phi[j]-Muon2_phi[j],2)+pow(Photon_eta[j]-Muon2_eta[j],2),0.5);   
      
      
      Weight_new = PU->GetBinContent(PU->FindBin(float(nVtx)/0.7));
      Mass_new = pow( pow(DileptonMass_new,2)+(pow(massMuMuGamma[j],2)-pow(massMuMu[j],2)),0.5 );
      PhotonEta_new = Photon_eta[j];
      PhotonPhi_new = Photon_phi[j];
      PhotonR9_new = Photon_SC_r9[j];
      Mu1Pt_new = Muon1_pt[j];
      Mu1Eta_new = Muon1_eta[j];
      Mu1Phi_new = Muon1_phi[j];
      Mu2Pt_new = Muon2_pt[j];
      Mu2Eta_new = Muon2_eta[j];
      Mu2Phi_new = Muon2_phi[j];
      GenPhoE_new = Photon_genMatch_energy[j];
      NVertices_new = nVtx;
      // Fill the event
      newtree->Fill();
    }
  }   
  // Write and close the file
  newfile->Write();
  newfile->Close();
}

 
