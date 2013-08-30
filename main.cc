#include <iostream>
#include <cmath>
#include "MuMuGamma.hh"
#include "TTree.h"
#include "TFile.h"
#include "TChain.h"

int main(){

  MuMuGamma* mumugamma = new MuMuGamma();
  
  mumugamma->Loop();
  return 0;
  
}
