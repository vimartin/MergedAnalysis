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
    if (tas::caloCluster_E().at(icluster) < 0) continue;
    PseudoJet caloCluster(tas::caloCluster_px().at(icluster),tas::caloCluster_py().at(icluster),tas::caloCluster_pz().at(icluster),tas::caloCluster_E().at(icluster));
    caloCluster.set_user_index(-1);        
    input_particles.push_back(caloCluster);
  }
  return input_particles;

}

vector<PseudoJet> GetGenTrackJets() {

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
  for (size_t imcpart = 0; imcpart < tas::status1_mc_pdgId().size(); imcpart++) {
    if (isNeutral(tas::status1_mc_pdgId().at(imcpart))) continue;
    TLorentzVector vec;
    vec.SetPtEtaPhiE(tas::status1_mc_pt().at(imcpart), tas::status1_mc_eta().at(imcpart), tas::status1_mc_phi().at(imcpart), tas::status1_mc_e().at(imcpart));
    PseudoJet particle(vec.Px(),vec.Py(),vec.Pz(),vec.E());
    particle.set_user_index(-1);
    input_particles.push_back(particle);
  }
  return input_particles;

}

vector<PseudoJet> GetGenCaloJets() {

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
  for (size_t imcpart = 0; imcpart < tas::status1_mc_pdgId().size(); imcpart++) {
    if (isInvisible(tas::status1_mc_pdgId().at(imcpart))) continue;
    TLorentzVector vec;
    vec.SetPtEtaPhiE(tas::status1_mc_pt().at(imcpart), tas::status1_mc_eta().at(imcpart), tas::status1_mc_phi().at(imcpart), tas::status1_mc_e().at(imcpart));
    PseudoJet particle(vec.Px(),vec.Py(),vec.Pz(),vec.E());
    particle.set_user_index(-1);
    input_particles.push_back(particle);
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
    if (constituent.user_index() > 0) {
      retval++;
    }
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
    
bool isNeutral (int pdgId) {

  pdgId = abs(pdgId);
  if (pdgId == 12) return true;
  if (pdgId == 14) return true;
  if (pdgId == 16) return true;
  if (pdgId == 22) return true;

  if (pdgId == 111) return true;
  if (pdgId == 113) return true;
  if (pdgId == 115) return true;
  if (pdgId == 130) return true;

  if (pdgId == 221) return true;
  if (pdgId == 223) return true;
  if (pdgId == 225) return true;
  if (pdgId == 227) return true;
  if (pdgId == 229) return true;

  if (pdgId == 310) return true;
  if (pdgId == 311) return true;
  if (pdgId == 313) return true;
  if (pdgId == 315) return true;
  if (pdgId == 317) return true;
  if (pdgId == 319) return true;
  if (pdgId == 331) return true;
  if (pdgId == 333) return true;
  if (pdgId == 335) return true;
  if (pdgId == 337) return true;

  if (pdgId == 421) return true;
  if (pdgId == 423) return true;
  if (pdgId == 425) return true;
  if (pdgId == 441) return true;
  if (pdgId == 443) return true;
  if (pdgId == 445) return true;

  if (pdgId == 511) return true;
  if (pdgId == 513) return true;
  if (pdgId == 515) return true;
  if (pdgId == 531) return true;
  if (pdgId == 533) return true;
  if (pdgId == 535) return true;
  if (pdgId == 551) return true;
  if (pdgId == 553) return true;
  if (pdgId == 555) return true;
  if (pdgId == 557) return true;

  if (pdgId == 2114) return true;
  if (pdgId == 2112) return true;

  if (pdgId == 3122) return true;
  if (pdgId == 3212) return true;
  if (pdgId == 3214) return true;
  if (pdgId == 3322) return true;
  if (pdgId == 3324) return true;

  if (pdgId == 4112) return true;
  if (pdgId == 4114) return true;
  if (pdgId == 4132) return true;
  if (pdgId == 4312) return true;
  if (pdgId == 4314) return true;
  if (pdgId == 4334) return true;

  if (pdgId == 5122) return true;
  if (pdgId == 5212) return true;
  if (pdgId == 5214) return true;
  if (pdgId == 5232) return true;
  if (pdgId == 5322) return true;
  if (pdgId == 5324) return true;
  if (pdgId == 5142) return true;
  if (pdgId == 5412) return true;
  if (pdgId == 5414) return true;
  if (pdgId == 5342) return true;
  if (pdgId == 5432) return true;
  if (pdgId == 5434) return true;
  if (pdgId == 5522) return true;
  if (pdgId == 5524) return true;
  if (pdgId == 5542) return true;
  if (pdgId == 5544) return true;
  return false;
}
  
bool isInvisible (int pdgId) {

  pdgId = abs(pdgId);
  if (pdgId == 12) return true;
  if (pdgId == 14) return true;
  if (pdgId == 16) return true;
  return false;
}
  

  

  
