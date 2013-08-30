//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Fri Apr 26 11:38:20 2013 by ROOT verson 5.32/00
// from TTree MuMuGamma/
// found on file: /mnt/hadoop/store/user/amott/Hgg2012/MC/DYToMuMu_M_20_FSRFilter_8_TuneZ2star_8TeV_pythia6_GEN_SIM_v2/veverka-Summer12-PU_S7_START52_V9_step3_RAW2DIGI_L1Reco_RECO_PU_v2-90a3c643a4855c1621ba3bfcbef2e742_VecBosV20-5_2_X/Selected/DYToMuMu_M_20_FSRFilter_8_2.root
//////////////////////////////////////////////////////////

#ifndef MuMuGamma_h
#define MuMuGamma_h

#ifndef __CINT__
#include<stdio.h>
#include<string>
#include<sstream>
#include<iostream>
#include<fstream>
#endif

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include <TObject.h>
#include <TVector3.h>
#include <TLorentzVector.h>

// Fixed size dimensions of array or collections stored in the TTree if any.
const Int_t kMaxMuon1 = 9;
const Int_t kMaxMuon2 = 9;
const Int_t kMaxPhoton = 9;

class MuMuGamma {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   // Declaration of leaf types
   Int_t           runNumber;
   Int_t           evtNumber;
   Int_t           nVtx;
   Int_t           rho;
   Int_t           nMuMuG;
   Float_t         massMuMuGamma[9];   //[nMuMuG]
   Float_t         massMuMuRegGamma[9];   //[nMuMuG]
   Float_t         massMuMuScaleGamma[9];   //[nMuMuG]
   Float_t         massMuMuGenGamma[9];   //[nMuMuG]
   Float_t         massMuMu[9];   //[nMuMuG]
   Float_t         puWeight[9];   //[nMuMuG]
   Int_t           Muon1_;
   Int_t           Muon1_index[kMaxMuon1];   //[Muon1_]
   Float_t         Muon1_energy[kMaxMuon1];   //[Muon1_]
   Float_t         Muon1_pt[kMaxMuon1];   //[Muon1_]
   Float_t         Muon1_eta[kMaxMuon1];   //[Muon1_]
   Float_t         Muon1_phi[kMaxMuon1];   //[Muon1_]
   Int_t           Muon1_charge[kMaxMuon1];   //[Muon1_]
   Float_t         Muon1_combinedIso[kMaxMuon1];   //[Muon1_]
   Float_t         Muon1_emIso[kMaxMuon1];   //[Muon1_]
   Float_t         Muon1_hadIso[kMaxMuon1];   //[Muon1_]
   Float_t         Muon1_trkIso[kMaxMuon1];   //[Muon1_]
   Bool_t          Muon1_isGlobalMuon[kMaxMuon1];   //[Muon1_]
   Bool_t          Muon1_isTrackerMuon[kMaxMuon1];   //[Muon1_]
   Bool_t          Muon1_isPromptMuon[kMaxMuon1];   //[Muon1_]
   Int_t           Muon1_nTrackHits[kMaxMuon1];   //[Muon1_]
   Int_t           Muon1_nPixelHits[kMaxMuon1];   //[Muon1_]
   Float_t         Muon1_trackImpactPar[kMaxMuon1];   //[Muon1_]
   Bool_t          Muon1_isLooseMuon[kMaxMuon1];   //[Muon1_]
   Bool_t          Muon1_isTightMuon[kMaxMuon1];   //[Muon1_]
   Int_t           Muon1_genMatch_index[kMaxMuon1];   //[Muon1_]
   Float_t         Muon1_genMatch_energy[kMaxMuon1];   //[Muon1_]
   Float_t         Muon1_genMatch_pt[kMaxMuon1];   //[Muon1_]
   Float_t         Muon1_genMatch_eta[kMaxMuon1];   //[Muon1_]
   Float_t         Muon1_genMatch_phi[kMaxMuon1];   //[Muon1_]
   Float_t         Muon1_genMatch_mass[kMaxMuon1];   //[Muon1_]
   Float_t         Muon1_genMatch_Vx[kMaxMuon1];   //[Muon1_]
   Float_t         Muon1_genMatch_Vy[kMaxMuon1];   //[Muon1_]
   Float_t         Muon1_genMatch_Vz[kMaxMuon1];   //[Muon1_]
   Int_t           Muon1_genMatch_status[kMaxMuon1];   //[Muon1_]
   Int_t           Muon1_genMatch_id[kMaxMuon1];   //[Muon1_]
   Int_t           Muon1_genMatch_statusMother[kMaxMuon1];   //[Muon1_]
   Int_t           Muon1_genMatch_idMother[kMaxMuon1];   //[Muon1_]
   Int_t           Muon1_genMatch_indexMother[kMaxMuon1];   //[Muon1_]
   Int_t           Muon2_;
   Int_t           Muon2_index[kMaxMuon2];   //[Muon2_]
   Float_t         Muon2_energy[kMaxMuon2];   //[Muon2_]
   Float_t         Muon2_pt[kMaxMuon2];   //[Muon2_]
   Float_t         Muon2_eta[kMaxMuon2];   //[Muon2_]
   Float_t         Muon2_phi[kMaxMuon2];   //[Muon2_]
   Int_t           Muon2_charge[kMaxMuon2];   //[Muon2_]
   Float_t         Muon2_combinedIso[kMaxMuon2];   //[Muon2_]
   Float_t         Muon2_emIso[kMaxMuon2];   //[Muon2_]
   Float_t         Muon2_hadIso[kMaxMuon2];   //[Muon2_]
   Float_t         Muon2_trkIso[kMaxMuon2];   //[Muon2_]
   Bool_t          Muon2_isGlobalMuon[kMaxMuon2];   //[Muon2_]
   Bool_t          Muon2_isTrackerMuon[kMaxMuon2];   //[Muon2_]
   Bool_t          Muon2_isPromptMuon[kMaxMuon2];   //[Muon2_]
   Int_t           Muon2_nTrackHits[kMaxMuon2];   //[Muon2_]
   Int_t           Muon2_nPixelHits[kMaxMuon2];   //[Muon2_]
   Float_t         Muon2_trackImpactPar[kMaxMuon2];   //[Muon2_]
   Bool_t          Muon2_isLooseMuon[kMaxMuon2];   //[Muon2_]
   Bool_t          Muon2_isTightMuon[kMaxMuon2];   //[Muon2_]
   Int_t           Muon2_genMatch_index[kMaxMuon2];   //[Muon2_]
   Float_t         Muon2_genMatch_energy[kMaxMuon2];   //[Muon2_]
   Float_t         Muon2_genMatch_pt[kMaxMuon2];   //[Muon2_]
   Float_t         Muon2_genMatch_eta[kMaxMuon2];   //[Muon2_]
   Float_t         Muon2_genMatch_phi[kMaxMuon2];   //[Muon2_]
   Float_t         Muon2_genMatch_mass[kMaxMuon2];   //[Muon2_]
   Float_t         Muon2_genMatch_Vx[kMaxMuon2];   //[Muon2_]
   Float_t         Muon2_genMatch_Vy[kMaxMuon2];   //[Muon2_]
   Float_t         Muon2_genMatch_Vz[kMaxMuon2];   //[Muon2_]
   Int_t           Muon2_genMatch_status[kMaxMuon2];   //[Muon2_]
   Int_t           Muon2_genMatch_id[kMaxMuon2];   //[Muon2_]
   Int_t           Muon2_genMatch_statusMother[kMaxMuon2];   //[Muon2_]
   Int_t           Muon2_genMatch_idMother[kMaxMuon2];   //[Muon2_]
   Int_t           Muon2_genMatch_indexMother[kMaxMuon2];   //[Muon2_]
   Int_t           Photon_;
   Int_t           Photon_index[kMaxPhoton];   //[Photon_]
   Float_t         Photon_energy[kMaxPhoton];   //[Photon_]
   Float_t         Photon_eta[kMaxPhoton];   //[Photon_]
   Float_t         Photon_phi[kMaxPhoton];   //[Photon_]
   Float_t         Photon_correctedEnergy[kMaxPhoton];   //[Photon_]
   Float_t         Photon_correctedEnergyError[kMaxPhoton];   //[Photon_]
   Float_t         Photon_scaledEnergy[kMaxPhoton];   //[Photon_]
   Float_t         Photon_scaledEnergyError[kMaxPhoton];   //[Photon_]
   Float_t         Photon_finalEnergy[kMaxPhoton];   //[Photon_]
   Float_t         Photon_finalEnergyError[kMaxPhoton];   //[Photon_]
   Float_t         Photon_dEoE[kMaxPhoton];   //[Photon_]
   Float_t         Photon_dEoEErr[kMaxPhoton];   //[Photon_]
   Int_t           Photon_SC_BCSeed_index[kMaxPhoton];   //[Photon_]
   Float_t         Photon_SC_BCSeed_energy[kMaxPhoton];   //[Photon_]
   Float_t         Photon_SC_BCSeed_eta[kMaxPhoton];   //[Photon_]
   Float_t         Photon_SC_BCSeed_phi[kMaxPhoton];   //[Photon_]
   Float_t         Photon_SC_BCSeed_e3x3[kMaxPhoton];   //[Photon_]
   Float_t         Photon_SC_BCSeed_e5x5[kMaxPhoton];   //[Photon_]
   Float_t         Photon_SC_BCSeed_eTop[kMaxPhoton];   //[Photon_]
   Float_t         Photon_SC_BCSeed_eLeft[kMaxPhoton];   //[Photon_]
   Float_t         Photon_SC_BCSeed_eRight[kMaxPhoton];   //[Photon_]
   Float_t         Photon_SC_BCSeed_eBottom[kMaxPhoton];   //[Photon_]
   Float_t         Photon_SC_BCSeed_eMax[kMaxPhoton];   //[Photon_]
   Float_t         Photon_SC_BCSeed_e2nd[kMaxPhoton];   //[Photon_]
   Float_t         Photon_SC_BCSeed_e2x5Max[kMaxPhoton];   //[Photon_]
   Float_t         Photon_SC_BCSeed_e2x5Left[kMaxPhoton];   //[Photon_]
   Float_t         Photon_SC_BCSeed_e2x5Right[kMaxPhoton];   //[Photon_]
   Float_t         Photon_SC_BCSeed_e2x5Top[kMaxPhoton];   //[Photon_]
   Float_t         Photon_SC_BCSeed_e2x5Bottom[kMaxPhoton];   //[Photon_]
   Float_t         Photon_SC_BCSeed_etaCrystal[kMaxPhoton];   //[Photon_]
   Float_t         Photon_SC_BCSeed_phiCrystal[kMaxPhoton];   //[Photon_]
   Int_t           Photon_SC_BCSeed_iEta[kMaxPhoton];   //[Photon_]
   Int_t           Photon_SC_BCSeed_iPhi[kMaxPhoton];   //[Photon_]
   Float_t         Photon_SC_BCSeed_thetaTilt[kMaxPhoton];   //[Photon_]
   Float_t         Photon_SC_BCSeed_phiTilt[kMaxPhoton];   //[Photon_]
   Float_t         Photon_SC_BCSeed_sigmaIEtaIEta[kMaxPhoton];   //[Photon_]
   Float_t         Photon_SC_BCSeed_sigmaIEtaIPhi[kMaxPhoton];   //[Photon_]
   Float_t         Photon_SC_BCSeed_sigmaIPhiIPhi[kMaxPhoton];   //[Photon_]
   Int_t           Photon_SC_nBCs[kMaxPhoton];   //[Photon_]
 //vector<VecbosBC> Photon_SC_basicClusters[kMaxPhoton];
   Int_t           Photon_SC_index[kMaxPhoton];   //[Photon_]
   Float_t         Photon_SC_energy[kMaxPhoton];   //[Photon_]
   Float_t         Photon_SC_esEnergy[kMaxPhoton];   //[Photon_]
   Float_t         Photon_SC_eta[kMaxPhoton];   //[Photon_]
   Float_t         Photon_SC_phi[kMaxPhoton];   //[Photon_]
   Float_t         Photon_SC_e3x3[kMaxPhoton];   //[Photon_]
   Float_t         Photon_SC_e5x5[kMaxPhoton];   //[Photon_]
   Float_t         Photon_SC_e3x1[kMaxPhoton];   //[Photon_]
   Float_t         Photon_SC_e1x3[kMaxPhoton];   //[Photon_]
   Float_t         Photon_SC_e4x4[kMaxPhoton];   //[Photon_]
   Float_t         Photon_SC_eMax[kMaxPhoton];   //[Photon_]
   Float_t         Photon_SC_e2x2[kMaxPhoton];   //[Photon_]
   Float_t         Photon_SC_e2nd[kMaxPhoton];   //[Photon_]
   Float_t         Photon_SC_e1x5[kMaxPhoton];   //[Photon_]
   Float_t         Photon_SC_e2x5Max[kMaxPhoton];   //[Photon_]
   Float_t         Photon_SC_e2x5Left[kMaxPhoton];   //[Photon_]
   Float_t         Photon_SC_e2x5Right[kMaxPhoton];   //[Photon_]
   Float_t         Photon_SC_e2x5Top[kMaxPhoton];   //[Photon_]
   Float_t         Photon_SC_e2x5Bottom[kMaxPhoton];   //[Photon_]
   Float_t         Photon_SC_eLeft[kMaxPhoton];   //[Photon_]
   Float_t         Photon_SC_eRight[kMaxPhoton];   //[Photon_]
   Float_t         Photon_SC_eTop[kMaxPhoton];   //[Photon_]
   Float_t         Photon_SC_eBottom[kMaxPhoton];   //[Photon_]
   Float_t         Photon_SC_sigmaIEtaIEta[kMaxPhoton];   //[Photon_]
   Float_t         Photon_SC_sigmaIEtaIPhi[kMaxPhoton];   //[Photon_]
   Float_t         Photon_SC_sigmaIPhiIPhi[kMaxPhoton];   //[Photon_]
   Float_t         Photon_SC_esEffSigRR[kMaxPhoton];   //[Photon_]
   UInt_t          Photon_SC_CaloPos_fUniqueID[kMaxPhoton];   //[Photon_]
   UInt_t          Photon_SC_CaloPos_fBits[kMaxPhoton];   //[Photon_]
   Double_t        Photon_SC_CaloPos_fX[kMaxPhoton];   //[Photon_]
   Double_t        Photon_SC_CaloPos_fY[kMaxPhoton];   //[Photon_]
   Double_t        Photon_SC_CaloPos_fZ[kMaxPhoton];   //[Photon_]
   Float_t         Photon_SC_rawE[kMaxPhoton];   //[Photon_]
   Float_t         Photon_SC_phiWidth[kMaxPhoton];   //[Photon_]
   Float_t         Photon_SC_etaWidth[kMaxPhoton];   //[Photon_]
   Float_t         Photon_SC_HoverE[kMaxPhoton];   //[Photon_]
   Float_t         Photon_SC_r9[kMaxPhoton];   //[Photon_]
   Float_t         Photon_SC_s4ratio[kMaxPhoton];   //[Photon_]
   Int_t           Photon_PFSC_BCSeed_index[kMaxPhoton];   //[Photon_]
   Float_t         Photon_PFSC_BCSeed_energy[kMaxPhoton];   //[Photon_]
   Float_t         Photon_PFSC_BCSeed_eta[kMaxPhoton];   //[Photon_]
   Float_t         Photon_PFSC_BCSeed_phi[kMaxPhoton];   //[Photon_]
   Float_t         Photon_PFSC_BCSeed_e3x3[kMaxPhoton];   //[Photon_]
   Float_t         Photon_PFSC_BCSeed_e5x5[kMaxPhoton];   //[Photon_]
   Float_t         Photon_PFSC_BCSeed_eTop[kMaxPhoton];   //[Photon_]
   Float_t         Photon_PFSC_BCSeed_eLeft[kMaxPhoton];   //[Photon_]
   Float_t         Photon_PFSC_BCSeed_eRight[kMaxPhoton];   //[Photon_]
   Float_t         Photon_PFSC_BCSeed_eBottom[kMaxPhoton];   //[Photon_]
   Float_t         Photon_PFSC_BCSeed_eMax[kMaxPhoton];   //[Photon_]
   Float_t         Photon_PFSC_BCSeed_e2nd[kMaxPhoton];   //[Photon_]
   Float_t         Photon_PFSC_BCSeed_e2x5Max[kMaxPhoton];   //[Photon_]
   Float_t         Photon_PFSC_BCSeed_e2x5Left[kMaxPhoton];   //[Photon_]
   Float_t         Photon_PFSC_BCSeed_e2x5Right[kMaxPhoton];   //[Photon_]
   Float_t         Photon_PFSC_BCSeed_e2x5Top[kMaxPhoton];   //[Photon_]
   Float_t         Photon_PFSC_BCSeed_e2x5Bottom[kMaxPhoton];   //[Photon_]
   Float_t         Photon_PFSC_BCSeed_etaCrystal[kMaxPhoton];   //[Photon_]
   Float_t         Photon_PFSC_BCSeed_phiCrystal[kMaxPhoton];   //[Photon_]
   Int_t           Photon_PFSC_BCSeed_iEta[kMaxPhoton];   //[Photon_]
   Int_t           Photon_PFSC_BCSeed_iPhi[kMaxPhoton];   //[Photon_]
   Float_t         Photon_PFSC_BCSeed_thetaTilt[kMaxPhoton];   //[Photon_]
   Float_t         Photon_PFSC_BCSeed_phiTilt[kMaxPhoton];   //[Photon_]
   Float_t         Photon_PFSC_BCSeed_sigmaIEtaIEta[kMaxPhoton];   //[Photon_]
   Float_t         Photon_PFSC_BCSeed_sigmaIEtaIPhi[kMaxPhoton];   //[Photon_]
   Float_t         Photon_PFSC_BCSeed_sigmaIPhiIPhi[kMaxPhoton];   //[Photon_]
   Int_t           Photon_PFSC_nBCs[kMaxPhoton];   //[Photon_]
 //vector<VecbosBC> Photon_PFSC_basicClusters[kMaxPhoton];
   Int_t           Photon_PFSC_index[kMaxPhoton];   //[Photon_]
   Float_t         Photon_PFSC_energy[kMaxPhoton];   //[Photon_]
   Float_t         Photon_PFSC_esEnergy[kMaxPhoton];   //[Photon_]
   Float_t         Photon_PFSC_eta[kMaxPhoton];   //[Photon_]
   Float_t         Photon_PFSC_phi[kMaxPhoton];   //[Photon_]
   Float_t         Photon_PFSC_e3x3[kMaxPhoton];   //[Photon_]
   Float_t         Photon_PFSC_e5x5[kMaxPhoton];   //[Photon_]
   Float_t         Photon_PFSC_e3x1[kMaxPhoton];   //[Photon_]
   Float_t         Photon_PFSC_e1x3[kMaxPhoton];   //[Photon_]
   Float_t         Photon_PFSC_e4x4[kMaxPhoton];   //[Photon_]
   Float_t         Photon_PFSC_eMax[kMaxPhoton];   //[Photon_]
   Float_t         Photon_PFSC_e2x2[kMaxPhoton];   //[Photon_]
   Float_t         Photon_PFSC_e2nd[kMaxPhoton];   //[Photon_]
   Float_t         Photon_PFSC_e1x5[kMaxPhoton];   //[Photon_]
   Float_t         Photon_PFSC_e2x5Max[kMaxPhoton];   //[Photon_]
   Float_t         Photon_PFSC_e2x5Left[kMaxPhoton];   //[Photon_]
   Float_t         Photon_PFSC_e2x5Right[kMaxPhoton];   //[Photon_]
   Float_t         Photon_PFSC_e2x5Top[kMaxPhoton];   //[Photon_]
   Float_t         Photon_PFSC_e2x5Bottom[kMaxPhoton];   //[Photon_]
   Float_t         Photon_PFSC_eLeft[kMaxPhoton];   //[Photon_]
   Float_t         Photon_PFSC_eRight[kMaxPhoton];   //[Photon_]
   Float_t         Photon_PFSC_eTop[kMaxPhoton];   //[Photon_]
   Float_t         Photon_PFSC_eBottom[kMaxPhoton];   //[Photon_]
   Float_t         Photon_PFSC_sigmaIEtaIEta[kMaxPhoton];   //[Photon_]
   Float_t         Photon_PFSC_sigmaIEtaIPhi[kMaxPhoton];   //[Photon_]
   Float_t         Photon_PFSC_sigmaIPhiIPhi[kMaxPhoton];   //[Photon_]
   Float_t         Photon_PFSC_esEffSigRR[kMaxPhoton];   //[Photon_]
   UInt_t          Photon_PFSC_CaloPos_fUniqueID[kMaxPhoton];   //[Photon_]
   UInt_t          Photon_PFSC_CaloPos_fBits[kMaxPhoton];   //[Photon_]
   Double_t        Photon_PFSC_CaloPos_fX[kMaxPhoton];   //[Photon_]
   Double_t        Photon_PFSC_CaloPos_fY[kMaxPhoton];   //[Photon_]
   Double_t        Photon_PFSC_CaloPos_fZ[kMaxPhoton];   //[Photon_]
   Float_t         Photon_PFSC_rawE[kMaxPhoton];   //[Photon_]
   Float_t         Photon_PFSC_phiWidth[kMaxPhoton];   //[Photon_]
   Float_t         Photon_PFSC_etaWidth[kMaxPhoton];   //[Photon_]
   Float_t         Photon_PFSC_HoverE[kMaxPhoton];   //[Photon_]
   Float_t         Photon_PFSC_r9[kMaxPhoton];   //[Photon_]
   Float_t         Photon_PFSC_s4ratio[kMaxPhoton];   //[Photon_]
 //vector<VecbosPFBC> Photon_PFSC_pfClusters[kMaxPhoton];
   Float_t         Photon_HoverE[kMaxPhoton];   //[Photon_]
   Float_t         Photon_HTowOverE[kMaxPhoton];   //[Photon_]
   Int_t           Photon_hasPixel[kMaxPhoton];   //[Photon_]
   UInt_t          Photon_CaloPos_fUniqueID[kMaxPhoton];   //[Photon_]
   UInt_t          Photon_CaloPos_fBits[kMaxPhoton];   //[Photon_]
   Double_t        Photon_CaloPos_fX[kMaxPhoton];   //[Photon_]
   Double_t        Photon_CaloPos_fY[kMaxPhoton];   //[Photon_]
   Double_t        Photon_CaloPos_fZ[kMaxPhoton];   //[Photon_]
   Int_t           Photon_conversion_index[kMaxPhoton];   //[Photon_]
   UInt_t          Photon_conversion_pPair_fUniqueID[kMaxPhoton];   //[Photon_]
   UInt_t          Photon_conversion_pPair_fBits[kMaxPhoton];   //[Photon_]
   Double_t        Photon_conversion_pPair_fX[kMaxPhoton];   //[Photon_]
   Double_t        Photon_conversion_pPair_fY[kMaxPhoton];   //[Photon_]
   Double_t        Photon_conversion_pPair_fZ[kMaxPhoton];   //[Photon_]
   UInt_t          Photon_conversion_pRefittedPair_fUniqueID[kMaxPhoton];   //[Photon_]
   UInt_t          Photon_conversion_pRefittedPair_fBits[kMaxPhoton];   //[Photon_]
   Double_t        Photon_conversion_pRefittedPair_fX[kMaxPhoton];   //[Photon_]
   Double_t        Photon_conversion_pRefittedPair_fY[kMaxPhoton];   //[Photon_]
   Double_t        Photon_conversion_pRefittedPair_fZ[kMaxPhoton];   //[Photon_]
   UInt_t          Photon_conversion_p4RefittedPair_fUniqueID[kMaxPhoton];   //[Photon_]
   UInt_t          Photon_conversion_p4RefittedPair_fBits[kMaxPhoton];   //[Photon_]
   UInt_t          Photon_conversion_p4RefittedPair_fP_fUniqueID[kMaxPhoton];   //[Photon_]
   UInt_t          Photon_conversion_p4RefittedPair_fP_fBits[kMaxPhoton];   //[Photon_]
   Double_t        Photon_conversion_p4RefittedPair_fP_fX[kMaxPhoton];   //[Photon_]
   Double_t        Photon_conversion_p4RefittedPair_fP_fY[kMaxPhoton];   //[Photon_]
   Double_t        Photon_conversion_p4RefittedPair_fP_fZ[kMaxPhoton];   //[Photon_]
   Double_t        Photon_conversion_p4RefittedPair_fE[kMaxPhoton];   //[Photon_]
   UInt_t          Photon_conversion_CaloPos_fUniqueID[kMaxPhoton];   //[Photon_]
   UInt_t          Photon_conversion_CaloPos_fBits[kMaxPhoton];   //[Photon_]
   Double_t        Photon_conversion_CaloPos_fX[kMaxPhoton];   //[Photon_]
   Double_t        Photon_conversion_CaloPos_fY[kMaxPhoton];   //[Photon_]
   Double_t        Photon_conversion_CaloPos_fZ[kMaxPhoton];   //[Photon_]
   Float_t         Photon_conversion_eOverP[kMaxPhoton];   //[Photon_]
   UInt_t          Photon_conversion_vtx_fUniqueID[kMaxPhoton];   //[Photon_]
   UInt_t          Photon_conversion_vtx_fBits[kMaxPhoton];   //[Photon_]
   Double_t        Photon_conversion_vtx_fX[kMaxPhoton];   //[Photon_]
   Double_t        Photon_conversion_vtx_fY[kMaxPhoton];   //[Photon_]
   Double_t        Photon_conversion_vtx_fZ[kMaxPhoton];   //[Photon_]
   Float_t         Photon_conversion_vtxChi2[kMaxPhoton];   //[Photon_]
   Float_t         Photon_conversion_vtxChi2Prob[kMaxPhoton];   //[Photon_]
   Bool_t          Photon_conversion_vtxIsValid[kMaxPhoton];   //[Photon_]
   Int_t           Photon_conversion_vtxNTracks[kMaxPhoton];   //[Photon_]
   Float_t         Photon_conversion_vtxMVA[kMaxPhoton];   //[Photon_]
   Float_t         Photon_conversion_trk1Dz[kMaxPhoton];   //[Photon_]
   Float_t         Photon_conversion_trk1DzError[kMaxPhoton];   //[Photon_]
   Float_t         Photon_conversion_trk1Charge[kMaxPhoton];   //[Photon_]
   Float_t         Photon_conversion_trk1Algo[kMaxPhoton];   //[Photon_]
   Float_t         Photon_conversion_trk1D0[kMaxPhoton];   //[Photon_]
   Float_t         Photon_conversion_trk1Pout[kMaxPhoton];   //[Photon_]
   Float_t         Photon_conversion_trk1Pin[kMaxPhoton];   //[Photon_]
   Float_t         Photon_conversion_trk2Dz[kMaxPhoton];   //[Photon_]
   Float_t         Photon_conversion_trk2DzError[kMaxPhoton];   //[Photon_]
   Float_t         Photon_conversion_trk2Charge[kMaxPhoton];   //[Photon_]
   Float_t         Photon_conversion_trk2Algo[kMaxPhoton];   //[Photon_]
   Float_t         Photon_conversion_trk2D0[kMaxPhoton];   //[Photon_]
   Float_t         Photon_conversion_trk2Pout[kMaxPhoton];   //[Photon_]
   Float_t         Photon_conversion_trk2Pin[kMaxPhoton];   //[Photon_]
   Float_t         Photon_dr03EcalRecHitSumEtCone[kMaxPhoton];   //[Photon_]
   Float_t         Photon_dr03HcalTowerSumEtCone[kMaxPhoton];   //[Photon_]
   Float_t         Photon_dr03TrkSumPtCone[kMaxPhoton];   //[Photon_]
   Float_t         Photon_dr03TrkSumPtHollowCone[kMaxPhoton];   //[Photon_]
   Float_t         Photon_dr04EcalRecHitSumEtCone[kMaxPhoton];   //[Photon_]
   Float_t         Photon_dr04HcalTowerSumEtCone[kMaxPhoton];   //[Photon_]
   Float_t         Photon_dr04TrkSumPtCone[kMaxPhoton];   //[Photon_]
   Float_t         Photon_dr04TrkSumPtHollowCone[kMaxPhoton];   //[Photon_]
   Int_t           Photon_nPV[kMaxPhoton];   //[Photon_]
   Float_t         Photon_dr02TrackIso[kMaxPhoton][100];   //[Photon_]
   Float_t         Photon_dr03TrackIso[kMaxPhoton][100];   //[Photon_]
   Float_t         Photon_dr04TrackIso[kMaxPhoton][100];   //[Photon_]
   Float_t         Photon_dr01ChargedHadronPFIso[kMaxPhoton][100];   //[Photon_]
   Float_t         Photon_dr02ChargedHadronPFIso[kMaxPhoton][100];   //[Photon_]
   Float_t         Photon_dr03ChargedHadronPFIso[kMaxPhoton][100];   //[Photon_]
   Float_t         Photon_dr04ChargedHadronPFIso[kMaxPhoton][100];   //[Photon_]
   Float_t         Photon_dr05ChargedHadronPFIso[kMaxPhoton][100];   //[Photon_]
   Float_t         Photon_dr06ChargedHadronPFIso[kMaxPhoton][100];   //[Photon_]
   Float_t         Photon_dr01NeutralHadronPFIso[kMaxPhoton];   //[Photon_]
   Float_t         Photon_dr02NeutralHadronPFIso[kMaxPhoton];   //[Photon_]
   Float_t         Photon_dr03NeutralHadronPFIso[kMaxPhoton];   //[Photon_]
   Float_t         Photon_dr04NeutralHadronPFIso[kMaxPhoton];   //[Photon_]
   Float_t         Photon_dr05NeutralHadronPFIso[kMaxPhoton];   //[Photon_]
   Float_t         Photon_dr06NeutralHadronPFIso[kMaxPhoton];   //[Photon_]
   Float_t         Photon_dr01PhotonPFIso[kMaxPhoton];   //[Photon_]
   Float_t         Photon_dr02PhotonPFIso[kMaxPhoton];   //[Photon_]
   Float_t         Photon_dr03PhotonPFIso[kMaxPhoton];   //[Photon_]
   Float_t         Photon_dr04PhotonPFIso[kMaxPhoton];   //[Photon_]
   Float_t         Photon_dr05PhotonPFIso[kMaxPhoton];   //[Photon_]
   Float_t         Photon_dr06PhotonPFIso[kMaxPhoton];   //[Photon_]
   Int_t           Photon_genMatch_index[kMaxPhoton];   //[Photon_]
   Float_t         Photon_genMatch_energy[kMaxPhoton];   //[Photon_]
   Float_t         Photon_genMatch_pt[kMaxPhoton];   //[Photon_]
   Float_t         Photon_genMatch_eta[kMaxPhoton];   //[Photon_]
   Float_t         Photon_genMatch_phi[kMaxPhoton];   //[Photon_]
   Float_t         Photon_genMatch_mass[kMaxPhoton];   //[Photon_]
   Float_t         Photon_genMatch_Vx[kMaxPhoton];   //[Photon_]
   Float_t         Photon_genMatch_Vy[kMaxPhoton];   //[Photon_]
   Float_t         Photon_genMatch_Vz[kMaxPhoton];   //[Photon_]
   Int_t           Photon_genMatch_status[kMaxPhoton];   //[Photon_]
   Int_t           Photon_genMatch_id[kMaxPhoton];   //[Photon_]
   Int_t           Photon_genMatch_statusMother[kMaxPhoton];   //[Photon_]
   Int_t           Photon_genMatch_idMother[kMaxPhoton];   //[Photon_]
   Int_t           Photon_genMatch_indexMother[kMaxPhoton];   //[Photon_]
   Float_t         isosumoetPho[9];   //[nMuMuG]
   Float_t         mvaPho[9];   //[nMuMuG]

   // List of branches
   TBranch        *b_runNumber;   //!
   TBranch        *b_evtNumber;   //!
   TBranch        *b_nVtx;   //!
   TBranch        *b_rho;   //!
   TBranch        *b_nMuMuG;   //!
   TBranch        *b_massMuMuGamma;   //!
   TBranch        *b_massMuMuRegGamma;   //!
   TBranch        *b_massMuMuScaleGamma;   //!
   TBranch        *b_massMuMuGenGamma;   //!
   TBranch        *b_massMuMu;   //!
   TBranch        *b_puWeight;   //!
   TBranch        *b_Muon1_;   //!
   TBranch        *b_Muon1_index;   //!
   TBranch        *b_Muon1_energy;   //!
   TBranch        *b_Muon1_pt;   //!
   TBranch        *b_Muon1_eta;   //!
   TBranch        *b_Muon1_phi;   //!
   TBranch        *b_Muon1_charge;   //!
   TBranch        *b_Muon1_combinedIso;   //!
   TBranch        *b_Muon1_emIso;   //!
   TBranch        *b_Muon1_hadIso;   //!
   TBranch        *b_Muon1_trkIso;   //!
   TBranch        *b_Muon1_isGlobalMuon;   //!
   TBranch        *b_Muon1_isTrackerMuon;   //!
   TBranch        *b_Muon1_isPromptMuon;   //!
   TBranch        *b_Muon1_nTrackHits;   //!
   TBranch        *b_Muon1_nPixelHits;   //!
   TBranch        *b_Muon1_trackImpactPar;   //!
   TBranch        *b_Muon1_isLooseMuon;   //!
   TBranch        *b_Muon1_isTightMuon;   //!
   TBranch        *b_Muon1_genMatch_index;   //!
   TBranch        *b_Muon1_genMatch_energy;   //!
   TBranch        *b_Muon1_genMatch_pt;   //!
   TBranch        *b_Muon1_genMatch_eta;   //!
   TBranch        *b_Muon1_genMatch_phi;   //!
   TBranch        *b_Muon1_genMatch_mass;   //!
   TBranch        *b_Muon1_genMatch_Vx;   //!
   TBranch        *b_Muon1_genMatch_Vy;   //!
   TBranch        *b_Muon1_genMatch_Vz;   //!
   TBranch        *b_Muon1_genMatch_status;   //!
   TBranch        *b_Muon1_genMatch_id;   //!
   TBranch        *b_Muon1_genMatch_statusMother;   //!
   TBranch        *b_Muon1_genMatch_idMother;   //!
   TBranch        *b_Muon1_genMatch_indexMother;   //!
   TBranch        *b_Muon2_;   //!
   TBranch        *b_Muon2_index;   //!
   TBranch        *b_Muon2_energy;   //!
   TBranch        *b_Muon2_pt;   //!
   TBranch        *b_Muon2_eta;   //!
   TBranch        *b_Muon2_phi;   //!
   TBranch        *b_Muon2_charge;   //!
   TBranch        *b_Muon2_combinedIso;   //!
   TBranch        *b_Muon2_emIso;   //!
   TBranch        *b_Muon2_hadIso;   //!
   TBranch        *b_Muon2_trkIso;   //!
   TBranch        *b_Muon2_isGlobalMuon;   //!
   TBranch        *b_Muon2_isTrackerMuon;   //!
   TBranch        *b_Muon2_isPromptMuon;   //!
   TBranch        *b_Muon2_nTrackHits;   //!
   TBranch        *b_Muon2_nPixelHits;   //!
   TBranch        *b_Muon2_trackImpactPar;   //!
   TBranch        *b_Muon2_isLooseMuon;   //!
   TBranch        *b_Muon2_isTightMuon;   //!
   TBranch        *b_Muon2_genMatch_index;   //!
   TBranch        *b_Muon2_genMatch_energy;   //!
   TBranch        *b_Muon2_genMatch_pt;   //!
   TBranch        *b_Muon2_genMatch_eta;   //!
   TBranch        *b_Muon2_genMatch_phi;   //!
   TBranch        *b_Muon2_genMatch_mass;   //!
   TBranch        *b_Muon2_genMatch_Vx;   //!
   TBranch        *b_Muon2_genMatch_Vy;   //!
   TBranch        *b_Muon2_genMatch_Vz;   //!
   TBranch        *b_Muon2_genMatch_status;   //!
   TBranch        *b_Muon2_genMatch_id;   //!
   TBranch        *b_Muon2_genMatch_statusMother;   //!
   TBranch        *b_Muon2_genMatch_idMother;   //!
   TBranch        *b_Muon2_genMatch_indexMother;   //!
   TBranch        *b_Photon_;   //!
   TBranch        *b_Photon_index;   //!
   TBranch        *b_Photon_energy;   //!
   TBranch        *b_Photon_eta;   //!
   TBranch        *b_Photon_phi;   //!
   TBranch        *b_Photon_correctedEnergy;   //!
   TBranch        *b_Photon_correctedEnergyError;   //!
   TBranch        *b_Photon_scaledEnergy;   //!
   TBranch        *b_Photon_scaledEnergyError;   //!
   TBranch        *b_Photon_finalEnergy;   //!
   TBranch        *b_Photon_finalEnergyError;   //!
   TBranch        *b_Photon_dEoE;   //!
   TBranch        *b_Photon_dEoEErr;   //!
   TBranch        *b_Photon_SC_BCSeed_index;   //!
   TBranch        *b_Photon_SC_BCSeed_energy;   //!
   TBranch        *b_Photon_SC_BCSeed_eta;   //!
   TBranch        *b_Photon_SC_BCSeed_phi;   //!
   TBranch        *b_Photon_SC_BCSeed_e3x3;   //!
   TBranch        *b_Photon_SC_BCSeed_e5x5;   //!
   TBranch        *b_Photon_SC_BCSeed_eTop;   //!
   TBranch        *b_Photon_SC_BCSeed_eLeft;   //!
   TBranch        *b_Photon_SC_BCSeed_eRight;   //!
   TBranch        *b_Photon_SC_BCSeed_eBottom;   //!
   TBranch        *b_Photon_SC_BCSeed_eMax;   //!
   TBranch        *b_Photon_SC_BCSeed_e2nd;   //!
   TBranch        *b_Photon_SC_BCSeed_e2x5Max;   //!
   TBranch        *b_Photon_SC_BCSeed_e2x5Left;   //!
   TBranch        *b_Photon_SC_BCSeed_e2x5Right;   //!
   TBranch        *b_Photon_SC_BCSeed_e2x5Top;   //!
   TBranch        *b_Photon_SC_BCSeed_e2x5Bottom;   //!
   TBranch        *b_Photon_SC_BCSeed_etaCrystal;   //!
   TBranch        *b_Photon_SC_BCSeed_phiCrystal;   //!
   TBranch        *b_Photon_SC_BCSeed_iEta;   //!
   TBranch        *b_Photon_SC_BCSeed_iPhi;   //!
   TBranch        *b_Photon_SC_BCSeed_thetaTilt;   //!
   TBranch        *b_Photon_SC_BCSeed_phiTilt;   //!
   TBranch        *b_Photon_SC_BCSeed_sigmaIEtaIEta;   //!
   TBranch        *b_Photon_SC_BCSeed_sigmaIEtaIPhi;   //!
   TBranch        *b_Photon_SC_BCSeed_sigmaIPhiIPhi;   //!
   TBranch        *b_Photon_SC_nBCs;   //!
   TBranch        *b_Photon_SC_index;   //!
   TBranch        *b_Photon_SC_energy;   //!
   TBranch        *b_Photon_SC_esEnergy;   //!
   TBranch        *b_Photon_SC_eta;   //!
   TBranch        *b_Photon_SC_phi;   //!
   TBranch        *b_Photon_SC_e3x3;   //!
   TBranch        *b_Photon_SC_e5x5;   //!
   TBranch        *b_Photon_SC_e3x1;   //!
   TBranch        *b_Photon_SC_e1x3;   //!
   TBranch        *b_Photon_SC_e4x4;   //!
   TBranch        *b_Photon_SC_eMax;   //!
   TBranch        *b_Photon_SC_e2x2;   //!
   TBranch        *b_Photon_SC_e2nd;   //!
   TBranch        *b_Photon_SC_e1x5;   //!
   TBranch        *b_Photon_SC_e2x5Max;   //!
   TBranch        *b_Photon_SC_e2x5Left;   //!
   TBranch        *b_Photon_SC_e2x5Right;   //!
   TBranch        *b_Photon_SC_e2x5Top;   //!
   TBranch        *b_Photon_SC_e2x5Bottom;   //!
   TBranch        *b_Photon_SC_eLeft;   //!
   TBranch        *b_Photon_SC_eRight;   //!
   TBranch        *b_Photon_SC_eTop;   //!
   TBranch        *b_Photon_SC_eBottom;   //!
   TBranch        *b_Photon_SC_sigmaIEtaIEta;   //!
   TBranch        *b_Photon_SC_sigmaIEtaIPhi;   //!
   TBranch        *b_Photon_SC_sigmaIPhiIPhi;   //!
   TBranch        *b_Photon_SC_esEffSigRR;   //!
   TBranch        *b_Photon_SC_CaloPos_fUniqueID;   //!
   TBranch        *b_Photon_SC_CaloPos_fBits;   //!
   TBranch        *b_Photon_SC_CaloPos_fX;   //!
   TBranch        *b_Photon_SC_CaloPos_fY;   //!
   TBranch        *b_Photon_SC_CaloPos_fZ;   //!
   TBranch        *b_Photon_SC_rawE;   //!
   TBranch        *b_Photon_SC_phiWidth;   //!
   TBranch        *b_Photon_SC_etaWidth;   //!
   TBranch        *b_Photon_SC_HoverE;   //!
   TBranch        *b_Photon_SC_r9;   //!
   TBranch        *b_Photon_SC_s4ratio;   //!
   TBranch        *b_Photon_PFSC_BCSeed_index;   //!
   TBranch        *b_Photon_PFSC_BCSeed_energy;   //!
   TBranch        *b_Photon_PFSC_BCSeed_eta;   //!
   TBranch        *b_Photon_PFSC_BCSeed_phi;   //!
   TBranch        *b_Photon_PFSC_BCSeed_e3x3;   //!
   TBranch        *b_Photon_PFSC_BCSeed_e5x5;   //!
   TBranch        *b_Photon_PFSC_BCSeed_eTop;   //!
   TBranch        *b_Photon_PFSC_BCSeed_eLeft;   //!
   TBranch        *b_Photon_PFSC_BCSeed_eRight;   //!
   TBranch        *b_Photon_PFSC_BCSeed_eBottom;   //!
   TBranch        *b_Photon_PFSC_BCSeed_eMax;   //!
   TBranch        *b_Photon_PFSC_BCSeed_e2nd;   //!
   TBranch        *b_Photon_PFSC_BCSeed_e2x5Max;   //!
   TBranch        *b_Photon_PFSC_BCSeed_e2x5Left;   //!
   TBranch        *b_Photon_PFSC_BCSeed_e2x5Right;   //!
   TBranch        *b_Photon_PFSC_BCSeed_e2x5Top;   //!
   TBranch        *b_Photon_PFSC_BCSeed_e2x5Bottom;   //!
   TBranch        *b_Photon_PFSC_BCSeed_etaCrystal;   //!
   TBranch        *b_Photon_PFSC_BCSeed_phiCrystal;   //!
   TBranch        *b_Photon_PFSC_BCSeed_iEta;   //!
   TBranch        *b_Photon_PFSC_BCSeed_iPhi;   //!
   TBranch        *b_Photon_PFSC_BCSeed_thetaTilt;   //!
   TBranch        *b_Photon_PFSC_BCSeed_phiTilt;   //!
   TBranch        *b_Photon_PFSC_BCSeed_sigmaIEtaIEta;   //!
   TBranch        *b_Photon_PFSC_BCSeed_sigmaIEtaIPhi;   //!
   TBranch        *b_Photon_PFSC_BCSeed_sigmaIPhiIPhi;   //!
   TBranch        *b_Photon_PFSC_nBCs;   //!
   TBranch        *b_Photon_PFSC_index;   //!
   TBranch        *b_Photon_PFSC_energy;   //!
   TBranch        *b_Photon_PFSC_esEnergy;   //!
   TBranch        *b_Photon_PFSC_eta;   //!
   TBranch        *b_Photon_PFSC_phi;   //!
   TBranch        *b_Photon_PFSC_e3x3;   //!
   TBranch        *b_Photon_PFSC_e5x5;   //!
   TBranch        *b_Photon_PFSC_e3x1;   //!
   TBranch        *b_Photon_PFSC_e1x3;   //!
   TBranch        *b_Photon_PFSC_e4x4;   //!
   TBranch        *b_Photon_PFSC_eMax;   //!
   TBranch        *b_Photon_PFSC_e2x2;   //!
   TBranch        *b_Photon_PFSC_e2nd;   //!
   TBranch        *b_Photon_PFSC_e1x5;   //!
   TBranch        *b_Photon_PFSC_e2x5Max;   //!
   TBranch        *b_Photon_PFSC_e2x5Left;   //!
   TBranch        *b_Photon_PFSC_e2x5Right;   //!
   TBranch        *b_Photon_PFSC_e2x5Top;   //!
   TBranch        *b_Photon_PFSC_e2x5Bottom;   //!
   TBranch        *b_Photon_PFSC_eLeft;   //!
   TBranch        *b_Photon_PFSC_eRight;   //!
   TBranch        *b_Photon_PFSC_eTop;   //!
   TBranch        *b_Photon_PFSC_eBottom;   //!
   TBranch        *b_Photon_PFSC_sigmaIEtaIEta;   //!
   TBranch        *b_Photon_PFSC_sigmaIEtaIPhi;   //!
   TBranch        *b_Photon_PFSC_sigmaIPhiIPhi;   //!
   TBranch        *b_Photon_PFSC_esEffSigRR;   //!
   TBranch        *b_Photon_PFSC_CaloPos_fUniqueID;   //!
   TBranch        *b_Photon_PFSC_CaloPos_fBits;   //!
   TBranch        *b_Photon_PFSC_CaloPos_fX;   //!
   TBranch        *b_Photon_PFSC_CaloPos_fY;   //!
   TBranch        *b_Photon_PFSC_CaloPos_fZ;   //!
   TBranch        *b_Photon_PFSC_rawE;   //!
   TBranch        *b_Photon_PFSC_phiWidth;   //!
   TBranch        *b_Photon_PFSC_etaWidth;   //!
   TBranch        *b_Photon_PFSC_HoverE;   //!
   TBranch        *b_Photon_PFSC_r9;   //!
   TBranch        *b_Photon_PFSC_s4ratio;   //!
   TBranch        *b_Photon_HoverE;   //!
   TBranch        *b_Photon_HTowOverE;   //!
   TBranch        *b_Photon_hasPixel;   //!
   TBranch        *b_Photon_CaloPos_fUniqueID;   //!
   TBranch        *b_Photon_CaloPos_fBits;   //!
   TBranch        *b_Photon_CaloPos_fX;   //!
   TBranch        *b_Photon_CaloPos_fY;   //!
   TBranch        *b_Photon_CaloPos_fZ;   //!
   TBranch        *b_Photon_conversion_index;   //!
   TBranch        *b_Photon_conversion_pPair_fUniqueID;   //!
   TBranch        *b_Photon_conversion_pPair_fBits;   //!
   TBranch        *b_Photon_conversion_pPair_fX;   //!
   TBranch        *b_Photon_conversion_pPair_fY;   //!
   TBranch        *b_Photon_conversion_pPair_fZ;   //!
   TBranch        *b_Photon_conversion_pRefittedPair_fUniqueID;   //!
   TBranch        *b_Photon_conversion_pRefittedPair_fBits;   //!
   TBranch        *b_Photon_conversion_pRefittedPair_fX;   //!
   TBranch        *b_Photon_conversion_pRefittedPair_fY;   //!
   TBranch        *b_Photon_conversion_pRefittedPair_fZ;   //!
   TBranch        *b_Photon_conversion_p4RefittedPair_fUniqueID;   //!
   TBranch        *b_Photon_conversion_p4RefittedPair_fBits;   //!
   TBranch        *b_Photon_conversion_p4RefittedPair_fP_fUniqueID;   //!
   TBranch        *b_Photon_conversion_p4RefittedPair_fP_fBits;   //!
   TBranch        *b_Photon_conversion_p4RefittedPair_fP_fX;   //!
   TBranch        *b_Photon_conversion_p4RefittedPair_fP_fY;   //!
   TBranch        *b_Photon_conversion_p4RefittedPair_fP_fZ;   //!
   TBranch        *b_Photon_conversion_p4RefittedPair_fE;   //!
   TBranch        *b_Photon_conversion_CaloPos_fUniqueID;   //!
   TBranch        *b_Photon_conversion_CaloPos_fBits;   //!
   TBranch        *b_Photon_conversion_CaloPos_fX;   //!
   TBranch        *b_Photon_conversion_CaloPos_fY;   //!
   TBranch        *b_Photon_conversion_CaloPos_fZ;   //!
   TBranch        *b_Photon_conversion_eOverP;   //!
   TBranch        *b_Photon_conversion_vtx_fUniqueID;   //!
   TBranch        *b_Photon_conversion_vtx_fBits;   //!
   TBranch        *b_Photon_conversion_vtx_fX;   //!
   TBranch        *b_Photon_conversion_vtx_fY;   //!
   TBranch        *b_Photon_conversion_vtx_fZ;   //!
   TBranch        *b_Photon_conversion_vtxChi2;   //!
   TBranch        *b_Photon_conversion_vtxChi2Prob;   //!
   TBranch        *b_Photon_conversion_vtxIsValid;   //!
   TBranch        *b_Photon_conversion_vtxNTracks;   //!
   TBranch        *b_Photon_conversion_vtxMVA;   //!
   TBranch        *b_Photon_conversion_trk1Dz;   //!
   TBranch        *b_Photon_conversion_trk1DzError;   //!
   TBranch        *b_Photon_conversion_trk1Charge;   //!
   TBranch        *b_Photon_conversion_trk1Algo;   //!
   TBranch        *b_Photon_conversion_trk1D0;   //!
   TBranch        *b_Photon_conversion_trk1Pout;   //!
   TBranch        *b_Photon_conversion_trk1Pin;   //!
   TBranch        *b_Photon_conversion_trk2Dz;   //!
   TBranch        *b_Photon_conversion_trk2DzError;   //!
   TBranch        *b_Photon_conversion_trk2Charge;   //!
   TBranch        *b_Photon_conversion_trk2Algo;   //!
   TBranch        *b_Photon_conversion_trk2D0;   //!
   TBranch        *b_Photon_conversion_trk2Pout;   //!
   TBranch        *b_Photon_conversion_trk2Pin;   //!
   TBranch        *b_Photon_dr03EcalRecHitSumEtCone;   //!
   TBranch        *b_Photon_dr03HcalTowerSumEtCone;   //!
   TBranch        *b_Photon_dr03TrkSumPtCone;   //!
   TBranch        *b_Photon_dr03TrkSumPtHollowCone;   //!
   TBranch        *b_Photon_dr04EcalRecHitSumEtCone;   //!
   TBranch        *b_Photon_dr04HcalTowerSumEtCone;   //!
   TBranch        *b_Photon_dr04TrkSumPtCone;   //!
   TBranch        *b_Photon_dr04TrkSumPtHollowCone;   //!
   TBranch        *b_Photon_nPV;   //!
   TBranch        *b_Photon_dr02TrackIso;   //!
   TBranch        *b_Photon_dr03TrackIso;   //!
   TBranch        *b_Photon_dr04TrackIso;   //!
   TBranch        *b_Photon_dr01ChargedHadronPFIso;   //!
   TBranch        *b_Photon_dr02ChargedHadronPFIso;   //!
   TBranch        *b_Photon_dr03ChargedHadronPFIso;   //!
   TBranch        *b_Photon_dr04ChargedHadronPFIso;   //!
   TBranch        *b_Photon_dr05ChargedHadronPFIso;   //!
   TBranch        *b_Photon_dr06ChargedHadronPFIso;   //!
   TBranch        *b_Photon_dr01NeutralHadronPFIso;   //!
   TBranch        *b_Photon_dr02NeutralHadronPFIso;   //!
   TBranch        *b_Photon_dr03NeutralHadronPFIso;   //!
   TBranch        *b_Photon_dr04NeutralHadronPFIso;   //!
   TBranch        *b_Photon_dr05NeutralHadronPFIso;   //!
   TBranch        *b_Photon_dr06NeutralHadronPFIso;   //!
   TBranch        *b_Photon_dr01PhotonPFIso;   //!
   TBranch        *b_Photon_dr02PhotonPFIso;   //!
   TBranch        *b_Photon_dr03PhotonPFIso;   //!
   TBranch        *b_Photon_dr04PhotonPFIso;   //!
   TBranch        *b_Photon_dr05PhotonPFIso;   //!
   TBranch        *b_Photon_dr06PhotonPFIso;   //!
   TBranch        *b_Photon_genMatch_index;   //!
   TBranch        *b_Photon_genMatch_energy;   //!
   TBranch        *b_Photon_genMatch_pt;   //!
   TBranch        *b_Photon_genMatch_eta;   //!
   TBranch        *b_Photon_genMatch_phi;   //!
   TBranch        *b_Photon_genMatch_mass;   //!
   TBranch        *b_Photon_genMatch_Vx;   //!
   TBranch        *b_Photon_genMatch_Vy;   //!
   TBranch        *b_Photon_genMatch_Vz;   //!
   TBranch        *b_Photon_genMatch_status;   //!
   TBranch        *b_Photon_genMatch_id;   //!
   TBranch        *b_Photon_genMatch_statusMother;   //!
   TBranch        *b_Photon_genMatch_idMother;   //!
   TBranch        *b_Photon_genMatch_indexMother;   //!
   TBranch        *b_isosumoetPho;   //!
   TBranch        *b_mvaPho;   //!

   MuMuGamma(TTree *tree=0);
   virtual ~MuMuGamma();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef MuMuGamma_cxx
MuMuGamma::MuMuGamma(TTree *tree) : fChain(0) 
{
  // parameter tree is not specified (or zero), connect the file
  // used to generate this class and read the Tree.
  if (tree == 0) {
    //TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("/mnt/hadoop/store/user/amott/Hgg2012/MC/DYToMuMu_M_20_FSRFilter_8_TuneZ2star_8TeV_pythia6_GEN_SIM_v2/veverka-Summer12-PU_S7_START52_V9_step3_RAW2DIGI_L1Reco_RECO_PU_v2-90a3c643a4855c1621ba3bfcbef2e742_VecBosV20-5_2_X/Selected/DYToMuMu_M_20_FSRFilter_8_0.Root");
    //if (!f || !f->IsOpen()) {
    // f = new TFile("/mnt/hadoop/store/user/amott/Hgg2012/MC/DYToMuMu_M_20_FSRFilter_8_TuneZ2star_8TeV_pythia6_GEN_SIM_v2/veverka-Summer12-PU_S7_START52_V9_step3_RAW2DIGI_L1Reco_RECO_PU_v2-90a3c643a4855c1621ba3bfcbef2e742_VecBosV20-5_2_X/Selected/DYToMuMu_M_20_FSRFilter_8_0.root");
    //}
    //f->GetObject("MuMuGamma",tree);
    // }
    
 
    
    TString list = "DYMuMu-M-20-CT10-MMGFilter.list";
    TChain *chain = new TChain("MuMuGamma");
    std::ifstream *st = new ifstream(list.Data(),std::ifstream::in);
    char line[800];
    while(st->good()){
      st->getline(line,800);
      TString l = line;
      chain->AddFile(l);
     }
    delete st;
    tree = (TTree*)chain;
  }
  
  Init(tree);
}

MuMuGamma::~MuMuGamma()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t MuMuGamma::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t MuMuGamma::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void MuMuGamma::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("runNumber", &runNumber, &b_runNumber);
   fChain->SetBranchAddress("evtNumber", &evtNumber, &b_evtNumber);
   fChain->SetBranchAddress("nVtx", &nVtx, &b_nVtx);
   fChain->SetBranchAddress("rho", &rho, &b_rho);
   fChain->SetBranchAddress("nMuMuG", &nMuMuG, &b_nMuMuG);
   fChain->SetBranchAddress("massMuMuGamma", massMuMuGamma, &b_massMuMuGamma);
   fChain->SetBranchAddress("massMuMuRegGamma", massMuMuRegGamma, &b_massMuMuRegGamma);
   fChain->SetBranchAddress("massMuMuScaleGamma", massMuMuScaleGamma, &b_massMuMuScaleGamma);
   fChain->SetBranchAddress("massMuMuGenGamma", massMuMuGenGamma, &b_massMuMuGenGamma);
   fChain->SetBranchAddress("massMuMu", massMuMu, &b_massMuMu);
   fChain->SetBranchAddress("puWeight", puWeight, &b_puWeight);
   fChain->SetBranchAddress("Muon1", &Muon1_, &b_Muon1_);
   fChain->SetBranchAddress("Muon1.index", Muon1_index, &b_Muon1_index);
   fChain->SetBranchAddress("Muon1.energy", Muon1_energy, &b_Muon1_energy);
   fChain->SetBranchAddress("Muon1.pt", Muon1_pt, &b_Muon1_pt);
   fChain->SetBranchAddress("Muon1.eta", Muon1_eta, &b_Muon1_eta);
   fChain->SetBranchAddress("Muon1.phi", Muon1_phi, &b_Muon1_phi);
   fChain->SetBranchAddress("Muon1.charge", Muon1_charge, &b_Muon1_charge);
   fChain->SetBranchAddress("Muon1.combinedIso", Muon1_combinedIso, &b_Muon1_combinedIso);
   fChain->SetBranchAddress("Muon1.emIso", Muon1_emIso, &b_Muon1_emIso);
   fChain->SetBranchAddress("Muon1.hadIso", Muon1_hadIso, &b_Muon1_hadIso);
   fChain->SetBranchAddress("Muon1.trkIso", Muon1_trkIso, &b_Muon1_trkIso);
   fChain->SetBranchAddress("Muon1.isGlobalMuon", Muon1_isGlobalMuon, &b_Muon1_isGlobalMuon);
   fChain->SetBranchAddress("Muon1.isTrackerMuon", Muon1_isTrackerMuon, &b_Muon1_isTrackerMuon);
   fChain->SetBranchAddress("Muon1.isPromptMuon", Muon1_isPromptMuon, &b_Muon1_isPromptMuon);
   fChain->SetBranchAddress("Muon1.nTrackHits", Muon1_nTrackHits, &b_Muon1_nTrackHits);
   fChain->SetBranchAddress("Muon1.nPixelHits", Muon1_nPixelHits, &b_Muon1_nPixelHits);
   fChain->SetBranchAddress("Muon1.trackImpactPar", Muon1_trackImpactPar, &b_Muon1_trackImpactPar);
   fChain->SetBranchAddress("Muon1.isLooseMuon", Muon1_isLooseMuon, &b_Muon1_isLooseMuon);
   fChain->SetBranchAddress("Muon1.isTightMuon", Muon1_isTightMuon, &b_Muon1_isTightMuon);
   fChain->SetBranchAddress("Muon1.genMatch.index", Muon1_genMatch_index, &b_Muon1_genMatch_index);
   fChain->SetBranchAddress("Muon1.genMatch.energy", Muon1_genMatch_energy, &b_Muon1_genMatch_energy);
   fChain->SetBranchAddress("Muon1.genMatch.pt", Muon1_genMatch_pt, &b_Muon1_genMatch_pt);
   fChain->SetBranchAddress("Muon1.genMatch.eta", Muon1_genMatch_eta, &b_Muon1_genMatch_eta);
   fChain->SetBranchAddress("Muon1.genMatch.phi", Muon1_genMatch_phi, &b_Muon1_genMatch_phi);
   fChain->SetBranchAddress("Muon1.genMatch.mass", Muon1_genMatch_mass, &b_Muon1_genMatch_mass);
   fChain->SetBranchAddress("Muon1.genMatch.Vx", Muon1_genMatch_Vx, &b_Muon1_genMatch_Vx);
   fChain->SetBranchAddress("Muon1.genMatch.Vy", Muon1_genMatch_Vy, &b_Muon1_genMatch_Vy);
   fChain->SetBranchAddress("Muon1.genMatch.Vz", Muon1_genMatch_Vz, &b_Muon1_genMatch_Vz);
   fChain->SetBranchAddress("Muon1.genMatch.status", Muon1_genMatch_status, &b_Muon1_genMatch_status);
   fChain->SetBranchAddress("Muon1.genMatch.id", Muon1_genMatch_id, &b_Muon1_genMatch_id);
   fChain->SetBranchAddress("Muon1.genMatch.statusMother", Muon1_genMatch_statusMother, &b_Muon1_genMatch_statusMother);
   fChain->SetBranchAddress("Muon1.genMatch.idMother", Muon1_genMatch_idMother, &b_Muon1_genMatch_idMother);
   fChain->SetBranchAddress("Muon1.genMatch.indexMother", Muon1_genMatch_indexMother, &b_Muon1_genMatch_indexMother);
   fChain->SetBranchAddress("Muon2", &Muon2_, &b_Muon2_);
   fChain->SetBranchAddress("Muon2.index", Muon2_index, &b_Muon2_index);
   fChain->SetBranchAddress("Muon2.energy", Muon2_energy, &b_Muon2_energy);
   fChain->SetBranchAddress("Muon2.pt", Muon2_pt, &b_Muon2_pt);
   fChain->SetBranchAddress("Muon2.eta", Muon2_eta, &b_Muon2_eta);
   fChain->SetBranchAddress("Muon2.phi", Muon2_phi, &b_Muon2_phi);
   fChain->SetBranchAddress("Muon2.charge", Muon2_charge, &b_Muon2_charge);
   fChain->SetBranchAddress("Muon2.combinedIso", Muon2_combinedIso, &b_Muon2_combinedIso);
   fChain->SetBranchAddress("Muon2.emIso", Muon2_emIso, &b_Muon2_emIso);
   fChain->SetBranchAddress("Muon2.hadIso", Muon2_hadIso, &b_Muon2_hadIso);
   fChain->SetBranchAddress("Muon2.trkIso", Muon2_trkIso, &b_Muon2_trkIso);
   fChain->SetBranchAddress("Muon2.isGlobalMuon", Muon2_isGlobalMuon, &b_Muon2_isGlobalMuon);
   fChain->SetBranchAddress("Muon2.isTrackerMuon", Muon2_isTrackerMuon, &b_Muon2_isTrackerMuon);
   fChain->SetBranchAddress("Muon2.isPromptMuon", Muon2_isPromptMuon, &b_Muon2_isPromptMuon);
   fChain->SetBranchAddress("Muon2.nTrackHits", Muon2_nTrackHits, &b_Muon2_nTrackHits);
   fChain->SetBranchAddress("Muon2.nPixelHits", Muon2_nPixelHits, &b_Muon2_nPixelHits);
   fChain->SetBranchAddress("Muon2.trackImpactPar", Muon2_trackImpactPar, &b_Muon2_trackImpactPar);
   fChain->SetBranchAddress("Muon2.isLooseMuon", Muon2_isLooseMuon, &b_Muon2_isLooseMuon);
   fChain->SetBranchAddress("Muon2.isTightMuon", Muon2_isTightMuon, &b_Muon2_isTightMuon);
   fChain->SetBranchAddress("Muon2.genMatch.index", Muon2_genMatch_index, &b_Muon2_genMatch_index);
   fChain->SetBranchAddress("Muon2.genMatch.energy", Muon2_genMatch_energy, &b_Muon2_genMatch_energy);
   fChain->SetBranchAddress("Muon2.genMatch.pt", Muon2_genMatch_pt, &b_Muon2_genMatch_pt);
   fChain->SetBranchAddress("Muon2.genMatch.eta", Muon2_genMatch_eta, &b_Muon2_genMatch_eta);
   fChain->SetBranchAddress("Muon2.genMatch.phi", Muon2_genMatch_phi, &b_Muon2_genMatch_phi);
   fChain->SetBranchAddress("Muon2.genMatch.mass", Muon2_genMatch_mass, &b_Muon2_genMatch_mass);
   fChain->SetBranchAddress("Muon2.genMatch.Vx", Muon2_genMatch_Vx, &b_Muon2_genMatch_Vx);
   fChain->SetBranchAddress("Muon2.genMatch.Vy", Muon2_genMatch_Vy, &b_Muon2_genMatch_Vy);
   fChain->SetBranchAddress("Muon2.genMatch.Vz", Muon2_genMatch_Vz, &b_Muon2_genMatch_Vz);
   fChain->SetBranchAddress("Muon2.genMatch.status", Muon2_genMatch_status, &b_Muon2_genMatch_status);
   fChain->SetBranchAddress("Muon2.genMatch.id", Muon2_genMatch_id, &b_Muon2_genMatch_id);
   fChain->SetBranchAddress("Muon2.genMatch.statusMother", Muon2_genMatch_statusMother, &b_Muon2_genMatch_statusMother);
   fChain->SetBranchAddress("Muon2.genMatch.idMother", Muon2_genMatch_idMother, &b_Muon2_genMatch_idMother);
   fChain->SetBranchAddress("Muon2.genMatch.indexMother", Muon2_genMatch_indexMother, &b_Muon2_genMatch_indexMother);
   fChain->SetBranchAddress("Photon", &Photon_, &b_Photon_);
   fChain->SetBranchAddress("Photon.index", Photon_index, &b_Photon_index);
   fChain->SetBranchAddress("Photon.energy", Photon_energy, &b_Photon_energy);
   fChain->SetBranchAddress("Photon.eta", Photon_eta, &b_Photon_eta);
   fChain->SetBranchAddress("Photon.phi", Photon_phi, &b_Photon_phi);
   fChain->SetBranchAddress("Photon.correctedEnergy", Photon_correctedEnergy, &b_Photon_correctedEnergy);
   fChain->SetBranchAddress("Photon.correctedEnergyError", Photon_correctedEnergyError, &b_Photon_correctedEnergyError);
   fChain->SetBranchAddress("Photon.scaledEnergy", Photon_scaledEnergy, &b_Photon_scaledEnergy);
   fChain->SetBranchAddress("Photon.scaledEnergyError", Photon_scaledEnergyError, &b_Photon_scaledEnergyError);
   fChain->SetBranchAddress("Photon.finalEnergy", Photon_finalEnergy, &b_Photon_finalEnergy);
   fChain->SetBranchAddress("Photon.finalEnergyError", Photon_finalEnergyError, &b_Photon_finalEnergyError);
   fChain->SetBranchAddress("Photon.dEoE", Photon_dEoE, &b_Photon_dEoE);
   fChain->SetBranchAddress("Photon.dEoEErr", Photon_dEoEErr, &b_Photon_dEoEErr);
   fChain->SetBranchAddress("Photon.SC.BCSeed.index", Photon_SC_BCSeed_index, &b_Photon_SC_BCSeed_index);
   fChain->SetBranchAddress("Photon.SC.BCSeed.energy", Photon_SC_BCSeed_energy, &b_Photon_SC_BCSeed_energy);
   fChain->SetBranchAddress("Photon.SC.BCSeed.eta", Photon_SC_BCSeed_eta, &b_Photon_SC_BCSeed_eta);
   fChain->SetBranchAddress("Photon.SC.BCSeed.phi", Photon_SC_BCSeed_phi, &b_Photon_SC_BCSeed_phi);
   fChain->SetBranchAddress("Photon.SC.BCSeed.e3x3", Photon_SC_BCSeed_e3x3, &b_Photon_SC_BCSeed_e3x3);
   fChain->SetBranchAddress("Photon.SC.BCSeed.e5x5", Photon_SC_BCSeed_e5x5, &b_Photon_SC_BCSeed_e5x5);
   fChain->SetBranchAddress("Photon.SC.BCSeed.eTop", Photon_SC_BCSeed_eTop, &b_Photon_SC_BCSeed_eTop);
   fChain->SetBranchAddress("Photon.SC.BCSeed.eLeft", Photon_SC_BCSeed_eLeft, &b_Photon_SC_BCSeed_eLeft);
   fChain->SetBranchAddress("Photon.SC.BCSeed.eRight", Photon_SC_BCSeed_eRight, &b_Photon_SC_BCSeed_eRight);
   fChain->SetBranchAddress("Photon.SC.BCSeed.eBottom", Photon_SC_BCSeed_eBottom, &b_Photon_SC_BCSeed_eBottom);
   fChain->SetBranchAddress("Photon.SC.BCSeed.eMax", Photon_SC_BCSeed_eMax, &b_Photon_SC_BCSeed_eMax);
   fChain->SetBranchAddress("Photon.SC.BCSeed.e2nd", Photon_SC_BCSeed_e2nd, &b_Photon_SC_BCSeed_e2nd);
   fChain->SetBranchAddress("Photon.SC.BCSeed.e2x5Max", Photon_SC_BCSeed_e2x5Max, &b_Photon_SC_BCSeed_e2x5Max);
   fChain->SetBranchAddress("Photon.SC.BCSeed.e2x5Left", Photon_SC_BCSeed_e2x5Left, &b_Photon_SC_BCSeed_e2x5Left);
   fChain->SetBranchAddress("Photon.SC.BCSeed.e2x5Right", Photon_SC_BCSeed_e2x5Right, &b_Photon_SC_BCSeed_e2x5Right);
   fChain->SetBranchAddress("Photon.SC.BCSeed.e2x5Top", Photon_SC_BCSeed_e2x5Top, &b_Photon_SC_BCSeed_e2x5Top);
   fChain->SetBranchAddress("Photon.SC.BCSeed.e2x5Bottom", Photon_SC_BCSeed_e2x5Bottom, &b_Photon_SC_BCSeed_e2x5Bottom);
   fChain->SetBranchAddress("Photon.SC.BCSeed.etaCrystal", Photon_SC_BCSeed_etaCrystal, &b_Photon_SC_BCSeed_etaCrystal);
   fChain->SetBranchAddress("Photon.SC.BCSeed.phiCrystal", Photon_SC_BCSeed_phiCrystal, &b_Photon_SC_BCSeed_phiCrystal);
   fChain->SetBranchAddress("Photon.SC.BCSeed.iEta", Photon_SC_BCSeed_iEta, &b_Photon_SC_BCSeed_iEta);
   fChain->SetBranchAddress("Photon.SC.BCSeed.iPhi", Photon_SC_BCSeed_iPhi, &b_Photon_SC_BCSeed_iPhi);
   fChain->SetBranchAddress("Photon.SC.BCSeed.thetaTilt", Photon_SC_BCSeed_thetaTilt, &b_Photon_SC_BCSeed_thetaTilt);
   fChain->SetBranchAddress("Photon.SC.BCSeed.phiTilt", Photon_SC_BCSeed_phiTilt, &b_Photon_SC_BCSeed_phiTilt);
   fChain->SetBranchAddress("Photon.SC.BCSeed.sigmaIEtaIEta", Photon_SC_BCSeed_sigmaIEtaIEta, &b_Photon_SC_BCSeed_sigmaIEtaIEta);
   fChain->SetBranchAddress("Photon.SC.BCSeed.sigmaIEtaIPhi", Photon_SC_BCSeed_sigmaIEtaIPhi, &b_Photon_SC_BCSeed_sigmaIEtaIPhi);
   fChain->SetBranchAddress("Photon.SC.BCSeed.sigmaIPhiIPhi", Photon_SC_BCSeed_sigmaIPhiIPhi, &b_Photon_SC_BCSeed_sigmaIPhiIPhi);
   fChain->SetBranchAddress("Photon.SC.nBCs", Photon_SC_nBCs, &b_Photon_SC_nBCs);
   fChain->SetBranchAddress("Photon.SC.index", Photon_SC_index, &b_Photon_SC_index);
   fChain->SetBranchAddress("Photon.SC.energy", Photon_SC_energy, &b_Photon_SC_energy);
   fChain->SetBranchAddress("Photon.SC.esEnergy", Photon_SC_esEnergy, &b_Photon_SC_esEnergy);
   fChain->SetBranchAddress("Photon.SC.eta", Photon_SC_eta, &b_Photon_SC_eta);
   fChain->SetBranchAddress("Photon.SC.phi", Photon_SC_phi, &b_Photon_SC_phi);
   fChain->SetBranchAddress("Photon.SC.e3x3", Photon_SC_e3x3, &b_Photon_SC_e3x3);
   fChain->SetBranchAddress("Photon.SC.e5x5", Photon_SC_e5x5, &b_Photon_SC_e5x5);
   fChain->SetBranchAddress("Photon.SC.e3x1", Photon_SC_e3x1, &b_Photon_SC_e3x1);
   fChain->SetBranchAddress("Photon.SC.e1x3", Photon_SC_e1x3, &b_Photon_SC_e1x3);
   fChain->SetBranchAddress("Photon.SC.e4x4", Photon_SC_e4x4, &b_Photon_SC_e4x4);
   fChain->SetBranchAddress("Photon.SC.eMax", Photon_SC_eMax, &b_Photon_SC_eMax);
   fChain->SetBranchAddress("Photon.SC.e2x2", Photon_SC_e2x2, &b_Photon_SC_e2x2);
   fChain->SetBranchAddress("Photon.SC.e2nd", Photon_SC_e2nd, &b_Photon_SC_e2nd);
   fChain->SetBranchAddress("Photon.SC.e1x5", Photon_SC_e1x5, &b_Photon_SC_e1x5);
   fChain->SetBranchAddress("Photon.SC.e2x5Max", Photon_SC_e2x5Max, &b_Photon_SC_e2x5Max);
   fChain->SetBranchAddress("Photon.SC.e2x5Left", Photon_SC_e2x5Left, &b_Photon_SC_e2x5Left);
   fChain->SetBranchAddress("Photon.SC.e2x5Right", Photon_SC_e2x5Right, &b_Photon_SC_e2x5Right);
   fChain->SetBranchAddress("Photon.SC.e2x5Top", Photon_SC_e2x5Top, &b_Photon_SC_e2x5Top);
   fChain->SetBranchAddress("Photon.SC.e2x5Bottom", Photon_SC_e2x5Bottom, &b_Photon_SC_e2x5Bottom);
   fChain->SetBranchAddress("Photon.SC.eLeft", Photon_SC_eLeft, &b_Photon_SC_eLeft);
   fChain->SetBranchAddress("Photon.SC.eRight", Photon_SC_eRight, &b_Photon_SC_eRight);
   fChain->SetBranchAddress("Photon.SC.eTop", Photon_SC_eTop, &b_Photon_SC_eTop);
   fChain->SetBranchAddress("Photon.SC.eBottom", Photon_SC_eBottom, &b_Photon_SC_eBottom);
   fChain->SetBranchAddress("Photon.SC.sigmaIEtaIEta", Photon_SC_sigmaIEtaIEta, &b_Photon_SC_sigmaIEtaIEta);
   fChain->SetBranchAddress("Photon.SC.sigmaIEtaIPhi", Photon_SC_sigmaIEtaIPhi, &b_Photon_SC_sigmaIEtaIPhi);
   fChain->SetBranchAddress("Photon.SC.sigmaIPhiIPhi", Photon_SC_sigmaIPhiIPhi, &b_Photon_SC_sigmaIPhiIPhi);
   fChain->SetBranchAddress("Photon.SC.esEffSigRR", Photon_SC_esEffSigRR, &b_Photon_SC_esEffSigRR);
   fChain->SetBranchAddress("Photon.SC.CaloPos.fUniqueID", Photon_SC_CaloPos_fUniqueID, &b_Photon_SC_CaloPos_fUniqueID);
   fChain->SetBranchAddress("Photon.SC.CaloPos.fBits", Photon_SC_CaloPos_fBits, &b_Photon_SC_CaloPos_fBits);
   fChain->SetBranchAddress("Photon.SC.CaloPos.fX", Photon_SC_CaloPos_fX, &b_Photon_SC_CaloPos_fX);
   fChain->SetBranchAddress("Photon.SC.CaloPos.fY", Photon_SC_CaloPos_fY, &b_Photon_SC_CaloPos_fY);
   fChain->SetBranchAddress("Photon.SC.CaloPos.fZ", Photon_SC_CaloPos_fZ, &b_Photon_SC_CaloPos_fZ);
   fChain->SetBranchAddress("Photon.SC.rawE", Photon_SC_rawE, &b_Photon_SC_rawE);
   fChain->SetBranchAddress("Photon.SC.phiWidth", Photon_SC_phiWidth, &b_Photon_SC_phiWidth);
   fChain->SetBranchAddress("Photon.SC.etaWidth", Photon_SC_etaWidth, &b_Photon_SC_etaWidth);
   fChain->SetBranchAddress("Photon.SC.HoverE", Photon_SC_HoverE, &b_Photon_SC_HoverE);
   fChain->SetBranchAddress("Photon.SC.r9", Photon_SC_r9, &b_Photon_SC_r9);
   fChain->SetBranchAddress("Photon.SC.s4ratio", Photon_SC_s4ratio, &b_Photon_SC_s4ratio);
   fChain->SetBranchAddress("Photon.PFSC.BCSeed.index", Photon_PFSC_BCSeed_index, &b_Photon_PFSC_BCSeed_index);
   fChain->SetBranchAddress("Photon.PFSC.BCSeed.energy", Photon_PFSC_BCSeed_energy, &b_Photon_PFSC_BCSeed_energy);
   fChain->SetBranchAddress("Photon.PFSC.BCSeed.eta", Photon_PFSC_BCSeed_eta, &b_Photon_PFSC_BCSeed_eta);
   fChain->SetBranchAddress("Photon.PFSC.BCSeed.phi", Photon_PFSC_BCSeed_phi, &b_Photon_PFSC_BCSeed_phi);
   fChain->SetBranchAddress("Photon.PFSC.BCSeed.e3x3", Photon_PFSC_BCSeed_e3x3, &b_Photon_PFSC_BCSeed_e3x3);
   fChain->SetBranchAddress("Photon.PFSC.BCSeed.e5x5", Photon_PFSC_BCSeed_e5x5, &b_Photon_PFSC_BCSeed_e5x5);
   fChain->SetBranchAddress("Photon.PFSC.BCSeed.eTop", Photon_PFSC_BCSeed_eTop, &b_Photon_PFSC_BCSeed_eTop);
   fChain->SetBranchAddress("Photon.PFSC.BCSeed.eLeft", Photon_PFSC_BCSeed_eLeft, &b_Photon_PFSC_BCSeed_eLeft);
   fChain->SetBranchAddress("Photon.PFSC.BCSeed.eRight", Photon_PFSC_BCSeed_eRight, &b_Photon_PFSC_BCSeed_eRight);
   fChain->SetBranchAddress("Photon.PFSC.BCSeed.eBottom", Photon_PFSC_BCSeed_eBottom, &b_Photon_PFSC_BCSeed_eBottom);
   fChain->SetBranchAddress("Photon.PFSC.BCSeed.eMax", Photon_PFSC_BCSeed_eMax, &b_Photon_PFSC_BCSeed_eMax);
   fChain->SetBranchAddress("Photon.PFSC.BCSeed.e2nd", Photon_PFSC_BCSeed_e2nd, &b_Photon_PFSC_BCSeed_e2nd);
   fChain->SetBranchAddress("Photon.PFSC.BCSeed.e2x5Max", Photon_PFSC_BCSeed_e2x5Max, &b_Photon_PFSC_BCSeed_e2x5Max);
   fChain->SetBranchAddress("Photon.PFSC.BCSeed.e2x5Left", Photon_PFSC_BCSeed_e2x5Left, &b_Photon_PFSC_BCSeed_e2x5Left);
   fChain->SetBranchAddress("Photon.PFSC.BCSeed.e2x5Right", Photon_PFSC_BCSeed_e2x5Right, &b_Photon_PFSC_BCSeed_e2x5Right);
   fChain->SetBranchAddress("Photon.PFSC.BCSeed.e2x5Top", Photon_PFSC_BCSeed_e2x5Top, &b_Photon_PFSC_BCSeed_e2x5Top);
   fChain->SetBranchAddress("Photon.PFSC.BCSeed.e2x5Bottom", Photon_PFSC_BCSeed_e2x5Bottom, &b_Photon_PFSC_BCSeed_e2x5Bottom);
   fChain->SetBranchAddress("Photon.PFSC.BCSeed.etaCrystal", Photon_PFSC_BCSeed_etaCrystal, &b_Photon_PFSC_BCSeed_etaCrystal);
   fChain->SetBranchAddress("Photon.PFSC.BCSeed.phiCrystal", Photon_PFSC_BCSeed_phiCrystal, &b_Photon_PFSC_BCSeed_phiCrystal);
   fChain->SetBranchAddress("Photon.PFSC.BCSeed.iEta", Photon_PFSC_BCSeed_iEta, &b_Photon_PFSC_BCSeed_iEta);
   fChain->SetBranchAddress("Photon.PFSC.BCSeed.iPhi", Photon_PFSC_BCSeed_iPhi, &b_Photon_PFSC_BCSeed_iPhi);
   fChain->SetBranchAddress("Photon.PFSC.BCSeed.thetaTilt", Photon_PFSC_BCSeed_thetaTilt, &b_Photon_PFSC_BCSeed_thetaTilt);
   fChain->SetBranchAddress("Photon.PFSC.BCSeed.phiTilt", Photon_PFSC_BCSeed_phiTilt, &b_Photon_PFSC_BCSeed_phiTilt);
   fChain->SetBranchAddress("Photon.PFSC.BCSeed.sigmaIEtaIEta", Photon_PFSC_BCSeed_sigmaIEtaIEta, &b_Photon_PFSC_BCSeed_sigmaIEtaIEta);
   fChain->SetBranchAddress("Photon.PFSC.BCSeed.sigmaIEtaIPhi", Photon_PFSC_BCSeed_sigmaIEtaIPhi, &b_Photon_PFSC_BCSeed_sigmaIEtaIPhi);
   fChain->SetBranchAddress("Photon.PFSC.BCSeed.sigmaIPhiIPhi", Photon_PFSC_BCSeed_sigmaIPhiIPhi, &b_Photon_PFSC_BCSeed_sigmaIPhiIPhi);
   fChain->SetBranchAddress("Photon.PFSC.nBCs", Photon_PFSC_nBCs, &b_Photon_PFSC_nBCs);
   fChain->SetBranchAddress("Photon.PFSC.index", Photon_PFSC_index, &b_Photon_PFSC_index);
   fChain->SetBranchAddress("Photon.PFSC.energy", Photon_PFSC_energy, &b_Photon_PFSC_energy);
   fChain->SetBranchAddress("Photon.PFSC.esEnergy", Photon_PFSC_esEnergy, &b_Photon_PFSC_esEnergy);
   fChain->SetBranchAddress("Photon.PFSC.eta", Photon_PFSC_eta, &b_Photon_PFSC_eta);
   fChain->SetBranchAddress("Photon.PFSC.phi", Photon_PFSC_phi, &b_Photon_PFSC_phi);
   fChain->SetBranchAddress("Photon.PFSC.e3x3", Photon_PFSC_e3x3, &b_Photon_PFSC_e3x3);
   fChain->SetBranchAddress("Photon.PFSC.e5x5", Photon_PFSC_e5x5, &b_Photon_PFSC_e5x5);
   fChain->SetBranchAddress("Photon.PFSC.e3x1", Photon_PFSC_e3x1, &b_Photon_PFSC_e3x1);
   fChain->SetBranchAddress("Photon.PFSC.e1x3", Photon_PFSC_e1x3, &b_Photon_PFSC_e1x3);
   fChain->SetBranchAddress("Photon.PFSC.e4x4", Photon_PFSC_e4x4, &b_Photon_PFSC_e4x4);
   fChain->SetBranchAddress("Photon.PFSC.eMax", Photon_PFSC_eMax, &b_Photon_PFSC_eMax);
   fChain->SetBranchAddress("Photon.PFSC.e2x2", Photon_PFSC_e2x2, &b_Photon_PFSC_e2x2);
   fChain->SetBranchAddress("Photon.PFSC.e2nd", Photon_PFSC_e2nd, &b_Photon_PFSC_e2nd);
   fChain->SetBranchAddress("Photon.PFSC.e1x5", Photon_PFSC_e1x5, &b_Photon_PFSC_e1x5);
   fChain->SetBranchAddress("Photon.PFSC.e2x5Max", Photon_PFSC_e2x5Max, &b_Photon_PFSC_e2x5Max);
   fChain->SetBranchAddress("Photon.PFSC.e2x5Left", Photon_PFSC_e2x5Left, &b_Photon_PFSC_e2x5Left);
   fChain->SetBranchAddress("Photon.PFSC.e2x5Right", Photon_PFSC_e2x5Right, &b_Photon_PFSC_e2x5Right);
   fChain->SetBranchAddress("Photon.PFSC.e2x5Top", Photon_PFSC_e2x5Top, &b_Photon_PFSC_e2x5Top);
   fChain->SetBranchAddress("Photon.PFSC.e2x5Bottom", Photon_PFSC_e2x5Bottom, &b_Photon_PFSC_e2x5Bottom);
   fChain->SetBranchAddress("Photon.PFSC.eLeft", Photon_PFSC_eLeft, &b_Photon_PFSC_eLeft);
   fChain->SetBranchAddress("Photon.PFSC.eRight", Photon_PFSC_eRight, &b_Photon_PFSC_eRight);
   fChain->SetBranchAddress("Photon.PFSC.eTop", Photon_PFSC_eTop, &b_Photon_PFSC_eTop);
   fChain->SetBranchAddress("Photon.PFSC.eBottom", Photon_PFSC_eBottom, &b_Photon_PFSC_eBottom);
   fChain->SetBranchAddress("Photon.PFSC.sigmaIEtaIEta", Photon_PFSC_sigmaIEtaIEta, &b_Photon_PFSC_sigmaIEtaIEta);
   fChain->SetBranchAddress("Photon.PFSC.sigmaIEtaIPhi", Photon_PFSC_sigmaIEtaIPhi, &b_Photon_PFSC_sigmaIEtaIPhi);
   fChain->SetBranchAddress("Photon.PFSC.sigmaIPhiIPhi", Photon_PFSC_sigmaIPhiIPhi, &b_Photon_PFSC_sigmaIPhiIPhi);
   fChain->SetBranchAddress("Photon.PFSC.esEffSigRR", Photon_PFSC_esEffSigRR, &b_Photon_PFSC_esEffSigRR);
   fChain->SetBranchAddress("Photon.PFSC.CaloPos.fUniqueID", Photon_PFSC_CaloPos_fUniqueID, &b_Photon_PFSC_CaloPos_fUniqueID);
   fChain->SetBranchAddress("Photon.PFSC.CaloPos.fBits", Photon_PFSC_CaloPos_fBits, &b_Photon_PFSC_CaloPos_fBits);
   fChain->SetBranchAddress("Photon.PFSC.CaloPos.fX", Photon_PFSC_CaloPos_fX, &b_Photon_PFSC_CaloPos_fX);
   fChain->SetBranchAddress("Photon.PFSC.CaloPos.fY", Photon_PFSC_CaloPos_fY, &b_Photon_PFSC_CaloPos_fY);
   fChain->SetBranchAddress("Photon.PFSC.CaloPos.fZ", Photon_PFSC_CaloPos_fZ, &b_Photon_PFSC_CaloPos_fZ);
   fChain->SetBranchAddress("Photon.PFSC.rawE", Photon_PFSC_rawE, &b_Photon_PFSC_rawE);
   fChain->SetBranchAddress("Photon.PFSC.phiWidth", Photon_PFSC_phiWidth, &b_Photon_PFSC_phiWidth);
   fChain->SetBranchAddress("Photon.PFSC.etaWidth", Photon_PFSC_etaWidth, &b_Photon_PFSC_etaWidth);
   fChain->SetBranchAddress("Photon.PFSC.HoverE", Photon_PFSC_HoverE, &b_Photon_PFSC_HoverE);
   fChain->SetBranchAddress("Photon.PFSC.r9", Photon_PFSC_r9, &b_Photon_PFSC_r9);
   fChain->SetBranchAddress("Photon.PFSC.s4ratio", Photon_PFSC_s4ratio, &b_Photon_PFSC_s4ratio);
   fChain->SetBranchAddress("Photon.HoverE", Photon_HoverE, &b_Photon_HoverE);
   fChain->SetBranchAddress("Photon.HTowOverE", Photon_HTowOverE, &b_Photon_HTowOverE);
   fChain->SetBranchAddress("Photon.hasPixel", Photon_hasPixel, &b_Photon_hasPixel);
   fChain->SetBranchAddress("Photon.CaloPos.fUniqueID", Photon_CaloPos_fUniqueID, &b_Photon_CaloPos_fUniqueID);
   fChain->SetBranchAddress("Photon.CaloPos.fBits", Photon_CaloPos_fBits, &b_Photon_CaloPos_fBits);
   fChain->SetBranchAddress("Photon.CaloPos.fX", Photon_CaloPos_fX, &b_Photon_CaloPos_fX);
   fChain->SetBranchAddress("Photon.CaloPos.fY", Photon_CaloPos_fY, &b_Photon_CaloPos_fY);
   fChain->SetBranchAddress("Photon.CaloPos.fZ", Photon_CaloPos_fZ, &b_Photon_CaloPos_fZ);
   fChain->SetBranchAddress("Photon.conversion.index", Photon_conversion_index, &b_Photon_conversion_index);
   fChain->SetBranchAddress("Photon.conversion.pPair.fUniqueID", Photon_conversion_pPair_fUniqueID, &b_Photon_conversion_pPair_fUniqueID);
   fChain->SetBranchAddress("Photon.conversion.pPair.fBits", Photon_conversion_pPair_fBits, &b_Photon_conversion_pPair_fBits);
   fChain->SetBranchAddress("Photon.conversion.pPair.fX", Photon_conversion_pPair_fX, &b_Photon_conversion_pPair_fX);
   fChain->SetBranchAddress("Photon.conversion.pPair.fY", Photon_conversion_pPair_fY, &b_Photon_conversion_pPair_fY);
   fChain->SetBranchAddress("Photon.conversion.pPair.fZ", Photon_conversion_pPair_fZ, &b_Photon_conversion_pPair_fZ);
   fChain->SetBranchAddress("Photon.conversion.pRefittedPair.fUniqueID", Photon_conversion_pRefittedPair_fUniqueID, &b_Photon_conversion_pRefittedPair_fUniqueID);
   fChain->SetBranchAddress("Photon.conversion.pRefittedPair.fBits", Photon_conversion_pRefittedPair_fBits, &b_Photon_conversion_pRefittedPair_fBits);
   fChain->SetBranchAddress("Photon.conversion.pRefittedPair.fX", Photon_conversion_pRefittedPair_fX, &b_Photon_conversion_pRefittedPair_fX);
   fChain->SetBranchAddress("Photon.conversion.pRefittedPair.fY", Photon_conversion_pRefittedPair_fY, &b_Photon_conversion_pRefittedPair_fY);
   fChain->SetBranchAddress("Photon.conversion.pRefittedPair.fZ", Photon_conversion_pRefittedPair_fZ, &b_Photon_conversion_pRefittedPair_fZ);
   fChain->SetBranchAddress("Photon.conversion.p4RefittedPair.fUniqueID", Photon_conversion_p4RefittedPair_fUniqueID, &b_Photon_conversion_p4RefittedPair_fUniqueID);
   fChain->SetBranchAddress("Photon.conversion.p4RefittedPair.fBits", Photon_conversion_p4RefittedPair_fBits, &b_Photon_conversion_p4RefittedPair_fBits);
   fChain->SetBranchAddress("Photon.conversion.p4RefittedPair.fP.fUniqueID", Photon_conversion_p4RefittedPair_fP_fUniqueID, &b_Photon_conversion_p4RefittedPair_fP_fUniqueID);
   fChain->SetBranchAddress("Photon.conversion.p4RefittedPair.fP.fBits", Photon_conversion_p4RefittedPair_fP_fBits, &b_Photon_conversion_p4RefittedPair_fP_fBits);
   fChain->SetBranchAddress("Photon.conversion.p4RefittedPair.fP.fX", Photon_conversion_p4RefittedPair_fP_fX, &b_Photon_conversion_p4RefittedPair_fP_fX);
   fChain->SetBranchAddress("Photon.conversion.p4RefittedPair.fP.fY", Photon_conversion_p4RefittedPair_fP_fY, &b_Photon_conversion_p4RefittedPair_fP_fY);
   fChain->SetBranchAddress("Photon.conversion.p4RefittedPair.fP.fZ", Photon_conversion_p4RefittedPair_fP_fZ, &b_Photon_conversion_p4RefittedPair_fP_fZ);
   fChain->SetBranchAddress("Photon.conversion.p4RefittedPair.fE", Photon_conversion_p4RefittedPair_fE, &b_Photon_conversion_p4RefittedPair_fE);
   fChain->SetBranchAddress("Photon.conversion.CaloPos.fUniqueID", Photon_conversion_CaloPos_fUniqueID, &b_Photon_conversion_CaloPos_fUniqueID);
   fChain->SetBranchAddress("Photon.conversion.CaloPos.fBits", Photon_conversion_CaloPos_fBits, &b_Photon_conversion_CaloPos_fBits);
   fChain->SetBranchAddress("Photon.conversion.CaloPos.fX", Photon_conversion_CaloPos_fX, &b_Photon_conversion_CaloPos_fX);
   fChain->SetBranchAddress("Photon.conversion.CaloPos.fY", Photon_conversion_CaloPos_fY, &b_Photon_conversion_CaloPos_fY);
   fChain->SetBranchAddress("Photon.conversion.CaloPos.fZ", Photon_conversion_CaloPos_fZ, &b_Photon_conversion_CaloPos_fZ);
   fChain->SetBranchAddress("Photon.conversion.eOverP", Photon_conversion_eOverP, &b_Photon_conversion_eOverP);
   fChain->SetBranchAddress("Photon.conversion.vtx.fUniqueID", Photon_conversion_vtx_fUniqueID, &b_Photon_conversion_vtx_fUniqueID);
   fChain->SetBranchAddress("Photon.conversion.vtx.fBits", Photon_conversion_vtx_fBits, &b_Photon_conversion_vtx_fBits);
   fChain->SetBranchAddress("Photon.conversion.vtx.fX", Photon_conversion_vtx_fX, &b_Photon_conversion_vtx_fX);
   fChain->SetBranchAddress("Photon.conversion.vtx.fY", Photon_conversion_vtx_fY, &b_Photon_conversion_vtx_fY);
   fChain->SetBranchAddress("Photon.conversion.vtx.fZ", Photon_conversion_vtx_fZ, &b_Photon_conversion_vtx_fZ);
   fChain->SetBranchAddress("Photon.conversion.vtxChi2", Photon_conversion_vtxChi2, &b_Photon_conversion_vtxChi2);
   fChain->SetBranchAddress("Photon.conversion.vtxChi2Prob", Photon_conversion_vtxChi2Prob, &b_Photon_conversion_vtxChi2Prob);
   fChain->SetBranchAddress("Photon.conversion.vtxIsValid", Photon_conversion_vtxIsValid, &b_Photon_conversion_vtxIsValid);
   fChain->SetBranchAddress("Photon.conversion.vtxNTracks", Photon_conversion_vtxNTracks, &b_Photon_conversion_vtxNTracks);
   fChain->SetBranchAddress("Photon.conversion.vtxMVA", Photon_conversion_vtxMVA, &b_Photon_conversion_vtxMVA);
   fChain->SetBranchAddress("Photon.conversion.trk1Dz", Photon_conversion_trk1Dz, &b_Photon_conversion_trk1Dz);
   fChain->SetBranchAddress("Photon.conversion.trk1DzError", Photon_conversion_trk1DzError, &b_Photon_conversion_trk1DzError);
   fChain->SetBranchAddress("Photon.conversion.trk1Charge", Photon_conversion_trk1Charge, &b_Photon_conversion_trk1Charge);
   fChain->SetBranchAddress("Photon.conversion.trk1Algo", Photon_conversion_trk1Algo, &b_Photon_conversion_trk1Algo);
   fChain->SetBranchAddress("Photon.conversion.trk1D0", Photon_conversion_trk1D0, &b_Photon_conversion_trk1D0);
   fChain->SetBranchAddress("Photon.conversion.trk1Pout", Photon_conversion_trk1Pout, &b_Photon_conversion_trk1Pout);
   fChain->SetBranchAddress("Photon.conversion.trk1Pin", Photon_conversion_trk1Pin, &b_Photon_conversion_trk1Pin);
   fChain->SetBranchAddress("Photon.conversion.trk2Dz", Photon_conversion_trk2Dz, &b_Photon_conversion_trk2Dz);
   fChain->SetBranchAddress("Photon.conversion.trk2DzError", Photon_conversion_trk2DzError, &b_Photon_conversion_trk2DzError);
   fChain->SetBranchAddress("Photon.conversion.trk2Charge", Photon_conversion_trk2Charge, &b_Photon_conversion_trk2Charge);
   fChain->SetBranchAddress("Photon.conversion.trk2Algo", Photon_conversion_trk2Algo, &b_Photon_conversion_trk2Algo);
   fChain->SetBranchAddress("Photon.conversion.trk2D0", Photon_conversion_trk2D0, &b_Photon_conversion_trk2D0);
   fChain->SetBranchAddress("Photon.conversion.trk2Pout", Photon_conversion_trk2Pout, &b_Photon_conversion_trk2Pout);
   fChain->SetBranchAddress("Photon.conversion.trk2Pin", Photon_conversion_trk2Pin, &b_Photon_conversion_trk2Pin);
   fChain->SetBranchAddress("Photon.dr03EcalRecHitSumEtCone", Photon_dr03EcalRecHitSumEtCone, &b_Photon_dr03EcalRecHitSumEtCone);
   fChain->SetBranchAddress("Photon.dr03HcalTowerSumEtCone", Photon_dr03HcalTowerSumEtCone, &b_Photon_dr03HcalTowerSumEtCone);
   fChain->SetBranchAddress("Photon.dr03TrkSumPtCone", Photon_dr03TrkSumPtCone, &b_Photon_dr03TrkSumPtCone);
   fChain->SetBranchAddress("Photon.dr03TrkSumPtHollowCone", Photon_dr03TrkSumPtHollowCone, &b_Photon_dr03TrkSumPtHollowCone);
   fChain->SetBranchAddress("Photon.dr04EcalRecHitSumEtCone", Photon_dr04EcalRecHitSumEtCone, &b_Photon_dr04EcalRecHitSumEtCone);
   fChain->SetBranchAddress("Photon.dr04HcalTowerSumEtCone", Photon_dr04HcalTowerSumEtCone, &b_Photon_dr04HcalTowerSumEtCone);
   fChain->SetBranchAddress("Photon.dr04TrkSumPtCone", Photon_dr04TrkSumPtCone, &b_Photon_dr04TrkSumPtCone);
   fChain->SetBranchAddress("Photon.dr04TrkSumPtHollowCone", Photon_dr04TrkSumPtHollowCone, &b_Photon_dr04TrkSumPtHollowCone);
   fChain->SetBranchAddress("Photon.nPV", Photon_nPV, &b_Photon_nPV);
   fChain->SetBranchAddress("Photon.dr02TrackIso[100]", Photon_dr02TrackIso, &b_Photon_dr02TrackIso);
   fChain->SetBranchAddress("Photon.dr03TrackIso[100]", Photon_dr03TrackIso, &b_Photon_dr03TrackIso);
   fChain->SetBranchAddress("Photon.dr04TrackIso[100]", Photon_dr04TrackIso, &b_Photon_dr04TrackIso);
   fChain->SetBranchAddress("Photon.dr01ChargedHadronPFIso[100]", Photon_dr01ChargedHadronPFIso, &b_Photon_dr01ChargedHadronPFIso);
   fChain->SetBranchAddress("Photon.dr02ChargedHadronPFIso[100]", Photon_dr02ChargedHadronPFIso, &b_Photon_dr02ChargedHadronPFIso);
   fChain->SetBranchAddress("Photon.dr03ChargedHadronPFIso[100]", Photon_dr03ChargedHadronPFIso, &b_Photon_dr03ChargedHadronPFIso);
   fChain->SetBranchAddress("Photon.dr04ChargedHadronPFIso[100]", Photon_dr04ChargedHadronPFIso, &b_Photon_dr04ChargedHadronPFIso);
   fChain->SetBranchAddress("Photon.dr05ChargedHadronPFIso[100]", Photon_dr05ChargedHadronPFIso, &b_Photon_dr05ChargedHadronPFIso);
   fChain->SetBranchAddress("Photon.dr06ChargedHadronPFIso[100]", Photon_dr06ChargedHadronPFIso, &b_Photon_dr06ChargedHadronPFIso);
   fChain->SetBranchAddress("Photon.dr01NeutralHadronPFIso", Photon_dr01NeutralHadronPFIso, &b_Photon_dr01NeutralHadronPFIso);
   fChain->SetBranchAddress("Photon.dr02NeutralHadronPFIso", Photon_dr02NeutralHadronPFIso, &b_Photon_dr02NeutralHadronPFIso);
   fChain->SetBranchAddress("Photon.dr03NeutralHadronPFIso", Photon_dr03NeutralHadronPFIso, &b_Photon_dr03NeutralHadronPFIso);
   fChain->SetBranchAddress("Photon.dr04NeutralHadronPFIso", Photon_dr04NeutralHadronPFIso, &b_Photon_dr04NeutralHadronPFIso);
   fChain->SetBranchAddress("Photon.dr05NeutralHadronPFIso", Photon_dr05NeutralHadronPFIso, &b_Photon_dr05NeutralHadronPFIso);
   fChain->SetBranchAddress("Photon.dr06NeutralHadronPFIso", Photon_dr06NeutralHadronPFIso, &b_Photon_dr06NeutralHadronPFIso);
   fChain->SetBranchAddress("Photon.dr01PhotonPFIso", Photon_dr01PhotonPFIso, &b_Photon_dr01PhotonPFIso);
   fChain->SetBranchAddress("Photon.dr02PhotonPFIso", Photon_dr02PhotonPFIso, &b_Photon_dr02PhotonPFIso);
   fChain->SetBranchAddress("Photon.dr03PhotonPFIso", Photon_dr03PhotonPFIso, &b_Photon_dr03PhotonPFIso);
   fChain->SetBranchAddress("Photon.dr04PhotonPFIso", Photon_dr04PhotonPFIso, &b_Photon_dr04PhotonPFIso);
   fChain->SetBranchAddress("Photon.dr05PhotonPFIso", Photon_dr05PhotonPFIso, &b_Photon_dr05PhotonPFIso);
   fChain->SetBranchAddress("Photon.dr06PhotonPFIso", Photon_dr06PhotonPFIso, &b_Photon_dr06PhotonPFIso);
   fChain->SetBranchAddress("Photon.genMatch.index", Photon_genMatch_index, &b_Photon_genMatch_index);
   fChain->SetBranchAddress("Photon.genMatch.energy", Photon_genMatch_energy, &b_Photon_genMatch_energy);
   fChain->SetBranchAddress("Photon.genMatch.pt", Photon_genMatch_pt, &b_Photon_genMatch_pt);
   fChain->SetBranchAddress("Photon.genMatch.eta", Photon_genMatch_eta, &b_Photon_genMatch_eta);
   fChain->SetBranchAddress("Photon.genMatch.phi", Photon_genMatch_phi, &b_Photon_genMatch_phi);
   fChain->SetBranchAddress("Photon.genMatch.mass", Photon_genMatch_mass, &b_Photon_genMatch_mass);
   fChain->SetBranchAddress("Photon.genMatch.Vx", Photon_genMatch_Vx, &b_Photon_genMatch_Vx);
   fChain->SetBranchAddress("Photon.genMatch.Vy", Photon_genMatch_Vy, &b_Photon_genMatch_Vy);
   fChain->SetBranchAddress("Photon.genMatch.Vz", Photon_genMatch_Vz, &b_Photon_genMatch_Vz);
   fChain->SetBranchAddress("Photon.genMatch.status", Photon_genMatch_status, &b_Photon_genMatch_status);
   fChain->SetBranchAddress("Photon.genMatch.id", Photon_genMatch_id, &b_Photon_genMatch_id);
   fChain->SetBranchAddress("Photon.genMatch.statusMother", Photon_genMatch_statusMother, &b_Photon_genMatch_statusMother);
   fChain->SetBranchAddress("Photon.genMatch.idMother", Photon_genMatch_idMother, &b_Photon_genMatch_idMother);
   fChain->SetBranchAddress("Photon.genMatch.indexMother", Photon_genMatch_indexMother, &b_Photon_genMatch_indexMother);
   fChain->SetBranchAddress("isosumoetPho", isosumoetPho, &b_isosumoetPho);
   fChain->SetBranchAddress("mvaPho", mvaPho, &b_mvaPho);
   Notify();
}

Bool_t MuMuGamma::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void MuMuGamma::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t MuMuGamma::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef MuMuGamma_cxx

