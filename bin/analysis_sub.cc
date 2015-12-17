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

#include "TFile.h"
#include "TVector2.h"
#include "TH1D.h"
#include "TH2D.h"

#define debug false

using namespace std;
using namespace fastjet;
using namespace fastjet::contrib;

int main(int argc, char** argv) {

  if (argc < 3) {
    cout << "./analysis.exe input.root output.root" << endl;
    return 0;
  }
      
  // Declare histograms
  TH1D* tau2_0 = new TH1D("tau2_0", "", 100, 0., 100000.);
  TH1D* tau2_1 = new TH1D("tau2_1", "", 100, 0., 100000.);
  TH1D* tau2_2 = new TH1D("tau2_2", "", 100, 0., 100000.);

  TH1D* tau3_0 = new TH1D("tau3_0", "", 100, 0., 100000.);
  TH1D* tau3_1 = new TH1D("tau3_1", "", 100, 0., 100000.);
  TH1D* tau3_2 = new TH1D("tau3_2", "", 100, 0., 100000.);

  TH1D* tau1_0 = new TH1D("tau1_0", "", 100, 0., 100000.);
  TH1D* tau1_1 = new TH1D("tau1_1", "", 100, 0., 100000.);
  TH1D* tau1_2 = new TH1D("tau1_2", "", 100, 0., 100000.);

  TH1D* d12_0 = new TH1D("d12_0", "", 100, 0., 1.);
  TH1D* d12_1 = new TH1D("d12_1", "", 100, 0., 1.);
  TH1D* d12_2 = new TH1D("d12_2", "", 100, 0., 1.);

  TH1D* d23_0 = new TH1D("d23_0", "", 100, 0., 1.);
  TH1D* d23_1 = new TH1D("d23_1", "", 100, 0., 1.);
  TH1D* d23_2 = new TH1D("d23_2", "", 100, 0., 1.);

  TH1D* d34_0 = new TH1D("d34_0", "", 100, 0., 1.);
  TH1D* d34_1 = new TH1D("d34_1", "", 100, 0., 1.);
  TH1D* d34_2 = new TH1D("d34_2", "", 100, 0., 1.);

  TH2D* tau2_tau1_0 = new TH2D("tau2_tau1_0", "", 25, 0., 10000., 25, 0., 10000.);
  TH2D* tau2_tau1_1 = new TH2D("tau2_tau1_1", "", 25, 0., 10000., 25, 0., 10000.);
  TH2D* tau2_tau1_2 = new TH2D("tau2_tau1_2", "", 25, 0., 10000., 25, 0., 10000.);

  TH1D* nb_hist = new TH1D("nb_hist", "", 5, 0., 5.);

  TH1D* massdrop_nj_0 = new TH1D("massdrop_nj_0", "", 5, 0., 5.);
  TH1D* massdrop_nj_1 = new TH1D("massdrop_nj_1", "", 5, 0., 5.);
  TH1D* massdrop_nj_2 = new TH1D("massdrop_nj_2", "", 5, 0., 5.);

  TH1D* softdrop_dR_0 = new TH1D("softdrop_dR_0", "", 10, 0., 1.);
  TH1D* softdrop_dR_1 = new TH1D("softdrop_dR_1", "", 10, 0., 1.);
  TH1D* softdrop_dR_2 = new TH1D("softdrop_dR_2", "", 10, 0., 1.);

  TH1D* softdrop_mu_0 = new TH1D("softdrop_mu_0", "", 10, 0., 1.);
  TH1D* softdrop_mu_1 = new TH1D("softdrop_mu_1", "", 10, 0., 1.);
  TH1D* softdrop_mu_2 = new TH1D("softdrop_mu_2", "", 10, 0., 1.);

  TH1D* softdrop_y_0 = new TH1D("softdrop_y_0", "", 10, 0., 1.);
  TH1D* softdrop_y_1 = new TH1D("softdrop_y_1", "", 10, 0., 1.);
  TH1D* softdrop_y_2 = new TH1D("softdrop_y_2", "", 10, 0., 1.);

  TH1D* prunning_nj_0 = new TH1D("prunning_nj_0", "", 5, 0., 5.);
  TH1D* prunning_nj_1 = new TH1D("prunning_nj_1", "", 5, 0., 5.);
  TH1D* prunning_nj_2 = new TH1D("prunning_nj_2", "", 5, 0., 5.);

  TH1D* trimming_nj_0 = new TH1D("trimming_nj_0", "", 10, 0., 10.);
  TH1D* trimming_nj_1 = new TH1D("trimming_nj_1", "", 10, 0., 10.);
  TH1D* trimming_nj_2 = new TH1D("trimming_nj_2", "", 10, 0., 10.);
  
  // Substructure tagger  
  double mucut = 0.667;
  double ycut  = 0.090;
  double zcut  = 0.100;
  double beta  = 2.000;
  double rcut  = 0.500;
  double rsub  = 0.200;
  double fcut  = 0.050;

  MassDropTagger md_tagger(mucut, ycut);        	
  SoftDrop       sd_tagger(beta, zcut);
  Pruner         pruner(cambridge_algorithm, zcut, rcut);
  Filter         trimmer(rsub, SelectorPtFractionMin(fcut));

  // n-subjet
  OnePass_KT_Axes     axisMode;
  UnnormalizedMeasure measureSpec(1.0);
  Nsubjettiness nSub1KT(1, axisMode, measureSpec);
  Nsubjettiness nSub2KT(2, axisMode, measureSpec);
  Nsubjettiness nSub3KT(3, axisMode, measureSpec);
    
  // Fatjet clustering
  bool doTrackJet = false;
  bool doAssociatedTrackJet = false;
  double jet_R = 0.6;
  JetDefinition jet_def(cambridge_algorithm, jet_R);

  bool doJVF = true;
  double jet_ptmin = 10000.;

  cout << "Running " << argv[1] << endl;

  TFile* signalFile = TFile::Open(argv[1]);
  TTree* signalTree = (TTree*) signalFile->Get("nominal");

  events.Init(signalTree);
  int nentries = signalTree->GetEntries();

  for (size_t ientry = 0; ientry<nentries; ientry++) {

    aa::progress(ientry, nentries);
    events.GetEntry(ientry);
    vector<PseudoJet> cellPseudoJets = doTrackJet ? GetTrkPseudoJets() : GetCaloPseudoJets();

    ClusterSequence clust_seq(cellPseudoJets, jet_def);    
    vector<PseudoJet> inclusive_jets = sorted_by_pt(clust_seq.inclusive_jets(jet_ptmin));

    if (!doTrackJet && doAssociatedTrackJet) {
      vector<PseudoJet> associated_jets;
      for (auto& jet : inclusive_jets) {
	auto tracks = JetTrackAssociator(jet, jet_R);
	ClusterSequence clust_trk(tracks, jet_def);
	auto track_jets = clust_seq.inclusive_jets(jet_ptmin);
	if (track_jets.size() > 0)
	  associated_jets.push_back(track_jets.at(0));
      }
      inclusive_jets.clear();
      inclusive_jets = associated_jets;
    }
    
    if (debug) {
      cout << "ATLAS jets: ------- " <<  events.jet_pt().size() << " ----------" << endl;
      for (int i=0; i<events.jet_pt().size(); i++) 
	cout << events.jet_pt().at(i) << " " << events.jet_eta().at(i) << " " << TVector2::Phi_mpi_pi(events.jet_phi().at(i)) << endl;

      cout << "b hadrons: ------- " <<  endl;
      for (size_t i = 0; i < events.mc_e().size(); i++) {
	if (TMath::Abs(events.mc_pdgId().at(i)) == 5) {
	  TLorentzVector vec;
	  vec.SetPtEtaPhiE(tas::mc_pt().at(i), tas::mc_eta().at(i), tas::mc_eta().at(i), tas::mc_e().at(i));
	  cout << vec.Pt() << " " << vec.Eta() << " " << TVector2::Phi_mpi_pi(vec.Phi()) << " " << events.mc_pdgId().at(i) << " " << i << endl;
	}
      }
    }
    
    if (debug) cout << "My jets: ---------- " << endl;
    for (auto jet : inclusive_jets) {

      PseudoJet md_jet = md_tagger(jet);
      PseudoJet sd_jet = sd_tagger(jet);
      PseudoJet pr_jet = pruner(jet);
      PseudoJet tr_jet = trimmer(jet);
     
      double tau1 = nSub1KT(jet);
      double tau2 = nSub2KT(jet);
      double tau3 = nSub3KT(jet);
      
      // jet selection
      float JVF = getJVF(jet, jet_R);
      if (TMath::Abs(jet.eta()) < 2.5 && jet.pt() > 20000. && (!doJVF || JVF > 0.75)) {

	if (isLepton(jet, jet_R)) continue;
	
	int nb = isBjet(jet);
	nb_hist->Fill(nb);

	float _d12 = jet.exclusive_subdmerge(1);
	float _d23 = jet.exclusive_subdmerge(2);
	float _d34 = jet.exclusive_subdmerge(3);

	if (nb == 0) d12_0->Fill(_d12);
	else if (nb == 1) d12_1->Fill(_d12);
	else if (nb == 2) d12_2->Fill(_d12);

	if (nb == 0) d23_0->Fill(_d23);
	else if (nb == 1) d23_1->Fill(_d23);
	else if (nb == 2) d23_2->Fill(_d23);
	
	if (nb == 0) d34_0->Fill(_d34);
	else if (nb == 1) d34_1->Fill(_d34);
	else if (nb == 2) d34_2->Fill(_d34);

	if (nb == 0) softdrop_dR_0->Fill(sd_jet.structure_of<SoftDrop>().delta_R());
	else if (nb == 1) softdrop_dR_1->Fill(sd_jet.structure_of<SoftDrop>().delta_R());
	else if (nb == 2) softdrop_dR_2->Fill(sd_jet.structure_of<SoftDrop>().delta_R());

	if (nb == 0) softdrop_mu_0->Fill(sd_jet.structure_of<SoftDrop>().mu());
	else if (nb == 1) softdrop_mu_1->Fill(sd_jet.structure_of<SoftDrop>().mu());
	else if (nb == 2) softdrop_mu_2->Fill(sd_jet.structure_of<SoftDrop>().mu());

	if (nb == 0) softdrop_y_0->Fill(sd_jet.structure_of<SoftDrop>().symmetry());
	else if (nb == 1) softdrop_y_1->Fill(sd_jet.structure_of<SoftDrop>().symmetry());
	else if (nb == 2) softdrop_y_2->Fill(sd_jet.structure_of<SoftDrop>().symmetry());
	
	if (nb == 0) prunning_nj_0->Fill(pr_jet.structure_of<Pruner>().extra_jets().size());
	else if (nb == 1) prunning_nj_1->Fill(pr_jet.structure_of<Pruner>().extra_jets().size());
	else if (nb == 2) prunning_nj_2->Fill(pr_jet.structure_of<Pruner>().extra_jets().size());

	int md_size = 0;
	if (md_jet != 0) md_size = md_jet.pieces().size();
	int tr_size = 0;
	if (tr_jet != 0) tr_size = tr_jet.pieces().size();
	
	if (nb == 0) massdrop_nj_0->Fill(md_size);
	else if (nb == 1) massdrop_nj_1->Fill(md_size);
	else if (nb == 2) massdrop_nj_2->Fill(md_size);

	if (nb == 0) trimming_nj_0->Fill(tr_size);
	else if (nb == 1) trimming_nj_1->Fill(tr_size);
	else if (nb == 2) trimming_nj_2->Fill(tr_size);

	if (nb == 0) tau2_0->Fill(tau2);
	else if (nb == 1) tau2_1->Fill(tau2);
	else if (nb == 2) tau2_2->Fill(tau2);

	if (nb == 0) tau1_0->Fill(tau1);
	else if (nb == 1) tau1_1->Fill(tau1);
	else if (nb == 2) tau1_2->Fill(tau1);

	if (nb == 0) tau3_0->Fill(tau3);
	else if (nb == 1) tau3_1->Fill(tau3);
	else if (nb == 2) tau3_2->Fill(tau3);

	if (nb == 0) tau2_tau1_0->Fill(tau2,tau1);
	else if (nb == 1) tau2_tau1_1->Fill(tau2,tau1);
	else if (nb == 2) tau2_tau1_2->Fill(tau2,tau1);

	if (debug) {
	  cout << jet.pt() << " " << jet.eta() << " " << TVector2::Phi_mpi_pi(jet.phi()) << " " << getJVF(jet, jet_R) << " " << isBjet(jet) << " " << jet.m() << endl;
	  cout << "      ---> " << tau1 << " " << tau2 << " " << tau3 << " " << tau2/tau1 << " " << tau3/tau2 << " " << !(md_jet==0) << endl;
	  cout << "      ---> " << md_size << endl;
	}
      }
    }
  }
  TFile* output = TFile::Open(argv[2], "RECREATE");
  tau2_0->Write();
  tau2_1->Write();
  tau2_2->Write();
  tau1_0->Write();
  tau1_1->Write();
  tau1_2->Write();
  tau3_0->Write();
  tau3_1->Write();
  tau3_2->Write();
  tau2_tau1_0->Write();
  tau2_tau1_1->Write();
  tau2_tau1_2->Write();
  nb_hist->Write();
  massdrop_nj_0->Write();
  massdrop_nj_1->Write();
  massdrop_nj_2->Write();
  softdrop_dR_0->Write();
  softdrop_dR_1->Write();
  softdrop_dR_2->Write();
  softdrop_mu_0->Write();
  softdrop_mu_1->Write();
  softdrop_mu_2->Write();
  softdrop_y_0->Write();
  softdrop_y_1->Write();
  softdrop_y_2->Write();
  prunning_nj_0->Write();
  prunning_nj_1->Write();
  prunning_nj_2->Write();
  trimming_nj_0->Write();
  trimming_nj_1->Write();
  trimming_nj_2->Write();
  d12_0->Write();
  d12_1->Write();
  d12_2->Write();
  d23_0->Write();
  d23_1->Write();
  d23_2->Write();
  d34_0->Write();
  d34_1->Write();
  d34_2->Write();
  output->Close();
}
