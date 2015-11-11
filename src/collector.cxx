#include "MergedAnalysis/collector.h"
#include "MergedAnalysis/aa.h"

vector<PseudoJet> GetCaloPseudoJets() {

  float ghost = 1.e-21;
  vector<PseudoJet> input_particles;   
  for (size_t imcpart = 0; imcpart < tas::mc_pdgId().size(); imcpart++) {
    if (isBparton(tas::mc_pdgId().at(imcpart), tas::mc_status().at(imcpart))) {
      TLorentzVector vec;
      vec.SetPtEtaPhiE(tas::mc_pt().at(imcpart), tas::mc_eta().at(imcpart), tas::mc_phi().at(imcpart), tas::mc_e().at(imcpart));
      vec *= ghost;
      PseudoJet bParton(vec.Px(),vec.Py(),vec.Pz(),vec.E());
      bParton.set_user_index(+1);
      input_particles.push_back(bParton);
    }
  }
  for (size_t icluster = 0; icluster < tas::caloCluster_E().size(); icluster++) {
    PseudoJet caloCluster(tas::caloCluster_px().at(icluster),tas::caloCluster_py().at(icluster),tas::caloCluster_pz().at(icluster),tas::caloCluster_E().at(icluster));
    caloCluster.set_user_index(-1);        
    input_particles.push_back(caloCluster);
  }
  return input_particles;

}

vector<PseudoJet> JetTrackAssociator(const PseudoJet& jet, const float& R) {

  float ghost = 1.e-21;
  vector<PseudoJet> input_particles;   
  for (size_t imcpart = 0; imcpart < tas::mc_pdgId().size(); imcpart++) {
    if (isBparton(tas::mc_pdgId().at(imcpart), tas::mc_status().at(imcpart))) {
      TLorentzVector vec;
      vec.SetPtEtaPhiE(tas::mc_pt().at(imcpart), tas::mc_eta().at(imcpart), tas::mc_phi().at(imcpart), tas::mc_e().at(imcpart));
      vec *= ghost;
      PseudoJet bParton(vec.Px(),vec.Py(),vec.Pz(),vec.E());
      if (bParton.delta_R(jet) > R) continue;
      bParton.set_user_index(+1);
      input_particles.push_back(bParton);
    }
  }
  for (size_t itrk = 0; itrk < tas::track_E().size(); itrk++) {
    if (!isGoodTrack(itrk)) continue;
    if (tas::track_vertex_type().at(itrk) != 1) continue;
    PseudoJet track(tas::track_px().at(itrk),tas::track_py().at(itrk),tas::track_pz().at(itrk),tas::track_E().at(itrk));
    if (track.delta_R(jet) > R) continue;
    
    track.set_user_index(-1);            
    input_particles.push_back(track);
  }
  return input_particles;

}

vector<PseudoJet> GetTrkPseudoJets() {
  
  float ghost = 1.e-21;
  vector<PseudoJet> input_particles;   
  for (size_t imcpart = 0; imcpart < tas::mc_pdgId().size(); imcpart++) {
    if (isBparton(tas::mc_pdgId().at(imcpart), tas::mc_status().at(imcpart))) {
      TLorentzVector vec;
      vec.SetPtEtaPhiE(tas::mc_pt().at(imcpart), tas::mc_eta().at(imcpart), tas::mc_phi().at(imcpart), tas::mc_e().at(imcpart));
      vec *= ghost;
      PseudoJet bParton(vec.Px(),vec.Py(),vec.Pz(),vec.E());
      bParton.set_user_index(+1);
      input_particles.push_back(bParton);
    }
  }
  for (size_t itrk = 0; itrk < tas::track_E().size(); itrk++) {
    if (!isGoodTrack(itrk)) continue;
    if (tas::track_vertex_type().at(itrk) != 1) continue;
    PseudoJet track(tas::track_px().at(itrk),tas::track_py().at(itrk),tas::track_pz().at(itrk),tas::track_E().at(itrk));
    track.set_user_index(-1);            
    input_particles.push_back(track);
  }
  return input_particles;

}

float getJVF(const PseudoJet& jet, const float& R) {

  float PVtracksum = 0.;
  float PUtracksum = 0.;
  float n_PUtracks = 0.;
  float n_min;
  n_min = 1.0;
  
  for (size_t itrk = 0; itrk < tas::track_E().size(); itrk++) {
    if (!isGoodTrack(itrk)) continue;
    PseudoJet track (tas::track_px().at(itrk),tas::track_py().at(itrk),tas::track_pz().at(itrk),tas::track_E().at(itrk));
    
    if (track.delta_R(jet) < R) {
      if (tas::track_vertex_type().at(itrk) == 1) PVtracksum += track.perp();
      else if (tas::track_vertex_type().at(itrk) < 0) {
	if (tas::track_vertex_z().at(itrk)+tas::track_z0().at(itrk)-tas::primary_vertex_z().at(0) < 3.0) PVtracksum += track.perp();
      }
      else if (track.perp() < 30000.) {
	PUtracksum += track.perp();
	n_PUtracks += 1.0;
      }
    }
  }
  
  //  float jvfcorr = PVtracksum / (PVtracksum + ( PUtracksum / (0.01 * TMath::Max(n_PUtracks, n_min) ) ) );
  float jvfcorr;
  jvfcorr = PVtracksum + PUtracksum > 0. ? PVtracksum / (PVtracksum + PUtracksum) : 0.;
  return jvfcorr;
}
    

bool isGoodTrack(int trkidx) {

  if (TMath::Abs(tas::track_z0().at(trkidx)) > 200.) return false;
  if (tas::track_d0().at(trkidx) > 5.) return false;
  if (tas::track_pt().at(trkidx) < 400.) return false;
  if (tas::track_pt().at(trkidx) > 5000000.) return false;
  if (tas::track_theta().at(trkidx) < 0.1638) return false;
  if ((TMath::Pi()-tas::track_theta().at(trkidx)) < 0.1638) return false; // |\eta| > 2.5
  if ((tas::track_chiSquared().at(trkidx)/tas::track_numberDoF().at(trkidx)) > 3.) return false;
  if (tas::track_numberOfSCTHits().at(trkidx) < 5) return false;
  if (tas::track_numberOfSCTHits().at(trkidx) > 20) return false;
  if (tas::track_numberOfTRTHits().at(trkidx) < 0) return false;
  if (tas::track_numberOfTRTHits().at(trkidx) > 40) return false;
  if (tas::track_numberOfPixelHits().at(trkidx) < 1) return false;
  if (tas::track_numberOfPixelHits().at(trkidx) > 5) return false;
  return true;

}

int isBjet(const PseudoJet& jet) {

  int retval = 0;
  vector<fastjet::PseudoJet> constituents = jet.constituents();
  for (auto constituent : constituents) {
    if (constituent.user_index() > 0) retval++;
  }
  return retval;
  
}

bool isBhadron(int pdgId) {

  int pdg=TMath::Abs(pdgId);

  if((pdg>=511 && pdg<=545) || (pdg>=10511 && pdg<=10545) || (pdg>=20511 && pdg<=20545) || (pdg>=5112 && pdg<=5554)) { 
    return true;
  } else return false;
  
}

bool isBparton(int pdgId, int status) {

  int pdg=TMath::Abs(pdgId);

  if(pdg==5 && (status==3 || status==23)) {
    return true;
  } else return false;
  
}

bool isLepton(const PseudoJet& jet, const float& R) {

  for (int imu = 0; imu < tas::mu_pt().size(); imu++) {
    TLorentzVector vec;
    vec.SetPtEtaPhiE(tas::mu_pt().at(imu), tas::mu_eta().at(imu), tas::mu_phi().at(imu), tas::mu_e().at(imu));
    PseudoJet muon(vec.Px(),vec.Py(),vec.Pz(),vec.E());
    if (jet.delta_R(muon) < R) return true;
  }
  for (int iel = 0; iel < tas::el_pt().size(); iel++) {
    TLorentzVector vec;
    vec.SetPtEtaPhiE(tas::el_pt().at(iel), tas::el_eta().at(iel), tas::el_phi().at(iel), tas::el_e().at(iel));
    PseudoJet electron(vec.Px(),vec.Py(),vec.Pz(),vec.E());
    if (jet.delta_R(electron) < R) return true;
  }
  return false;
}
    
