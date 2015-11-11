#include "MergedAnalysis/aa.h"
#include "TMath.h"
#include "TLorentzVector.h"
#include "fastjet/ClusterSequence.hh"
#include <vector>

using namespace std;
using namespace fastjet;

#ifndef COLLECTOR_HPP
#define COLLECTOR_HPP

vector<PseudoJet> GetCaloPseudoJets();
vector<PseudoJet> GetTrkPseudoJets();
vector<PseudoJet> JetTrackAssociator(const PseudoJet& jet, const float& R);

float getJVF(const PseudoJet& jet, const float& R);
int isBjet(const PseudoJet& jet);

bool isGoodTrack(int trkidx);
bool isBhadron(int pdgId);
bool isBparton(int pdgId, int status);
bool isLepton(const PseudoJet& jet, const float& R);

#endif
