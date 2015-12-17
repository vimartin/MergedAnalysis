#include "aa.cxx"
#include "MergedAnalysis/collector.h"
#include "fastjet/ClusterSequence.hh"
#include "fastjet/tools/MassDropTagger.hh"
#include "fastjet/tools/Filter.hh"
#include "fastjet/tools/Pruner.hh"
#include "fastjet/contrib/Nsubjettiness.hh"
#include "fastjet/contrib/Njettiness.hh"
#include "fastjet/contrib/NjettinessPlugin.hh"
#include "fastjet/contrib/SoftDrop.hh"

#include <vector>
#include <algorithm>

#include "TFile.h"
#include "TVector2.h"
#include "TH1D.h"
#include "TH2D.h"

#define debug false
#undef DRcounting

using namespace std;
using namespace fastjet;
using namespace fastjet::contrib;

int main(int argc, char** argv) {

  if (argc < 3) {
    cout << "./analysis.exe input.root output.root" << endl;
    return 0;
  }
      
  // Declare histograms
  TH2D* acceptance_merged = new TH2D("acceptance_merged", "", 12, 0.05, 1.25, 10, 5., 105.);
  TH2D* acceptance_resolved = new TH2D("acceptance_resolved", "", 12, 0.05, 1.25, 10, 5., 105.);

  TH2D* numerator_merged = new TH2D("numerator_merged", "", 12, 0.05, 1.25, 10, 5., 105.);
  TH2D* numerator_resolved = new TH2D("numerator_resolved", "", 12, 0.05, 1.25, 10, 5., 105.);
  TH2D* denominator_merged = new TH2D("denominator_merged", "", 12, 0.05, 1.25, 10, 5., 105.);
  TH2D* denominator_resolved = new TH2D("denominator_resolved", "", 12, 0.05, 1.25, 10, 5., 105.);

  //  TH1D* delta_energy = new TH1D("delta_energy", "", 100, -100, 100);
  
  // Fatjet clustering
  bool doTrackJet = true;
  bool doGenJets = true;
  bool doAssociatedTrackJet = false;
  bool doJVF = false;

  TFile* signalFile = TFile::Open(argv[1]);
  TTree* signalTree = (TTree*) signalFile->Get("nominal");
  events.Init(signalTree);
  int nentries = signalTree->GetEntries();

  for (size_t ientry = 0; ientry<nentries; ientry++) {

    aa::progress(ientry, nentries);
    events.GetEntry(ientry);
    vector<PseudoJet> cellPseudoJets = doTrackJet ? (doGenJets ? GetGenTrackJets() : GetTrkPseudoJets()) : (doGenJets ? GetGenCaloJets() : GetCaloPseudoJets());

    for (int iR = 0; iR < 12; iR++) {
      for (int iPT = 0; iPT < 10; iPT++) {

	
	double jet_R = float(iR)*0.1+0.1;
	double jet_ptmin = float(iPT)*10.+10.;
      
	JetDefinition jet_def(antikt_algorithm, jet_R);
	ClusterSequence clust_seq(cellPseudoJets, jet_def);	
	vector<PseudoJet> inclusive_jets = sorted_by_pt(clust_seq.inclusive_jets(10000.));

	if (!doTrackJet && doAssociatedTrackJet) {
	  vector<PseudoJet> associated_jets;
	  for (auto& jet : inclusive_jets) {
	    auto tracks = JetTrackAssociator(jet, jet_R);
	    ClusterSequence clust_trk(tracks, jet_def);
	    auto track_jets = clust_seq.inclusive_jets(10000.);
	    if (track_jets.size() > 0)
	      associated_jets.push_back(track_jets.at(0));
	  }
	  inclusive_jets.clear();
	  inclusive_jets = associated_jets;
	}
        
	int nb_counter[5] = {0,0,0,0,0};
	denominator_resolved->Fill(jet_R,jet_ptmin);
	denominator_merged->Fill(jet_R,jet_ptmin);

#ifdef DRcounting	    
	vector<size_t> used_bs;
#endif

	for (auto jet : inclusive_jets) {
	  
	  // jet selection
	  float JVF = doJVF? getJVF(jet, jet_R) : 1.;
	  
	  if (TMath::Abs(jet.eta()) < 2.5 && jet.pt() > jet_ptmin*1000. && (!doJVF || JVF > 0.75)) {
	    if (isLepton(jet, jet_R)) continue;
	    int nb = isBjet(jet);
	    
#ifdef DRcounting
	    nb = 0;
	    for (size_t imcpart = 0; imcpart < tas::mc_pdgId().size(); imcpart++) {
	      if (isBparton(tas::mc_pdgId().at(imcpart), tas::mc_status().at(imcpart)) && find(used_bs.begin(), used_bs.end(), imcpart) == used_bs.end()) {
		TLorentzVector vec;
		vec.SetPtEtaPhiE(tas::mc_pt().at(imcpart), tas::mc_eta().at(imcpart), tas::mc_phi().at(imcpart), tas::mc_e().at(imcpart));
		PseudoJet bParton(vec.Px(),vec.Py(),vec.Pz(),vec.E());
		if (bParton.delta_R(jet) < jet_R) {
		  nb++;
		  used_bs.push_back(imcpart);
		}
	      }	      
	    }
#endif
	    nb = nb > 4 ? 4 : nb;
	    nb_counter[nb]++;	    
	  }
	}
	if (nb_counter[1] == 4) numerator_resolved->Fill(jet_R,jet_ptmin);
	if (nb_counter[2] == 2) numerator_merged->Fill(jet_R,jet_ptmin);
      }      
    }
  }

  acceptance_merged->Divide(numerator_merged, denominator_merged, 1., 1., "b");
  acceptance_resolved->Divide(numerator_resolved, denominator_resolved, 1., 1., "b");

  // Write histograms in file
  TFile* output = TFile::Open(argv[2], "RECREATE");
  acceptance_merged->Write();
  acceptance_resolved->Write();

  numerator_merged->Write();
  numerator_resolved->Write();
  denominator_merged->Write();
  denominator_resolved->Write();  
  output->Close();
  
}
