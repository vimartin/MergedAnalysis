#include "MergedAnalysis/aa.h"
aa events;

void aa::Init(TTree *tree) {
  tree->SetMakeClass(1);
	weight_mc_branch = 0;
	if (tree->GetBranch("weight_mc") != 0) {
		weight_mc_branch = tree->GetBranch("weight_mc");
		if (weight_mc_branch) {weight_mc_branch->SetAddress(&weight_mc_);}
	}
	weight_pileup_branch = 0;
	if (tree->GetBranch("weight_pileup") != 0) {
		weight_pileup_branch = tree->GetBranch("weight_pileup");
		if (weight_pileup_branch) {weight_pileup_branch->SetAddress(&weight_pileup_);}
	}
	weight_leptonSF_branch = 0;
	if (tree->GetBranch("weight_leptonSF") != 0) {
		weight_leptonSF_branch = tree->GetBranch("weight_leptonSF");
		if (weight_leptonSF_branch) {weight_leptonSF_branch->SetAddress(&weight_leptonSF_);}
	}
	weight_bTagSF_branch = 0;
	if (tree->GetBranch("weight_bTagSF") != 0) {
		weight_bTagSF_branch = tree->GetBranch("weight_bTagSF");
		if (weight_bTagSF_branch) {weight_bTagSF_branch->SetAddress(&weight_bTagSF_);}
	}
	weight_leptonSF_EL_SF_Trigger_UP_branch = 0;
	if (tree->GetBranch("weight_leptonSF_EL_SF_Trigger_UP") != 0) {
		weight_leptonSF_EL_SF_Trigger_UP_branch = tree->GetBranch("weight_leptonSF_EL_SF_Trigger_UP");
		if (weight_leptonSF_EL_SF_Trigger_UP_branch) {weight_leptonSF_EL_SF_Trigger_UP_branch->SetAddress(&weight_leptonSF_EL_SF_Trigger_UP_);}
	}
	weight_leptonSF_EL_SF_Trigger_DOWN_branch = 0;
	if (tree->GetBranch("weight_leptonSF_EL_SF_Trigger_DOWN") != 0) {
		weight_leptonSF_EL_SF_Trigger_DOWN_branch = tree->GetBranch("weight_leptonSF_EL_SF_Trigger_DOWN");
		if (weight_leptonSF_EL_SF_Trigger_DOWN_branch) {weight_leptonSF_EL_SF_Trigger_DOWN_branch->SetAddress(&weight_leptonSF_EL_SF_Trigger_DOWN_);}
	}
	weight_leptonSF_EL_SF_Reco_UP_branch = 0;
	if (tree->GetBranch("weight_leptonSF_EL_SF_Reco_UP") != 0) {
		weight_leptonSF_EL_SF_Reco_UP_branch = tree->GetBranch("weight_leptonSF_EL_SF_Reco_UP");
		if (weight_leptonSF_EL_SF_Reco_UP_branch) {weight_leptonSF_EL_SF_Reco_UP_branch->SetAddress(&weight_leptonSF_EL_SF_Reco_UP_);}
	}
	weight_leptonSF_EL_SF_Reco_DOWN_branch = 0;
	if (tree->GetBranch("weight_leptonSF_EL_SF_Reco_DOWN") != 0) {
		weight_leptonSF_EL_SF_Reco_DOWN_branch = tree->GetBranch("weight_leptonSF_EL_SF_Reco_DOWN");
		if (weight_leptonSF_EL_SF_Reco_DOWN_branch) {weight_leptonSF_EL_SF_Reco_DOWN_branch->SetAddress(&weight_leptonSF_EL_SF_Reco_DOWN_);}
	}
	weight_leptonSF_EL_SF_ID_UP_branch = 0;
	if (tree->GetBranch("weight_leptonSF_EL_SF_ID_UP") != 0) {
		weight_leptonSF_EL_SF_ID_UP_branch = tree->GetBranch("weight_leptonSF_EL_SF_ID_UP");
		if (weight_leptonSF_EL_SF_ID_UP_branch) {weight_leptonSF_EL_SF_ID_UP_branch->SetAddress(&weight_leptonSF_EL_SF_ID_UP_);}
	}
	weight_leptonSF_EL_SF_ID_DOWN_branch = 0;
	if (tree->GetBranch("weight_leptonSF_EL_SF_ID_DOWN") != 0) {
		weight_leptonSF_EL_SF_ID_DOWN_branch = tree->GetBranch("weight_leptonSF_EL_SF_ID_DOWN");
		if (weight_leptonSF_EL_SF_ID_DOWN_branch) {weight_leptonSF_EL_SF_ID_DOWN_branch->SetAddress(&weight_leptonSF_EL_SF_ID_DOWN_);}
	}
	weight_leptonSF_EL_SF_Isol_UP_branch = 0;
	if (tree->GetBranch("weight_leptonSF_EL_SF_Isol_UP") != 0) {
		weight_leptonSF_EL_SF_Isol_UP_branch = tree->GetBranch("weight_leptonSF_EL_SF_Isol_UP");
		if (weight_leptonSF_EL_SF_Isol_UP_branch) {weight_leptonSF_EL_SF_Isol_UP_branch->SetAddress(&weight_leptonSF_EL_SF_Isol_UP_);}
	}
	weight_leptonSF_EL_SF_Isol_DOWN_branch = 0;
	if (tree->GetBranch("weight_leptonSF_EL_SF_Isol_DOWN") != 0) {
		weight_leptonSF_EL_SF_Isol_DOWN_branch = tree->GetBranch("weight_leptonSF_EL_SF_Isol_DOWN");
		if (weight_leptonSF_EL_SF_Isol_DOWN_branch) {weight_leptonSF_EL_SF_Isol_DOWN_branch->SetAddress(&weight_leptonSF_EL_SF_Isol_DOWN_);}
	}
	weight_leptonSF_MU_SF_Trigger_STAT_UP_branch = 0;
	if (tree->GetBranch("weight_leptonSF_MU_SF_Trigger_STAT_UP") != 0) {
		weight_leptonSF_MU_SF_Trigger_STAT_UP_branch = tree->GetBranch("weight_leptonSF_MU_SF_Trigger_STAT_UP");
		if (weight_leptonSF_MU_SF_Trigger_STAT_UP_branch) {weight_leptonSF_MU_SF_Trigger_STAT_UP_branch->SetAddress(&weight_leptonSF_MU_SF_Trigger_STAT_UP_);}
	}
	weight_leptonSF_MU_SF_Trigger_STAT_DOWN_branch = 0;
	if (tree->GetBranch("weight_leptonSF_MU_SF_Trigger_STAT_DOWN") != 0) {
		weight_leptonSF_MU_SF_Trigger_STAT_DOWN_branch = tree->GetBranch("weight_leptonSF_MU_SF_Trigger_STAT_DOWN");
		if (weight_leptonSF_MU_SF_Trigger_STAT_DOWN_branch) {weight_leptonSF_MU_SF_Trigger_STAT_DOWN_branch->SetAddress(&weight_leptonSF_MU_SF_Trigger_STAT_DOWN_);}
	}
	weight_leptonSF_MU_SF_Trigger_SYST_UP_branch = 0;
	if (tree->GetBranch("weight_leptonSF_MU_SF_Trigger_SYST_UP") != 0) {
		weight_leptonSF_MU_SF_Trigger_SYST_UP_branch = tree->GetBranch("weight_leptonSF_MU_SF_Trigger_SYST_UP");
		if (weight_leptonSF_MU_SF_Trigger_SYST_UP_branch) {weight_leptonSF_MU_SF_Trigger_SYST_UP_branch->SetAddress(&weight_leptonSF_MU_SF_Trigger_SYST_UP_);}
	}
	weight_leptonSF_MU_SF_Trigger_SYST_DOWN_branch = 0;
	if (tree->GetBranch("weight_leptonSF_MU_SF_Trigger_SYST_DOWN") != 0) {
		weight_leptonSF_MU_SF_Trigger_SYST_DOWN_branch = tree->GetBranch("weight_leptonSF_MU_SF_Trigger_SYST_DOWN");
		if (weight_leptonSF_MU_SF_Trigger_SYST_DOWN_branch) {weight_leptonSF_MU_SF_Trigger_SYST_DOWN_branch->SetAddress(&weight_leptonSF_MU_SF_Trigger_SYST_DOWN_);}
	}
	weight_leptonSF_MU_SF_ID_STAT_UP_branch = 0;
	if (tree->GetBranch("weight_leptonSF_MU_SF_ID_STAT_UP") != 0) {
		weight_leptonSF_MU_SF_ID_STAT_UP_branch = tree->GetBranch("weight_leptonSF_MU_SF_ID_STAT_UP");
		if (weight_leptonSF_MU_SF_ID_STAT_UP_branch) {weight_leptonSF_MU_SF_ID_STAT_UP_branch->SetAddress(&weight_leptonSF_MU_SF_ID_STAT_UP_);}
	}
	weight_leptonSF_MU_SF_ID_STAT_DOWN_branch = 0;
	if (tree->GetBranch("weight_leptonSF_MU_SF_ID_STAT_DOWN") != 0) {
		weight_leptonSF_MU_SF_ID_STAT_DOWN_branch = tree->GetBranch("weight_leptonSF_MU_SF_ID_STAT_DOWN");
		if (weight_leptonSF_MU_SF_ID_STAT_DOWN_branch) {weight_leptonSF_MU_SF_ID_STAT_DOWN_branch->SetAddress(&weight_leptonSF_MU_SF_ID_STAT_DOWN_);}
	}
	weight_leptonSF_MU_SF_ID_SYST_UP_branch = 0;
	if (tree->GetBranch("weight_leptonSF_MU_SF_ID_SYST_UP") != 0) {
		weight_leptonSF_MU_SF_ID_SYST_UP_branch = tree->GetBranch("weight_leptonSF_MU_SF_ID_SYST_UP");
		if (weight_leptonSF_MU_SF_ID_SYST_UP_branch) {weight_leptonSF_MU_SF_ID_SYST_UP_branch->SetAddress(&weight_leptonSF_MU_SF_ID_SYST_UP_);}
	}
	weight_leptonSF_MU_SF_ID_SYST_DOWN_branch = 0;
	if (tree->GetBranch("weight_leptonSF_MU_SF_ID_SYST_DOWN") != 0) {
		weight_leptonSF_MU_SF_ID_SYST_DOWN_branch = tree->GetBranch("weight_leptonSF_MU_SF_ID_SYST_DOWN");
		if (weight_leptonSF_MU_SF_ID_SYST_DOWN_branch) {weight_leptonSF_MU_SF_ID_SYST_DOWN_branch->SetAddress(&weight_leptonSF_MU_SF_ID_SYST_DOWN_);}
	}
	weight_leptonSF_MU_SF_Isol_UP_branch = 0;
	if (tree->GetBranch("weight_leptonSF_MU_SF_Isol_UP") != 0) {
		weight_leptonSF_MU_SF_Isol_UP_branch = tree->GetBranch("weight_leptonSF_MU_SF_Isol_UP");
		if (weight_leptonSF_MU_SF_Isol_UP_branch) {weight_leptonSF_MU_SF_Isol_UP_branch->SetAddress(&weight_leptonSF_MU_SF_Isol_UP_);}
	}
	weight_leptonSF_MU_SF_Isol_DOWN_branch = 0;
	if (tree->GetBranch("weight_leptonSF_MU_SF_Isol_DOWN") != 0) {
		weight_leptonSF_MU_SF_Isol_DOWN_branch = tree->GetBranch("weight_leptonSF_MU_SF_Isol_DOWN");
		if (weight_leptonSF_MU_SF_Isol_DOWN_branch) {weight_leptonSF_MU_SF_Isol_DOWN_branch->SetAddress(&weight_leptonSF_MU_SF_Isol_DOWN_);}
	}
	weight_indiv_SF_EL_Trigger_branch = 0;
	if (tree->GetBranch("weight_indiv_SF_EL_Trigger") != 0) {
		weight_indiv_SF_EL_Trigger_branch = tree->GetBranch("weight_indiv_SF_EL_Trigger");
		if (weight_indiv_SF_EL_Trigger_branch) {weight_indiv_SF_EL_Trigger_branch->SetAddress(&weight_indiv_SF_EL_Trigger_);}
	}
	weight_indiv_SF_EL_Trigger_UP_branch = 0;
	if (tree->GetBranch("weight_indiv_SF_EL_Trigger_UP") != 0) {
		weight_indiv_SF_EL_Trigger_UP_branch = tree->GetBranch("weight_indiv_SF_EL_Trigger_UP");
		if (weight_indiv_SF_EL_Trigger_UP_branch) {weight_indiv_SF_EL_Trigger_UP_branch->SetAddress(&weight_indiv_SF_EL_Trigger_UP_);}
	}
	weight_indiv_SF_EL_Trigger_DOWN_branch = 0;
	if (tree->GetBranch("weight_indiv_SF_EL_Trigger_DOWN") != 0) {
		weight_indiv_SF_EL_Trigger_DOWN_branch = tree->GetBranch("weight_indiv_SF_EL_Trigger_DOWN");
		if (weight_indiv_SF_EL_Trigger_DOWN_branch) {weight_indiv_SF_EL_Trigger_DOWN_branch->SetAddress(&weight_indiv_SF_EL_Trigger_DOWN_);}
	}
	weight_indiv_SF_EL_Reco_branch = 0;
	if (tree->GetBranch("weight_indiv_SF_EL_Reco") != 0) {
		weight_indiv_SF_EL_Reco_branch = tree->GetBranch("weight_indiv_SF_EL_Reco");
		if (weight_indiv_SF_EL_Reco_branch) {weight_indiv_SF_EL_Reco_branch->SetAddress(&weight_indiv_SF_EL_Reco_);}
	}
	weight_indiv_SF_EL_Reco_UP_branch = 0;
	if (tree->GetBranch("weight_indiv_SF_EL_Reco_UP") != 0) {
		weight_indiv_SF_EL_Reco_UP_branch = tree->GetBranch("weight_indiv_SF_EL_Reco_UP");
		if (weight_indiv_SF_EL_Reco_UP_branch) {weight_indiv_SF_EL_Reco_UP_branch->SetAddress(&weight_indiv_SF_EL_Reco_UP_);}
	}
	weight_indiv_SF_EL_Reco_DOWN_branch = 0;
	if (tree->GetBranch("weight_indiv_SF_EL_Reco_DOWN") != 0) {
		weight_indiv_SF_EL_Reco_DOWN_branch = tree->GetBranch("weight_indiv_SF_EL_Reco_DOWN");
		if (weight_indiv_SF_EL_Reco_DOWN_branch) {weight_indiv_SF_EL_Reco_DOWN_branch->SetAddress(&weight_indiv_SF_EL_Reco_DOWN_);}
	}
	weight_indiv_SF_EL_ID_branch = 0;
	if (tree->GetBranch("weight_indiv_SF_EL_ID") != 0) {
		weight_indiv_SF_EL_ID_branch = tree->GetBranch("weight_indiv_SF_EL_ID");
		if (weight_indiv_SF_EL_ID_branch) {weight_indiv_SF_EL_ID_branch->SetAddress(&weight_indiv_SF_EL_ID_);}
	}
	weight_indiv_SF_EL_ID_UP_branch = 0;
	if (tree->GetBranch("weight_indiv_SF_EL_ID_UP") != 0) {
		weight_indiv_SF_EL_ID_UP_branch = tree->GetBranch("weight_indiv_SF_EL_ID_UP");
		if (weight_indiv_SF_EL_ID_UP_branch) {weight_indiv_SF_EL_ID_UP_branch->SetAddress(&weight_indiv_SF_EL_ID_UP_);}
	}
	weight_indiv_SF_EL_ID_DOWN_branch = 0;
	if (tree->GetBranch("weight_indiv_SF_EL_ID_DOWN") != 0) {
		weight_indiv_SF_EL_ID_DOWN_branch = tree->GetBranch("weight_indiv_SF_EL_ID_DOWN");
		if (weight_indiv_SF_EL_ID_DOWN_branch) {weight_indiv_SF_EL_ID_DOWN_branch->SetAddress(&weight_indiv_SF_EL_ID_DOWN_);}
	}
	weight_indiv_SF_EL_Isol_branch = 0;
	if (tree->GetBranch("weight_indiv_SF_EL_Isol") != 0) {
		weight_indiv_SF_EL_Isol_branch = tree->GetBranch("weight_indiv_SF_EL_Isol");
		if (weight_indiv_SF_EL_Isol_branch) {weight_indiv_SF_EL_Isol_branch->SetAddress(&weight_indiv_SF_EL_Isol_);}
	}
	weight_indiv_SF_EL_Isol_UP_branch = 0;
	if (tree->GetBranch("weight_indiv_SF_EL_Isol_UP") != 0) {
		weight_indiv_SF_EL_Isol_UP_branch = tree->GetBranch("weight_indiv_SF_EL_Isol_UP");
		if (weight_indiv_SF_EL_Isol_UP_branch) {weight_indiv_SF_EL_Isol_UP_branch->SetAddress(&weight_indiv_SF_EL_Isol_UP_);}
	}
	weight_indiv_SF_EL_Isol_DOWN_branch = 0;
	if (tree->GetBranch("weight_indiv_SF_EL_Isol_DOWN") != 0) {
		weight_indiv_SF_EL_Isol_DOWN_branch = tree->GetBranch("weight_indiv_SF_EL_Isol_DOWN");
		if (weight_indiv_SF_EL_Isol_DOWN_branch) {weight_indiv_SF_EL_Isol_DOWN_branch->SetAddress(&weight_indiv_SF_EL_Isol_DOWN_);}
	}
	weight_indiv_SF_MU_Trigger_branch = 0;
	if (tree->GetBranch("weight_indiv_SF_MU_Trigger") != 0) {
		weight_indiv_SF_MU_Trigger_branch = tree->GetBranch("weight_indiv_SF_MU_Trigger");
		if (weight_indiv_SF_MU_Trigger_branch) {weight_indiv_SF_MU_Trigger_branch->SetAddress(&weight_indiv_SF_MU_Trigger_);}
	}
	weight_indiv_SF_MU_Trigger_STAT_UP_branch = 0;
	if (tree->GetBranch("weight_indiv_SF_MU_Trigger_STAT_UP") != 0) {
		weight_indiv_SF_MU_Trigger_STAT_UP_branch = tree->GetBranch("weight_indiv_SF_MU_Trigger_STAT_UP");
		if (weight_indiv_SF_MU_Trigger_STAT_UP_branch) {weight_indiv_SF_MU_Trigger_STAT_UP_branch->SetAddress(&weight_indiv_SF_MU_Trigger_STAT_UP_);}
	}
	weight_indiv_SF_MU_Trigger_STAT_DOWN_branch = 0;
	if (tree->GetBranch("weight_indiv_SF_MU_Trigger_STAT_DOWN") != 0) {
		weight_indiv_SF_MU_Trigger_STAT_DOWN_branch = tree->GetBranch("weight_indiv_SF_MU_Trigger_STAT_DOWN");
		if (weight_indiv_SF_MU_Trigger_STAT_DOWN_branch) {weight_indiv_SF_MU_Trigger_STAT_DOWN_branch->SetAddress(&weight_indiv_SF_MU_Trigger_STAT_DOWN_);}
	}
	weight_indiv_SF_MU_Trigger_SYST_UP_branch = 0;
	if (tree->GetBranch("weight_indiv_SF_MU_Trigger_SYST_UP") != 0) {
		weight_indiv_SF_MU_Trigger_SYST_UP_branch = tree->GetBranch("weight_indiv_SF_MU_Trigger_SYST_UP");
		if (weight_indiv_SF_MU_Trigger_SYST_UP_branch) {weight_indiv_SF_MU_Trigger_SYST_UP_branch->SetAddress(&weight_indiv_SF_MU_Trigger_SYST_UP_);}
	}
	weight_indiv_SF_MU_Trigger_SYST_DOWN_branch = 0;
	if (tree->GetBranch("weight_indiv_SF_MU_Trigger_SYST_DOWN") != 0) {
		weight_indiv_SF_MU_Trigger_SYST_DOWN_branch = tree->GetBranch("weight_indiv_SF_MU_Trigger_SYST_DOWN");
		if (weight_indiv_SF_MU_Trigger_SYST_DOWN_branch) {weight_indiv_SF_MU_Trigger_SYST_DOWN_branch->SetAddress(&weight_indiv_SF_MU_Trigger_SYST_DOWN_);}
	}
	weight_indiv_SF_MU_ID_branch = 0;
	if (tree->GetBranch("weight_indiv_SF_MU_ID") != 0) {
		weight_indiv_SF_MU_ID_branch = tree->GetBranch("weight_indiv_SF_MU_ID");
		if (weight_indiv_SF_MU_ID_branch) {weight_indiv_SF_MU_ID_branch->SetAddress(&weight_indiv_SF_MU_ID_);}
	}
	weight_indiv_SF_MU_ID_STAT_UP_branch = 0;
	if (tree->GetBranch("weight_indiv_SF_MU_ID_STAT_UP") != 0) {
		weight_indiv_SF_MU_ID_STAT_UP_branch = tree->GetBranch("weight_indiv_SF_MU_ID_STAT_UP");
		if (weight_indiv_SF_MU_ID_STAT_UP_branch) {weight_indiv_SF_MU_ID_STAT_UP_branch->SetAddress(&weight_indiv_SF_MU_ID_STAT_UP_);}
	}
	weight_indiv_SF_MU_ID_STAT_DOWN_branch = 0;
	if (tree->GetBranch("weight_indiv_SF_MU_ID_STAT_DOWN") != 0) {
		weight_indiv_SF_MU_ID_STAT_DOWN_branch = tree->GetBranch("weight_indiv_SF_MU_ID_STAT_DOWN");
		if (weight_indiv_SF_MU_ID_STAT_DOWN_branch) {weight_indiv_SF_MU_ID_STAT_DOWN_branch->SetAddress(&weight_indiv_SF_MU_ID_STAT_DOWN_);}
	}
	weight_indiv_SF_MU_ID_SYST_UP_branch = 0;
	if (tree->GetBranch("weight_indiv_SF_MU_ID_SYST_UP") != 0) {
		weight_indiv_SF_MU_ID_SYST_UP_branch = tree->GetBranch("weight_indiv_SF_MU_ID_SYST_UP");
		if (weight_indiv_SF_MU_ID_SYST_UP_branch) {weight_indiv_SF_MU_ID_SYST_UP_branch->SetAddress(&weight_indiv_SF_MU_ID_SYST_UP_);}
	}
	weight_indiv_SF_MU_ID_SYST_DOWN_branch = 0;
	if (tree->GetBranch("weight_indiv_SF_MU_ID_SYST_DOWN") != 0) {
		weight_indiv_SF_MU_ID_SYST_DOWN_branch = tree->GetBranch("weight_indiv_SF_MU_ID_SYST_DOWN");
		if (weight_indiv_SF_MU_ID_SYST_DOWN_branch) {weight_indiv_SF_MU_ID_SYST_DOWN_branch->SetAddress(&weight_indiv_SF_MU_ID_SYST_DOWN_);}
	}
	weight_indiv_SF_MU_Isol_branch = 0;
	if (tree->GetBranch("weight_indiv_SF_MU_Isol") != 0) {
		weight_indiv_SF_MU_Isol_branch = tree->GetBranch("weight_indiv_SF_MU_Isol");
		if (weight_indiv_SF_MU_Isol_branch) {weight_indiv_SF_MU_Isol_branch->SetAddress(&weight_indiv_SF_MU_Isol_);}
	}
	weight_indiv_SF_MU_Isol_UP_branch = 0;
	if (tree->GetBranch("weight_indiv_SF_MU_Isol_UP") != 0) {
		weight_indiv_SF_MU_Isol_UP_branch = tree->GetBranch("weight_indiv_SF_MU_Isol_UP");
		if (weight_indiv_SF_MU_Isol_UP_branch) {weight_indiv_SF_MU_Isol_UP_branch->SetAddress(&weight_indiv_SF_MU_Isol_UP_);}
	}
	weight_indiv_SF_MU_Isol_DOWN_branch = 0;
	if (tree->GetBranch("weight_indiv_SF_MU_Isol_DOWN") != 0) {
		weight_indiv_SF_MU_Isol_DOWN_branch = tree->GetBranch("weight_indiv_SF_MU_Isol_DOWN");
		if (weight_indiv_SF_MU_Isol_DOWN_branch) {weight_indiv_SF_MU_Isol_DOWN_branch->SetAddress(&weight_indiv_SF_MU_Isol_DOWN_);}
	}
	weight_bTagSF_eigenvars_B_up_branch = 0;
	if (tree->GetBranch("weight_bTagSF_eigenvars_B_up") != 0) {
		weight_bTagSF_eigenvars_B_up_branch = tree->GetBranch("weight_bTagSF_eigenvars_B_up");
		if (weight_bTagSF_eigenvars_B_up_branch) {weight_bTagSF_eigenvars_B_up_branch->SetAddress(&weight_bTagSF_eigenvars_B_up_);}
	}
	weight_bTagSF_eigenvars_C_up_branch = 0;
	if (tree->GetBranch("weight_bTagSF_eigenvars_C_up") != 0) {
		weight_bTagSF_eigenvars_C_up_branch = tree->GetBranch("weight_bTagSF_eigenvars_C_up");
		if (weight_bTagSF_eigenvars_C_up_branch) {weight_bTagSF_eigenvars_C_up_branch->SetAddress(&weight_bTagSF_eigenvars_C_up_);}
	}
	weight_bTagSF_eigenvars_Light_up_branch = 0;
	if (tree->GetBranch("weight_bTagSF_eigenvars_Light_up") != 0) {
		weight_bTagSF_eigenvars_Light_up_branch = tree->GetBranch("weight_bTagSF_eigenvars_Light_up");
		if (weight_bTagSF_eigenvars_Light_up_branch) {weight_bTagSF_eigenvars_Light_up_branch->SetAddress(&weight_bTagSF_eigenvars_Light_up_);}
	}
	weight_bTagSF_eigenvars_B_down_branch = 0;
	if (tree->GetBranch("weight_bTagSF_eigenvars_B_down") != 0) {
		weight_bTagSF_eigenvars_B_down_branch = tree->GetBranch("weight_bTagSF_eigenvars_B_down");
		if (weight_bTagSF_eigenvars_B_down_branch) {weight_bTagSF_eigenvars_B_down_branch->SetAddress(&weight_bTagSF_eigenvars_B_down_);}
	}
	weight_bTagSF_eigenvars_C_down_branch = 0;
	if (tree->GetBranch("weight_bTagSF_eigenvars_C_down") != 0) {
		weight_bTagSF_eigenvars_C_down_branch = tree->GetBranch("weight_bTagSF_eigenvars_C_down");
		if (weight_bTagSF_eigenvars_C_down_branch) {weight_bTagSF_eigenvars_C_down_branch->SetAddress(&weight_bTagSF_eigenvars_C_down_);}
	}
	weight_bTagSF_eigenvars_Light_down_branch = 0;
	if (tree->GetBranch("weight_bTagSF_eigenvars_Light_down") != 0) {
		weight_bTagSF_eigenvars_Light_down_branch = tree->GetBranch("weight_bTagSF_eigenvars_Light_down");
		if (weight_bTagSF_eigenvars_Light_down_branch) {weight_bTagSF_eigenvars_Light_down_branch->SetAddress(&weight_bTagSF_eigenvars_Light_down_);}
	}
	weight_bTagSF_extrapolation_up_branch = 0;
	if (tree->GetBranch("weight_bTagSF_extrapolation_up") != 0) {
		weight_bTagSF_extrapolation_up_branch = tree->GetBranch("weight_bTagSF_extrapolation_up");
		if (weight_bTagSF_extrapolation_up_branch) {weight_bTagSF_extrapolation_up_branch->SetAddress(&weight_bTagSF_extrapolation_up_);}
	}
	weight_bTagSF_extrapolation_down_branch = 0;
	if (tree->GetBranch("weight_bTagSF_extrapolation_down") != 0) {
		weight_bTagSF_extrapolation_down_branch = tree->GetBranch("weight_bTagSF_extrapolation_down");
		if (weight_bTagSF_extrapolation_down_branch) {weight_bTagSF_extrapolation_down_branch->SetAddress(&weight_bTagSF_extrapolation_down_);}
	}
	weight_bTagSF_extrapolation_from_charm_up_branch = 0;
	if (tree->GetBranch("weight_bTagSF_extrapolation_from_charm_up") != 0) {
		weight_bTagSF_extrapolation_from_charm_up_branch = tree->GetBranch("weight_bTagSF_extrapolation_from_charm_up");
		if (weight_bTagSF_extrapolation_from_charm_up_branch) {weight_bTagSF_extrapolation_from_charm_up_branch->SetAddress(&weight_bTagSF_extrapolation_from_charm_up_);}
	}
	weight_bTagSF_extrapolation_from_charm_down_branch = 0;
	if (tree->GetBranch("weight_bTagSF_extrapolation_from_charm_down") != 0) {
		weight_bTagSF_extrapolation_from_charm_down_branch = tree->GetBranch("weight_bTagSF_extrapolation_from_charm_down");
		if (weight_bTagSF_extrapolation_from_charm_down_branch) {weight_bTagSF_extrapolation_from_charm_down_branch->SetAddress(&weight_bTagSF_extrapolation_from_charm_down_);}
	}
	eventNumber_branch = 0;
	if (tree->GetBranch("eventNumber") != 0) {
		eventNumber_branch = tree->GetBranch("eventNumber");
		if (eventNumber_branch) {eventNumber_branch->SetAddress(&eventNumber_);}
	}
	runNumber_branch = 0;
	if (tree->GetBranch("runNumber") != 0) {
		runNumber_branch = tree->GetBranch("runNumber");
		if (runNumber_branch) {runNumber_branch->SetAddress(&runNumber_);}
	}
	mcChannelNumber_branch = 0;
	if (tree->GetBranch("mcChannelNumber") != 0) {
		mcChannelNumber_branch = tree->GetBranch("mcChannelNumber");
		if (mcChannelNumber_branch) {mcChannelNumber_branch->SetAddress(&mcChannelNumber_);}
	}
	mu_branch = 0;
	if (tree->GetBranch("mu") != 0) {
		mu_branch = tree->GetBranch("mu");
		if (mu_branch) {mu_branch->SetAddress(&mu_);}
	}
	el_pt_branch = 0;
	if (tree->GetBranch("el_pt") != 0) {
		el_pt_branch = tree->GetBranch("el_pt");
		if (el_pt_branch) {el_pt_branch->SetAddress(&el_pt_);}
	}
	el_eta_branch = 0;
	if (tree->GetBranch("el_eta") != 0) {
		el_eta_branch = tree->GetBranch("el_eta");
		if (el_eta_branch) {el_eta_branch->SetAddress(&el_eta_);}
	}
	el_phi_branch = 0;
	if (tree->GetBranch("el_phi") != 0) {
		el_phi_branch = tree->GetBranch("el_phi");
		if (el_phi_branch) {el_phi_branch->SetAddress(&el_phi_);}
	}
	el_e_branch = 0;
	if (tree->GetBranch("el_e") != 0) {
		el_e_branch = tree->GetBranch("el_e");
		if (el_e_branch) {el_e_branch->SetAddress(&el_e_);}
	}
	el_charge_branch = 0;
	if (tree->GetBranch("el_charge") != 0) {
		el_charge_branch = tree->GetBranch("el_charge");
		if (el_charge_branch) {el_charge_branch->SetAddress(&el_charge_);}
	}
	el_topoetcone20_branch = 0;
	if (tree->GetBranch("el_topoetcone20") != 0) {
		el_topoetcone20_branch = tree->GetBranch("el_topoetcone20");
		if (el_topoetcone20_branch) {el_topoetcone20_branch->SetAddress(&el_topoetcone20_);}
	}
	el_ptvarcone20_branch = 0;
	if (tree->GetBranch("el_ptvarcone20") != 0) {
		el_ptvarcone20_branch = tree->GetBranch("el_ptvarcone20");
		if (el_ptvarcone20_branch) {el_ptvarcone20_branch->SetAddress(&el_ptvarcone20_);}
	}
	mu_pt_branch = 0;
	if (tree->GetBranch("mu_pt") != 0) {
		mu_pt_branch = tree->GetBranch("mu_pt");
		if (mu_pt_branch) {mu_pt_branch->SetAddress(&mu_pt_);}
	}
	mu_eta_branch = 0;
	if (tree->GetBranch("mu_eta") != 0) {
		mu_eta_branch = tree->GetBranch("mu_eta");
		if (mu_eta_branch) {mu_eta_branch->SetAddress(&mu_eta_);}
	}
	mu_phi_branch = 0;
	if (tree->GetBranch("mu_phi") != 0) {
		mu_phi_branch = tree->GetBranch("mu_phi");
		if (mu_phi_branch) {mu_phi_branch->SetAddress(&mu_phi_);}
	}
	mu_e_branch = 0;
	if (tree->GetBranch("mu_e") != 0) {
		mu_e_branch = tree->GetBranch("mu_e");
		if (mu_e_branch) {mu_e_branch->SetAddress(&mu_e_);}
	}
	mu_charge_branch = 0;
	if (tree->GetBranch("mu_charge") != 0) {
		mu_charge_branch = tree->GetBranch("mu_charge");
		if (mu_charge_branch) {mu_charge_branch->SetAddress(&mu_charge_);}
	}
	mu_topoetcone20_branch = 0;
	if (tree->GetBranch("mu_topoetcone20") != 0) {
		mu_topoetcone20_branch = tree->GetBranch("mu_topoetcone20");
		if (mu_topoetcone20_branch) {mu_topoetcone20_branch->SetAddress(&mu_topoetcone20_);}
	}
	mu_ptvarcone30_branch = 0;
	if (tree->GetBranch("mu_ptvarcone30") != 0) {
		mu_ptvarcone30_branch = tree->GetBranch("mu_ptvarcone30");
		if (mu_ptvarcone30_branch) {mu_ptvarcone30_branch->SetAddress(&mu_ptvarcone30_);}
	}
	jet_pt_branch = 0;
	if (tree->GetBranch("jet_pt") != 0) {
		jet_pt_branch = tree->GetBranch("jet_pt");
		if (jet_pt_branch) {jet_pt_branch->SetAddress(&jet_pt_);}
	}
	jet_eta_branch = 0;
	if (tree->GetBranch("jet_eta") != 0) {
		jet_eta_branch = tree->GetBranch("jet_eta");
		if (jet_eta_branch) {jet_eta_branch->SetAddress(&jet_eta_);}
	}
	jet_phi_branch = 0;
	if (tree->GetBranch("jet_phi") != 0) {
		jet_phi_branch = tree->GetBranch("jet_phi");
		if (jet_phi_branch) {jet_phi_branch->SetAddress(&jet_phi_);}
	}
	jet_e_branch = 0;
	if (tree->GetBranch("jet_e") != 0) {
		jet_e_branch = tree->GetBranch("jet_e");
		if (jet_e_branch) {jet_e_branch->SetAddress(&jet_e_);}
	}
	jet_mv1_branch = 0;
	if (tree->GetBranch("jet_mv1") != 0) {
		jet_mv1_branch = tree->GetBranch("jet_mv1");
		if (jet_mv1_branch) {jet_mv1_branch->SetAddress(&jet_mv1_);}
	}
	jet_mvb_branch = 0;
	if (tree->GetBranch("jet_mvb") != 0) {
		jet_mvb_branch = tree->GetBranch("jet_mvb");
		if (jet_mvb_branch) {jet_mvb_branch->SetAddress(&jet_mvb_);}
	}
	jet_mv1c_branch = 0;
	if (tree->GetBranch("jet_mv1c") != 0) {
		jet_mv1c_branch = tree->GetBranch("jet_mv1c");
		if (jet_mv1c_branch) {jet_mv1c_branch->SetAddress(&jet_mv1c_);}
	}
	jet_mv2c00_branch = 0;
	if (tree->GetBranch("jet_mv2c00") != 0) {
		jet_mv2c00_branch = tree->GetBranch("jet_mv2c00");
		if (jet_mv2c00_branch) {jet_mv2c00_branch->SetAddress(&jet_mv2c00_);}
	}
	jet_mv2c10_branch = 0;
	if (tree->GetBranch("jet_mv2c10") != 0) {
		jet_mv2c10_branch = tree->GetBranch("jet_mv2c10");
		if (jet_mv2c10_branch) {jet_mv2c10_branch->SetAddress(&jet_mv2c10_);}
	}
	jet_mv2c20_branch = 0;
	if (tree->GetBranch("jet_mv2c20") != 0) {
		jet_mv2c20_branch = tree->GetBranch("jet_mv2c20");
		if (jet_mv2c20_branch) {jet_mv2c20_branch->SetAddress(&jet_mv2c20_);}
	}
	jet_ip3dsv1_branch = 0;
	if (tree->GetBranch("jet_ip3dsv1") != 0) {
		jet_ip3dsv1_branch = tree->GetBranch("jet_ip3dsv1");
		if (jet_ip3dsv1_branch) {jet_ip3dsv1_branch->SetAddress(&jet_ip3dsv1_);}
	}
	jet_jvt_branch = 0;
	if (tree->GetBranch("jet_jvt") != 0) {
		jet_jvt_branch = tree->GetBranch("jet_jvt");
		if (jet_jvt_branch) {jet_jvt_branch->SetAddress(&jet_jvt_);}
	}
	ljet_pt_branch = 0;
	if (tree->GetBranch("ljet_pt") != 0) {
		ljet_pt_branch = tree->GetBranch("ljet_pt");
		if (ljet_pt_branch) {ljet_pt_branch->SetAddress(&ljet_pt_);}
	}
	ljet_eta_branch = 0;
	if (tree->GetBranch("ljet_eta") != 0) {
		ljet_eta_branch = tree->GetBranch("ljet_eta");
		if (ljet_eta_branch) {ljet_eta_branch->SetAddress(&ljet_eta_);}
	}
	ljet_phi_branch = 0;
	if (tree->GetBranch("ljet_phi") != 0) {
		ljet_phi_branch = tree->GetBranch("ljet_phi");
		if (ljet_phi_branch) {ljet_phi_branch->SetAddress(&ljet_phi_);}
	}
	ljet_e_branch = 0;
	if (tree->GetBranch("ljet_e") != 0) {
		ljet_e_branch = tree->GetBranch("ljet_e");
		if (ljet_e_branch) {ljet_e_branch->SetAddress(&ljet_e_);}
	}
	ljet_m_branch = 0;
	if (tree->GetBranch("ljet_m") != 0) {
		ljet_m_branch = tree->GetBranch("ljet_m");
		if (ljet_m_branch) {ljet_m_branch->SetAddress(&ljet_m_);}
	}
	ljet_sd12_branch = 0;
	if (tree->GetBranch("ljet_sd12") != 0) {
		ljet_sd12_branch = tree->GetBranch("ljet_sd12");
		if (ljet_sd12_branch) {ljet_sd12_branch->SetAddress(&ljet_sd12_);}
	}
	met_met_branch = 0;
	if (tree->GetBranch("met_met") != 0) {
		met_met_branch = tree->GetBranch("met_met");
		if (met_met_branch) {met_met_branch->SetAddress(&met_met_);}
	}
	met_phi_branch = 0;
	if (tree->GetBranch("met_phi") != 0) {
		met_phi_branch = tree->GetBranch("met_phi");
		if (met_phi_branch) {met_phi_branch->SetAddress(&met_phi_);}
	}
	sub_1b_2fj_branch = 0;
	if (tree->GetBranch("sub_1b_2fj") != 0) {
		sub_1b_2fj_branch = tree->GetBranch("sub_1b_2fj");
		if (sub_1b_2fj_branch) {sub_1b_2fj_branch->SetAddress(&sub_1b_2fj_);}
	}
	sub_1b_3fj_branch = 0;
	if (tree->GetBranch("sub_1b_3fj") != 0) {
		sub_1b_3fj_branch = tree->GetBranch("sub_1b_3fj");
		if (sub_1b_3fj_branch) {sub_1b_3fj_branch->SetAddress(&sub_1b_3fj_);}
	}
	sub_1b_allfj_branch = 0;
	if (tree->GetBranch("sub_1b_allfj") != 0) {
		sub_1b_allfj_branch = tree->GetBranch("sub_1b_allfj");
		if (sub_1b_allfj_branch) {sub_1b_allfj_branch->SetAddress(&sub_1b_allfj_);}
	}
	TotalEventWeight_branch = 0;
	if (tree->GetBranch("TotalEventWeight") != 0) {
		TotalEventWeight_branch = tree->GetBranch("TotalEventWeight");
		if (TotalEventWeight_branch) {TotalEventWeight_branch->SetAddress(&TotalEventWeight_);}
	}
	EventParticleWeight_branch = 0;
	if (tree->GetBranch("EventParticleWeight") != 0) {
		EventParticleWeight_branch = tree->GetBranch("EventParticleWeight");
		if (EventParticleWeight_branch) {EventParticleWeight_branch->SetAddress(&EventParticleWeight_);}
	}
	ScaleFactorWeight_branch = 0;
	if (tree->GetBranch("ScaleFactorWeight") != 0) {
		ScaleFactorWeight_branch = tree->GetBranch("ScaleFactorWeight");
		if (ScaleFactorWeight_branch) {ScaleFactorWeight_branch->SetAddress(&ScaleFactorWeight_);}
	}
	EventParameterWeight_branch = 0;
	if (tree->GetBranch("EventParameterWeight") != 0) {
		EventParameterWeight_branch = tree->GetBranch("EventParameterWeight");
		if (EventParameterWeight_branch) {EventParameterWeight_branch->SetAddress(&EventParameterWeight_);}
	}
	HT_branch = 0;
	if (tree->GetBranch("HT") != 0) {
		HT_branch = tree->GetBranch("HT");
		if (HT_branch) {HT_branch->SetAddress(&HT_);}
	}
	HhadT_branch = 0;
	if (tree->GetBranch("HhadT") != 0) {
		HhadT_branch = tree->GetBranch("HhadT");
		if (HhadT_branch) {HhadT_branch->SetAddress(&HhadT_);}
	}
	HT_ratio_met_branch = 0;
	if (tree->GetBranch("HT_ratio_met") != 0) {
		HT_ratio_met_branch = tree->GetBranch("HT_ratio_met");
		if (HT_ratio_met_branch) {HT_ratio_met_branch->SetAddress(&HT_ratio_met_);}
	}
	HT_ratio_lep_branch = 0;
	if (tree->GetBranch("HT_ratio_lep") != 0) {
		HT_ratio_lep_branch = tree->GetBranch("HT_ratio_lep");
		if (HT_ratio_lep_branch) {HT_ratio_lep_branch->SetAddress(&HT_ratio_lep_);}
	}
	meff_branch = 0;
	if (tree->GetBranch("meff") != 0) {
		meff_branch = tree->GetBranch("meff");
		if (meff_branch) {meff_branch->SetAddress(&meff_);}
	}
	Centrality_branch = 0;
	if (tree->GetBranch("Centrality") != 0) {
		Centrality_branch = tree->GetBranch("Centrality");
		if (Centrality_branch) {Centrality_branch->SetAddress(&Centrality_);}
	}
	MetSignificance_branch = 0;
	if (tree->GetBranch("MetSignificance") != 0) {
		MetSignificance_branch = tree->GetBranch("MetSignificance");
		if (MetSignificance_branch) {MetSignificance_branch->SetAddress(&MetSignificance_);}
	}
	MT2reco_branch = 0;
	if (tree->GetBranch("MT2reco") != 0) {
		MT2reco_branch = tree->GetBranch("MT2reco");
		if (MT2reco_branch) {MT2reco_branch->SetAddress(&MT2reco_);}
	}
	MCTreco_branch = 0;
	if (tree->GetBranch("MCTreco") != 0) {
		MCTreco_branch = tree->GetBranch("MCTreco");
		if (MCTreco_branch) {MCTreco_branch->SetAddress(&MCTreco_);}
	}
	dPhimin_met_jet_branch = 0;
	if (tree->GetBranch("dPhimin_met_jet") != 0) {
		dPhimin_met_jet_branch = tree->GetBranch("dPhimin_met_jet");
		if (dPhimin_met_jet_branch) {dPhimin_met_jet_branch->SetAddress(&dPhimin_met_jet_);}
	}
	dPhimin_met_lep_branch = 0;
	if (tree->GetBranch("dPhimin_met_lep") != 0) {
		dPhimin_met_lep_branch = tree->GetBranch("dPhimin_met_lep");
		if (dPhimin_met_lep_branch) {dPhimin_met_lep_branch->SetAddress(&dPhimin_met_lep_);}
	}
	dPhisumjetmet_branch = 0;
	if (tree->GetBranch("dPhisumjetmet") != 0) {
		dPhisumjetmet_branch = tree->GetBranch("dPhisumjetmet");
		if (dPhisumjetmet_branch) {dPhisumjetmet_branch->SetAddress(&dPhisumjetmet_);}
	}
	dPhisumjetlep_branch = 0;
	if (tree->GetBranch("dPhisumjetlep") != 0) {
		dPhisumjetlep_branch = tree->GetBranch("dPhisumjetlep");
		if (dPhisumjetlep_branch) {dPhisumjetlep_branch->SetAddress(&dPhisumjetlep_);}
	}
	dPhisumjetmetlep_branch = 0;
	if (tree->GetBranch("dPhisumjetmetlep") != 0) {
		dPhisumjetmetlep_branch = tree->GetBranch("dPhisumjetmetlep");
		if (dPhisumjetmetlep_branch) {dPhisumjetmetlep_branch->SetAddress(&dPhisumjetmetlep_);}
	}
	dRlj_MindR_branch = 0;
	if (tree->GetBranch("dRlj_MindR") != 0) {
		dRlj_MindR_branch = tree->GetBranch("dRlj_MindR");
		if (dRlj_MindR_branch) {dRlj_MindR_branch->SetAddress(&dRlj_MindR_);}
	}
	Mbb_MindR_branch = 0;
	if (tree->GetBranch("Mbb_MindR") != 0) {
		Mbb_MindR_branch = tree->GetBranch("Mbb_MindR");
		if (Mbb_MindR_branch) {Mbb_MindR_branch->SetAddress(&Mbb_MindR_);}
	}
	Mjj_MaxPt_branch = 0;
	if (tree->GetBranch("Mjj_MaxPt") != 0) {
		Mjj_MaxPt_branch = tree->GetBranch("Mjj_MaxPt");
		if (Mjj_MaxPt_branch) {Mjj_MaxPt_branch->SetAddress(&Mjj_MaxPt_);}
	}
	Mjjj_MaxPt_branch = 0;
	if (tree->GetBranch("Mjjj_MaxPt") != 0) {
		Mjjj_MaxPt_branch = tree->GetBranch("Mjjj_MaxPt");
		if (Mjjj_MaxPt_branch) {Mjjj_MaxPt_branch->SetAddress(&Mjjj_MaxPt_);}
	}
	Mbbb_MaxPt_branch = 0;
	if (tree->GetBranch("Mbbb_MaxPt") != 0) {
		Mbbb_MaxPt_branch = tree->GetBranch("Mbbb_MaxPt");
		if (Mbbb_MaxPt_branch) {Mbbb_MaxPt_branch->SetAddress(&Mbbb_MaxPt_);}
	}
	Mjjjj_MaxPt_branch = 0;
	if (tree->GetBranch("Mjjjj_MaxPt") != 0) {
		Mjjjj_MaxPt_branch = tree->GetBranch("Mjjjj_MaxPt");
		if (Mjjjj_MaxPt_branch) {Mjjjj_MaxPt_branch->SetAddress(&Mjjjj_MaxPt_);}
	}
	Mbbbb_MaxPt_branch = 0;
	if (tree->GetBranch("Mbbbb_MaxPt") != 0) {
		Mbbbb_MaxPt_branch = tree->GetBranch("Mbbbb_MaxPt");
		if (Mbbbb_MaxPt_branch) {Mbbbb_MaxPt_branch->SetAddress(&Mbbbb_MaxPt_);}
	}
	Mbbbj_MaxPt_branch = 0;
	if (tree->GetBranch("Mbbbj_MaxPt") != 0) {
		Mbbbj_MaxPt_branch = tree->GetBranch("Mbbbj_MaxPt");
		if (Mbbbj_MaxPt_branch) {Mbbbj_MaxPt_branch->SetAddress(&Mbbbj_MaxPt_);}
	}
	Mjjj_MaxMV2c20_branch = 0;
	if (tree->GetBranch("Mjjj_MaxMV2c20") != 0) {
		Mjjj_MaxMV2c20_branch = tree->GetBranch("Mjjj_MaxMV2c20");
		if (Mjjj_MaxMV2c20_branch) {Mjjj_MaxMV2c20_branch->SetAddress(&Mjjj_MaxMV2c20_);}
	}
	Mbbb_MaxMV2c20_branch = 0;
	if (tree->GetBranch("Mbbb_MaxMV2c20") != 0) {
		Mbbb_MaxMV2c20_branch = tree->GetBranch("Mbbb_MaxMV2c20");
		if (Mbbb_MaxMV2c20_branch) {Mbbb_MaxMV2c20_branch->SetAddress(&Mbbb_MaxMV2c20_);}
	}
	Mjjjj_MaxMV2c20_branch = 0;
	if (tree->GetBranch("Mjjjj_MaxMV2c20") != 0) {
		Mjjjj_MaxMV2c20_branch = tree->GetBranch("Mjjjj_MaxMV2c20");
		if (Mjjjj_MaxMV2c20_branch) {Mjjjj_MaxMV2c20_branch->SetAddress(&Mjjjj_MaxMV2c20_);}
	}
	Mbbbb_MaxMV2c20_branch = 0;
	if (tree->GetBranch("Mbbbb_MaxMV2c20") != 0) {
		Mbbbb_MaxMV2c20_branch = tree->GetBranch("Mbbbb_MaxMV2c20");
		if (Mbbbb_MaxMV2c20_branch) {Mbbbb_MaxMV2c20_branch->SetAddress(&Mbbbb_MaxMV2c20_);}
	}
	Mbbbj_MaxMV2c20_branch = 0;
	if (tree->GetBranch("Mbbbj_MaxMV2c20") != 0) {
		Mbbbj_MaxMV2c20_branch = tree->GetBranch("Mbbbj_MaxMV2c20");
		if (Mbbbj_MaxMV2c20_branch) {Mbbbj_MaxMV2c20_branch->SetAddress(&Mbbbj_MaxMV2c20_);}
	}
	DeltaMbbbb_MinDeltaM_branch = 0;
	if (tree->GetBranch("DeltaMbbbb_MinDeltaM") != 0) {
		DeltaMbbbb_MinDeltaM_branch = tree->GetBranch("DeltaMbbbb_MinDeltaM");
		if (DeltaMbbbb_MinDeltaM_branch) {DeltaMbbbb_MinDeltaM_branch->SetAddress(&DeltaMbbbb_MinDeltaM_);}
	}
	dR_lep_jet1_branch = 0;
	if (tree->GetBranch("dR_lep_jet1") != 0) {
		dR_lep_jet1_branch = tree->GetBranch("dR_lep_jet1");
		if (dR_lep_jet1_branch) {dR_lep_jet1_branch->SetAddress(&dR_lep_jet1_);}
	}
	dPhibl_MindPhi_branch = 0;
	if (tree->GetBranch("dPhibl_MindPhi") != 0) {
		dPhibl_MindPhi_branch = tree->GetBranch("dPhibl_MindPhi");
		if (dPhibl_MindPhi_branch) {dPhibl_MindPhi_branch->SetAddress(&dPhibl_MindPhi_);}
	}
	dRbl_MindR_branch = 0;
	if (tree->GetBranch("dRbl_MindR") != 0) {
		dRbl_MindR_branch = tree->GetBranch("dRbl_MindR");
		if (dRbl_MindR_branch) {dRbl_MindR_branch->SetAddress(&dRbl_MindR_);}
	}
	dPhibb_MindPhi_branch = 0;
	if (tree->GetBranch("dPhibb_MindPhi") != 0) {
		dPhibb_MindPhi_branch = tree->GetBranch("dPhibb_MindPhi");
		if (dPhibb_MindPhi_branch) {dPhibb_MindPhi_branch->SetAddress(&dPhibb_MindPhi_);}
	}
	dRbb_MindR_branch = 0;
	if (tree->GetBranch("dRbb_MindR") != 0) {
		dRbb_MindR_branch = tree->GetBranch("dRbb_MindR");
		if (dRbb_MindR_branch) {dRbb_MindR_branch->SetAddress(&dRbb_MindR_);}
	}
	PtDiff_Higgs_Vector_branch = 0;
	if (tree->GetBranch("PtDiff_Higgs_Vector") != 0) {
		PtDiff_Higgs_Vector_branch = tree->GetBranch("PtDiff_Higgs_Vector");
		if (PtDiff_Higgs_Vector_branch) {PtDiff_Higgs_Vector_branch->SetAddress(&PtDiff_Higgs_Vector_);}
	}
	el_n_branch = 0;
	if (tree->GetBranch("el_n") != 0) {
		el_n_branch = tree->GetBranch("el_n");
		if (el_n_branch) {el_n_branch->SetAddress(&el_n_);}
	}
	el_MT_branch = 0;
	if (tree->GetBranch("el_MT") != 0) {
		el_MT_branch = tree->GetBranch("el_MT");
		if (el_MT_branch) {el_MT_branch->SetAddress(&el_MT_);}
	}
	el_M_branch = 0;
	if (tree->GetBranch("el_M") != 0) {
		el_M_branch = tree->GetBranch("el_M");
		if (el_M_branch) {el_M_branch->SetAddress(&el_M_);}
	}
	mu_n_branch = 0;
	if (tree->GetBranch("mu_n") != 0) {
		mu_n_branch = tree->GetBranch("mu_n");
		if (mu_n_branch) {mu_n_branch->SetAddress(&mu_n_);}
	}
	mu_MT_branch = 0;
	if (tree->GetBranch("mu_MT") != 0) {
		mu_MT_branch = tree->GetBranch("mu_MT");
		if (mu_MT_branch) {mu_MT_branch->SetAddress(&mu_MT_);}
	}
	mu_M_branch = 0;
	if (tree->GetBranch("mu_M") != 0) {
		mu_M_branch = tree->GetBranch("mu_M");
		if (mu_M_branch) {mu_M_branch->SetAddress(&mu_M_);}
	}
	lep_n_branch = 0;
	if (tree->GetBranch("lep_n") != 0) {
		lep_n_branch = tree->GetBranch("lep_n");
		if (lep_n_branch) {lep_n_branch->SetAddress(&lep_n_);}
	}
	jet_n_branch = 0;
	if (tree->GetBranch("jet_n") != 0) {
		jet_n_branch = tree->GetBranch("jet_n");
		if (jet_n_branch) {jet_n_branch->SetAddress(&jet_n_);}
	}
	jet20_n_branch = 0;
	if (tree->GetBranch("jet20_n") != 0) {
		jet20_n_branch = tree->GetBranch("jet20_n");
		if (jet20_n_branch) {jet20_n_branch->SetAddress(&jet20_n_);}
	}
	jet30_n_branch = 0;
	if (tree->GetBranch("jet30_n") != 0) {
		jet30_n_branch = tree->GetBranch("jet30_n");
		if (jet30_n_branch) {jet30_n_branch->SetAddress(&jet30_n_);}
	}
	jet40_n_branch = 0;
	if (tree->GetBranch("jet40_n") != 0) {
		jet40_n_branch = tree->GetBranch("jet40_n");
		if (jet40_n_branch) {jet40_n_branch->SetAddress(&jet40_n_);}
	}
	bjet_n_branch = 0;
	if (tree->GetBranch("bjet_n") != 0) {
		bjet_n_branch = tree->GetBranch("bjet_n");
		if (bjet_n_branch) {bjet_n_branch->SetAddress(&bjet_n_);}
	}
	ljet_n_branch = 0;
	if (tree->GetBranch("ljet_n") != 0) {
		ljet_n_branch = tree->GetBranch("ljet_n");
		if (ljet_n_branch) {ljet_n_branch->SetAddress(&ljet_n_);}
	}
	ljet_width_branch = 0;
	if (tree->GetBranch("ljet_width") != 0) {
		ljet_width_branch = tree->GetBranch("ljet_width");
		if (ljet_width_branch) {ljet_width_branch->SetAddress(&ljet_width_);}
	}
	ljet_tau1_branch = 0;
	if (tree->GetBranch("ljet_tau1") != 0) {
		ljet_tau1_branch = tree->GetBranch("ljet_tau1");
		if (ljet_tau1_branch) {ljet_tau1_branch->SetAddress(&ljet_tau1_);}
	}
	ljet_tau2_branch = 0;
	if (tree->GetBranch("ljet_tau2") != 0) {
		ljet_tau2_branch = tree->GetBranch("ljet_tau2");
		if (ljet_tau2_branch) {ljet_tau2_branch->SetAddress(&ljet_tau2_);}
	}
	ljet_tau3_branch = 0;
	if (tree->GetBranch("ljet_tau3") != 0) {
		ljet_tau3_branch = tree->GetBranch("ljet_tau3");
		if (ljet_tau3_branch) {ljet_tau3_branch->SetAddress(&ljet_tau3_);}
	}
	ljet_tau1_wta_branch = 0;
	if (tree->GetBranch("ljet_tau1_wta") != 0) {
		ljet_tau1_wta_branch = tree->GetBranch("ljet_tau1_wta");
		if (ljet_tau1_wta_branch) {ljet_tau1_wta_branch->SetAddress(&ljet_tau1_wta_);}
	}
	ljet_tau2_wta_branch = 0;
	if (tree->GetBranch("ljet_tau2_wta") != 0) {
		ljet_tau2_wta_branch = tree->GetBranch("ljet_tau2_wta");
		if (ljet_tau2_wta_branch) {ljet_tau2_wta_branch->SetAddress(&ljet_tau2_wta_);}
	}
	ljet_tau3_wta_branch = 0;
	if (tree->GetBranch("ljet_tau3_wta") != 0) {
		ljet_tau3_wta_branch = tree->GetBranch("ljet_tau3_wta");
		if (ljet_tau3_wta_branch) {ljet_tau3_wta_branch->SetAddress(&ljet_tau3_wta_);}
	}
	ljet_planarFlow_branch = 0;
	if (tree->GetBranch("ljet_planarFlow") != 0) {
		ljet_planarFlow_branch = tree->GetBranch("ljet_planarFlow");
		if (ljet_planarFlow_branch) {ljet_planarFlow_branch->SetAddress(&ljet_planarFlow_);}
	}
	ljet_ktsplit12_branch = 0;
	if (tree->GetBranch("ljet_ktsplit12") != 0) {
		ljet_ktsplit12_branch = tree->GetBranch("ljet_ktsplit12");
		if (ljet_ktsplit12_branch) {ljet_ktsplit12_branch->SetAddress(&ljet_ktsplit12_);}
	}
	ljet_ktsplit23_branch = 0;
	if (tree->GetBranch("ljet_ktsplit23") != 0) {
		ljet_ktsplit23_branch = tree->GetBranch("ljet_ktsplit23");
		if (ljet_ktsplit23_branch) {ljet_ktsplit23_branch->SetAddress(&ljet_ktsplit23_);}
	}
	ljet_ktsplit34_branch = 0;
	if (tree->GetBranch("ljet_ktsplit34") != 0) {
		ljet_ktsplit34_branch = tree->GetBranch("ljet_ktsplit34");
		if (ljet_ktsplit34_branch) {ljet_ktsplit34_branch->SetAddress(&ljet_ktsplit34_);}
	}
	ljet_ZCut12_branch = 0;
	if (tree->GetBranch("ljet_ZCut12") != 0) {
		ljet_ZCut12_branch = tree->GetBranch("ljet_ZCut12");
		if (ljet_ZCut12_branch) {ljet_ZCut12_branch->SetAddress(&ljet_ZCut12_);}
	}
	ljet_ZCut23_branch = 0;
	if (tree->GetBranch("ljet_ZCut23") != 0) {
		ljet_ZCut23_branch = tree->GetBranch("ljet_ZCut23");
		if (ljet_ZCut23_branch) {ljet_ZCut23_branch->SetAddress(&ljet_ZCut23_);}
	}
	ljet_ZCut34_branch = 0;
	if (tree->GetBranch("ljet_ZCut34") != 0) {
		ljet_ZCut34_branch = tree->GetBranch("ljet_ZCut34");
		if (ljet_ZCut34_branch) {ljet_ZCut34_branch->SetAddress(&ljet_ZCut34_);}
	}
	ljet_KtDR_branch = 0;
	if (tree->GetBranch("ljet_KtDR") != 0) {
		ljet_KtDR_branch = tree->GetBranch("ljet_KtDR");
		if (ljet_KtDR_branch) {ljet_KtDR_branch->SetAddress(&ljet_KtDR_);}
	}
	ljet_Angularity_branch = 0;
	if (tree->GetBranch("ljet_Angularity") != 0) {
		ljet_Angularity_branch = tree->GetBranch("ljet_Angularity");
		if (ljet_Angularity_branch) {ljet_Angularity_branch->SetAddress(&ljet_Angularity_);}
	}
	ljet_Aplanarity_branch = 0;
	if (tree->GetBranch("ljet_Aplanarity") != 0) {
		ljet_Aplanarity_branch = tree->GetBranch("ljet_Aplanarity");
		if (ljet_Aplanarity_branch) {ljet_Aplanarity_branch->SetAddress(&ljet_Aplanarity_);}
	}
	ljet_Dip12_branch = 0;
	if (tree->GetBranch("ljet_Dip12") != 0) {
		ljet_Dip12_branch = tree->GetBranch("ljet_Dip12");
		if (ljet_Dip12_branch) {ljet_Dip12_branch->SetAddress(&ljet_Dip12_);}
	}
	ljet_Dip13_branch = 0;
	if (tree->GetBranch("ljet_Dip13") != 0) {
		ljet_Dip13_branch = tree->GetBranch("ljet_Dip13");
		if (ljet_Dip13_branch) {ljet_Dip13_branch->SetAddress(&ljet_Dip13_);}
	}
	ljet_Dip23_branch = 0;
	if (tree->GetBranch("ljet_Dip23") != 0) {
		ljet_Dip23_branch = tree->GetBranch("ljet_Dip23");
		if (ljet_Dip23_branch) {ljet_Dip23_branch->SetAddress(&ljet_Dip23_);}
	}
	ljet_D2_branch = 0;
	if (tree->GetBranch("ljet_D2") != 0) {
		ljet_D2_branch = tree->GetBranch("ljet_D2");
		if (ljet_D2_branch) {ljet_D2_branch->SetAddress(&ljet_D2_);}
	}
	ljet_C2_branch = 0;
	if (tree->GetBranch("ljet_C2") != 0) {
		ljet_C2_branch = tree->GetBranch("ljet_C2");
		if (ljet_C2_branch) {ljet_C2_branch->SetAddress(&ljet_C2_);}
	}
	ljet_tau21_branch = 0;
	if (tree->GetBranch("ljet_tau21") != 0) {
		ljet_tau21_branch = tree->GetBranch("ljet_tau21");
		if (ljet_tau21_branch) {ljet_tau21_branch->SetAddress(&ljet_tau21_);}
	}
	ljet_tau32_branch = 0;
	if (tree->GetBranch("ljet_tau32") != 0) {
		ljet_tau32_branch = tree->GetBranch("ljet_tau32");
		if (ljet_tau32_branch) {ljet_tau32_branch->SetAddress(&ljet_tau32_);}
	}
	ljet_tau31_branch = 0;
	if (tree->GetBranch("ljet_tau31") != 0) {
		ljet_tau31_branch = tree->GetBranch("ljet_tau31");
		if (ljet_tau31_branch) {ljet_tau31_branch->SetAddress(&ljet_tau31_);}
	}
	ljet_tau21_wta_branch = 0;
	if (tree->GetBranch("ljet_tau21_wta") != 0) {
		ljet_tau21_wta_branch = tree->GetBranch("ljet_tau21_wta");
		if (ljet_tau21_wta_branch) {ljet_tau21_wta_branch->SetAddress(&ljet_tau21_wta_);}
	}
	ljet_tau32_wta_branch = 0;
	if (tree->GetBranch("ljet_tau32_wta") != 0) {
		ljet_tau32_wta_branch = tree->GetBranch("ljet_tau32_wta");
		if (ljet_tau32_wta_branch) {ljet_tau32_wta_branch->SetAddress(&ljet_tau32_wta_);}
	}
	ljet_tau31_wta_branch = 0;
	if (tree->GetBranch("ljet_tau31_wta") != 0) {
		ljet_tau31_wta_branch = tree->GetBranch("ljet_tau31_wta");
		if (ljet_tau31_wta_branch) {ljet_tau31_wta_branch->SetAddress(&ljet_tau31_wta_);}
	}
	jet_truth_matching_branch = 0;
	if (tree->GetBranch("jet_truth_matching") != 0) {
		jet_truth_matching_branch = tree->GetBranch("jet_truth_matching");
		if (jet_truth_matching_branch) {jet_truth_matching_branch->SetAddress(&jet_truth_matching_);}
	}
	boosted_jet_truth_matching_branch = 0;
	if (tree->GetBranch("boosted_jet_truth_matching") != 0) {
		boosted_jet_truth_matching_branch = tree->GetBranch("boosted_jet_truth_matching");
		if (boosted_jet_truth_matching_branch) {boosted_jet_truth_matching_branch->SetAddress(&boosted_jet_truth_matching_);}
	}
	boosted_trackjet_truth_matching_branch = 0;
	if (tree->GetBranch("boosted_trackjet_truth_matching") != 0) {
		boosted_trackjet_truth_matching_branch = tree->GetBranch("boosted_trackjet_truth_matching");
		if (boosted_trackjet_truth_matching_branch) {boosted_trackjet_truth_matching_branch->SetAddress(&boosted_trackjet_truth_matching_);}
	}
	truth_nbquarks_branch = 0;
	if (tree->GetBranch("truth_nbquarks") != 0) {
		truth_nbquarks_branch = tree->GetBranch("truth_nbquarks");
		if (truth_nbquarks_branch) {truth_nbquarks_branch->SetAddress(&truth_nbquarks_);}
	}
	nbtag_tjets_truth_branch = 0;
	if (tree->GetBranch("nbtag_tjets_truth") != 0) {
		nbtag_tjets_truth_branch = tree->GetBranch("nbtag_tjets_truth");
		if (nbtag_tjets_truth_branch) {nbtag_tjets_truth_branch->SetAddress(&nbtag_tjets_truth_);}
	}
	nbtag_tjets_reco_branch = 0;
	if (tree->GetBranch("nbtag_tjets_reco") != 0) {
		nbtag_tjets_reco_branch = tree->GetBranch("nbtag_tjets_reco");
		if (nbtag_tjets_reco_branch) {nbtag_tjets_reco_branch->SetAddress(&nbtag_tjets_reco_);}
	}
	n_tjets_fat_branch = 0;
	if (tree->GetBranch("n_tjets_fat") != 0) {
		n_tjets_fat_branch = tree->GetBranch("n_tjets_fat");
		if (n_tjets_fat_branch) {n_tjets_fat_branch->SetAddress(&n_tjets_fat_);}
	}
	n_btjets_bfat_branch = 0;
	if (tree->GetBranch("n_btjets_bfat") != 0) {
		n_btjets_bfat_branch = tree->GetBranch("n_btjets_bfat");
		if (n_btjets_bfat_branch) {n_btjets_bfat_branch->SetAddress(&n_btjets_bfat_);}
	}
	n_btjets_fat_branch = 0;
	if (tree->GetBranch("n_btjets_fat") != 0) {
		n_btjets_fat_branch = tree->GetBranch("n_btjets_fat");
		if (n_btjets_fat_branch) {n_btjets_fat_branch->SetAddress(&n_btjets_fat_);}
	}
	n_tbtjets_fat_branch = 0;
	if (tree->GetBranch("n_tbtjets_fat") != 0) {
		n_tbtjets_fat_branch = tree->GetBranch("n_tbtjets_fat");
		if (n_tbtjets_fat_branch) {n_tbtjets_fat_branch->SetAddress(&n_tbtjets_fat_);}
	}
	n_tjets_subfat_branch = 0;
	if (tree->GetBranch("n_tjets_subfat") != 0) {
		n_tjets_subfat_branch = tree->GetBranch("n_tjets_subfat");
		if (n_tjets_subfat_branch) {n_tjets_subfat_branch->SetAddress(&n_tjets_subfat_);}
	}
	leadfat_leadtrack_pt_branch = 0;
	if (tree->GetBranch("leadfat_leadtrack_pt") != 0) {
		leadfat_leadtrack_pt_branch = tree->GetBranch("leadfat_leadtrack_pt");
		if (leadfat_leadtrack_pt_branch) {leadfat_leadtrack_pt_branch->SetAddress(&leadfat_leadtrack_pt_);}
	}
	leadfat_subtrack_pt_branch = 0;
	if (tree->GetBranch("leadfat_subtrack_pt") != 0) {
		leadfat_subtrack_pt_branch = tree->GetBranch("leadfat_subtrack_pt");
		if (leadfat_subtrack_pt_branch) {leadfat_subtrack_pt_branch->SetAddress(&leadfat_subtrack_pt_);}
	}
	higgs_mass_branch = 0;
	if (tree->GetBranch("higgs_mass") != 0) {
		higgs_mass_branch = tree->GetBranch("higgs_mass");
		if (higgs_mass_branch) {higgs_mass_branch->SetAddress(&higgs_mass_);}
	}
	b_pt_branch = 0;
	if (tree->GetBranch("b_pt") != 0) {
		b_pt_branch = tree->GetBranch("b_pt");
		if (b_pt_branch) {b_pt_branch->SetAddress(&b_pt_);}
	}
	notj_fj_pt_branch = 0;
	if (tree->GetBranch("notj_fj_pt") != 0) {
		notj_fj_pt_branch = tree->GetBranch("notj_fj_pt");
		if (notj_fj_pt_branch) {notj_fj_pt_branch->SetAddress(&notj_fj_pt_);}
	}
	n_1tbtjets_fat_branch = 0;
	if (tree->GetBranch("n_1tbtjets_fat") != 0) {
		n_1tbtjets_fat_branch = tree->GetBranch("n_1tbtjets_fat");
		if (n_1tbtjets_fat_branch) {n_1tbtjets_fat_branch->SetAddress(&n_1tbtjets_fat_);}
	}
	n_2tbtjets_fat_branch = 0;
	if (tree->GetBranch("n_2tbtjets_fat") != 0) {
		n_2tbtjets_fat_branch = tree->GetBranch("n_2tbtjets_fat");
		if (n_2tbtjets_fat_branch) {n_2tbtjets_fat_branch->SetAddress(&n_2tbtjets_fat_);}
	}
	n_1inc_tbtjets_fat_branch = 0;
	if (tree->GetBranch("n_1inc_tbtjets_fat") != 0) {
		n_1inc_tbtjets_fat_branch = tree->GetBranch("n_1inc_tbtjets_fat");
		if (n_1inc_tbtjets_fat_branch) {n_1inc_tbtjets_fat_branch->SetAddress(&n_1inc_tbtjets_fat_);}
	}
	n_2inc_tbtjets_fat_branch = 0;
	if (tree->GetBranch("n_2inc_tbtjets_fat") != 0) {
		n_2inc_tbtjets_fat_branch = tree->GetBranch("n_2inc_tbtjets_fat");
		if (n_2inc_tbtjets_fat_branch) {n_2inc_tbtjets_fat_branch->SetAddress(&n_2inc_tbtjets_fat_);}
	}
	trub_track_jets_branch = 0;
	if (tree->GetBranch("trub_track_jets") != 0) {
		trub_track_jets_branch = tree->GetBranch("trub_track_jets");
		if (trub_track_jets_branch) {trub_track_jets_branch->SetAddress(&trub_track_jets_);}
	}
	tagb_track_jets_branch = 0;
	if (tree->GetBranch("tagb_track_jets") != 0) {
		tagb_track_jets_branch = tree->GetBranch("tagb_track_jets");
		if (tagb_track_jets_branch) {tagb_track_jets_branch->SetAddress(&tagb_track_jets_);}
	}
	nb_branch = 0;
	if (tree->GetBranch("nb") != 0) {
		nb_branch = tree->GetBranch("nb");
		if (nb_branch) {nb_branch->SetAddress(&nb_);}
	}
	trub_2track_jets_branch = 0;
	if (tree->GetBranch("trub_2track_jets") != 0) {
		trub_2track_jets_branch = tree->GetBranch("trub_2track_jets");
		if (trub_2track_jets_branch) {trub_2track_jets_branch->SetAddress(&trub_2track_jets_);}
	}
	btj_branch = 0;
	if (tree->GetBranch("btj") != 0) {
		btj_branch = tree->GetBranch("btj");
		if (btj_branch) {btj_branch->SetAddress(&btj_);}
	}
	tj_j_branch = 0;
	if (tree->GetBranch("tj_j") != 0) {
		tj_j_branch = tree->GetBranch("tj_j");
		if (tj_j_branch) {tj_j_branch->SetAddress(&tj_j_);}
	}
	btj_j_branch = 0;
	if (tree->GetBranch("btj_j") != 0) {
		btj_j_branch = tree->GetBranch("btj_j");
		if (btj_j_branch) {btj_j_branch->SetAddress(&btj_j_);}
	}
	b_j_branch = 0;
	if (tree->GetBranch("b_j") != 0) {
		b_j_branch = tree->GetBranch("b_j");
		if (b_j_branch) {b_j_branch->SetAddress(&b_j_);}
	}
	bh_j_branch = 0;
	if (tree->GetBranch("bh_j") != 0) {
		bh_j_branch = tree->GetBranch("bh_j");
		if (bh_j_branch) {bh_j_branch->SetAddress(&bh_j_);}
	}
	j_pt_branch = 0;
	if (tree->GetBranch("j_pt") != 0) {
		j_pt_branch = tree->GetBranch("j_pt");
		if (j_pt_branch) {j_pt_branch->SetAddress(&j_pt_);}
	}
	trackjet_pt_branch = 0;
	if (tree->GetBranch("trackjet_pt") != 0) {
		trackjet_pt_branch = tree->GetBranch("trackjet_pt");
		if (trackjet_pt_branch) {trackjet_pt_branch->SetAddress(&trackjet_pt_);}
	}
	dr_matched_jet_pt_branch = 0;
	if (tree->GetBranch("dr_matched_jet_pt") != 0) {
		dr_matched_jet_pt_branch = tree->GetBranch("dr_matched_jet_pt");
		if (dr_matched_jet_pt_branch) {dr_matched_jet_pt_branch->SetAddress(&dr_matched_jet_pt_);}
	}
	dr_matched_trackjet_pt_branch = 0;
	if (tree->GetBranch("dr_matched_trackjet_pt") != 0) {
		dr_matched_trackjet_pt_branch = tree->GetBranch("dr_matched_trackjet_pt");
		if (dr_matched_trackjet_pt_branch) {dr_matched_trackjet_pt_branch->SetAddress(&dr_matched_trackjet_pt_);}
	}
	b_tag_jet_branch = 0;
	if (tree->GetBranch("b_tag_jet") != 0) {
		b_tag_jet_branch = tree->GetBranch("b_tag_jet");
		if (b_tag_jet_branch) {b_tag_jet_branch->SetAddress(&b_tag_jet_);}
	}
	fj_pt_branch = 0;
	if (tree->GetBranch("fj_pt") != 0) {
		fj_pt_branch = tree->GetBranch("fj_pt");
		if (fj_pt_branch) {fj_pt_branch->SetAddress(&fj_pt_);}
	}
	label_jet_branch = 0;
	if (tree->GetBranch("label_jet") != 0) {
		label_jet_branch = tree->GetBranch("label_jet");
		if (label_jet_branch) {label_jet_branch->SetAddress(&label_jet_);}
	}
	btag_trackjet_branch = 0;
	if (tree->GetBranch("btag_trackjet") != 0) {
		btag_trackjet_branch = tree->GetBranch("btag_trackjet");
		if (btag_trackjet_branch) {btag_trackjet_branch->SetAddress(&btag_trackjet_);}
	}
	label_trackjet_branch = 0;
	if (tree->GetBranch("label_trackjet") != 0) {
		label_trackjet_branch = tree->GetBranch("label_trackjet");
		if (label_trackjet_branch) {label_trackjet_branch->SetAddress(&label_trackjet_);}
	}
	tj_fj_branch = 0;
	if (tree->GetBranch("tj_fj") != 0) {
		tj_fj_branch = tree->GetBranch("tj_fj");
		if (tj_fj_branch) {tj_fj_branch->SetAddress(&tj_fj_);}
	}
	bpart_fj_branch = 0;
	if (tree->GetBranch("bpart_fj") != 0) {
		bpart_fj_branch = tree->GetBranch("bpart_fj");
		if (bpart_fj_branch) {bpart_fj_branch->SetAddress(&bpart_fj_);}
	}
	label_fj_branch = 0;
	if (tree->GetBranch("label_fj") != 0) {
		label_fj_branch = tree->GetBranch("label_fj");
		if (label_fj_branch) {label_fj_branch->SetAddress(&label_fj_);}
	}
	ghost_dr_fj_branch = 0;
	if (tree->GetBranch("ghost_dr_fj") != 0) {
		ghost_dr_fj_branch = tree->GetBranch("ghost_dr_fj");
		if (ghost_dr_fj_branch) {ghost_dr_fj_branch->SetAddress(&ghost_dr_fj_);}
	}
	drmatch_dr_fj_branch = 0;
	if (tree->GetBranch("drmatch_dr_fj") != 0) {
		drmatch_dr_fj_branch = tree->GetBranch("drmatch_dr_fj");
		if (drmatch_dr_fj_branch) {drmatch_dr_fj_branch->SetAddress(&drmatch_dr_fj_);}
	}
	label_trackjet_fj_branch = 0;
	if (tree->GetBranch("label_trackjet_fj") != 0) {
		label_trackjet_fj_branch = tree->GetBranch("label_trackjet_fj");
		if (label_trackjet_fj_branch) {label_trackjet_fj_branch->SetAddress(&label_trackjet_fj_);}
	}
	btag_trackjet_fj_branch = 0;
	if (tree->GetBranch("btag_trackjet_fj") != 0) {
		btag_trackjet_fj_branch = tree->GetBranch("btag_trackjet_fj");
		if (btag_trackjet_fj_branch) {btag_trackjet_fj_branch->SetAddress(&btag_trackjet_fj_);}
	}
	ghost_tj_fj_branch = 0;
	if (tree->GetBranch("ghost_tj_fj") != 0) {
		ghost_tj_fj_branch = tree->GetBranch("ghost_tj_fj");
		if (ghost_tj_fj_branch) {ghost_tj_fj_branch->SetAddress(&ghost_tj_fj_);}
	}
	fj_dr_matched_trackjet_pt_branch = 0;
	if (tree->GetBranch("fj_dr_matched_trackjet_pt") != 0) {
		fj_dr_matched_trackjet_pt_branch = tree->GetBranch("fj_dr_matched_trackjet_pt");
		if (fj_dr_matched_trackjet_pt_branch) {fj_dr_matched_trackjet_pt_branch->SetAddress(&fj_dr_matched_trackjet_pt_);}
	}
	tj_pt_check_branch = 0;
	if (tree->GetBranch("tj_pt_check") != 0) {
		tj_pt_check_branch = tree->GetBranch("tj_pt_check");
		if (tj_pt_check_branch) {tj_pt_check_branch->SetAddress(&tj_pt_check_);}
	}
	caloCluster_pt_branch = 0;
	if (tree->GetBranch("caloCluster_pt") != 0) {
		caloCluster_pt_branch = tree->GetBranch("caloCluster_pt");
		if (caloCluster_pt_branch) {caloCluster_pt_branch->SetAddress(&caloCluster_pt_);}
	}
	caloCluster_px_branch = 0;
	if (tree->GetBranch("caloCluster_px") != 0) {
		caloCluster_px_branch = tree->GetBranch("caloCluster_px");
		if (caloCluster_px_branch) {caloCluster_px_branch->SetAddress(&caloCluster_px_);}
	}
	caloCluster_py_branch = 0;
	if (tree->GetBranch("caloCluster_py") != 0) {
		caloCluster_py_branch = tree->GetBranch("caloCluster_py");
		if (caloCluster_py_branch) {caloCluster_py_branch->SetAddress(&caloCluster_py_);}
	}
	caloCluster_pz_branch = 0;
	if (tree->GetBranch("caloCluster_pz") != 0) {
		caloCluster_pz_branch = tree->GetBranch("caloCluster_pz");
		if (caloCluster_pz_branch) {caloCluster_pz_branch->SetAddress(&caloCluster_pz_);}
	}
	caloCluster_E_branch = 0;
	if (tree->GetBranch("caloCluster_E") != 0) {
		caloCluster_E_branch = tree->GetBranch("caloCluster_E");
		if (caloCluster_E_branch) {caloCluster_E_branch->SetAddress(&caloCluster_E_);}
	}
	caloCluster_EM_PROBABILITY_branch = 0;
	if (tree->GetBranch("caloCluster_EM_PROBABILITY") != 0) {
		caloCluster_EM_PROBABILITY_branch = tree->GetBranch("caloCluster_EM_PROBABILITY");
		if (caloCluster_EM_PROBABILITY_branch) {caloCluster_EM_PROBABILITY_branch->SetAddress(&caloCluster_EM_PROBABILITY_);}
	}
	caloCluster_ENG_BAD_CELLS_branch = 0;
	if (tree->GetBranch("caloCluster_ENG_BAD_CELLS") != 0) {
		caloCluster_ENG_BAD_CELLS_branch = tree->GetBranch("caloCluster_ENG_BAD_CELLS");
		if (caloCluster_ENG_BAD_CELLS_branch) {caloCluster_ENG_BAD_CELLS_branch->SetAddress(&caloCluster_ENG_BAD_CELLS_);}
	}
	caloCluster_ENG_FRAC_MAX_branch = 0;
	if (tree->GetBranch("caloCluster_ENG_FRAC_MAX") != 0) {
		caloCluster_ENG_FRAC_MAX_branch = tree->GetBranch("caloCluster_ENG_FRAC_MAX");
		if (caloCluster_ENG_FRAC_MAX_branch) {caloCluster_ENG_FRAC_MAX_branch->SetAddress(&caloCluster_ENG_FRAC_MAX_);}
	}
	caloCluster_ENG_POS_branch = 0;
	if (tree->GetBranch("caloCluster_ENG_POS") != 0) {
		caloCluster_ENG_POS_branch = tree->GetBranch("caloCluster_ENG_POS");
		if (caloCluster_ENG_POS_branch) {caloCluster_ENG_POS_branch->SetAddress(&caloCluster_ENG_POS_);}
	}
	caloCluster_FIRST_ENG_DES_branch = 0;
	if (tree->GetBranch("caloCluster_FIRST_ENG_DES") != 0) {
		caloCluster_FIRST_ENG_DES_branch = tree->GetBranch("caloCluster_FIRST_ENG_DES");
		if (caloCluster_FIRST_ENG_DES_branch) {caloCluster_FIRST_ENG_DES_branch->SetAddress(&caloCluster_FIRST_ENG_DES_);}
	}
	caloCluster_ISOLATION_branch = 0;
	if (tree->GetBranch("caloCluster_ISOLATION") != 0) {
		caloCluster_ISOLATION_branch = tree->GetBranch("caloCluster_ISOLATION");
		if (caloCluster_ISOLATION_branch) {caloCluster_ISOLATION_branch->SetAddress(&caloCluster_ISOLATION_);}
	}
	caloCluster_LATERAL_branch = 0;
	if (tree->GetBranch("caloCluster_LATERAL") != 0) {
		caloCluster_LATERAL_branch = tree->GetBranch("caloCluster_LATERAL");
		if (caloCluster_LATERAL_branch) {caloCluster_LATERAL_branch->SetAddress(&caloCluster_LATERAL_);}
	}
	caloCluster_LONGITUDINAL_branch = 0;
	if (tree->GetBranch("caloCluster_LONGITUDINAL") != 0) {
		caloCluster_LONGITUDINAL_branch = tree->GetBranch("caloCluster_LONGITUDINAL");
		if (caloCluster_LONGITUDINAL_branch) {caloCluster_LONGITUDINAL_branch->SetAddress(&caloCluster_LONGITUDINAL_);}
	}
	caloCluster_N_BAD_CELLS_branch = 0;
	if (tree->GetBranch("caloCluster_N_BAD_CELLS") != 0) {
		caloCluster_N_BAD_CELLS_branch = tree->GetBranch("caloCluster_N_BAD_CELLS");
		if (caloCluster_N_BAD_CELLS_branch) {caloCluster_N_BAD_CELLS_branch->SetAddress(&caloCluster_N_BAD_CELLS_);}
	}
	caloCluster_SECOND_LAMBDA_branch = 0;
	if (tree->GetBranch("caloCluster_SECOND_LAMBDA") != 0) {
		caloCluster_SECOND_LAMBDA_branch = tree->GetBranch("caloCluster_SECOND_LAMBDA");
		if (caloCluster_SECOND_LAMBDA_branch) {caloCluster_SECOND_LAMBDA_branch->SetAddress(&caloCluster_SECOND_LAMBDA_);}
	}
	caloCluster_SECOND_R_branch = 0;
	if (tree->GetBranch("caloCluster_SECOND_R") != 0) {
		caloCluster_SECOND_R_branch = tree->GetBranch("caloCluster_SECOND_R");
		if (caloCluster_SECOND_R_branch) {caloCluster_SECOND_R_branch->SetAddress(&caloCluster_SECOND_R_);}
	}
	caloCluster_SIGNIFICANCE_branch = 0;
	if (tree->GetBranch("caloCluster_SIGNIFICANCE") != 0) {
		caloCluster_SIGNIFICANCE_branch = tree->GetBranch("caloCluster_SIGNIFICANCE");
		if (caloCluster_SIGNIFICANCE_branch) {caloCluster_SIGNIFICANCE_branch->SetAddress(&caloCluster_SIGNIFICANCE_);}
	}
	caloCluster_altE_branch = 0;
	if (tree->GetBranch("caloCluster_altE") != 0) {
		caloCluster_altE_branch = tree->GetBranch("caloCluster_altE");
		if (caloCluster_altE_branch) {caloCluster_altE_branch->SetAddress(&caloCluster_altE_);}
	}
	caloCluster_altEta_branch = 0;
	if (tree->GetBranch("caloCluster_altEta") != 0) {
		caloCluster_altEta_branch = tree->GetBranch("caloCluster_altEta");
		if (caloCluster_altEta_branch) {caloCluster_altEta_branch->SetAddress(&caloCluster_altEta_);}
	}
	caloCluster_altM_branch = 0;
	if (tree->GetBranch("caloCluster_altM") != 0) {
		caloCluster_altM_branch = tree->GetBranch("caloCluster_altM");
		if (caloCluster_altM_branch) {caloCluster_altM_branch->SetAddress(&caloCluster_altM_);}
	}
	caloCluster_altPhi_branch = 0;
	if (tree->GetBranch("caloCluster_altPhi") != 0) {
		caloCluster_altPhi_branch = tree->GetBranch("caloCluster_altPhi");
		if (caloCluster_altPhi_branch) {caloCluster_altPhi_branch->SetAddress(&caloCluster_altPhi_);}
	}
	caloCluster_calE_branch = 0;
	if (tree->GetBranch("caloCluster_calE") != 0) {
		caloCluster_calE_branch = tree->GetBranch("caloCluster_calE");
		if (caloCluster_calE_branch) {caloCluster_calE_branch->SetAddress(&caloCluster_calE_);}
	}
	caloCluster_calEta_branch = 0;
	if (tree->GetBranch("caloCluster_calEta") != 0) {
		caloCluster_calEta_branch = tree->GetBranch("caloCluster_calEta");
		if (caloCluster_calEta_branch) {caloCluster_calEta_branch->SetAddress(&caloCluster_calEta_);}
	}
	caloCluster_calM_branch = 0;
	if (tree->GetBranch("caloCluster_calM") != 0) {
		caloCluster_calM_branch = tree->GetBranch("caloCluster_calM");
		if (caloCluster_calM_branch) {caloCluster_calM_branch->SetAddress(&caloCluster_calM_);}
	}
	caloCluster_calPhi_branch = 0;
	if (tree->GetBranch("caloCluster_calPhi") != 0) {
		caloCluster_calPhi_branch = tree->GetBranch("caloCluster_calPhi");
		if (caloCluster_calPhi_branch) {caloCluster_calPhi_branch->SetAddress(&caloCluster_calPhi_);}
	}
	caloCluster_clusterSize_branch = 0;
	if (tree->GetBranch("caloCluster_clusterSize") != 0) {
		caloCluster_clusterSize_branch = tree->GetBranch("caloCluster_clusterSize");
		if (caloCluster_clusterSize_branch) {caloCluster_clusterSize_branch->SetAddress(&caloCluster_clusterSize_);}
	}
	caloCluster_rawE_branch = 0;
	if (tree->GetBranch("caloCluster_rawE") != 0) {
		caloCluster_rawE_branch = tree->GetBranch("caloCluster_rawE");
		if (caloCluster_rawE_branch) {caloCluster_rawE_branch->SetAddress(&caloCluster_rawE_);}
	}
	caloCluster_rawEta_branch = 0;
	if (tree->GetBranch("caloCluster_rawEta") != 0) {
		caloCluster_rawEta_branch = tree->GetBranch("caloCluster_rawEta");
		if (caloCluster_rawEta_branch) {caloCluster_rawEta_branch->SetAddress(&caloCluster_rawEta_);}
	}
	caloCluster_rawM_branch = 0;
	if (tree->GetBranch("caloCluster_rawM") != 0) {
		caloCluster_rawM_branch = tree->GetBranch("caloCluster_rawM");
		if (caloCluster_rawM_branch) {caloCluster_rawM_branch->SetAddress(&caloCluster_rawM_);}
	}
	caloCluster_rawPhi_branch = 0;
	if (tree->GetBranch("caloCluster_rawPhi") != 0) {
		caloCluster_rawPhi_branch = tree->GetBranch("caloCluster_rawPhi");
		if (caloCluster_rawPhi_branch) {caloCluster_rawPhi_branch->SetAddress(&caloCluster_rawPhi_);}
	}
	caloCluster_time_branch = 0;
	if (tree->GetBranch("caloCluster_time") != 0) {
		caloCluster_time_branch = tree->GetBranch("caloCluster_time");
		if (caloCluster_time_branch) {caloCluster_time_branch->SetAddress(&caloCluster_time_);}
	}
	caloCluster_AVG_LAR_Q_branch = 0;
	if (tree->GetBranch("caloCluster_AVG_LAR_Q") != 0) {
		caloCluster_AVG_LAR_Q_branch = tree->GetBranch("caloCluster_AVG_LAR_Q");
		if (caloCluster_AVG_LAR_Q_branch) {caloCluster_AVG_LAR_Q_branch->SetAddress(&caloCluster_AVG_LAR_Q_);}
	}
	caloCluster_AVG_TILE_Q_branch = 0;
	if (tree->GetBranch("caloCluster_AVG_TILE_Q") != 0) {
		caloCluster_AVG_TILE_Q_branch = tree->GetBranch("caloCluster_AVG_TILE_Q");
		if (caloCluster_AVG_TILE_Q_branch) {caloCluster_AVG_TILE_Q_branch->SetAddress(&caloCluster_AVG_TILE_Q_);}
	}
	caloCluster_BADLARQ_branch = 0;
	if (tree->GetBranch("caloCluster_BADLARQ") != 0) {
		caloCluster_BADLARQ_branch = tree->GetBranch("caloCluster_BADLARQ");
		if (caloCluster_BADLARQ_branch) {caloCluster_BADLARQ_branch->SetAddress(&caloCluster_BADLARQ_);}
	}
	caloCluster_CELL_SIGNIFICANCE_branch = 0;
	if (tree->GetBranch("caloCluster_CELL_SIGNIFICANCE") != 0) {
		caloCluster_CELL_SIGNIFICANCE_branch = tree->GetBranch("caloCluster_CELL_SIGNIFICANCE");
		if (caloCluster_CELL_SIGNIFICANCE_branch) {caloCluster_CELL_SIGNIFICANCE_branch->SetAddress(&caloCluster_CELL_SIGNIFICANCE_);}
	}
	caloCluster_CELL_SIG_SAMPLING_branch = 0;
	if (tree->GetBranch("caloCluster_CELL_SIG_SAMPLING") != 0) {
		caloCluster_CELL_SIG_SAMPLING_branch = tree->GetBranch("caloCluster_CELL_SIG_SAMPLING");
		if (caloCluster_CELL_SIG_SAMPLING_branch) {caloCluster_CELL_SIG_SAMPLING_branch->SetAddress(&caloCluster_CELL_SIG_SAMPLING_);}
	}
	caloCluster_CENTER_LAMBDA_branch = 0;
	if (tree->GetBranch("caloCluster_CENTER_LAMBDA") != 0) {
		caloCluster_CENTER_LAMBDA_branch = tree->GetBranch("caloCluster_CENTER_LAMBDA");
		if (caloCluster_CENTER_LAMBDA_branch) {caloCluster_CENTER_LAMBDA_branch->SetAddress(&caloCluster_CENTER_LAMBDA_);}
	}
	caloCluster_CENTER_MAG_branch = 0;
	if (tree->GetBranch("caloCluster_CENTER_MAG") != 0) {
		caloCluster_CENTER_MAG_branch = tree->GetBranch("caloCluster_CENTER_MAG");
		if (caloCluster_CENTER_MAG_branch) {caloCluster_CENTER_MAG_branch->SetAddress(&caloCluster_CENTER_MAG_);}
	}
	track_pt_branch = 0;
	if (tree->GetBranch("track_pt") != 0) {
		track_pt_branch = tree->GetBranch("track_pt");
		if (track_pt_branch) {track_pt_branch->SetAddress(&track_pt_);}
	}
	track_px_branch = 0;
	if (tree->GetBranch("track_px") != 0) {
		track_px_branch = tree->GetBranch("track_px");
		if (track_px_branch) {track_px_branch->SetAddress(&track_px_);}
	}
	track_py_branch = 0;
	if (tree->GetBranch("track_py") != 0) {
		track_py_branch = tree->GetBranch("track_py");
		if (track_py_branch) {track_py_branch->SetAddress(&track_py_);}
	}
	track_pz_branch = 0;
	if (tree->GetBranch("track_pz") != 0) {
		track_pz_branch = tree->GetBranch("track_pz");
		if (track_pz_branch) {track_pz_branch->SetAddress(&track_pz_);}
	}
	track_E_branch = 0;
	if (tree->GetBranch("track_E") != 0) {
		track_E_branch = tree->GetBranch("track_E");
		if (track_E_branch) {track_E_branch->SetAddress(&track_E_);}
	}
	track_vz_branch = 0;
	if (tree->GetBranch("track_vz") != 0) {
		track_vz_branch = tree->GetBranch("track_vz");
		if (track_vz_branch) {track_vz_branch->SetAddress(&track_vz_);}
	}
	track_z0_branch = 0;
	if (tree->GetBranch("track_z0") != 0) {
		track_z0_branch = tree->GetBranch("track_z0");
		if (track_z0_branch) {track_z0_branch->SetAddress(&track_z0_);}
	}
	track_phi_branch = 0;
	if (tree->GetBranch("track_phi") != 0) {
		track_phi_branch = tree->GetBranch("track_phi");
		if (track_phi_branch) {track_phi_branch->SetAddress(&track_phi_);}
	}
	track_expectInnermostPixelLayerHit_branch = 0;
	if (tree->GetBranch("track_expectInnermostPixelLayerHit") != 0) {
		track_expectInnermostPixelLayerHit_branch = tree->GetBranch("track_expectInnermostPixelLayerHit");
		if (track_expectInnermostPixelLayerHit_branch) {track_expectInnermostPixelLayerHit_branch->SetAddress(&track_expectInnermostPixelLayerHit_);}
	}
	track_expectNextToInnermostPixelLayerHit_branch = 0;
	if (tree->GetBranch("track_expectNextToInnermostPixelLayerHit") != 0) {
		track_expectNextToInnermostPixelLayerHit_branch = tree->GetBranch("track_expectNextToInnermostPixelLayerHit");
		if (track_expectNextToInnermostPixelLayerHit_branch) {track_expectNextToInnermostPixelLayerHit_branch->SetAddress(&track_expectNextToInnermostPixelLayerHit_);}
	}
	track_numberOfInnermostPixelLayerHits_branch = 0;
	if (tree->GetBranch("track_numberOfInnermostPixelLayerHits") != 0) {
		track_numberOfInnermostPixelLayerHits_branch = tree->GetBranch("track_numberOfInnermostPixelLayerHits");
		if (track_numberOfInnermostPixelLayerHits_branch) {track_numberOfInnermostPixelLayerHits_branch->SetAddress(&track_numberOfInnermostPixelLayerHits_);}
	}
	track_numberOfNextToInnermostPixelLayerHits_branch = 0;
	if (tree->GetBranch("track_numberOfNextToInnermostPixelLayerHits") != 0) {
		track_numberOfNextToInnermostPixelLayerHits_branch = tree->GetBranch("track_numberOfNextToInnermostPixelLayerHits");
		if (track_numberOfNextToInnermostPixelLayerHits_branch) {track_numberOfNextToInnermostPixelLayerHits_branch->SetAddress(&track_numberOfNextToInnermostPixelLayerHits_);}
	}
	track_chiSquared_branch = 0;
	if (tree->GetBranch("track_chiSquared") != 0) {
		track_chiSquared_branch = tree->GetBranch("track_chiSquared");
		if (track_chiSquared_branch) {track_chiSquared_branch->SetAddress(&track_chiSquared_);}
	}
	track_d0_branch = 0;
	if (tree->GetBranch("track_d0") != 0) {
		track_d0_branch = tree->GetBranch("track_d0");
		if (track_d0_branch) {track_d0_branch->SetAddress(&track_d0_);}
	}
	track_numberOfPixelSharedHits_branch = 0;
	if (tree->GetBranch("track_numberOfPixelSharedHits") != 0) {
		track_numberOfPixelSharedHits_branch = tree->GetBranch("track_numberOfPixelSharedHits");
		if (track_numberOfPixelSharedHits_branch) {track_numberOfPixelSharedHits_branch->SetAddress(&track_numberOfPixelSharedHits_);}
	}
	track_numberDoF_branch = 0;
	if (tree->GetBranch("track_numberDoF") != 0) {
		track_numberDoF_branch = tree->GetBranch("track_numberDoF");
		if (track_numberDoF_branch) {track_numberDoF_branch->SetAddress(&track_numberDoF_);}
	}
	track_numberOfSCTSharedHits_branch = 0;
	if (tree->GetBranch("track_numberOfSCTSharedHits") != 0) {
		track_numberOfSCTSharedHits_branch = tree->GetBranch("track_numberOfSCTSharedHits");
		if (track_numberOfSCTSharedHits_branch) {track_numberOfSCTSharedHits_branch->SetAddress(&track_numberOfSCTSharedHits_);}
	}
	track_numberOfPhiHoleLayers_branch = 0;
	if (tree->GetBranch("track_numberOfPhiHoleLayers") != 0) {
		track_numberOfPhiHoleLayers_branch = tree->GetBranch("track_numberOfPhiHoleLayers");
		if (track_numberOfPhiHoleLayers_branch) {track_numberOfPhiHoleLayers_branch->SetAddress(&track_numberOfPhiHoleLayers_);}
	}
	track_numberOfPhiLayers_branch = 0;
	if (tree->GetBranch("track_numberOfPhiLayers") != 0) {
		track_numberOfPhiLayers_branch = tree->GetBranch("track_numberOfPhiLayers");
		if (track_numberOfPhiLayers_branch) {track_numberOfPhiLayers_branch->SetAddress(&track_numberOfPhiLayers_);}
	}
	track_numberOfPixelDeadSensors_branch = 0;
	if (tree->GetBranch("track_numberOfPixelDeadSensors") != 0) {
		track_numberOfPixelDeadSensors_branch = tree->GetBranch("track_numberOfPixelDeadSensors");
		if (track_numberOfPixelDeadSensors_branch) {track_numberOfPixelDeadSensors_branch->SetAddress(&track_numberOfPixelDeadSensors_);}
	}
	track_numberOfPixelHits_branch = 0;
	if (tree->GetBranch("track_numberOfPixelHits") != 0) {
		track_numberOfPixelHits_branch = tree->GetBranch("track_numberOfPixelHits");
		if (track_numberOfPixelHits_branch) {track_numberOfPixelHits_branch->SetAddress(&track_numberOfPixelHits_);}
	}
	track_numberOfPrecisionLayers_branch = 0;
	if (tree->GetBranch("track_numberOfPrecisionLayers") != 0) {
		track_numberOfPrecisionLayers_branch = tree->GetBranch("track_numberOfPrecisionLayers");
		if (track_numberOfPrecisionLayers_branch) {track_numberOfPrecisionLayers_branch->SetAddress(&track_numberOfPrecisionLayers_);}
	}
	track_numberOfSCTDeadSensors_branch = 0;
	if (tree->GetBranch("track_numberOfSCTDeadSensors") != 0) {
		track_numberOfSCTDeadSensors_branch = tree->GetBranch("track_numberOfSCTDeadSensors");
		if (track_numberOfSCTDeadSensors_branch) {track_numberOfSCTDeadSensors_branch->SetAddress(&track_numberOfSCTDeadSensors_);}
	}
	track_numberOfSCTHits_branch = 0;
	if (tree->GetBranch("track_numberOfSCTHits") != 0) {
		track_numberOfSCTHits_branch = tree->GetBranch("track_numberOfSCTHits");
		if (track_numberOfSCTHits_branch) {track_numberOfSCTHits_branch->SetAddress(&track_numberOfSCTHits_);}
	}
	track_numberOfSCTHoles_branch = 0;
	if (tree->GetBranch("track_numberOfSCTHoles") != 0) {
		track_numberOfSCTHoles_branch = tree->GetBranch("track_numberOfSCTHoles");
		if (track_numberOfSCTHoles_branch) {track_numberOfSCTHoles_branch->SetAddress(&track_numberOfSCTHoles_);}
	}
	track_numberOfTRTHits_branch = 0;
	if (tree->GetBranch("track_numberOfTRTHits") != 0) {
		track_numberOfTRTHits_branch = tree->GetBranch("track_numberOfTRTHits");
		if (track_numberOfTRTHits_branch) {track_numberOfTRTHits_branch->SetAddress(&track_numberOfTRTHits_);}
	}
	track_numberOfTRTOutliers_branch = 0;
	if (tree->GetBranch("track_numberOfTRTOutliers") != 0) {
		track_numberOfTRTOutliers_branch = tree->GetBranch("track_numberOfTRTOutliers");
		if (track_numberOfTRTOutliers_branch) {track_numberOfTRTOutliers_branch->SetAddress(&track_numberOfTRTOutliers_);}
	}
	track_qOverp_branch = 0;
	if (tree->GetBranch("track_qOverp") != 0) {
		track_qOverp_branch = tree->GetBranch("track_qOverp");
		if (track_qOverp_branch) {track_qOverp_branch->SetAddress(&track_qOverp_);}
	}
	track_theta_branch = 0;
	if (tree->GetBranch("track_theta") != 0) {
		track_theta_branch = tree->GetBranch("track_theta");
		if (track_theta_branch) {track_theta_branch->SetAddress(&track_theta_);}
	}
	track_vertex_x_branch = 0;
	if (tree->GetBranch("track_vertex_x") != 0) {
		track_vertex_x_branch = tree->GetBranch("track_vertex_x");
		if (track_vertex_x_branch) {track_vertex_x_branch->SetAddress(&track_vertex_x_);}
	}
	track_vertex_y_branch = 0;
	if (tree->GetBranch("track_vertex_y") != 0) {
		track_vertex_y_branch = tree->GetBranch("track_vertex_y");
		if (track_vertex_y_branch) {track_vertex_y_branch->SetAddress(&track_vertex_y_);}
	}
	track_vertex_z_branch = 0;
	if (tree->GetBranch("track_vertex_z") != 0) {
		track_vertex_z_branch = tree->GetBranch("track_vertex_z");
		if (track_vertex_z_branch) {track_vertex_z_branch->SetAddress(&track_vertex_z_);}
	}
	track_vertex_type_branch = 0;
	if (tree->GetBranch("track_vertex_type") != 0) {
		track_vertex_type_branch = tree->GetBranch("track_vertex_type");
		if (track_vertex_type_branch) {track_vertex_type_branch->SetAddress(&track_vertex_type_);}
	}
	primary_vertex_x_branch = 0;
	if (tree->GetBranch("primary_vertex_x") != 0) {
		primary_vertex_x_branch = tree->GetBranch("primary_vertex_x");
		if (primary_vertex_x_branch) {primary_vertex_x_branch->SetAddress(&primary_vertex_x_);}
	}
	primary_vertex_y_branch = 0;
	if (tree->GetBranch("primary_vertex_y") != 0) {
		primary_vertex_y_branch = tree->GetBranch("primary_vertex_y");
		if (primary_vertex_y_branch) {primary_vertex_y_branch->SetAddress(&primary_vertex_y_);}
	}
	primary_vertex_z_branch = 0;
	if (tree->GetBranch("primary_vertex_z") != 0) {
		primary_vertex_z_branch = tree->GetBranch("primary_vertex_z");
		if (primary_vertex_z_branch) {primary_vertex_z_branch->SetAddress(&primary_vertex_z_);}
	}
	primary_vertex_type_branch = 0;
	if (tree->GetBranch("primary_vertex_type") != 0) {
		primary_vertex_type_branch = tree->GetBranch("primary_vertex_type");
		if (primary_vertex_type_branch) {primary_vertex_type_branch->SetAddress(&primary_vertex_type_);}
	}
	a_pt_branch = 0;
	if (tree->GetBranch("a_pt") != 0) {
		a_pt_branch = tree->GetBranch("a_pt");
		if (a_pt_branch) {a_pt_branch->SetAddress(&a_pt_);}
	}
	mc_pt_branch = 0;
	if (tree->GetBranch("mc_pt") != 0) {
		mc_pt_branch = tree->GetBranch("mc_pt");
		if (mc_pt_branch) {mc_pt_branch->SetAddress(&mc_pt_);}
	}
	mc_eta_branch = 0;
	if (tree->GetBranch("mc_eta") != 0) {
		mc_eta_branch = tree->GetBranch("mc_eta");
		if (mc_eta_branch) {mc_eta_branch->SetAddress(&mc_eta_);}
	}
	mc_phi_branch = 0;
	if (tree->GetBranch("mc_phi") != 0) {
		mc_phi_branch = tree->GetBranch("mc_phi");
		if (mc_phi_branch) {mc_phi_branch->SetAddress(&mc_phi_);}
	}
	mc_e_branch = 0;
	if (tree->GetBranch("mc_e") != 0) {
		mc_e_branch = tree->GetBranch("mc_e");
		if (mc_e_branch) {mc_e_branch->SetAddress(&mc_e_);}
	}
	mc_pdgId_branch = 0;
	if (tree->GetBranch("mc_pdgId") != 0) {
		mc_pdgId_branch = tree->GetBranch("mc_pdgId");
		if (mc_pdgId_branch) {mc_pdgId_branch->SetAddress(&mc_pdgId_);}
	}
	mc_status_branch = 0;
	if (tree->GetBranch("mc_status") != 0) {
		mc_status_branch = tree->GetBranch("mc_status");
		if (mc_status_branch) {mc_status_branch->SetAddress(&mc_status_);}
	}
  tree->SetMakeClass(0);
}
void aa::GetEntry(unsigned int idx) 
	// this only marks branches as not loaded, saving a lot of time
	{
		index = idx;
		weight_mc_isLoaded = false;
		weight_pileup_isLoaded = false;
		weight_leptonSF_isLoaded = false;
		weight_bTagSF_isLoaded = false;
		weight_leptonSF_EL_SF_Trigger_UP_isLoaded = false;
		weight_leptonSF_EL_SF_Trigger_DOWN_isLoaded = false;
		weight_leptonSF_EL_SF_Reco_UP_isLoaded = false;
		weight_leptonSF_EL_SF_Reco_DOWN_isLoaded = false;
		weight_leptonSF_EL_SF_ID_UP_isLoaded = false;
		weight_leptonSF_EL_SF_ID_DOWN_isLoaded = false;
		weight_leptonSF_EL_SF_Isol_UP_isLoaded = false;
		weight_leptonSF_EL_SF_Isol_DOWN_isLoaded = false;
		weight_leptonSF_MU_SF_Trigger_STAT_UP_isLoaded = false;
		weight_leptonSF_MU_SF_Trigger_STAT_DOWN_isLoaded = false;
		weight_leptonSF_MU_SF_Trigger_SYST_UP_isLoaded = false;
		weight_leptonSF_MU_SF_Trigger_SYST_DOWN_isLoaded = false;
		weight_leptonSF_MU_SF_ID_STAT_UP_isLoaded = false;
		weight_leptonSF_MU_SF_ID_STAT_DOWN_isLoaded = false;
		weight_leptonSF_MU_SF_ID_SYST_UP_isLoaded = false;
		weight_leptonSF_MU_SF_ID_SYST_DOWN_isLoaded = false;
		weight_leptonSF_MU_SF_Isol_UP_isLoaded = false;
		weight_leptonSF_MU_SF_Isol_DOWN_isLoaded = false;
		weight_indiv_SF_EL_Trigger_isLoaded = false;
		weight_indiv_SF_EL_Trigger_UP_isLoaded = false;
		weight_indiv_SF_EL_Trigger_DOWN_isLoaded = false;
		weight_indiv_SF_EL_Reco_isLoaded = false;
		weight_indiv_SF_EL_Reco_UP_isLoaded = false;
		weight_indiv_SF_EL_Reco_DOWN_isLoaded = false;
		weight_indiv_SF_EL_ID_isLoaded = false;
		weight_indiv_SF_EL_ID_UP_isLoaded = false;
		weight_indiv_SF_EL_ID_DOWN_isLoaded = false;
		weight_indiv_SF_EL_Isol_isLoaded = false;
		weight_indiv_SF_EL_Isol_UP_isLoaded = false;
		weight_indiv_SF_EL_Isol_DOWN_isLoaded = false;
		weight_indiv_SF_MU_Trigger_isLoaded = false;
		weight_indiv_SF_MU_Trigger_STAT_UP_isLoaded = false;
		weight_indiv_SF_MU_Trigger_STAT_DOWN_isLoaded = false;
		weight_indiv_SF_MU_Trigger_SYST_UP_isLoaded = false;
		weight_indiv_SF_MU_Trigger_SYST_DOWN_isLoaded = false;
		weight_indiv_SF_MU_ID_isLoaded = false;
		weight_indiv_SF_MU_ID_STAT_UP_isLoaded = false;
		weight_indiv_SF_MU_ID_STAT_DOWN_isLoaded = false;
		weight_indiv_SF_MU_ID_SYST_UP_isLoaded = false;
		weight_indiv_SF_MU_ID_SYST_DOWN_isLoaded = false;
		weight_indiv_SF_MU_Isol_isLoaded = false;
		weight_indiv_SF_MU_Isol_UP_isLoaded = false;
		weight_indiv_SF_MU_Isol_DOWN_isLoaded = false;
		weight_bTagSF_eigenvars_B_up_isLoaded = false;
		weight_bTagSF_eigenvars_C_up_isLoaded = false;
		weight_bTagSF_eigenvars_Light_up_isLoaded = false;
		weight_bTagSF_eigenvars_B_down_isLoaded = false;
		weight_bTagSF_eigenvars_C_down_isLoaded = false;
		weight_bTagSF_eigenvars_Light_down_isLoaded = false;
		weight_bTagSF_extrapolation_up_isLoaded = false;
		weight_bTagSF_extrapolation_down_isLoaded = false;
		weight_bTagSF_extrapolation_from_charm_up_isLoaded = false;
		weight_bTagSF_extrapolation_from_charm_down_isLoaded = false;
		eventNumber_isLoaded = false;
		runNumber_isLoaded = false;
		mcChannelNumber_isLoaded = false;
		mu_isLoaded = false;
		el_pt_isLoaded = false;
		el_eta_isLoaded = false;
		el_phi_isLoaded = false;
		el_e_isLoaded = false;
		el_charge_isLoaded = false;
		el_topoetcone20_isLoaded = false;
		el_ptvarcone20_isLoaded = false;
		mu_pt_isLoaded = false;
		mu_eta_isLoaded = false;
		mu_phi_isLoaded = false;
		mu_e_isLoaded = false;
		mu_charge_isLoaded = false;
		mu_topoetcone20_isLoaded = false;
		mu_ptvarcone30_isLoaded = false;
		jet_pt_isLoaded = false;
		jet_eta_isLoaded = false;
		jet_phi_isLoaded = false;
		jet_e_isLoaded = false;
		jet_mv1_isLoaded = false;
		jet_mvb_isLoaded = false;
		jet_mv1c_isLoaded = false;
		jet_mv2c00_isLoaded = false;
		jet_mv2c10_isLoaded = false;
		jet_mv2c20_isLoaded = false;
		jet_ip3dsv1_isLoaded = false;
		jet_jvt_isLoaded = false;
		ljet_pt_isLoaded = false;
		ljet_eta_isLoaded = false;
		ljet_phi_isLoaded = false;
		ljet_e_isLoaded = false;
		ljet_m_isLoaded = false;
		ljet_sd12_isLoaded = false;
		met_met_isLoaded = false;
		met_phi_isLoaded = false;
		sub_1b_2fj_isLoaded = false;
		sub_1b_3fj_isLoaded = false;
		sub_1b_allfj_isLoaded = false;
		TotalEventWeight_isLoaded = false;
		EventParticleWeight_isLoaded = false;
		ScaleFactorWeight_isLoaded = false;
		EventParameterWeight_isLoaded = false;
		HT_isLoaded = false;
		HhadT_isLoaded = false;
		HT_ratio_met_isLoaded = false;
		HT_ratio_lep_isLoaded = false;
		meff_isLoaded = false;
		Centrality_isLoaded = false;
		MetSignificance_isLoaded = false;
		MT2reco_isLoaded = false;
		MCTreco_isLoaded = false;
		dPhimin_met_jet_isLoaded = false;
		dPhimin_met_lep_isLoaded = false;
		dPhisumjetmet_isLoaded = false;
		dPhisumjetlep_isLoaded = false;
		dPhisumjetmetlep_isLoaded = false;
		dRlj_MindR_isLoaded = false;
		Mbb_MindR_isLoaded = false;
		Mjj_MaxPt_isLoaded = false;
		Mjjj_MaxPt_isLoaded = false;
		Mbbb_MaxPt_isLoaded = false;
		Mjjjj_MaxPt_isLoaded = false;
		Mbbbb_MaxPt_isLoaded = false;
		Mbbbj_MaxPt_isLoaded = false;
		Mjjj_MaxMV2c20_isLoaded = false;
		Mbbb_MaxMV2c20_isLoaded = false;
		Mjjjj_MaxMV2c20_isLoaded = false;
		Mbbbb_MaxMV2c20_isLoaded = false;
		Mbbbj_MaxMV2c20_isLoaded = false;
		DeltaMbbbb_MinDeltaM_isLoaded = false;
		dR_lep_jet1_isLoaded = false;
		dPhibl_MindPhi_isLoaded = false;
		dRbl_MindR_isLoaded = false;
		dPhibb_MindPhi_isLoaded = false;
		dRbb_MindR_isLoaded = false;
		PtDiff_Higgs_Vector_isLoaded = false;
		el_n_isLoaded = false;
		el_MT_isLoaded = false;
		el_M_isLoaded = false;
		mu_n_isLoaded = false;
		mu_MT_isLoaded = false;
		mu_M_isLoaded = false;
		lep_n_isLoaded = false;
		jet_n_isLoaded = false;
		jet20_n_isLoaded = false;
		jet30_n_isLoaded = false;
		jet40_n_isLoaded = false;
		bjet_n_isLoaded = false;
		ljet_n_isLoaded = false;
		ljet_width_isLoaded = false;
		ljet_tau1_isLoaded = false;
		ljet_tau2_isLoaded = false;
		ljet_tau3_isLoaded = false;
		ljet_tau1_wta_isLoaded = false;
		ljet_tau2_wta_isLoaded = false;
		ljet_tau3_wta_isLoaded = false;
		ljet_planarFlow_isLoaded = false;
		ljet_ktsplit12_isLoaded = false;
		ljet_ktsplit23_isLoaded = false;
		ljet_ktsplit34_isLoaded = false;
		ljet_ZCut12_isLoaded = false;
		ljet_ZCut23_isLoaded = false;
		ljet_ZCut34_isLoaded = false;
		ljet_KtDR_isLoaded = false;
		ljet_Angularity_isLoaded = false;
		ljet_Aplanarity_isLoaded = false;
		ljet_Dip12_isLoaded = false;
		ljet_Dip13_isLoaded = false;
		ljet_Dip23_isLoaded = false;
		ljet_D2_isLoaded = false;
		ljet_C2_isLoaded = false;
		ljet_tau21_isLoaded = false;
		ljet_tau32_isLoaded = false;
		ljet_tau31_isLoaded = false;
		ljet_tau21_wta_isLoaded = false;
		ljet_tau32_wta_isLoaded = false;
		ljet_tau31_wta_isLoaded = false;
		jet_truth_matching_isLoaded = false;
		boosted_jet_truth_matching_isLoaded = false;
		boosted_trackjet_truth_matching_isLoaded = false;
		truth_nbquarks_isLoaded = false;
		nbtag_tjets_truth_isLoaded = false;
		nbtag_tjets_reco_isLoaded = false;
		n_tjets_fat_isLoaded = false;
		n_btjets_bfat_isLoaded = false;
		n_btjets_fat_isLoaded = false;
		n_tbtjets_fat_isLoaded = false;
		n_tjets_subfat_isLoaded = false;
		leadfat_leadtrack_pt_isLoaded = false;
		leadfat_subtrack_pt_isLoaded = false;
		higgs_mass_isLoaded = false;
		b_pt_isLoaded = false;
		notj_fj_pt_isLoaded = false;
		n_1tbtjets_fat_isLoaded = false;
		n_2tbtjets_fat_isLoaded = false;
		n_1inc_tbtjets_fat_isLoaded = false;
		n_2inc_tbtjets_fat_isLoaded = false;
		trub_track_jets_isLoaded = false;
		tagb_track_jets_isLoaded = false;
		nb_isLoaded = false;
		trub_2track_jets_isLoaded = false;
		btj_isLoaded = false;
		tj_j_isLoaded = false;
		btj_j_isLoaded = false;
		b_j_isLoaded = false;
		bh_j_isLoaded = false;
		j_pt_isLoaded = false;
		trackjet_pt_isLoaded = false;
		dr_matched_jet_pt_isLoaded = false;
		dr_matched_trackjet_pt_isLoaded = false;
		b_tag_jet_isLoaded = false;
		fj_pt_isLoaded = false;
		label_jet_isLoaded = false;
		btag_trackjet_isLoaded = false;
		label_trackjet_isLoaded = false;
		tj_fj_isLoaded = false;
		bpart_fj_isLoaded = false;
		label_fj_isLoaded = false;
		ghost_dr_fj_isLoaded = false;
		drmatch_dr_fj_isLoaded = false;
		label_trackjet_fj_isLoaded = false;
		btag_trackjet_fj_isLoaded = false;
		ghost_tj_fj_isLoaded = false;
		fj_dr_matched_trackjet_pt_isLoaded = false;
		tj_pt_check_isLoaded = false;
		caloCluster_pt_isLoaded = false;
		caloCluster_px_isLoaded = false;
		caloCluster_py_isLoaded = false;
		caloCluster_pz_isLoaded = false;
		caloCluster_E_isLoaded = false;
		caloCluster_EM_PROBABILITY_isLoaded = false;
		caloCluster_ENG_BAD_CELLS_isLoaded = false;
		caloCluster_ENG_FRAC_MAX_isLoaded = false;
		caloCluster_ENG_POS_isLoaded = false;
		caloCluster_FIRST_ENG_DES_isLoaded = false;
		caloCluster_ISOLATION_isLoaded = false;
		caloCluster_LATERAL_isLoaded = false;
		caloCluster_LONGITUDINAL_isLoaded = false;
		caloCluster_N_BAD_CELLS_isLoaded = false;
		caloCluster_SECOND_LAMBDA_isLoaded = false;
		caloCluster_SECOND_R_isLoaded = false;
		caloCluster_SIGNIFICANCE_isLoaded = false;
		caloCluster_altE_isLoaded = false;
		caloCluster_altEta_isLoaded = false;
		caloCluster_altM_isLoaded = false;
		caloCluster_altPhi_isLoaded = false;
		caloCluster_calE_isLoaded = false;
		caloCluster_calEta_isLoaded = false;
		caloCluster_calM_isLoaded = false;
		caloCluster_calPhi_isLoaded = false;
		caloCluster_clusterSize_isLoaded = false;
		caloCluster_rawE_isLoaded = false;
		caloCluster_rawEta_isLoaded = false;
		caloCluster_rawM_isLoaded = false;
		caloCluster_rawPhi_isLoaded = false;
		caloCluster_time_isLoaded = false;
		caloCluster_AVG_LAR_Q_isLoaded = false;
		caloCluster_AVG_TILE_Q_isLoaded = false;
		caloCluster_BADLARQ_isLoaded = false;
		caloCluster_CELL_SIGNIFICANCE_isLoaded = false;
		caloCluster_CELL_SIG_SAMPLING_isLoaded = false;
		caloCluster_CENTER_LAMBDA_isLoaded = false;
		caloCluster_CENTER_MAG_isLoaded = false;
		track_pt_isLoaded = false;
		track_px_isLoaded = false;
		track_py_isLoaded = false;
		track_pz_isLoaded = false;
		track_E_isLoaded = false;
		track_vz_isLoaded = false;
		track_z0_isLoaded = false;
		track_phi_isLoaded = false;
		track_expectInnermostPixelLayerHit_isLoaded = false;
		track_expectNextToInnermostPixelLayerHit_isLoaded = false;
		track_numberOfInnermostPixelLayerHits_isLoaded = false;
		track_numberOfNextToInnermostPixelLayerHits_isLoaded = false;
		track_chiSquared_isLoaded = false;
		track_d0_isLoaded = false;
		track_numberOfPixelSharedHits_isLoaded = false;
		track_numberDoF_isLoaded = false;
		track_numberOfSCTSharedHits_isLoaded = false;
		track_numberOfPhiHoleLayers_isLoaded = false;
		track_numberOfPhiLayers_isLoaded = false;
		track_numberOfPixelDeadSensors_isLoaded = false;
		track_numberOfPixelHits_isLoaded = false;
		track_numberOfPrecisionLayers_isLoaded = false;
		track_numberOfSCTDeadSensors_isLoaded = false;
		track_numberOfSCTHits_isLoaded = false;
		track_numberOfSCTHoles_isLoaded = false;
		track_numberOfTRTHits_isLoaded = false;
		track_numberOfTRTOutliers_isLoaded = false;
		track_qOverp_isLoaded = false;
		track_theta_isLoaded = false;
		track_vertex_x_isLoaded = false;
		track_vertex_y_isLoaded = false;
		track_vertex_z_isLoaded = false;
		track_vertex_type_isLoaded = false;
		primary_vertex_x_isLoaded = false;
		primary_vertex_y_isLoaded = false;
		primary_vertex_z_isLoaded = false;
		primary_vertex_type_isLoaded = false;
		a_pt_isLoaded = false;
		mc_pt_isLoaded = false;
		mc_eta_isLoaded = false;
		mc_phi_isLoaded = false;
		mc_e_isLoaded = false;
		mc_pdgId_isLoaded = false;
		mc_status_isLoaded = false;
	}

void aa::LoadAllBranches() 
	// load all branches
{
	if (weight_mc_branch != 0) weight_mc();
	if (weight_pileup_branch != 0) weight_pileup();
	if (weight_leptonSF_branch != 0) weight_leptonSF();
	if (weight_bTagSF_branch != 0) weight_bTagSF();
	if (weight_leptonSF_EL_SF_Trigger_UP_branch != 0) weight_leptonSF_EL_SF_Trigger_UP();
	if (weight_leptonSF_EL_SF_Trigger_DOWN_branch != 0) weight_leptonSF_EL_SF_Trigger_DOWN();
	if (weight_leptonSF_EL_SF_Reco_UP_branch != 0) weight_leptonSF_EL_SF_Reco_UP();
	if (weight_leptonSF_EL_SF_Reco_DOWN_branch != 0) weight_leptonSF_EL_SF_Reco_DOWN();
	if (weight_leptonSF_EL_SF_ID_UP_branch != 0) weight_leptonSF_EL_SF_ID_UP();
	if (weight_leptonSF_EL_SF_ID_DOWN_branch != 0) weight_leptonSF_EL_SF_ID_DOWN();
	if (weight_leptonSF_EL_SF_Isol_UP_branch != 0) weight_leptonSF_EL_SF_Isol_UP();
	if (weight_leptonSF_EL_SF_Isol_DOWN_branch != 0) weight_leptonSF_EL_SF_Isol_DOWN();
	if (weight_leptonSF_MU_SF_Trigger_STAT_UP_branch != 0) weight_leptonSF_MU_SF_Trigger_STAT_UP();
	if (weight_leptonSF_MU_SF_Trigger_STAT_DOWN_branch != 0) weight_leptonSF_MU_SF_Trigger_STAT_DOWN();
	if (weight_leptonSF_MU_SF_Trigger_SYST_UP_branch != 0) weight_leptonSF_MU_SF_Trigger_SYST_UP();
	if (weight_leptonSF_MU_SF_Trigger_SYST_DOWN_branch != 0) weight_leptonSF_MU_SF_Trigger_SYST_DOWN();
	if (weight_leptonSF_MU_SF_ID_STAT_UP_branch != 0) weight_leptonSF_MU_SF_ID_STAT_UP();
	if (weight_leptonSF_MU_SF_ID_STAT_DOWN_branch != 0) weight_leptonSF_MU_SF_ID_STAT_DOWN();
	if (weight_leptonSF_MU_SF_ID_SYST_UP_branch != 0) weight_leptonSF_MU_SF_ID_SYST_UP();
	if (weight_leptonSF_MU_SF_ID_SYST_DOWN_branch != 0) weight_leptonSF_MU_SF_ID_SYST_DOWN();
	if (weight_leptonSF_MU_SF_Isol_UP_branch != 0) weight_leptonSF_MU_SF_Isol_UP();
	if (weight_leptonSF_MU_SF_Isol_DOWN_branch != 0) weight_leptonSF_MU_SF_Isol_DOWN();
	if (weight_indiv_SF_EL_Trigger_branch != 0) weight_indiv_SF_EL_Trigger();
	if (weight_indiv_SF_EL_Trigger_UP_branch != 0) weight_indiv_SF_EL_Trigger_UP();
	if (weight_indiv_SF_EL_Trigger_DOWN_branch != 0) weight_indiv_SF_EL_Trigger_DOWN();
	if (weight_indiv_SF_EL_Reco_branch != 0) weight_indiv_SF_EL_Reco();
	if (weight_indiv_SF_EL_Reco_UP_branch != 0) weight_indiv_SF_EL_Reco_UP();
	if (weight_indiv_SF_EL_Reco_DOWN_branch != 0) weight_indiv_SF_EL_Reco_DOWN();
	if (weight_indiv_SF_EL_ID_branch != 0) weight_indiv_SF_EL_ID();
	if (weight_indiv_SF_EL_ID_UP_branch != 0) weight_indiv_SF_EL_ID_UP();
	if (weight_indiv_SF_EL_ID_DOWN_branch != 0) weight_indiv_SF_EL_ID_DOWN();
	if (weight_indiv_SF_EL_Isol_branch != 0) weight_indiv_SF_EL_Isol();
	if (weight_indiv_SF_EL_Isol_UP_branch != 0) weight_indiv_SF_EL_Isol_UP();
	if (weight_indiv_SF_EL_Isol_DOWN_branch != 0) weight_indiv_SF_EL_Isol_DOWN();
	if (weight_indiv_SF_MU_Trigger_branch != 0) weight_indiv_SF_MU_Trigger();
	if (weight_indiv_SF_MU_Trigger_STAT_UP_branch != 0) weight_indiv_SF_MU_Trigger_STAT_UP();
	if (weight_indiv_SF_MU_Trigger_STAT_DOWN_branch != 0) weight_indiv_SF_MU_Trigger_STAT_DOWN();
	if (weight_indiv_SF_MU_Trigger_SYST_UP_branch != 0) weight_indiv_SF_MU_Trigger_SYST_UP();
	if (weight_indiv_SF_MU_Trigger_SYST_DOWN_branch != 0) weight_indiv_SF_MU_Trigger_SYST_DOWN();
	if (weight_indiv_SF_MU_ID_branch != 0) weight_indiv_SF_MU_ID();
	if (weight_indiv_SF_MU_ID_STAT_UP_branch != 0) weight_indiv_SF_MU_ID_STAT_UP();
	if (weight_indiv_SF_MU_ID_STAT_DOWN_branch != 0) weight_indiv_SF_MU_ID_STAT_DOWN();
	if (weight_indiv_SF_MU_ID_SYST_UP_branch != 0) weight_indiv_SF_MU_ID_SYST_UP();
	if (weight_indiv_SF_MU_ID_SYST_DOWN_branch != 0) weight_indiv_SF_MU_ID_SYST_DOWN();
	if (weight_indiv_SF_MU_Isol_branch != 0) weight_indiv_SF_MU_Isol();
	if (weight_indiv_SF_MU_Isol_UP_branch != 0) weight_indiv_SF_MU_Isol_UP();
	if (weight_indiv_SF_MU_Isol_DOWN_branch != 0) weight_indiv_SF_MU_Isol_DOWN();
	if (weight_bTagSF_eigenvars_B_up_branch != 0) weight_bTagSF_eigenvars_B_up();
	if (weight_bTagSF_eigenvars_C_up_branch != 0) weight_bTagSF_eigenvars_C_up();
	if (weight_bTagSF_eigenvars_Light_up_branch != 0) weight_bTagSF_eigenvars_Light_up();
	if (weight_bTagSF_eigenvars_B_down_branch != 0) weight_bTagSF_eigenvars_B_down();
	if (weight_bTagSF_eigenvars_C_down_branch != 0) weight_bTagSF_eigenvars_C_down();
	if (weight_bTagSF_eigenvars_Light_down_branch != 0) weight_bTagSF_eigenvars_Light_down();
	if (weight_bTagSF_extrapolation_up_branch != 0) weight_bTagSF_extrapolation_up();
	if (weight_bTagSF_extrapolation_down_branch != 0) weight_bTagSF_extrapolation_down();
	if (weight_bTagSF_extrapolation_from_charm_up_branch != 0) weight_bTagSF_extrapolation_from_charm_up();
	if (weight_bTagSF_extrapolation_from_charm_down_branch != 0) weight_bTagSF_extrapolation_from_charm_down();
	if (eventNumber_branch != 0) eventNumber();
	if (runNumber_branch != 0) runNumber();
	if (mcChannelNumber_branch != 0) mcChannelNumber();
	if (mu_branch != 0) mu();
	if (el_pt_branch != 0) el_pt();
	if (el_eta_branch != 0) el_eta();
	if (el_phi_branch != 0) el_phi();
	if (el_e_branch != 0) el_e();
	if (el_charge_branch != 0) el_charge();
	if (el_topoetcone20_branch != 0) el_topoetcone20();
	if (el_ptvarcone20_branch != 0) el_ptvarcone20();
	if (mu_pt_branch != 0) mu_pt();
	if (mu_eta_branch != 0) mu_eta();
	if (mu_phi_branch != 0) mu_phi();
	if (mu_e_branch != 0) mu_e();
	if (mu_charge_branch != 0) mu_charge();
	if (mu_topoetcone20_branch != 0) mu_topoetcone20();
	if (mu_ptvarcone30_branch != 0) mu_ptvarcone30();
	if (jet_pt_branch != 0) jet_pt();
	if (jet_eta_branch != 0) jet_eta();
	if (jet_phi_branch != 0) jet_phi();
	if (jet_e_branch != 0) jet_e();
	if (jet_mv1_branch != 0) jet_mv1();
	if (jet_mvb_branch != 0) jet_mvb();
	if (jet_mv1c_branch != 0) jet_mv1c();
	if (jet_mv2c00_branch != 0) jet_mv2c00();
	if (jet_mv2c10_branch != 0) jet_mv2c10();
	if (jet_mv2c20_branch != 0) jet_mv2c20();
	if (jet_ip3dsv1_branch != 0) jet_ip3dsv1();
	if (jet_jvt_branch != 0) jet_jvt();
	if (ljet_pt_branch != 0) ljet_pt();
	if (ljet_eta_branch != 0) ljet_eta();
	if (ljet_phi_branch != 0) ljet_phi();
	if (ljet_e_branch != 0) ljet_e();
	if (ljet_m_branch != 0) ljet_m();
	if (ljet_sd12_branch != 0) ljet_sd12();
	if (met_met_branch != 0) met_met();
	if (met_phi_branch != 0) met_phi();
	if (sub_1b_2fj_branch != 0) sub_1b_2fj();
	if (sub_1b_3fj_branch != 0) sub_1b_3fj();
	if (sub_1b_allfj_branch != 0) sub_1b_allfj();
	if (TotalEventWeight_branch != 0) TotalEventWeight();
	if (EventParticleWeight_branch != 0) EventParticleWeight();
	if (ScaleFactorWeight_branch != 0) ScaleFactorWeight();
	if (EventParameterWeight_branch != 0) EventParameterWeight();
	if (HT_branch != 0) HT();
	if (HhadT_branch != 0) HhadT();
	if (HT_ratio_met_branch != 0) HT_ratio_met();
	if (HT_ratio_lep_branch != 0) HT_ratio_lep();
	if (meff_branch != 0) meff();
	if (Centrality_branch != 0) Centrality();
	if (MetSignificance_branch != 0) MetSignificance();
	if (MT2reco_branch != 0) MT2reco();
	if (MCTreco_branch != 0) MCTreco();
	if (dPhimin_met_jet_branch != 0) dPhimin_met_jet();
	if (dPhimin_met_lep_branch != 0) dPhimin_met_lep();
	if (dPhisumjetmet_branch != 0) dPhisumjetmet();
	if (dPhisumjetlep_branch != 0) dPhisumjetlep();
	if (dPhisumjetmetlep_branch != 0) dPhisumjetmetlep();
	if (dRlj_MindR_branch != 0) dRlj_MindR();
	if (Mbb_MindR_branch != 0) Mbb_MindR();
	if (Mjj_MaxPt_branch != 0) Mjj_MaxPt();
	if (Mjjj_MaxPt_branch != 0) Mjjj_MaxPt();
	if (Mbbb_MaxPt_branch != 0) Mbbb_MaxPt();
	if (Mjjjj_MaxPt_branch != 0) Mjjjj_MaxPt();
	if (Mbbbb_MaxPt_branch != 0) Mbbbb_MaxPt();
	if (Mbbbj_MaxPt_branch != 0) Mbbbj_MaxPt();
	if (Mjjj_MaxMV2c20_branch != 0) Mjjj_MaxMV2c20();
	if (Mbbb_MaxMV2c20_branch != 0) Mbbb_MaxMV2c20();
	if (Mjjjj_MaxMV2c20_branch != 0) Mjjjj_MaxMV2c20();
	if (Mbbbb_MaxMV2c20_branch != 0) Mbbbb_MaxMV2c20();
	if (Mbbbj_MaxMV2c20_branch != 0) Mbbbj_MaxMV2c20();
	if (DeltaMbbbb_MinDeltaM_branch != 0) DeltaMbbbb_MinDeltaM();
	if (dR_lep_jet1_branch != 0) dR_lep_jet1();
	if (dPhibl_MindPhi_branch != 0) dPhibl_MindPhi();
	if (dRbl_MindR_branch != 0) dRbl_MindR();
	if (dPhibb_MindPhi_branch != 0) dPhibb_MindPhi();
	if (dRbb_MindR_branch != 0) dRbb_MindR();
	if (PtDiff_Higgs_Vector_branch != 0) PtDiff_Higgs_Vector();
	if (el_n_branch != 0) el_n();
	if (el_MT_branch != 0) el_MT();
	if (el_M_branch != 0) el_M();
	if (mu_n_branch != 0) mu_n();
	if (mu_MT_branch != 0) mu_MT();
	if (mu_M_branch != 0) mu_M();
	if (lep_n_branch != 0) lep_n();
	if (jet_n_branch != 0) jet_n();
	if (jet20_n_branch != 0) jet20_n();
	if (jet30_n_branch != 0) jet30_n();
	if (jet40_n_branch != 0) jet40_n();
	if (bjet_n_branch != 0) bjet_n();
	if (ljet_n_branch != 0) ljet_n();
	if (ljet_width_branch != 0) ljet_width();
	if (ljet_tau1_branch != 0) ljet_tau1();
	if (ljet_tau2_branch != 0) ljet_tau2();
	if (ljet_tau3_branch != 0) ljet_tau3();
	if (ljet_tau1_wta_branch != 0) ljet_tau1_wta();
	if (ljet_tau2_wta_branch != 0) ljet_tau2_wta();
	if (ljet_tau3_wta_branch != 0) ljet_tau3_wta();
	if (ljet_planarFlow_branch != 0) ljet_planarFlow();
	if (ljet_ktsplit12_branch != 0) ljet_ktsplit12();
	if (ljet_ktsplit23_branch != 0) ljet_ktsplit23();
	if (ljet_ktsplit34_branch != 0) ljet_ktsplit34();
	if (ljet_ZCut12_branch != 0) ljet_ZCut12();
	if (ljet_ZCut23_branch != 0) ljet_ZCut23();
	if (ljet_ZCut34_branch != 0) ljet_ZCut34();
	if (ljet_KtDR_branch != 0) ljet_KtDR();
	if (ljet_Angularity_branch != 0) ljet_Angularity();
	if (ljet_Aplanarity_branch != 0) ljet_Aplanarity();
	if (ljet_Dip12_branch != 0) ljet_Dip12();
	if (ljet_Dip13_branch != 0) ljet_Dip13();
	if (ljet_Dip23_branch != 0) ljet_Dip23();
	if (ljet_D2_branch != 0) ljet_D2();
	if (ljet_C2_branch != 0) ljet_C2();
	if (ljet_tau21_branch != 0) ljet_tau21();
	if (ljet_tau32_branch != 0) ljet_tau32();
	if (ljet_tau31_branch != 0) ljet_tau31();
	if (ljet_tau21_wta_branch != 0) ljet_tau21_wta();
	if (ljet_tau32_wta_branch != 0) ljet_tau32_wta();
	if (ljet_tau31_wta_branch != 0) ljet_tau31_wta();
	if (jet_truth_matching_branch != 0) jet_truth_matching();
	if (boosted_jet_truth_matching_branch != 0) boosted_jet_truth_matching();
	if (boosted_trackjet_truth_matching_branch != 0) boosted_trackjet_truth_matching();
	if (truth_nbquarks_branch != 0) truth_nbquarks();
	if (nbtag_tjets_truth_branch != 0) nbtag_tjets_truth();
	if (nbtag_tjets_reco_branch != 0) nbtag_tjets_reco();
	if (n_tjets_fat_branch != 0) n_tjets_fat();
	if (n_btjets_bfat_branch != 0) n_btjets_bfat();
	if (n_btjets_fat_branch != 0) n_btjets_fat();
	if (n_tbtjets_fat_branch != 0) n_tbtjets_fat();
	if (n_tjets_subfat_branch != 0) n_tjets_subfat();
	if (leadfat_leadtrack_pt_branch != 0) leadfat_leadtrack_pt();
	if (leadfat_subtrack_pt_branch != 0) leadfat_subtrack_pt();
	if (higgs_mass_branch != 0) higgs_mass();
	if (b_pt_branch != 0) b_pt();
	if (notj_fj_pt_branch != 0) notj_fj_pt();
	if (n_1tbtjets_fat_branch != 0) n_1tbtjets_fat();
	if (n_2tbtjets_fat_branch != 0) n_2tbtjets_fat();
	if (n_1inc_tbtjets_fat_branch != 0) n_1inc_tbtjets_fat();
	if (n_2inc_tbtjets_fat_branch != 0) n_2inc_tbtjets_fat();
	if (trub_track_jets_branch != 0) trub_track_jets();
	if (tagb_track_jets_branch != 0) tagb_track_jets();
	if (nb_branch != 0) nb();
	if (trub_2track_jets_branch != 0) trub_2track_jets();
	if (btj_branch != 0) btj();
	if (tj_j_branch != 0) tj_j();
	if (btj_j_branch != 0) btj_j();
	if (b_j_branch != 0) b_j();
	if (bh_j_branch != 0) bh_j();
	if (j_pt_branch != 0) j_pt();
	if (trackjet_pt_branch != 0) trackjet_pt();
	if (dr_matched_jet_pt_branch != 0) dr_matched_jet_pt();
	if (dr_matched_trackjet_pt_branch != 0) dr_matched_trackjet_pt();
	if (b_tag_jet_branch != 0) b_tag_jet();
	if (fj_pt_branch != 0) fj_pt();
	if (label_jet_branch != 0) label_jet();
	if (btag_trackjet_branch != 0) btag_trackjet();
	if (label_trackjet_branch != 0) label_trackjet();
	if (tj_fj_branch != 0) tj_fj();
	if (bpart_fj_branch != 0) bpart_fj();
	if (label_fj_branch != 0) label_fj();
	if (ghost_dr_fj_branch != 0) ghost_dr_fj();
	if (drmatch_dr_fj_branch != 0) drmatch_dr_fj();
	if (label_trackjet_fj_branch != 0) label_trackjet_fj();
	if (btag_trackjet_fj_branch != 0) btag_trackjet_fj();
	if (ghost_tj_fj_branch != 0) ghost_tj_fj();
	if (fj_dr_matched_trackjet_pt_branch != 0) fj_dr_matched_trackjet_pt();
	if (tj_pt_check_branch != 0) tj_pt_check();
	if (caloCluster_pt_branch != 0) caloCluster_pt();
	if (caloCluster_px_branch != 0) caloCluster_px();
	if (caloCluster_py_branch != 0) caloCluster_py();
	if (caloCluster_pz_branch != 0) caloCluster_pz();
	if (caloCluster_E_branch != 0) caloCluster_E();
	if (caloCluster_EM_PROBABILITY_branch != 0) caloCluster_EM_PROBABILITY();
	if (caloCluster_ENG_BAD_CELLS_branch != 0) caloCluster_ENG_BAD_CELLS();
	if (caloCluster_ENG_FRAC_MAX_branch != 0) caloCluster_ENG_FRAC_MAX();
	if (caloCluster_ENG_POS_branch != 0) caloCluster_ENG_POS();
	if (caloCluster_FIRST_ENG_DES_branch != 0) caloCluster_FIRST_ENG_DES();
	if (caloCluster_ISOLATION_branch != 0) caloCluster_ISOLATION();
	if (caloCluster_LATERAL_branch != 0) caloCluster_LATERAL();
	if (caloCluster_LONGITUDINAL_branch != 0) caloCluster_LONGITUDINAL();
	if (caloCluster_N_BAD_CELLS_branch != 0) caloCluster_N_BAD_CELLS();
	if (caloCluster_SECOND_LAMBDA_branch != 0) caloCluster_SECOND_LAMBDA();
	if (caloCluster_SECOND_R_branch != 0) caloCluster_SECOND_R();
	if (caloCluster_SIGNIFICANCE_branch != 0) caloCluster_SIGNIFICANCE();
	if (caloCluster_altE_branch != 0) caloCluster_altE();
	if (caloCluster_altEta_branch != 0) caloCluster_altEta();
	if (caloCluster_altM_branch != 0) caloCluster_altM();
	if (caloCluster_altPhi_branch != 0) caloCluster_altPhi();
	if (caloCluster_calE_branch != 0) caloCluster_calE();
	if (caloCluster_calEta_branch != 0) caloCluster_calEta();
	if (caloCluster_calM_branch != 0) caloCluster_calM();
	if (caloCluster_calPhi_branch != 0) caloCluster_calPhi();
	if (caloCluster_clusterSize_branch != 0) caloCluster_clusterSize();
	if (caloCluster_rawE_branch != 0) caloCluster_rawE();
	if (caloCluster_rawEta_branch != 0) caloCluster_rawEta();
	if (caloCluster_rawM_branch != 0) caloCluster_rawM();
	if (caloCluster_rawPhi_branch != 0) caloCluster_rawPhi();
	if (caloCluster_time_branch != 0) caloCluster_time();
	if (caloCluster_AVG_LAR_Q_branch != 0) caloCluster_AVG_LAR_Q();
	if (caloCluster_AVG_TILE_Q_branch != 0) caloCluster_AVG_TILE_Q();
	if (caloCluster_BADLARQ_branch != 0) caloCluster_BADLARQ();
	if (caloCluster_CELL_SIGNIFICANCE_branch != 0) caloCluster_CELL_SIGNIFICANCE();
	if (caloCluster_CELL_SIG_SAMPLING_branch != 0) caloCluster_CELL_SIG_SAMPLING();
	if (caloCluster_CENTER_LAMBDA_branch != 0) caloCluster_CENTER_LAMBDA();
	if (caloCluster_CENTER_MAG_branch != 0) caloCluster_CENTER_MAG();
	if (track_pt_branch != 0) track_pt();
	if (track_px_branch != 0) track_px();
	if (track_py_branch != 0) track_py();
	if (track_pz_branch != 0) track_pz();
	if (track_E_branch != 0) track_E();
	if (track_vz_branch != 0) track_vz();
	if (track_z0_branch != 0) track_z0();
	if (track_phi_branch != 0) track_phi();
	if (track_expectInnermostPixelLayerHit_branch != 0) track_expectInnermostPixelLayerHit();
	if (track_expectNextToInnermostPixelLayerHit_branch != 0) track_expectNextToInnermostPixelLayerHit();
	if (track_numberOfInnermostPixelLayerHits_branch != 0) track_numberOfInnermostPixelLayerHits();
	if (track_numberOfNextToInnermostPixelLayerHits_branch != 0) track_numberOfNextToInnermostPixelLayerHits();
	if (track_chiSquared_branch != 0) track_chiSquared();
	if (track_d0_branch != 0) track_d0();
	if (track_numberOfPixelSharedHits_branch != 0) track_numberOfPixelSharedHits();
	if (track_numberDoF_branch != 0) track_numberDoF();
	if (track_numberOfSCTSharedHits_branch != 0) track_numberOfSCTSharedHits();
	if (track_numberOfPhiHoleLayers_branch != 0) track_numberOfPhiHoleLayers();
	if (track_numberOfPhiLayers_branch != 0) track_numberOfPhiLayers();
	if (track_numberOfPixelDeadSensors_branch != 0) track_numberOfPixelDeadSensors();
	if (track_numberOfPixelHits_branch != 0) track_numberOfPixelHits();
	if (track_numberOfPrecisionLayers_branch != 0) track_numberOfPrecisionLayers();
	if (track_numberOfSCTDeadSensors_branch != 0) track_numberOfSCTDeadSensors();
	if (track_numberOfSCTHits_branch != 0) track_numberOfSCTHits();
	if (track_numberOfSCTHoles_branch != 0) track_numberOfSCTHoles();
	if (track_numberOfTRTHits_branch != 0) track_numberOfTRTHits();
	if (track_numberOfTRTOutliers_branch != 0) track_numberOfTRTOutliers();
	if (track_qOverp_branch != 0) track_qOverp();
	if (track_theta_branch != 0) track_theta();
	if (track_vertex_x_branch != 0) track_vertex_x();
	if (track_vertex_y_branch != 0) track_vertex_y();
	if (track_vertex_z_branch != 0) track_vertex_z();
	if (track_vertex_type_branch != 0) track_vertex_type();
	if (primary_vertex_x_branch != 0) primary_vertex_x();
	if (primary_vertex_y_branch != 0) primary_vertex_y();
	if (primary_vertex_z_branch != 0) primary_vertex_z();
	if (primary_vertex_type_branch != 0) primary_vertex_type();
	if (a_pt_branch != 0) a_pt();
	if (mc_pt_branch != 0) mc_pt();
	if (mc_eta_branch != 0) mc_eta();
	if (mc_phi_branch != 0) mc_phi();
	if (mc_e_branch != 0) mc_e();
	if (mc_pdgId_branch != 0) mc_pdgId();
	if (mc_status_branch != 0) mc_status();
}

	const float &aa::weight_mc()
	{
		if (not weight_mc_isLoaded) {
			if (weight_mc_branch != 0) {
				weight_mc_branch->GetEntry(index);
			} else { 
				printf("branch weight_mc_branch does not exist!\n");
				exit(1);
			}
			weight_mc_isLoaded = true;
		}
		return weight_mc_;
	}
	const float &aa::weight_pileup()
	{
		if (not weight_pileup_isLoaded) {
			if (weight_pileup_branch != 0) {
				weight_pileup_branch->GetEntry(index);
			} else { 
				printf("branch weight_pileup_branch does not exist!\n");
				exit(1);
			}
			weight_pileup_isLoaded = true;
		}
		return weight_pileup_;
	}
	const float &aa::weight_leptonSF()
	{
		if (not weight_leptonSF_isLoaded) {
			if (weight_leptonSF_branch != 0) {
				weight_leptonSF_branch->GetEntry(index);
			} else { 
				printf("branch weight_leptonSF_branch does not exist!\n");
				exit(1);
			}
			weight_leptonSF_isLoaded = true;
		}
		return weight_leptonSF_;
	}
	const float &aa::weight_bTagSF()
	{
		if (not weight_bTagSF_isLoaded) {
			if (weight_bTagSF_branch != 0) {
				weight_bTagSF_branch->GetEntry(index);
			} else { 
				printf("branch weight_bTagSF_branch does not exist!\n");
				exit(1);
			}
			weight_bTagSF_isLoaded = true;
		}
		return weight_bTagSF_;
	}
	const float &aa::weight_leptonSF_EL_SF_Trigger_UP()
	{
		if (not weight_leptonSF_EL_SF_Trigger_UP_isLoaded) {
			if (weight_leptonSF_EL_SF_Trigger_UP_branch != 0) {
				weight_leptonSF_EL_SF_Trigger_UP_branch->GetEntry(index);
			} else { 
				printf("branch weight_leptonSF_EL_SF_Trigger_UP_branch does not exist!\n");
				exit(1);
			}
			weight_leptonSF_EL_SF_Trigger_UP_isLoaded = true;
		}
		return weight_leptonSF_EL_SF_Trigger_UP_;
	}
	const float &aa::weight_leptonSF_EL_SF_Trigger_DOWN()
	{
		if (not weight_leptonSF_EL_SF_Trigger_DOWN_isLoaded) {
			if (weight_leptonSF_EL_SF_Trigger_DOWN_branch != 0) {
				weight_leptonSF_EL_SF_Trigger_DOWN_branch->GetEntry(index);
			} else { 
				printf("branch weight_leptonSF_EL_SF_Trigger_DOWN_branch does not exist!\n");
				exit(1);
			}
			weight_leptonSF_EL_SF_Trigger_DOWN_isLoaded = true;
		}
		return weight_leptonSF_EL_SF_Trigger_DOWN_;
	}
	const float &aa::weight_leptonSF_EL_SF_Reco_UP()
	{
		if (not weight_leptonSF_EL_SF_Reco_UP_isLoaded) {
			if (weight_leptonSF_EL_SF_Reco_UP_branch != 0) {
				weight_leptonSF_EL_SF_Reco_UP_branch->GetEntry(index);
			} else { 
				printf("branch weight_leptonSF_EL_SF_Reco_UP_branch does not exist!\n");
				exit(1);
			}
			weight_leptonSF_EL_SF_Reco_UP_isLoaded = true;
		}
		return weight_leptonSF_EL_SF_Reco_UP_;
	}
	const float &aa::weight_leptonSF_EL_SF_Reco_DOWN()
	{
		if (not weight_leptonSF_EL_SF_Reco_DOWN_isLoaded) {
			if (weight_leptonSF_EL_SF_Reco_DOWN_branch != 0) {
				weight_leptonSF_EL_SF_Reco_DOWN_branch->GetEntry(index);
			} else { 
				printf("branch weight_leptonSF_EL_SF_Reco_DOWN_branch does not exist!\n");
				exit(1);
			}
			weight_leptonSF_EL_SF_Reco_DOWN_isLoaded = true;
		}
		return weight_leptonSF_EL_SF_Reco_DOWN_;
	}
	const float &aa::weight_leptonSF_EL_SF_ID_UP()
	{
		if (not weight_leptonSF_EL_SF_ID_UP_isLoaded) {
			if (weight_leptonSF_EL_SF_ID_UP_branch != 0) {
				weight_leptonSF_EL_SF_ID_UP_branch->GetEntry(index);
			} else { 
				printf("branch weight_leptonSF_EL_SF_ID_UP_branch does not exist!\n");
				exit(1);
			}
			weight_leptonSF_EL_SF_ID_UP_isLoaded = true;
		}
		return weight_leptonSF_EL_SF_ID_UP_;
	}
	const float &aa::weight_leptonSF_EL_SF_ID_DOWN()
	{
		if (not weight_leptonSF_EL_SF_ID_DOWN_isLoaded) {
			if (weight_leptonSF_EL_SF_ID_DOWN_branch != 0) {
				weight_leptonSF_EL_SF_ID_DOWN_branch->GetEntry(index);
			} else { 
				printf("branch weight_leptonSF_EL_SF_ID_DOWN_branch does not exist!\n");
				exit(1);
			}
			weight_leptonSF_EL_SF_ID_DOWN_isLoaded = true;
		}
		return weight_leptonSF_EL_SF_ID_DOWN_;
	}
	const float &aa::weight_leptonSF_EL_SF_Isol_UP()
	{
		if (not weight_leptonSF_EL_SF_Isol_UP_isLoaded) {
			if (weight_leptonSF_EL_SF_Isol_UP_branch != 0) {
				weight_leptonSF_EL_SF_Isol_UP_branch->GetEntry(index);
			} else { 
				printf("branch weight_leptonSF_EL_SF_Isol_UP_branch does not exist!\n");
				exit(1);
			}
			weight_leptonSF_EL_SF_Isol_UP_isLoaded = true;
		}
		return weight_leptonSF_EL_SF_Isol_UP_;
	}
	const float &aa::weight_leptonSF_EL_SF_Isol_DOWN()
	{
		if (not weight_leptonSF_EL_SF_Isol_DOWN_isLoaded) {
			if (weight_leptonSF_EL_SF_Isol_DOWN_branch != 0) {
				weight_leptonSF_EL_SF_Isol_DOWN_branch->GetEntry(index);
			} else { 
				printf("branch weight_leptonSF_EL_SF_Isol_DOWN_branch does not exist!\n");
				exit(1);
			}
			weight_leptonSF_EL_SF_Isol_DOWN_isLoaded = true;
		}
		return weight_leptonSF_EL_SF_Isol_DOWN_;
	}
	const float &aa::weight_leptonSF_MU_SF_Trigger_STAT_UP()
	{
		if (not weight_leptonSF_MU_SF_Trigger_STAT_UP_isLoaded) {
			if (weight_leptonSF_MU_SF_Trigger_STAT_UP_branch != 0) {
				weight_leptonSF_MU_SF_Trigger_STAT_UP_branch->GetEntry(index);
			} else { 
				printf("branch weight_leptonSF_MU_SF_Trigger_STAT_UP_branch does not exist!\n");
				exit(1);
			}
			weight_leptonSF_MU_SF_Trigger_STAT_UP_isLoaded = true;
		}
		return weight_leptonSF_MU_SF_Trigger_STAT_UP_;
	}
	const float &aa::weight_leptonSF_MU_SF_Trigger_STAT_DOWN()
	{
		if (not weight_leptonSF_MU_SF_Trigger_STAT_DOWN_isLoaded) {
			if (weight_leptonSF_MU_SF_Trigger_STAT_DOWN_branch != 0) {
				weight_leptonSF_MU_SF_Trigger_STAT_DOWN_branch->GetEntry(index);
			} else { 
				printf("branch weight_leptonSF_MU_SF_Trigger_STAT_DOWN_branch does not exist!\n");
				exit(1);
			}
			weight_leptonSF_MU_SF_Trigger_STAT_DOWN_isLoaded = true;
		}
		return weight_leptonSF_MU_SF_Trigger_STAT_DOWN_;
	}
	const float &aa::weight_leptonSF_MU_SF_Trigger_SYST_UP()
	{
		if (not weight_leptonSF_MU_SF_Trigger_SYST_UP_isLoaded) {
			if (weight_leptonSF_MU_SF_Trigger_SYST_UP_branch != 0) {
				weight_leptonSF_MU_SF_Trigger_SYST_UP_branch->GetEntry(index);
			} else { 
				printf("branch weight_leptonSF_MU_SF_Trigger_SYST_UP_branch does not exist!\n");
				exit(1);
			}
			weight_leptonSF_MU_SF_Trigger_SYST_UP_isLoaded = true;
		}
		return weight_leptonSF_MU_SF_Trigger_SYST_UP_;
	}
	const float &aa::weight_leptonSF_MU_SF_Trigger_SYST_DOWN()
	{
		if (not weight_leptonSF_MU_SF_Trigger_SYST_DOWN_isLoaded) {
			if (weight_leptonSF_MU_SF_Trigger_SYST_DOWN_branch != 0) {
				weight_leptonSF_MU_SF_Trigger_SYST_DOWN_branch->GetEntry(index);
			} else { 
				printf("branch weight_leptonSF_MU_SF_Trigger_SYST_DOWN_branch does not exist!\n");
				exit(1);
			}
			weight_leptonSF_MU_SF_Trigger_SYST_DOWN_isLoaded = true;
		}
		return weight_leptonSF_MU_SF_Trigger_SYST_DOWN_;
	}
	const float &aa::weight_leptonSF_MU_SF_ID_STAT_UP()
	{
		if (not weight_leptonSF_MU_SF_ID_STAT_UP_isLoaded) {
			if (weight_leptonSF_MU_SF_ID_STAT_UP_branch != 0) {
				weight_leptonSF_MU_SF_ID_STAT_UP_branch->GetEntry(index);
			} else { 
				printf("branch weight_leptonSF_MU_SF_ID_STAT_UP_branch does not exist!\n");
				exit(1);
			}
			weight_leptonSF_MU_SF_ID_STAT_UP_isLoaded = true;
		}
		return weight_leptonSF_MU_SF_ID_STAT_UP_;
	}
	const float &aa::weight_leptonSF_MU_SF_ID_STAT_DOWN()
	{
		if (not weight_leptonSF_MU_SF_ID_STAT_DOWN_isLoaded) {
			if (weight_leptonSF_MU_SF_ID_STAT_DOWN_branch != 0) {
				weight_leptonSF_MU_SF_ID_STAT_DOWN_branch->GetEntry(index);
			} else { 
				printf("branch weight_leptonSF_MU_SF_ID_STAT_DOWN_branch does not exist!\n");
				exit(1);
			}
			weight_leptonSF_MU_SF_ID_STAT_DOWN_isLoaded = true;
		}
		return weight_leptonSF_MU_SF_ID_STAT_DOWN_;
	}
	const float &aa::weight_leptonSF_MU_SF_ID_SYST_UP()
	{
		if (not weight_leptonSF_MU_SF_ID_SYST_UP_isLoaded) {
			if (weight_leptonSF_MU_SF_ID_SYST_UP_branch != 0) {
				weight_leptonSF_MU_SF_ID_SYST_UP_branch->GetEntry(index);
			} else { 
				printf("branch weight_leptonSF_MU_SF_ID_SYST_UP_branch does not exist!\n");
				exit(1);
			}
			weight_leptonSF_MU_SF_ID_SYST_UP_isLoaded = true;
		}
		return weight_leptonSF_MU_SF_ID_SYST_UP_;
	}
	const float &aa::weight_leptonSF_MU_SF_ID_SYST_DOWN()
	{
		if (not weight_leptonSF_MU_SF_ID_SYST_DOWN_isLoaded) {
			if (weight_leptonSF_MU_SF_ID_SYST_DOWN_branch != 0) {
				weight_leptonSF_MU_SF_ID_SYST_DOWN_branch->GetEntry(index);
			} else { 
				printf("branch weight_leptonSF_MU_SF_ID_SYST_DOWN_branch does not exist!\n");
				exit(1);
			}
			weight_leptonSF_MU_SF_ID_SYST_DOWN_isLoaded = true;
		}
		return weight_leptonSF_MU_SF_ID_SYST_DOWN_;
	}
	const float &aa::weight_leptonSF_MU_SF_Isol_UP()
	{
		if (not weight_leptonSF_MU_SF_Isol_UP_isLoaded) {
			if (weight_leptonSF_MU_SF_Isol_UP_branch != 0) {
				weight_leptonSF_MU_SF_Isol_UP_branch->GetEntry(index);
			} else { 
				printf("branch weight_leptonSF_MU_SF_Isol_UP_branch does not exist!\n");
				exit(1);
			}
			weight_leptonSF_MU_SF_Isol_UP_isLoaded = true;
		}
		return weight_leptonSF_MU_SF_Isol_UP_;
	}
	const float &aa::weight_leptonSF_MU_SF_Isol_DOWN()
	{
		if (not weight_leptonSF_MU_SF_Isol_DOWN_isLoaded) {
			if (weight_leptonSF_MU_SF_Isol_DOWN_branch != 0) {
				weight_leptonSF_MU_SF_Isol_DOWN_branch->GetEntry(index);
			} else { 
				printf("branch weight_leptonSF_MU_SF_Isol_DOWN_branch does not exist!\n");
				exit(1);
			}
			weight_leptonSF_MU_SF_Isol_DOWN_isLoaded = true;
		}
		return weight_leptonSF_MU_SF_Isol_DOWN_;
	}
	const float &aa::weight_indiv_SF_EL_Trigger()
	{
		if (not weight_indiv_SF_EL_Trigger_isLoaded) {
			if (weight_indiv_SF_EL_Trigger_branch != 0) {
				weight_indiv_SF_EL_Trigger_branch->GetEntry(index);
			} else { 
				printf("branch weight_indiv_SF_EL_Trigger_branch does not exist!\n");
				exit(1);
			}
			weight_indiv_SF_EL_Trigger_isLoaded = true;
		}
		return weight_indiv_SF_EL_Trigger_;
	}
	const float &aa::weight_indiv_SF_EL_Trigger_UP()
	{
		if (not weight_indiv_SF_EL_Trigger_UP_isLoaded) {
			if (weight_indiv_SF_EL_Trigger_UP_branch != 0) {
				weight_indiv_SF_EL_Trigger_UP_branch->GetEntry(index);
			} else { 
				printf("branch weight_indiv_SF_EL_Trigger_UP_branch does not exist!\n");
				exit(1);
			}
			weight_indiv_SF_EL_Trigger_UP_isLoaded = true;
		}
		return weight_indiv_SF_EL_Trigger_UP_;
	}
	const float &aa::weight_indiv_SF_EL_Trigger_DOWN()
	{
		if (not weight_indiv_SF_EL_Trigger_DOWN_isLoaded) {
			if (weight_indiv_SF_EL_Trigger_DOWN_branch != 0) {
				weight_indiv_SF_EL_Trigger_DOWN_branch->GetEntry(index);
			} else { 
				printf("branch weight_indiv_SF_EL_Trigger_DOWN_branch does not exist!\n");
				exit(1);
			}
			weight_indiv_SF_EL_Trigger_DOWN_isLoaded = true;
		}
		return weight_indiv_SF_EL_Trigger_DOWN_;
	}
	const float &aa::weight_indiv_SF_EL_Reco()
	{
		if (not weight_indiv_SF_EL_Reco_isLoaded) {
			if (weight_indiv_SF_EL_Reco_branch != 0) {
				weight_indiv_SF_EL_Reco_branch->GetEntry(index);
			} else { 
				printf("branch weight_indiv_SF_EL_Reco_branch does not exist!\n");
				exit(1);
			}
			weight_indiv_SF_EL_Reco_isLoaded = true;
		}
		return weight_indiv_SF_EL_Reco_;
	}
	const float &aa::weight_indiv_SF_EL_Reco_UP()
	{
		if (not weight_indiv_SF_EL_Reco_UP_isLoaded) {
			if (weight_indiv_SF_EL_Reco_UP_branch != 0) {
				weight_indiv_SF_EL_Reco_UP_branch->GetEntry(index);
			} else { 
				printf("branch weight_indiv_SF_EL_Reco_UP_branch does not exist!\n");
				exit(1);
			}
			weight_indiv_SF_EL_Reco_UP_isLoaded = true;
		}
		return weight_indiv_SF_EL_Reco_UP_;
	}
	const float &aa::weight_indiv_SF_EL_Reco_DOWN()
	{
		if (not weight_indiv_SF_EL_Reco_DOWN_isLoaded) {
			if (weight_indiv_SF_EL_Reco_DOWN_branch != 0) {
				weight_indiv_SF_EL_Reco_DOWN_branch->GetEntry(index);
			} else { 
				printf("branch weight_indiv_SF_EL_Reco_DOWN_branch does not exist!\n");
				exit(1);
			}
			weight_indiv_SF_EL_Reco_DOWN_isLoaded = true;
		}
		return weight_indiv_SF_EL_Reco_DOWN_;
	}
	const float &aa::weight_indiv_SF_EL_ID()
	{
		if (not weight_indiv_SF_EL_ID_isLoaded) {
			if (weight_indiv_SF_EL_ID_branch != 0) {
				weight_indiv_SF_EL_ID_branch->GetEntry(index);
			} else { 
				printf("branch weight_indiv_SF_EL_ID_branch does not exist!\n");
				exit(1);
			}
			weight_indiv_SF_EL_ID_isLoaded = true;
		}
		return weight_indiv_SF_EL_ID_;
	}
	const float &aa::weight_indiv_SF_EL_ID_UP()
	{
		if (not weight_indiv_SF_EL_ID_UP_isLoaded) {
			if (weight_indiv_SF_EL_ID_UP_branch != 0) {
				weight_indiv_SF_EL_ID_UP_branch->GetEntry(index);
			} else { 
				printf("branch weight_indiv_SF_EL_ID_UP_branch does not exist!\n");
				exit(1);
			}
			weight_indiv_SF_EL_ID_UP_isLoaded = true;
		}
		return weight_indiv_SF_EL_ID_UP_;
	}
	const float &aa::weight_indiv_SF_EL_ID_DOWN()
	{
		if (not weight_indiv_SF_EL_ID_DOWN_isLoaded) {
			if (weight_indiv_SF_EL_ID_DOWN_branch != 0) {
				weight_indiv_SF_EL_ID_DOWN_branch->GetEntry(index);
			} else { 
				printf("branch weight_indiv_SF_EL_ID_DOWN_branch does not exist!\n");
				exit(1);
			}
			weight_indiv_SF_EL_ID_DOWN_isLoaded = true;
		}
		return weight_indiv_SF_EL_ID_DOWN_;
	}
	const float &aa::weight_indiv_SF_EL_Isol()
	{
		if (not weight_indiv_SF_EL_Isol_isLoaded) {
			if (weight_indiv_SF_EL_Isol_branch != 0) {
				weight_indiv_SF_EL_Isol_branch->GetEntry(index);
			} else { 
				printf("branch weight_indiv_SF_EL_Isol_branch does not exist!\n");
				exit(1);
			}
			weight_indiv_SF_EL_Isol_isLoaded = true;
		}
		return weight_indiv_SF_EL_Isol_;
	}
	const float &aa::weight_indiv_SF_EL_Isol_UP()
	{
		if (not weight_indiv_SF_EL_Isol_UP_isLoaded) {
			if (weight_indiv_SF_EL_Isol_UP_branch != 0) {
				weight_indiv_SF_EL_Isol_UP_branch->GetEntry(index);
			} else { 
				printf("branch weight_indiv_SF_EL_Isol_UP_branch does not exist!\n");
				exit(1);
			}
			weight_indiv_SF_EL_Isol_UP_isLoaded = true;
		}
		return weight_indiv_SF_EL_Isol_UP_;
	}
	const float &aa::weight_indiv_SF_EL_Isol_DOWN()
	{
		if (not weight_indiv_SF_EL_Isol_DOWN_isLoaded) {
			if (weight_indiv_SF_EL_Isol_DOWN_branch != 0) {
				weight_indiv_SF_EL_Isol_DOWN_branch->GetEntry(index);
			} else { 
				printf("branch weight_indiv_SF_EL_Isol_DOWN_branch does not exist!\n");
				exit(1);
			}
			weight_indiv_SF_EL_Isol_DOWN_isLoaded = true;
		}
		return weight_indiv_SF_EL_Isol_DOWN_;
	}
	const float &aa::weight_indiv_SF_MU_Trigger()
	{
		if (not weight_indiv_SF_MU_Trigger_isLoaded) {
			if (weight_indiv_SF_MU_Trigger_branch != 0) {
				weight_indiv_SF_MU_Trigger_branch->GetEntry(index);
			} else { 
				printf("branch weight_indiv_SF_MU_Trigger_branch does not exist!\n");
				exit(1);
			}
			weight_indiv_SF_MU_Trigger_isLoaded = true;
		}
		return weight_indiv_SF_MU_Trigger_;
	}
	const float &aa::weight_indiv_SF_MU_Trigger_STAT_UP()
	{
		if (not weight_indiv_SF_MU_Trigger_STAT_UP_isLoaded) {
			if (weight_indiv_SF_MU_Trigger_STAT_UP_branch != 0) {
				weight_indiv_SF_MU_Trigger_STAT_UP_branch->GetEntry(index);
			} else { 
				printf("branch weight_indiv_SF_MU_Trigger_STAT_UP_branch does not exist!\n");
				exit(1);
			}
			weight_indiv_SF_MU_Trigger_STAT_UP_isLoaded = true;
		}
		return weight_indiv_SF_MU_Trigger_STAT_UP_;
	}
	const float &aa::weight_indiv_SF_MU_Trigger_STAT_DOWN()
	{
		if (not weight_indiv_SF_MU_Trigger_STAT_DOWN_isLoaded) {
			if (weight_indiv_SF_MU_Trigger_STAT_DOWN_branch != 0) {
				weight_indiv_SF_MU_Trigger_STAT_DOWN_branch->GetEntry(index);
			} else { 
				printf("branch weight_indiv_SF_MU_Trigger_STAT_DOWN_branch does not exist!\n");
				exit(1);
			}
			weight_indiv_SF_MU_Trigger_STAT_DOWN_isLoaded = true;
		}
		return weight_indiv_SF_MU_Trigger_STAT_DOWN_;
	}
	const float &aa::weight_indiv_SF_MU_Trigger_SYST_UP()
	{
		if (not weight_indiv_SF_MU_Trigger_SYST_UP_isLoaded) {
			if (weight_indiv_SF_MU_Trigger_SYST_UP_branch != 0) {
				weight_indiv_SF_MU_Trigger_SYST_UP_branch->GetEntry(index);
			} else { 
				printf("branch weight_indiv_SF_MU_Trigger_SYST_UP_branch does not exist!\n");
				exit(1);
			}
			weight_indiv_SF_MU_Trigger_SYST_UP_isLoaded = true;
		}
		return weight_indiv_SF_MU_Trigger_SYST_UP_;
	}
	const float &aa::weight_indiv_SF_MU_Trigger_SYST_DOWN()
	{
		if (not weight_indiv_SF_MU_Trigger_SYST_DOWN_isLoaded) {
			if (weight_indiv_SF_MU_Trigger_SYST_DOWN_branch != 0) {
				weight_indiv_SF_MU_Trigger_SYST_DOWN_branch->GetEntry(index);
			} else { 
				printf("branch weight_indiv_SF_MU_Trigger_SYST_DOWN_branch does not exist!\n");
				exit(1);
			}
			weight_indiv_SF_MU_Trigger_SYST_DOWN_isLoaded = true;
		}
		return weight_indiv_SF_MU_Trigger_SYST_DOWN_;
	}
	const float &aa::weight_indiv_SF_MU_ID()
	{
		if (not weight_indiv_SF_MU_ID_isLoaded) {
			if (weight_indiv_SF_MU_ID_branch != 0) {
				weight_indiv_SF_MU_ID_branch->GetEntry(index);
			} else { 
				printf("branch weight_indiv_SF_MU_ID_branch does not exist!\n");
				exit(1);
			}
			weight_indiv_SF_MU_ID_isLoaded = true;
		}
		return weight_indiv_SF_MU_ID_;
	}
	const float &aa::weight_indiv_SF_MU_ID_STAT_UP()
	{
		if (not weight_indiv_SF_MU_ID_STAT_UP_isLoaded) {
			if (weight_indiv_SF_MU_ID_STAT_UP_branch != 0) {
				weight_indiv_SF_MU_ID_STAT_UP_branch->GetEntry(index);
			} else { 
				printf("branch weight_indiv_SF_MU_ID_STAT_UP_branch does not exist!\n");
				exit(1);
			}
			weight_indiv_SF_MU_ID_STAT_UP_isLoaded = true;
		}
		return weight_indiv_SF_MU_ID_STAT_UP_;
	}
	const float &aa::weight_indiv_SF_MU_ID_STAT_DOWN()
	{
		if (not weight_indiv_SF_MU_ID_STAT_DOWN_isLoaded) {
			if (weight_indiv_SF_MU_ID_STAT_DOWN_branch != 0) {
				weight_indiv_SF_MU_ID_STAT_DOWN_branch->GetEntry(index);
			} else { 
				printf("branch weight_indiv_SF_MU_ID_STAT_DOWN_branch does not exist!\n");
				exit(1);
			}
			weight_indiv_SF_MU_ID_STAT_DOWN_isLoaded = true;
		}
		return weight_indiv_SF_MU_ID_STAT_DOWN_;
	}
	const float &aa::weight_indiv_SF_MU_ID_SYST_UP()
	{
		if (not weight_indiv_SF_MU_ID_SYST_UP_isLoaded) {
			if (weight_indiv_SF_MU_ID_SYST_UP_branch != 0) {
				weight_indiv_SF_MU_ID_SYST_UP_branch->GetEntry(index);
			} else { 
				printf("branch weight_indiv_SF_MU_ID_SYST_UP_branch does not exist!\n");
				exit(1);
			}
			weight_indiv_SF_MU_ID_SYST_UP_isLoaded = true;
		}
		return weight_indiv_SF_MU_ID_SYST_UP_;
	}
	const float &aa::weight_indiv_SF_MU_ID_SYST_DOWN()
	{
		if (not weight_indiv_SF_MU_ID_SYST_DOWN_isLoaded) {
			if (weight_indiv_SF_MU_ID_SYST_DOWN_branch != 0) {
				weight_indiv_SF_MU_ID_SYST_DOWN_branch->GetEntry(index);
			} else { 
				printf("branch weight_indiv_SF_MU_ID_SYST_DOWN_branch does not exist!\n");
				exit(1);
			}
			weight_indiv_SF_MU_ID_SYST_DOWN_isLoaded = true;
		}
		return weight_indiv_SF_MU_ID_SYST_DOWN_;
	}
	const float &aa::weight_indiv_SF_MU_Isol()
	{
		if (not weight_indiv_SF_MU_Isol_isLoaded) {
			if (weight_indiv_SF_MU_Isol_branch != 0) {
				weight_indiv_SF_MU_Isol_branch->GetEntry(index);
			} else { 
				printf("branch weight_indiv_SF_MU_Isol_branch does not exist!\n");
				exit(1);
			}
			weight_indiv_SF_MU_Isol_isLoaded = true;
		}
		return weight_indiv_SF_MU_Isol_;
	}
	const float &aa::weight_indiv_SF_MU_Isol_UP()
	{
		if (not weight_indiv_SF_MU_Isol_UP_isLoaded) {
			if (weight_indiv_SF_MU_Isol_UP_branch != 0) {
				weight_indiv_SF_MU_Isol_UP_branch->GetEntry(index);
			} else { 
				printf("branch weight_indiv_SF_MU_Isol_UP_branch does not exist!\n");
				exit(1);
			}
			weight_indiv_SF_MU_Isol_UP_isLoaded = true;
		}
		return weight_indiv_SF_MU_Isol_UP_;
	}
	const float &aa::weight_indiv_SF_MU_Isol_DOWN()
	{
		if (not weight_indiv_SF_MU_Isol_DOWN_isLoaded) {
			if (weight_indiv_SF_MU_Isol_DOWN_branch != 0) {
				weight_indiv_SF_MU_Isol_DOWN_branch->GetEntry(index);
			} else { 
				printf("branch weight_indiv_SF_MU_Isol_DOWN_branch does not exist!\n");
				exit(1);
			}
			weight_indiv_SF_MU_Isol_DOWN_isLoaded = true;
		}
		return weight_indiv_SF_MU_Isol_DOWN_;
	}
	const vector<float> &aa::weight_bTagSF_eigenvars_B_up()
	{
		if (not weight_bTagSF_eigenvars_B_up_isLoaded) {
			if (weight_bTagSF_eigenvars_B_up_branch != 0) {
				weight_bTagSF_eigenvars_B_up_branch->GetEntry(index);
			} else { 
				printf("branch weight_bTagSF_eigenvars_B_up_branch does not exist!\n");
				exit(1);
			}
			weight_bTagSF_eigenvars_B_up_isLoaded = true;
		}
		return *weight_bTagSF_eigenvars_B_up_;
	}
	const vector<float> &aa::weight_bTagSF_eigenvars_C_up()
	{
		if (not weight_bTagSF_eigenvars_C_up_isLoaded) {
			if (weight_bTagSF_eigenvars_C_up_branch != 0) {
				weight_bTagSF_eigenvars_C_up_branch->GetEntry(index);
			} else { 
				printf("branch weight_bTagSF_eigenvars_C_up_branch does not exist!\n");
				exit(1);
			}
			weight_bTagSF_eigenvars_C_up_isLoaded = true;
		}
		return *weight_bTagSF_eigenvars_C_up_;
	}
	const vector<float> &aa::weight_bTagSF_eigenvars_Light_up()
	{
		if (not weight_bTagSF_eigenvars_Light_up_isLoaded) {
			if (weight_bTagSF_eigenvars_Light_up_branch != 0) {
				weight_bTagSF_eigenvars_Light_up_branch->GetEntry(index);
			} else { 
				printf("branch weight_bTagSF_eigenvars_Light_up_branch does not exist!\n");
				exit(1);
			}
			weight_bTagSF_eigenvars_Light_up_isLoaded = true;
		}
		return *weight_bTagSF_eigenvars_Light_up_;
	}
	const vector<float> &aa::weight_bTagSF_eigenvars_B_down()
	{
		if (not weight_bTagSF_eigenvars_B_down_isLoaded) {
			if (weight_bTagSF_eigenvars_B_down_branch != 0) {
				weight_bTagSF_eigenvars_B_down_branch->GetEntry(index);
			} else { 
				printf("branch weight_bTagSF_eigenvars_B_down_branch does not exist!\n");
				exit(1);
			}
			weight_bTagSF_eigenvars_B_down_isLoaded = true;
		}
		return *weight_bTagSF_eigenvars_B_down_;
	}
	const vector<float> &aa::weight_bTagSF_eigenvars_C_down()
	{
		if (not weight_bTagSF_eigenvars_C_down_isLoaded) {
			if (weight_bTagSF_eigenvars_C_down_branch != 0) {
				weight_bTagSF_eigenvars_C_down_branch->GetEntry(index);
			} else { 
				printf("branch weight_bTagSF_eigenvars_C_down_branch does not exist!\n");
				exit(1);
			}
			weight_bTagSF_eigenvars_C_down_isLoaded = true;
		}
		return *weight_bTagSF_eigenvars_C_down_;
	}
	const vector<float> &aa::weight_bTagSF_eigenvars_Light_down()
	{
		if (not weight_bTagSF_eigenvars_Light_down_isLoaded) {
			if (weight_bTagSF_eigenvars_Light_down_branch != 0) {
				weight_bTagSF_eigenvars_Light_down_branch->GetEntry(index);
			} else { 
				printf("branch weight_bTagSF_eigenvars_Light_down_branch does not exist!\n");
				exit(1);
			}
			weight_bTagSF_eigenvars_Light_down_isLoaded = true;
		}
		return *weight_bTagSF_eigenvars_Light_down_;
	}
	const float &aa::weight_bTagSF_extrapolation_up()
	{
		if (not weight_bTagSF_extrapolation_up_isLoaded) {
			if (weight_bTagSF_extrapolation_up_branch != 0) {
				weight_bTagSF_extrapolation_up_branch->GetEntry(index);
			} else { 
				printf("branch weight_bTagSF_extrapolation_up_branch does not exist!\n");
				exit(1);
			}
			weight_bTagSF_extrapolation_up_isLoaded = true;
		}
		return weight_bTagSF_extrapolation_up_;
	}
	const float &aa::weight_bTagSF_extrapolation_down()
	{
		if (not weight_bTagSF_extrapolation_down_isLoaded) {
			if (weight_bTagSF_extrapolation_down_branch != 0) {
				weight_bTagSF_extrapolation_down_branch->GetEntry(index);
			} else { 
				printf("branch weight_bTagSF_extrapolation_down_branch does not exist!\n");
				exit(1);
			}
			weight_bTagSF_extrapolation_down_isLoaded = true;
		}
		return weight_bTagSF_extrapolation_down_;
	}
	const float &aa::weight_bTagSF_extrapolation_from_charm_up()
	{
		if (not weight_bTagSF_extrapolation_from_charm_up_isLoaded) {
			if (weight_bTagSF_extrapolation_from_charm_up_branch != 0) {
				weight_bTagSF_extrapolation_from_charm_up_branch->GetEntry(index);
			} else { 
				printf("branch weight_bTagSF_extrapolation_from_charm_up_branch does not exist!\n");
				exit(1);
			}
			weight_bTagSF_extrapolation_from_charm_up_isLoaded = true;
		}
		return weight_bTagSF_extrapolation_from_charm_up_;
	}
	const float &aa::weight_bTagSF_extrapolation_from_charm_down()
	{
		if (not weight_bTagSF_extrapolation_from_charm_down_isLoaded) {
			if (weight_bTagSF_extrapolation_from_charm_down_branch != 0) {
				weight_bTagSF_extrapolation_from_charm_down_branch->GetEntry(index);
			} else { 
				printf("branch weight_bTagSF_extrapolation_from_charm_down_branch does not exist!\n");
				exit(1);
			}
			weight_bTagSF_extrapolation_from_charm_down_isLoaded = true;
		}
		return weight_bTagSF_extrapolation_from_charm_down_;
	}
	const unsigned int &aa::eventNumber()
	{
		if (not eventNumber_isLoaded) {
			if (eventNumber_branch != 0) {
				eventNumber_branch->GetEntry(index);
			} else { 
				printf("branch eventNumber_branch does not exist!\n");
				exit(1);
			}
			eventNumber_isLoaded = true;
		}
		return eventNumber_;
	}
	const unsigned int &aa::runNumber()
	{
		if (not runNumber_isLoaded) {
			if (runNumber_branch != 0) {
				runNumber_branch->GetEntry(index);
			} else { 
				printf("branch runNumber_branch does not exist!\n");
				exit(1);
			}
			runNumber_isLoaded = true;
		}
		return runNumber_;
	}
	const unsigned int &aa::mcChannelNumber()
	{
		if (not mcChannelNumber_isLoaded) {
			if (mcChannelNumber_branch != 0) {
				mcChannelNumber_branch->GetEntry(index);
			} else { 
				printf("branch mcChannelNumber_branch does not exist!\n");
				exit(1);
			}
			mcChannelNumber_isLoaded = true;
		}
		return mcChannelNumber_;
	}
	const float &aa::mu()
	{
		if (not mu_isLoaded) {
			if (mu_branch != 0) {
				mu_branch->GetEntry(index);
			} else { 
				printf("branch mu_branch does not exist!\n");
				exit(1);
			}
			mu_isLoaded = true;
		}
		return mu_;
	}
	const vector<float> &aa::el_pt()
	{
		if (not el_pt_isLoaded) {
			if (el_pt_branch != 0) {
				el_pt_branch->GetEntry(index);
			} else { 
				printf("branch el_pt_branch does not exist!\n");
				exit(1);
			}
			el_pt_isLoaded = true;
		}
		return *el_pt_;
	}
	const vector<float> &aa::el_eta()
	{
		if (not el_eta_isLoaded) {
			if (el_eta_branch != 0) {
				el_eta_branch->GetEntry(index);
			} else { 
				printf("branch el_eta_branch does not exist!\n");
				exit(1);
			}
			el_eta_isLoaded = true;
		}
		return *el_eta_;
	}
	const vector<float> &aa::el_phi()
	{
		if (not el_phi_isLoaded) {
			if (el_phi_branch != 0) {
				el_phi_branch->GetEntry(index);
			} else { 
				printf("branch el_phi_branch does not exist!\n");
				exit(1);
			}
			el_phi_isLoaded = true;
		}
		return *el_phi_;
	}
	const vector<float> &aa::el_e()
	{
		if (not el_e_isLoaded) {
			if (el_e_branch != 0) {
				el_e_branch->GetEntry(index);
			} else { 
				printf("branch el_e_branch does not exist!\n");
				exit(1);
			}
			el_e_isLoaded = true;
		}
		return *el_e_;
	}
	const vector<float> &aa::el_charge()
	{
		if (not el_charge_isLoaded) {
			if (el_charge_branch != 0) {
				el_charge_branch->GetEntry(index);
			} else { 
				printf("branch el_charge_branch does not exist!\n");
				exit(1);
			}
			el_charge_isLoaded = true;
		}
		return *el_charge_;
	}
	const vector<float> &aa::el_topoetcone20()
	{
		if (not el_topoetcone20_isLoaded) {
			if (el_topoetcone20_branch != 0) {
				el_topoetcone20_branch->GetEntry(index);
			} else { 
				printf("branch el_topoetcone20_branch does not exist!\n");
				exit(1);
			}
			el_topoetcone20_isLoaded = true;
		}
		return *el_topoetcone20_;
	}
	const vector<float> &aa::el_ptvarcone20()
	{
		if (not el_ptvarcone20_isLoaded) {
			if (el_ptvarcone20_branch != 0) {
				el_ptvarcone20_branch->GetEntry(index);
			} else { 
				printf("branch el_ptvarcone20_branch does not exist!\n");
				exit(1);
			}
			el_ptvarcone20_isLoaded = true;
		}
		return *el_ptvarcone20_;
	}
	const vector<float> &aa::mu_pt()
	{
		if (not mu_pt_isLoaded) {
			if (mu_pt_branch != 0) {
				mu_pt_branch->GetEntry(index);
			} else { 
				printf("branch mu_pt_branch does not exist!\n");
				exit(1);
			}
			mu_pt_isLoaded = true;
		}
		return *mu_pt_;
	}
	const vector<float> &aa::mu_eta()
	{
		if (not mu_eta_isLoaded) {
			if (mu_eta_branch != 0) {
				mu_eta_branch->GetEntry(index);
			} else { 
				printf("branch mu_eta_branch does not exist!\n");
				exit(1);
			}
			mu_eta_isLoaded = true;
		}
		return *mu_eta_;
	}
	const vector<float> &aa::mu_phi()
	{
		if (not mu_phi_isLoaded) {
			if (mu_phi_branch != 0) {
				mu_phi_branch->GetEntry(index);
			} else { 
				printf("branch mu_phi_branch does not exist!\n");
				exit(1);
			}
			mu_phi_isLoaded = true;
		}
		return *mu_phi_;
	}
	const vector<float> &aa::mu_e()
	{
		if (not mu_e_isLoaded) {
			if (mu_e_branch != 0) {
				mu_e_branch->GetEntry(index);
			} else { 
				printf("branch mu_e_branch does not exist!\n");
				exit(1);
			}
			mu_e_isLoaded = true;
		}
		return *mu_e_;
	}
	const vector<float> &aa::mu_charge()
	{
		if (not mu_charge_isLoaded) {
			if (mu_charge_branch != 0) {
				mu_charge_branch->GetEntry(index);
			} else { 
				printf("branch mu_charge_branch does not exist!\n");
				exit(1);
			}
			mu_charge_isLoaded = true;
		}
		return *mu_charge_;
	}
	const vector<float> &aa::mu_topoetcone20()
	{
		if (not mu_topoetcone20_isLoaded) {
			if (mu_topoetcone20_branch != 0) {
				mu_topoetcone20_branch->GetEntry(index);
			} else { 
				printf("branch mu_topoetcone20_branch does not exist!\n");
				exit(1);
			}
			mu_topoetcone20_isLoaded = true;
		}
		return *mu_topoetcone20_;
	}
	const vector<float> &aa::mu_ptvarcone30()
	{
		if (not mu_ptvarcone30_isLoaded) {
			if (mu_ptvarcone30_branch != 0) {
				mu_ptvarcone30_branch->GetEntry(index);
			} else { 
				printf("branch mu_ptvarcone30_branch does not exist!\n");
				exit(1);
			}
			mu_ptvarcone30_isLoaded = true;
		}
		return *mu_ptvarcone30_;
	}
	const vector<float> &aa::jet_pt()
	{
		if (not jet_pt_isLoaded) {
			if (jet_pt_branch != 0) {
				jet_pt_branch->GetEntry(index);
			} else { 
				printf("branch jet_pt_branch does not exist!\n");
				exit(1);
			}
			jet_pt_isLoaded = true;
		}
		return *jet_pt_;
	}
	const vector<float> &aa::jet_eta()
	{
		if (not jet_eta_isLoaded) {
			if (jet_eta_branch != 0) {
				jet_eta_branch->GetEntry(index);
			} else { 
				printf("branch jet_eta_branch does not exist!\n");
				exit(1);
			}
			jet_eta_isLoaded = true;
		}
		return *jet_eta_;
	}
	const vector<float> &aa::jet_phi()
	{
		if (not jet_phi_isLoaded) {
			if (jet_phi_branch != 0) {
				jet_phi_branch->GetEntry(index);
			} else { 
				printf("branch jet_phi_branch does not exist!\n");
				exit(1);
			}
			jet_phi_isLoaded = true;
		}
		return *jet_phi_;
	}
	const vector<float> &aa::jet_e()
	{
		if (not jet_e_isLoaded) {
			if (jet_e_branch != 0) {
				jet_e_branch->GetEntry(index);
			} else { 
				printf("branch jet_e_branch does not exist!\n");
				exit(1);
			}
			jet_e_isLoaded = true;
		}
		return *jet_e_;
	}
	const vector<float> &aa::jet_mv1()
	{
		if (not jet_mv1_isLoaded) {
			if (jet_mv1_branch != 0) {
				jet_mv1_branch->GetEntry(index);
			} else { 
				printf("branch jet_mv1_branch does not exist!\n");
				exit(1);
			}
			jet_mv1_isLoaded = true;
		}
		return *jet_mv1_;
	}
	const vector<float> &aa::jet_mvb()
	{
		if (not jet_mvb_isLoaded) {
			if (jet_mvb_branch != 0) {
				jet_mvb_branch->GetEntry(index);
			} else { 
				printf("branch jet_mvb_branch does not exist!\n");
				exit(1);
			}
			jet_mvb_isLoaded = true;
		}
		return *jet_mvb_;
	}
	const vector<float> &aa::jet_mv1c()
	{
		if (not jet_mv1c_isLoaded) {
			if (jet_mv1c_branch != 0) {
				jet_mv1c_branch->GetEntry(index);
			} else { 
				printf("branch jet_mv1c_branch does not exist!\n");
				exit(1);
			}
			jet_mv1c_isLoaded = true;
		}
		return *jet_mv1c_;
	}
	const vector<float> &aa::jet_mv2c00()
	{
		if (not jet_mv2c00_isLoaded) {
			if (jet_mv2c00_branch != 0) {
				jet_mv2c00_branch->GetEntry(index);
			} else { 
				printf("branch jet_mv2c00_branch does not exist!\n");
				exit(1);
			}
			jet_mv2c00_isLoaded = true;
		}
		return *jet_mv2c00_;
	}
	const vector<float> &aa::jet_mv2c10()
	{
		if (not jet_mv2c10_isLoaded) {
			if (jet_mv2c10_branch != 0) {
				jet_mv2c10_branch->GetEntry(index);
			} else { 
				printf("branch jet_mv2c10_branch does not exist!\n");
				exit(1);
			}
			jet_mv2c10_isLoaded = true;
		}
		return *jet_mv2c10_;
	}
	const vector<float> &aa::jet_mv2c20()
	{
		if (not jet_mv2c20_isLoaded) {
			if (jet_mv2c20_branch != 0) {
				jet_mv2c20_branch->GetEntry(index);
			} else { 
				printf("branch jet_mv2c20_branch does not exist!\n");
				exit(1);
			}
			jet_mv2c20_isLoaded = true;
		}
		return *jet_mv2c20_;
	}
	const vector<float> &aa::jet_ip3dsv1()
	{
		if (not jet_ip3dsv1_isLoaded) {
			if (jet_ip3dsv1_branch != 0) {
				jet_ip3dsv1_branch->GetEntry(index);
			} else { 
				printf("branch jet_ip3dsv1_branch does not exist!\n");
				exit(1);
			}
			jet_ip3dsv1_isLoaded = true;
		}
		return *jet_ip3dsv1_;
	}
	const vector<float> &aa::jet_jvt()
	{
		if (not jet_jvt_isLoaded) {
			if (jet_jvt_branch != 0) {
				jet_jvt_branch->GetEntry(index);
			} else { 
				printf("branch jet_jvt_branch does not exist!\n");
				exit(1);
			}
			jet_jvt_isLoaded = true;
		}
		return *jet_jvt_;
	}
	const vector<float> &aa::ljet_pt()
	{
		if (not ljet_pt_isLoaded) {
			if (ljet_pt_branch != 0) {
				ljet_pt_branch->GetEntry(index);
			} else { 
				printf("branch ljet_pt_branch does not exist!\n");
				exit(1);
			}
			ljet_pt_isLoaded = true;
		}
		return *ljet_pt_;
	}
	const vector<float> &aa::ljet_eta()
	{
		if (not ljet_eta_isLoaded) {
			if (ljet_eta_branch != 0) {
				ljet_eta_branch->GetEntry(index);
			} else { 
				printf("branch ljet_eta_branch does not exist!\n");
				exit(1);
			}
			ljet_eta_isLoaded = true;
		}
		return *ljet_eta_;
	}
	const vector<float> &aa::ljet_phi()
	{
		if (not ljet_phi_isLoaded) {
			if (ljet_phi_branch != 0) {
				ljet_phi_branch->GetEntry(index);
			} else { 
				printf("branch ljet_phi_branch does not exist!\n");
				exit(1);
			}
			ljet_phi_isLoaded = true;
		}
		return *ljet_phi_;
	}
	const vector<float> &aa::ljet_e()
	{
		if (not ljet_e_isLoaded) {
			if (ljet_e_branch != 0) {
				ljet_e_branch->GetEntry(index);
			} else { 
				printf("branch ljet_e_branch does not exist!\n");
				exit(1);
			}
			ljet_e_isLoaded = true;
		}
		return *ljet_e_;
	}
	const vector<float> &aa::ljet_m()
	{
		if (not ljet_m_isLoaded) {
			if (ljet_m_branch != 0) {
				ljet_m_branch->GetEntry(index);
			} else { 
				printf("branch ljet_m_branch does not exist!\n");
				exit(1);
			}
			ljet_m_isLoaded = true;
		}
		return *ljet_m_;
	}
	const vector<float> &aa::ljet_sd12()
	{
		if (not ljet_sd12_isLoaded) {
			if (ljet_sd12_branch != 0) {
				ljet_sd12_branch->GetEntry(index);
			} else { 
				printf("branch ljet_sd12_branch does not exist!\n");
				exit(1);
			}
			ljet_sd12_isLoaded = true;
		}
		return *ljet_sd12_;
	}
	const float &aa::met_met()
	{
		if (not met_met_isLoaded) {
			if (met_met_branch != 0) {
				met_met_branch->GetEntry(index);
			} else { 
				printf("branch met_met_branch does not exist!\n");
				exit(1);
			}
			met_met_isLoaded = true;
		}
		return met_met_;
	}
	const float &aa::met_phi()
	{
		if (not met_phi_isLoaded) {
			if (met_phi_branch != 0) {
				met_phi_branch->GetEntry(index);
			} else { 
				printf("branch met_phi_branch does not exist!\n");
				exit(1);
			}
			met_phi_isLoaded = true;
		}
		return met_phi_;
	}
	const int &aa::sub_1b_2fj()
	{
		if (not sub_1b_2fj_isLoaded) {
			if (sub_1b_2fj_branch != 0) {
				sub_1b_2fj_branch->GetEntry(index);
			} else { 
				printf("branch sub_1b_2fj_branch does not exist!\n");
				exit(1);
			}
			sub_1b_2fj_isLoaded = true;
		}
		return sub_1b_2fj_;
	}
	const int &aa::sub_1b_3fj()
	{
		if (not sub_1b_3fj_isLoaded) {
			if (sub_1b_3fj_branch != 0) {
				sub_1b_3fj_branch->GetEntry(index);
			} else { 
				printf("branch sub_1b_3fj_branch does not exist!\n");
				exit(1);
			}
			sub_1b_3fj_isLoaded = true;
		}
		return sub_1b_3fj_;
	}
	const int &aa::sub_1b_allfj()
	{
		if (not sub_1b_allfj_isLoaded) {
			if (sub_1b_allfj_branch != 0) {
				sub_1b_allfj_branch->GetEntry(index);
			} else { 
				printf("branch sub_1b_allfj_branch does not exist!\n");
				exit(1);
			}
			sub_1b_allfj_isLoaded = true;
		}
		return sub_1b_allfj_;
	}
	const float &aa::TotalEventWeight()
	{
		if (not TotalEventWeight_isLoaded) {
			if (TotalEventWeight_branch != 0) {
				TotalEventWeight_branch->GetEntry(index);
			} else { 
				printf("branch TotalEventWeight_branch does not exist!\n");
				exit(1);
			}
			TotalEventWeight_isLoaded = true;
		}
		return TotalEventWeight_;
	}
	const float &aa::EventParticleWeight()
	{
		if (not EventParticleWeight_isLoaded) {
			if (EventParticleWeight_branch != 0) {
				EventParticleWeight_branch->GetEntry(index);
			} else { 
				printf("branch EventParticleWeight_branch does not exist!\n");
				exit(1);
			}
			EventParticleWeight_isLoaded = true;
		}
		return EventParticleWeight_;
	}
	const float &aa::ScaleFactorWeight()
	{
		if (not ScaleFactorWeight_isLoaded) {
			if (ScaleFactorWeight_branch != 0) {
				ScaleFactorWeight_branch->GetEntry(index);
			} else { 
				printf("branch ScaleFactorWeight_branch does not exist!\n");
				exit(1);
			}
			ScaleFactorWeight_isLoaded = true;
		}
		return ScaleFactorWeight_;
	}
	const float &aa::EventParameterWeight()
	{
		if (not EventParameterWeight_isLoaded) {
			if (EventParameterWeight_branch != 0) {
				EventParameterWeight_branch->GetEntry(index);
			} else { 
				printf("branch EventParameterWeight_branch does not exist!\n");
				exit(1);
			}
			EventParameterWeight_isLoaded = true;
		}
		return EventParameterWeight_;
	}
	const float &aa::HT()
	{
		if (not HT_isLoaded) {
			if (HT_branch != 0) {
				HT_branch->GetEntry(index);
			} else { 
				printf("branch HT_branch does not exist!\n");
				exit(1);
			}
			HT_isLoaded = true;
		}
		return HT_;
	}
	const float &aa::HhadT()
	{
		if (not HhadT_isLoaded) {
			if (HhadT_branch != 0) {
				HhadT_branch->GetEntry(index);
			} else { 
				printf("branch HhadT_branch does not exist!\n");
				exit(1);
			}
			HhadT_isLoaded = true;
		}
		return HhadT_;
	}
	const float &aa::HT_ratio_met()
	{
		if (not HT_ratio_met_isLoaded) {
			if (HT_ratio_met_branch != 0) {
				HT_ratio_met_branch->GetEntry(index);
			} else { 
				printf("branch HT_ratio_met_branch does not exist!\n");
				exit(1);
			}
			HT_ratio_met_isLoaded = true;
		}
		return HT_ratio_met_;
	}
	const float &aa::HT_ratio_lep()
	{
		if (not HT_ratio_lep_isLoaded) {
			if (HT_ratio_lep_branch != 0) {
				HT_ratio_lep_branch->GetEntry(index);
			} else { 
				printf("branch HT_ratio_lep_branch does not exist!\n");
				exit(1);
			}
			HT_ratio_lep_isLoaded = true;
		}
		return HT_ratio_lep_;
	}
	const float &aa::meff()
	{
		if (not meff_isLoaded) {
			if (meff_branch != 0) {
				meff_branch->GetEntry(index);
			} else { 
				printf("branch meff_branch does not exist!\n");
				exit(1);
			}
			meff_isLoaded = true;
		}
		return meff_;
	}
	const float &aa::Centrality()
	{
		if (not Centrality_isLoaded) {
			if (Centrality_branch != 0) {
				Centrality_branch->GetEntry(index);
			} else { 
				printf("branch Centrality_branch does not exist!\n");
				exit(1);
			}
			Centrality_isLoaded = true;
		}
		return Centrality_;
	}
	const float &aa::MetSignificance()
	{
		if (not MetSignificance_isLoaded) {
			if (MetSignificance_branch != 0) {
				MetSignificance_branch->GetEntry(index);
			} else { 
				printf("branch MetSignificance_branch does not exist!\n");
				exit(1);
			}
			MetSignificance_isLoaded = true;
		}
		return MetSignificance_;
	}
	const float &aa::MT2reco()
	{
		if (not MT2reco_isLoaded) {
			if (MT2reco_branch != 0) {
				MT2reco_branch->GetEntry(index);
			} else { 
				printf("branch MT2reco_branch does not exist!\n");
				exit(1);
			}
			MT2reco_isLoaded = true;
		}
		return MT2reco_;
	}
	const float &aa::MCTreco()
	{
		if (not MCTreco_isLoaded) {
			if (MCTreco_branch != 0) {
				MCTreco_branch->GetEntry(index);
			} else { 
				printf("branch MCTreco_branch does not exist!\n");
				exit(1);
			}
			MCTreco_isLoaded = true;
		}
		return MCTreco_;
	}
	const float &aa::dPhimin_met_jet()
	{
		if (not dPhimin_met_jet_isLoaded) {
			if (dPhimin_met_jet_branch != 0) {
				dPhimin_met_jet_branch->GetEntry(index);
			} else { 
				printf("branch dPhimin_met_jet_branch does not exist!\n");
				exit(1);
			}
			dPhimin_met_jet_isLoaded = true;
		}
		return dPhimin_met_jet_;
	}
	const float &aa::dPhimin_met_lep()
	{
		if (not dPhimin_met_lep_isLoaded) {
			if (dPhimin_met_lep_branch != 0) {
				dPhimin_met_lep_branch->GetEntry(index);
			} else { 
				printf("branch dPhimin_met_lep_branch does not exist!\n");
				exit(1);
			}
			dPhimin_met_lep_isLoaded = true;
		}
		return dPhimin_met_lep_;
	}
	const float &aa::dPhisumjetmet()
	{
		if (not dPhisumjetmet_isLoaded) {
			if (dPhisumjetmet_branch != 0) {
				dPhisumjetmet_branch->GetEntry(index);
			} else { 
				printf("branch dPhisumjetmet_branch does not exist!\n");
				exit(1);
			}
			dPhisumjetmet_isLoaded = true;
		}
		return dPhisumjetmet_;
	}
	const float &aa::dPhisumjetlep()
	{
		if (not dPhisumjetlep_isLoaded) {
			if (dPhisumjetlep_branch != 0) {
				dPhisumjetlep_branch->GetEntry(index);
			} else { 
				printf("branch dPhisumjetlep_branch does not exist!\n");
				exit(1);
			}
			dPhisumjetlep_isLoaded = true;
		}
		return dPhisumjetlep_;
	}
	const float &aa::dPhisumjetmetlep()
	{
		if (not dPhisumjetmetlep_isLoaded) {
			if (dPhisumjetmetlep_branch != 0) {
				dPhisumjetmetlep_branch->GetEntry(index);
			} else { 
				printf("branch dPhisumjetmetlep_branch does not exist!\n");
				exit(1);
			}
			dPhisumjetmetlep_isLoaded = true;
		}
		return dPhisumjetmetlep_;
	}
	const float &aa::dRlj_MindR()
	{
		if (not dRlj_MindR_isLoaded) {
			if (dRlj_MindR_branch != 0) {
				dRlj_MindR_branch->GetEntry(index);
			} else { 
				printf("branch dRlj_MindR_branch does not exist!\n");
				exit(1);
			}
			dRlj_MindR_isLoaded = true;
		}
		return dRlj_MindR_;
	}
	const float &aa::Mbb_MindR()
	{
		if (not Mbb_MindR_isLoaded) {
			if (Mbb_MindR_branch != 0) {
				Mbb_MindR_branch->GetEntry(index);
			} else { 
				printf("branch Mbb_MindR_branch does not exist!\n");
				exit(1);
			}
			Mbb_MindR_isLoaded = true;
		}
		return Mbb_MindR_;
	}
	const float &aa::Mjj_MaxPt()
	{
		if (not Mjj_MaxPt_isLoaded) {
			if (Mjj_MaxPt_branch != 0) {
				Mjj_MaxPt_branch->GetEntry(index);
			} else { 
				printf("branch Mjj_MaxPt_branch does not exist!\n");
				exit(1);
			}
			Mjj_MaxPt_isLoaded = true;
		}
		return Mjj_MaxPt_;
	}
	const float &aa::Mjjj_MaxPt()
	{
		if (not Mjjj_MaxPt_isLoaded) {
			if (Mjjj_MaxPt_branch != 0) {
				Mjjj_MaxPt_branch->GetEntry(index);
			} else { 
				printf("branch Mjjj_MaxPt_branch does not exist!\n");
				exit(1);
			}
			Mjjj_MaxPt_isLoaded = true;
		}
		return Mjjj_MaxPt_;
	}
	const float &aa::Mbbb_MaxPt()
	{
		if (not Mbbb_MaxPt_isLoaded) {
			if (Mbbb_MaxPt_branch != 0) {
				Mbbb_MaxPt_branch->GetEntry(index);
			} else { 
				printf("branch Mbbb_MaxPt_branch does not exist!\n");
				exit(1);
			}
			Mbbb_MaxPt_isLoaded = true;
		}
		return Mbbb_MaxPt_;
	}
	const float &aa::Mjjjj_MaxPt()
	{
		if (not Mjjjj_MaxPt_isLoaded) {
			if (Mjjjj_MaxPt_branch != 0) {
				Mjjjj_MaxPt_branch->GetEntry(index);
			} else { 
				printf("branch Mjjjj_MaxPt_branch does not exist!\n");
				exit(1);
			}
			Mjjjj_MaxPt_isLoaded = true;
		}
		return Mjjjj_MaxPt_;
	}
	const float &aa::Mbbbb_MaxPt()
	{
		if (not Mbbbb_MaxPt_isLoaded) {
			if (Mbbbb_MaxPt_branch != 0) {
				Mbbbb_MaxPt_branch->GetEntry(index);
			} else { 
				printf("branch Mbbbb_MaxPt_branch does not exist!\n");
				exit(1);
			}
			Mbbbb_MaxPt_isLoaded = true;
		}
		return Mbbbb_MaxPt_;
	}
	const float &aa::Mbbbj_MaxPt()
	{
		if (not Mbbbj_MaxPt_isLoaded) {
			if (Mbbbj_MaxPt_branch != 0) {
				Mbbbj_MaxPt_branch->GetEntry(index);
			} else { 
				printf("branch Mbbbj_MaxPt_branch does not exist!\n");
				exit(1);
			}
			Mbbbj_MaxPt_isLoaded = true;
		}
		return Mbbbj_MaxPt_;
	}
	const float &aa::Mjjj_MaxMV2c20()
	{
		if (not Mjjj_MaxMV2c20_isLoaded) {
			if (Mjjj_MaxMV2c20_branch != 0) {
				Mjjj_MaxMV2c20_branch->GetEntry(index);
			} else { 
				printf("branch Mjjj_MaxMV2c20_branch does not exist!\n");
				exit(1);
			}
			Mjjj_MaxMV2c20_isLoaded = true;
		}
		return Mjjj_MaxMV2c20_;
	}
	const float &aa::Mbbb_MaxMV2c20()
	{
		if (not Mbbb_MaxMV2c20_isLoaded) {
			if (Mbbb_MaxMV2c20_branch != 0) {
				Mbbb_MaxMV2c20_branch->GetEntry(index);
			} else { 
				printf("branch Mbbb_MaxMV2c20_branch does not exist!\n");
				exit(1);
			}
			Mbbb_MaxMV2c20_isLoaded = true;
		}
		return Mbbb_MaxMV2c20_;
	}
	const float &aa::Mjjjj_MaxMV2c20()
	{
		if (not Mjjjj_MaxMV2c20_isLoaded) {
			if (Mjjjj_MaxMV2c20_branch != 0) {
				Mjjjj_MaxMV2c20_branch->GetEntry(index);
			} else { 
				printf("branch Mjjjj_MaxMV2c20_branch does not exist!\n");
				exit(1);
			}
			Mjjjj_MaxMV2c20_isLoaded = true;
		}
		return Mjjjj_MaxMV2c20_;
	}
	const float &aa::Mbbbb_MaxMV2c20()
	{
		if (not Mbbbb_MaxMV2c20_isLoaded) {
			if (Mbbbb_MaxMV2c20_branch != 0) {
				Mbbbb_MaxMV2c20_branch->GetEntry(index);
			} else { 
				printf("branch Mbbbb_MaxMV2c20_branch does not exist!\n");
				exit(1);
			}
			Mbbbb_MaxMV2c20_isLoaded = true;
		}
		return Mbbbb_MaxMV2c20_;
	}
	const float &aa::Mbbbj_MaxMV2c20()
	{
		if (not Mbbbj_MaxMV2c20_isLoaded) {
			if (Mbbbj_MaxMV2c20_branch != 0) {
				Mbbbj_MaxMV2c20_branch->GetEntry(index);
			} else { 
				printf("branch Mbbbj_MaxMV2c20_branch does not exist!\n");
				exit(1);
			}
			Mbbbj_MaxMV2c20_isLoaded = true;
		}
		return Mbbbj_MaxMV2c20_;
	}
	const float &aa::DeltaMbbbb_MinDeltaM()
	{
		if (not DeltaMbbbb_MinDeltaM_isLoaded) {
			if (DeltaMbbbb_MinDeltaM_branch != 0) {
				DeltaMbbbb_MinDeltaM_branch->GetEntry(index);
			} else { 
				printf("branch DeltaMbbbb_MinDeltaM_branch does not exist!\n");
				exit(1);
			}
			DeltaMbbbb_MinDeltaM_isLoaded = true;
		}
		return DeltaMbbbb_MinDeltaM_;
	}
	const float &aa::dR_lep_jet1()
	{
		if (not dR_lep_jet1_isLoaded) {
			if (dR_lep_jet1_branch != 0) {
				dR_lep_jet1_branch->GetEntry(index);
			} else { 
				printf("branch dR_lep_jet1_branch does not exist!\n");
				exit(1);
			}
			dR_lep_jet1_isLoaded = true;
		}
		return dR_lep_jet1_;
	}
	const float &aa::dPhibl_MindPhi()
	{
		if (not dPhibl_MindPhi_isLoaded) {
			if (dPhibl_MindPhi_branch != 0) {
				dPhibl_MindPhi_branch->GetEntry(index);
			} else { 
				printf("branch dPhibl_MindPhi_branch does not exist!\n");
				exit(1);
			}
			dPhibl_MindPhi_isLoaded = true;
		}
		return dPhibl_MindPhi_;
	}
	const float &aa::dRbl_MindR()
	{
		if (not dRbl_MindR_isLoaded) {
			if (dRbl_MindR_branch != 0) {
				dRbl_MindR_branch->GetEntry(index);
			} else { 
				printf("branch dRbl_MindR_branch does not exist!\n");
				exit(1);
			}
			dRbl_MindR_isLoaded = true;
		}
		return dRbl_MindR_;
	}
	const float &aa::dPhibb_MindPhi()
	{
		if (not dPhibb_MindPhi_isLoaded) {
			if (dPhibb_MindPhi_branch != 0) {
				dPhibb_MindPhi_branch->GetEntry(index);
			} else { 
				printf("branch dPhibb_MindPhi_branch does not exist!\n");
				exit(1);
			}
			dPhibb_MindPhi_isLoaded = true;
		}
		return dPhibb_MindPhi_;
	}
	const float &aa::dRbb_MindR()
	{
		if (not dRbb_MindR_isLoaded) {
			if (dRbb_MindR_branch != 0) {
				dRbb_MindR_branch->GetEntry(index);
			} else { 
				printf("branch dRbb_MindR_branch does not exist!\n");
				exit(1);
			}
			dRbb_MindR_isLoaded = true;
		}
		return dRbb_MindR_;
	}
	const float &aa::PtDiff_Higgs_Vector()
	{
		if (not PtDiff_Higgs_Vector_isLoaded) {
			if (PtDiff_Higgs_Vector_branch != 0) {
				PtDiff_Higgs_Vector_branch->GetEntry(index);
			} else { 
				printf("branch PtDiff_Higgs_Vector_branch does not exist!\n");
				exit(1);
			}
			PtDiff_Higgs_Vector_isLoaded = true;
		}
		return PtDiff_Higgs_Vector_;
	}
	const int &aa::el_n()
	{
		if (not el_n_isLoaded) {
			if (el_n_branch != 0) {
				el_n_branch->GetEntry(index);
			} else { 
				printf("branch el_n_branch does not exist!\n");
				exit(1);
			}
			el_n_isLoaded = true;
		}
		return el_n_;
	}
	const int &aa::el_MT()
	{
		if (not el_MT_isLoaded) {
			if (el_MT_branch != 0) {
				el_MT_branch->GetEntry(index);
			} else { 
				printf("branch el_MT_branch does not exist!\n");
				exit(1);
			}
			el_MT_isLoaded = true;
		}
		return el_MT_;
	}
	const int &aa::el_M()
	{
		if (not el_M_isLoaded) {
			if (el_M_branch != 0) {
				el_M_branch->GetEntry(index);
			} else { 
				printf("branch el_M_branch does not exist!\n");
				exit(1);
			}
			el_M_isLoaded = true;
		}
		return el_M_;
	}
	const int &aa::mu_n()
	{
		if (not mu_n_isLoaded) {
			if (mu_n_branch != 0) {
				mu_n_branch->GetEntry(index);
			} else { 
				printf("branch mu_n_branch does not exist!\n");
				exit(1);
			}
			mu_n_isLoaded = true;
		}
		return mu_n_;
	}
	const int &aa::mu_MT()
	{
		if (not mu_MT_isLoaded) {
			if (mu_MT_branch != 0) {
				mu_MT_branch->GetEntry(index);
			} else { 
				printf("branch mu_MT_branch does not exist!\n");
				exit(1);
			}
			mu_MT_isLoaded = true;
		}
		return mu_MT_;
	}
	const int &aa::mu_M()
	{
		if (not mu_M_isLoaded) {
			if (mu_M_branch != 0) {
				mu_M_branch->GetEntry(index);
			} else { 
				printf("branch mu_M_branch does not exist!\n");
				exit(1);
			}
			mu_M_isLoaded = true;
		}
		return mu_M_;
	}
	const int &aa::lep_n()
	{
		if (not lep_n_isLoaded) {
			if (lep_n_branch != 0) {
				lep_n_branch->GetEntry(index);
			} else { 
				printf("branch lep_n_branch does not exist!\n");
				exit(1);
			}
			lep_n_isLoaded = true;
		}
		return lep_n_;
	}
	const int &aa::jet_n()
	{
		if (not jet_n_isLoaded) {
			if (jet_n_branch != 0) {
				jet_n_branch->GetEntry(index);
			} else { 
				printf("branch jet_n_branch does not exist!\n");
				exit(1);
			}
			jet_n_isLoaded = true;
		}
		return jet_n_;
	}
	const int &aa::jet20_n()
	{
		if (not jet20_n_isLoaded) {
			if (jet20_n_branch != 0) {
				jet20_n_branch->GetEntry(index);
			} else { 
				printf("branch jet20_n_branch does not exist!\n");
				exit(1);
			}
			jet20_n_isLoaded = true;
		}
		return jet20_n_;
	}
	const int &aa::jet30_n()
	{
		if (not jet30_n_isLoaded) {
			if (jet30_n_branch != 0) {
				jet30_n_branch->GetEntry(index);
			} else { 
				printf("branch jet30_n_branch does not exist!\n");
				exit(1);
			}
			jet30_n_isLoaded = true;
		}
		return jet30_n_;
	}
	const int &aa::jet40_n()
	{
		if (not jet40_n_isLoaded) {
			if (jet40_n_branch != 0) {
				jet40_n_branch->GetEntry(index);
			} else { 
				printf("branch jet40_n_branch does not exist!\n");
				exit(1);
			}
			jet40_n_isLoaded = true;
		}
		return jet40_n_;
	}
	const int &aa::bjet_n()
	{
		if (not bjet_n_isLoaded) {
			if (bjet_n_branch != 0) {
				bjet_n_branch->GetEntry(index);
			} else { 
				printf("branch bjet_n_branch does not exist!\n");
				exit(1);
			}
			bjet_n_isLoaded = true;
		}
		return bjet_n_;
	}
	const int &aa::ljet_n()
	{
		if (not ljet_n_isLoaded) {
			if (ljet_n_branch != 0) {
				ljet_n_branch->GetEntry(index);
			} else { 
				printf("branch ljet_n_branch does not exist!\n");
				exit(1);
			}
			ljet_n_isLoaded = true;
		}
		return ljet_n_;
	}
	const vector<float> &aa::ljet_width()
	{
		if (not ljet_width_isLoaded) {
			if (ljet_width_branch != 0) {
				ljet_width_branch->GetEntry(index);
			} else { 
				printf("branch ljet_width_branch does not exist!\n");
				exit(1);
			}
			ljet_width_isLoaded = true;
		}
		return *ljet_width_;
	}
	const vector<float> &aa::ljet_tau1()
	{
		if (not ljet_tau1_isLoaded) {
			if (ljet_tau1_branch != 0) {
				ljet_tau1_branch->GetEntry(index);
			} else { 
				printf("branch ljet_tau1_branch does not exist!\n");
				exit(1);
			}
			ljet_tau1_isLoaded = true;
		}
		return *ljet_tau1_;
	}
	const vector<float> &aa::ljet_tau2()
	{
		if (not ljet_tau2_isLoaded) {
			if (ljet_tau2_branch != 0) {
				ljet_tau2_branch->GetEntry(index);
			} else { 
				printf("branch ljet_tau2_branch does not exist!\n");
				exit(1);
			}
			ljet_tau2_isLoaded = true;
		}
		return *ljet_tau2_;
	}
	const vector<float> &aa::ljet_tau3()
	{
		if (not ljet_tau3_isLoaded) {
			if (ljet_tau3_branch != 0) {
				ljet_tau3_branch->GetEntry(index);
			} else { 
				printf("branch ljet_tau3_branch does not exist!\n");
				exit(1);
			}
			ljet_tau3_isLoaded = true;
		}
		return *ljet_tau3_;
	}
	const vector<float> &aa::ljet_tau1_wta()
	{
		if (not ljet_tau1_wta_isLoaded) {
			if (ljet_tau1_wta_branch != 0) {
				ljet_tau1_wta_branch->GetEntry(index);
			} else { 
				printf("branch ljet_tau1_wta_branch does not exist!\n");
				exit(1);
			}
			ljet_tau1_wta_isLoaded = true;
		}
		return *ljet_tau1_wta_;
	}
	const vector<float> &aa::ljet_tau2_wta()
	{
		if (not ljet_tau2_wta_isLoaded) {
			if (ljet_tau2_wta_branch != 0) {
				ljet_tau2_wta_branch->GetEntry(index);
			} else { 
				printf("branch ljet_tau2_wta_branch does not exist!\n");
				exit(1);
			}
			ljet_tau2_wta_isLoaded = true;
		}
		return *ljet_tau2_wta_;
	}
	const vector<float> &aa::ljet_tau3_wta()
	{
		if (not ljet_tau3_wta_isLoaded) {
			if (ljet_tau3_wta_branch != 0) {
				ljet_tau3_wta_branch->GetEntry(index);
			} else { 
				printf("branch ljet_tau3_wta_branch does not exist!\n");
				exit(1);
			}
			ljet_tau3_wta_isLoaded = true;
		}
		return *ljet_tau3_wta_;
	}
	const vector<float> &aa::ljet_planarFlow()
	{
		if (not ljet_planarFlow_isLoaded) {
			if (ljet_planarFlow_branch != 0) {
				ljet_planarFlow_branch->GetEntry(index);
			} else { 
				printf("branch ljet_planarFlow_branch does not exist!\n");
				exit(1);
			}
			ljet_planarFlow_isLoaded = true;
		}
		return *ljet_planarFlow_;
	}
	const vector<float> &aa::ljet_ktsplit12()
	{
		if (not ljet_ktsplit12_isLoaded) {
			if (ljet_ktsplit12_branch != 0) {
				ljet_ktsplit12_branch->GetEntry(index);
			} else { 
				printf("branch ljet_ktsplit12_branch does not exist!\n");
				exit(1);
			}
			ljet_ktsplit12_isLoaded = true;
		}
		return *ljet_ktsplit12_;
	}
	const vector<float> &aa::ljet_ktsplit23()
	{
		if (not ljet_ktsplit23_isLoaded) {
			if (ljet_ktsplit23_branch != 0) {
				ljet_ktsplit23_branch->GetEntry(index);
			} else { 
				printf("branch ljet_ktsplit23_branch does not exist!\n");
				exit(1);
			}
			ljet_ktsplit23_isLoaded = true;
		}
		return *ljet_ktsplit23_;
	}
	const vector<float> &aa::ljet_ktsplit34()
	{
		if (not ljet_ktsplit34_isLoaded) {
			if (ljet_ktsplit34_branch != 0) {
				ljet_ktsplit34_branch->GetEntry(index);
			} else { 
				printf("branch ljet_ktsplit34_branch does not exist!\n");
				exit(1);
			}
			ljet_ktsplit34_isLoaded = true;
		}
		return *ljet_ktsplit34_;
	}
	const vector<float> &aa::ljet_ZCut12()
	{
		if (not ljet_ZCut12_isLoaded) {
			if (ljet_ZCut12_branch != 0) {
				ljet_ZCut12_branch->GetEntry(index);
			} else { 
				printf("branch ljet_ZCut12_branch does not exist!\n");
				exit(1);
			}
			ljet_ZCut12_isLoaded = true;
		}
		return *ljet_ZCut12_;
	}
	const vector<float> &aa::ljet_ZCut23()
	{
		if (not ljet_ZCut23_isLoaded) {
			if (ljet_ZCut23_branch != 0) {
				ljet_ZCut23_branch->GetEntry(index);
			} else { 
				printf("branch ljet_ZCut23_branch does not exist!\n");
				exit(1);
			}
			ljet_ZCut23_isLoaded = true;
		}
		return *ljet_ZCut23_;
	}
	const vector<float> &aa::ljet_ZCut34()
	{
		if (not ljet_ZCut34_isLoaded) {
			if (ljet_ZCut34_branch != 0) {
				ljet_ZCut34_branch->GetEntry(index);
			} else { 
				printf("branch ljet_ZCut34_branch does not exist!\n");
				exit(1);
			}
			ljet_ZCut34_isLoaded = true;
		}
		return *ljet_ZCut34_;
	}
	const vector<float> &aa::ljet_KtDR()
	{
		if (not ljet_KtDR_isLoaded) {
			if (ljet_KtDR_branch != 0) {
				ljet_KtDR_branch->GetEntry(index);
			} else { 
				printf("branch ljet_KtDR_branch does not exist!\n");
				exit(1);
			}
			ljet_KtDR_isLoaded = true;
		}
		return *ljet_KtDR_;
	}
	const vector<float> &aa::ljet_Angularity()
	{
		if (not ljet_Angularity_isLoaded) {
			if (ljet_Angularity_branch != 0) {
				ljet_Angularity_branch->GetEntry(index);
			} else { 
				printf("branch ljet_Angularity_branch does not exist!\n");
				exit(1);
			}
			ljet_Angularity_isLoaded = true;
		}
		return *ljet_Angularity_;
	}
	const vector<float> &aa::ljet_Aplanarity()
	{
		if (not ljet_Aplanarity_isLoaded) {
			if (ljet_Aplanarity_branch != 0) {
				ljet_Aplanarity_branch->GetEntry(index);
			} else { 
				printf("branch ljet_Aplanarity_branch does not exist!\n");
				exit(1);
			}
			ljet_Aplanarity_isLoaded = true;
		}
		return *ljet_Aplanarity_;
	}
	const vector<float> &aa::ljet_Dip12()
	{
		if (not ljet_Dip12_isLoaded) {
			if (ljet_Dip12_branch != 0) {
				ljet_Dip12_branch->GetEntry(index);
			} else { 
				printf("branch ljet_Dip12_branch does not exist!\n");
				exit(1);
			}
			ljet_Dip12_isLoaded = true;
		}
		return *ljet_Dip12_;
	}
	const vector<float> &aa::ljet_Dip13()
	{
		if (not ljet_Dip13_isLoaded) {
			if (ljet_Dip13_branch != 0) {
				ljet_Dip13_branch->GetEntry(index);
			} else { 
				printf("branch ljet_Dip13_branch does not exist!\n");
				exit(1);
			}
			ljet_Dip13_isLoaded = true;
		}
		return *ljet_Dip13_;
	}
	const vector<float> &aa::ljet_Dip23()
	{
		if (not ljet_Dip23_isLoaded) {
			if (ljet_Dip23_branch != 0) {
				ljet_Dip23_branch->GetEntry(index);
			} else { 
				printf("branch ljet_Dip23_branch does not exist!\n");
				exit(1);
			}
			ljet_Dip23_isLoaded = true;
		}
		return *ljet_Dip23_;
	}
	const vector<float> &aa::ljet_D2()
	{
		if (not ljet_D2_isLoaded) {
			if (ljet_D2_branch != 0) {
				ljet_D2_branch->GetEntry(index);
			} else { 
				printf("branch ljet_D2_branch does not exist!\n");
				exit(1);
			}
			ljet_D2_isLoaded = true;
		}
		return *ljet_D2_;
	}
	const vector<float> &aa::ljet_C2()
	{
		if (not ljet_C2_isLoaded) {
			if (ljet_C2_branch != 0) {
				ljet_C2_branch->GetEntry(index);
			} else { 
				printf("branch ljet_C2_branch does not exist!\n");
				exit(1);
			}
			ljet_C2_isLoaded = true;
		}
		return *ljet_C2_;
	}
	const vector<float> &aa::ljet_tau21()
	{
		if (not ljet_tau21_isLoaded) {
			if (ljet_tau21_branch != 0) {
				ljet_tau21_branch->GetEntry(index);
			} else { 
				printf("branch ljet_tau21_branch does not exist!\n");
				exit(1);
			}
			ljet_tau21_isLoaded = true;
		}
		return *ljet_tau21_;
	}
	const vector<float> &aa::ljet_tau32()
	{
		if (not ljet_tau32_isLoaded) {
			if (ljet_tau32_branch != 0) {
				ljet_tau32_branch->GetEntry(index);
			} else { 
				printf("branch ljet_tau32_branch does not exist!\n");
				exit(1);
			}
			ljet_tau32_isLoaded = true;
		}
		return *ljet_tau32_;
	}
	const vector<float> &aa::ljet_tau31()
	{
		if (not ljet_tau31_isLoaded) {
			if (ljet_tau31_branch != 0) {
				ljet_tau31_branch->GetEntry(index);
			} else { 
				printf("branch ljet_tau31_branch does not exist!\n");
				exit(1);
			}
			ljet_tau31_isLoaded = true;
		}
		return *ljet_tau31_;
	}
	const vector<float> &aa::ljet_tau21_wta()
	{
		if (not ljet_tau21_wta_isLoaded) {
			if (ljet_tau21_wta_branch != 0) {
				ljet_tau21_wta_branch->GetEntry(index);
			} else { 
				printf("branch ljet_tau21_wta_branch does not exist!\n");
				exit(1);
			}
			ljet_tau21_wta_isLoaded = true;
		}
		return *ljet_tau21_wta_;
	}
	const vector<float> &aa::ljet_tau32_wta()
	{
		if (not ljet_tau32_wta_isLoaded) {
			if (ljet_tau32_wta_branch != 0) {
				ljet_tau32_wta_branch->GetEntry(index);
			} else { 
				printf("branch ljet_tau32_wta_branch does not exist!\n");
				exit(1);
			}
			ljet_tau32_wta_isLoaded = true;
		}
		return *ljet_tau32_wta_;
	}
	const vector<float> &aa::ljet_tau31_wta()
	{
		if (not ljet_tau31_wta_isLoaded) {
			if (ljet_tau31_wta_branch != 0) {
				ljet_tau31_wta_branch->GetEntry(index);
			} else { 
				printf("branch ljet_tau31_wta_branch does not exist!\n");
				exit(1);
			}
			ljet_tau31_wta_isLoaded = true;
		}
		return *ljet_tau31_wta_;
	}
	const vector<int> &aa::jet_truth_matching()
	{
		if (not jet_truth_matching_isLoaded) {
			if (jet_truth_matching_branch != 0) {
				jet_truth_matching_branch->GetEntry(index);
			} else { 
				printf("branch jet_truth_matching_branch does not exist!\n");
				exit(1);
			}
			jet_truth_matching_isLoaded = true;
		}
		return *jet_truth_matching_;
	}
	const vector<int> &aa::boosted_jet_truth_matching()
	{
		if (not boosted_jet_truth_matching_isLoaded) {
			if (boosted_jet_truth_matching_branch != 0) {
				boosted_jet_truth_matching_branch->GetEntry(index);
			} else { 
				printf("branch boosted_jet_truth_matching_branch does not exist!\n");
				exit(1);
			}
			boosted_jet_truth_matching_isLoaded = true;
		}
		return *boosted_jet_truth_matching_;
	}
	const vector<int> &aa::boosted_trackjet_truth_matching()
	{
		if (not boosted_trackjet_truth_matching_isLoaded) {
			if (boosted_trackjet_truth_matching_branch != 0) {
				boosted_trackjet_truth_matching_branch->GetEntry(index);
			} else { 
				printf("branch boosted_trackjet_truth_matching_branch does not exist!\n");
				exit(1);
			}
			boosted_trackjet_truth_matching_isLoaded = true;
		}
		return *boosted_trackjet_truth_matching_;
	}
	const int &aa::truth_nbquarks()
	{
		if (not truth_nbquarks_isLoaded) {
			if (truth_nbquarks_branch != 0) {
				truth_nbquarks_branch->GetEntry(index);
			} else { 
				printf("branch truth_nbquarks_branch does not exist!\n");
				exit(1);
			}
			truth_nbquarks_isLoaded = true;
		}
		return truth_nbquarks_;
	}
	const vector<int> &aa::nbtag_tjets_truth()
	{
		if (not nbtag_tjets_truth_isLoaded) {
			if (nbtag_tjets_truth_branch != 0) {
				nbtag_tjets_truth_branch->GetEntry(index);
			} else { 
				printf("branch nbtag_tjets_truth_branch does not exist!\n");
				exit(1);
			}
			nbtag_tjets_truth_isLoaded = true;
		}
		return *nbtag_tjets_truth_;
	}
	const vector<int> &aa::nbtag_tjets_reco()
	{
		if (not nbtag_tjets_reco_isLoaded) {
			if (nbtag_tjets_reco_branch != 0) {
				nbtag_tjets_reco_branch->GetEntry(index);
			} else { 
				printf("branch nbtag_tjets_reco_branch does not exist!\n");
				exit(1);
			}
			nbtag_tjets_reco_isLoaded = true;
		}
		return *nbtag_tjets_reco_;
	}
	const vector<int> &aa::n_tjets_fat()
	{
		if (not n_tjets_fat_isLoaded) {
			if (n_tjets_fat_branch != 0) {
				n_tjets_fat_branch->GetEntry(index);
			} else { 
				printf("branch n_tjets_fat_branch does not exist!\n");
				exit(1);
			}
			n_tjets_fat_isLoaded = true;
		}
		return *n_tjets_fat_;
	}
	const vector<int> &aa::n_btjets_bfat()
	{
		if (not n_btjets_bfat_isLoaded) {
			if (n_btjets_bfat_branch != 0) {
				n_btjets_bfat_branch->GetEntry(index);
			} else { 
				printf("branch n_btjets_bfat_branch does not exist!\n");
				exit(1);
			}
			n_btjets_bfat_isLoaded = true;
		}
		return *n_btjets_bfat_;
	}
	const vector<int> &aa::n_btjets_fat()
	{
		if (not n_btjets_fat_isLoaded) {
			if (n_btjets_fat_branch != 0) {
				n_btjets_fat_branch->GetEntry(index);
			} else { 
				printf("branch n_btjets_fat_branch does not exist!\n");
				exit(1);
			}
			n_btjets_fat_isLoaded = true;
		}
		return *n_btjets_fat_;
	}
	const vector<int> &aa::n_tbtjets_fat()
	{
		if (not n_tbtjets_fat_isLoaded) {
			if (n_tbtjets_fat_branch != 0) {
				n_tbtjets_fat_branch->GetEntry(index);
			} else { 
				printf("branch n_tbtjets_fat_branch does not exist!\n");
				exit(1);
			}
			n_tbtjets_fat_isLoaded = true;
		}
		return *n_tbtjets_fat_;
	}
	const vector<int> &aa::n_tjets_subfat()
	{
		if (not n_tjets_subfat_isLoaded) {
			if (n_tjets_subfat_branch != 0) {
				n_tjets_subfat_branch->GetEntry(index);
			} else { 
				printf("branch n_tjets_subfat_branch does not exist!\n");
				exit(1);
			}
			n_tjets_subfat_isLoaded = true;
		}
		return *n_tjets_subfat_;
	}
	const vector<float> &aa::leadfat_leadtrack_pt()
	{
		if (not leadfat_leadtrack_pt_isLoaded) {
			if (leadfat_leadtrack_pt_branch != 0) {
				leadfat_leadtrack_pt_branch->GetEntry(index);
			} else { 
				printf("branch leadfat_leadtrack_pt_branch does not exist!\n");
				exit(1);
			}
			leadfat_leadtrack_pt_isLoaded = true;
		}
		return *leadfat_leadtrack_pt_;
	}
	const vector<float> &aa::leadfat_subtrack_pt()
	{
		if (not leadfat_subtrack_pt_isLoaded) {
			if (leadfat_subtrack_pt_branch != 0) {
				leadfat_subtrack_pt_branch->GetEntry(index);
			} else { 
				printf("branch leadfat_subtrack_pt_branch does not exist!\n");
				exit(1);
			}
			leadfat_subtrack_pt_isLoaded = true;
		}
		return *leadfat_subtrack_pt_;
	}
	const float &aa::higgs_mass()
	{
		if (not higgs_mass_isLoaded) {
			if (higgs_mass_branch != 0) {
				higgs_mass_branch->GetEntry(index);
			} else { 
				printf("branch higgs_mass_branch does not exist!\n");
				exit(1);
			}
			higgs_mass_isLoaded = true;
		}
		return higgs_mass_;
	}
	const vector<float> &aa::b_pt()
	{
		if (not b_pt_isLoaded) {
			if (b_pt_branch != 0) {
				b_pt_branch->GetEntry(index);
			} else { 
				printf("branch b_pt_branch does not exist!\n");
				exit(1);
			}
			b_pt_isLoaded = true;
		}
		return *b_pt_;
	}
	const vector<float> &aa::notj_fj_pt()
	{
		if (not notj_fj_pt_isLoaded) {
			if (notj_fj_pt_branch != 0) {
				notj_fj_pt_branch->GetEntry(index);
			} else { 
				printf("branch notj_fj_pt_branch does not exist!\n");
				exit(1);
			}
			notj_fj_pt_isLoaded = true;
		}
		return *notj_fj_pt_;
	}
	const vector<int> &aa::n_1tbtjets_fat()
	{
		if (not n_1tbtjets_fat_isLoaded) {
			if (n_1tbtjets_fat_branch != 0) {
				n_1tbtjets_fat_branch->GetEntry(index);
			} else { 
				printf("branch n_1tbtjets_fat_branch does not exist!\n");
				exit(1);
			}
			n_1tbtjets_fat_isLoaded = true;
		}
		return *n_1tbtjets_fat_;
	}
	const vector<int> &aa::n_2tbtjets_fat()
	{
		if (not n_2tbtjets_fat_isLoaded) {
			if (n_2tbtjets_fat_branch != 0) {
				n_2tbtjets_fat_branch->GetEntry(index);
			} else { 
				printf("branch n_2tbtjets_fat_branch does not exist!\n");
				exit(1);
			}
			n_2tbtjets_fat_isLoaded = true;
		}
		return *n_2tbtjets_fat_;
	}
	const vector<int> &aa::n_1inc_tbtjets_fat()
	{
		if (not n_1inc_tbtjets_fat_isLoaded) {
			if (n_1inc_tbtjets_fat_branch != 0) {
				n_1inc_tbtjets_fat_branch->GetEntry(index);
			} else { 
				printf("branch n_1inc_tbtjets_fat_branch does not exist!\n");
				exit(1);
			}
			n_1inc_tbtjets_fat_isLoaded = true;
		}
		return *n_1inc_tbtjets_fat_;
	}
	const vector<int> &aa::n_2inc_tbtjets_fat()
	{
		if (not n_2inc_tbtjets_fat_isLoaded) {
			if (n_2inc_tbtjets_fat_branch != 0) {
				n_2inc_tbtjets_fat_branch->GetEntry(index);
			} else { 
				printf("branch n_2inc_tbtjets_fat_branch does not exist!\n");
				exit(1);
			}
			n_2inc_tbtjets_fat_isLoaded = true;
		}
		return *n_2inc_tbtjets_fat_;
	}
	const vector<vector<int> > &aa::trub_track_jets()
	{
		if (not trub_track_jets_isLoaded) {
			if (trub_track_jets_branch != 0) {
				trub_track_jets_branch->GetEntry(index);
			} else { 
				printf("branch trub_track_jets_branch does not exist!\n");
				exit(1);
			}
			trub_track_jets_isLoaded = true;
		}
		return *trub_track_jets_;
	}
	const vector<vector<bool> > &aa::tagb_track_jets()
	{
		if (not tagb_track_jets_isLoaded) {
			if (tagb_track_jets_branch != 0) {
				tagb_track_jets_branch->GetEntry(index);
			} else { 
				printf("branch tagb_track_jets_branch does not exist!\n");
				exit(1);
			}
			tagb_track_jets_isLoaded = true;
		}
		return *tagb_track_jets_;
	}
	const int &aa::nb()
	{
		if (not nb_isLoaded) {
			if (nb_branch != 0) {
				nb_branch->GetEntry(index);
			} else { 
				printf("branch nb_branch does not exist!\n");
				exit(1);
			}
			nb_isLoaded = true;
		}
		return nb_;
	}
	const vector<vector<int> > &aa::trub_2track_jets()
	{
		if (not trub_2track_jets_isLoaded) {
			if (trub_2track_jets_branch != 0) {
				trub_2track_jets_branch->GetEntry(index);
			} else { 
				printf("branch trub_2track_jets_branch does not exist!\n");
				exit(1);
			}
			trub_2track_jets_isLoaded = true;
		}
		return *trub_2track_jets_;
	}
	const vector<int> &aa::btj()
	{
		if (not btj_isLoaded) {
			if (btj_branch != 0) {
				btj_branch->GetEntry(index);
			} else { 
				printf("branch btj_branch does not exist!\n");
				exit(1);
			}
			btj_isLoaded = true;
		}
		return *btj_;
	}
	const vector<int> &aa::tj_j()
	{
		if (not tj_j_isLoaded) {
			if (tj_j_branch != 0) {
				tj_j_branch->GetEntry(index);
			} else { 
				printf("branch tj_j_branch does not exist!\n");
				exit(1);
			}
			tj_j_isLoaded = true;
		}
		return *tj_j_;
	}
	const vector<int> &aa::btj_j()
	{
		if (not btj_j_isLoaded) {
			if (btj_j_branch != 0) {
				btj_j_branch->GetEntry(index);
			} else { 
				printf("branch btj_j_branch does not exist!\n");
				exit(1);
			}
			btj_j_isLoaded = true;
		}
		return *btj_j_;
	}
	const vector<int> &aa::b_j()
	{
		if (not b_j_isLoaded) {
			if (b_j_branch != 0) {
				b_j_branch->GetEntry(index);
			} else { 
				printf("branch b_j_branch does not exist!\n");
				exit(1);
			}
			b_j_isLoaded = true;
		}
		return *b_j_;
	}
	const vector<int> &aa::bh_j()
	{
		if (not bh_j_isLoaded) {
			if (bh_j_branch != 0) {
				bh_j_branch->GetEntry(index);
			} else { 
				printf("branch bh_j_branch does not exist!\n");
				exit(1);
			}
			bh_j_isLoaded = true;
		}
		return *bh_j_;
	}
	const vector<float> &aa::j_pt()
	{
		if (not j_pt_isLoaded) {
			if (j_pt_branch != 0) {
				j_pt_branch->GetEntry(index);
			} else { 
				printf("branch j_pt_branch does not exist!\n");
				exit(1);
			}
			j_pt_isLoaded = true;
		}
		return *j_pt_;
	}
	const vector<float> &aa::trackjet_pt()
	{
		if (not trackjet_pt_isLoaded) {
			if (trackjet_pt_branch != 0) {
				trackjet_pt_branch->GetEntry(index);
			} else { 
				printf("branch trackjet_pt_branch does not exist!\n");
				exit(1);
			}
			trackjet_pt_isLoaded = true;
		}
		return *trackjet_pt_;
	}
	const vector<float> &aa::dr_matched_jet_pt()
	{
		if (not dr_matched_jet_pt_isLoaded) {
			if (dr_matched_jet_pt_branch != 0) {
				dr_matched_jet_pt_branch->GetEntry(index);
			} else { 
				printf("branch dr_matched_jet_pt_branch does not exist!\n");
				exit(1);
			}
			dr_matched_jet_pt_isLoaded = true;
		}
		return *dr_matched_jet_pt_;
	}
	const vector<vector<float> > &aa::dr_matched_trackjet_pt()
	{
		if (not dr_matched_trackjet_pt_isLoaded) {
			if (dr_matched_trackjet_pt_branch != 0) {
				dr_matched_trackjet_pt_branch->GetEntry(index);
			} else { 
				printf("branch dr_matched_trackjet_pt_branch does not exist!\n");
				exit(1);
			}
			dr_matched_trackjet_pt_isLoaded = true;
		}
		return *dr_matched_trackjet_pt_;
	}
	const vector<bool> &aa::b_tag_jet()
	{
		if (not b_tag_jet_isLoaded) {
			if (b_tag_jet_branch != 0) {
				b_tag_jet_branch->GetEntry(index);
			} else { 
				printf("branch b_tag_jet_branch does not exist!\n");
				exit(1);
			}
			b_tag_jet_isLoaded = true;
		}
		return *b_tag_jet_;
	}
	const vector<float> &aa::fj_pt()
	{
		if (not fj_pt_isLoaded) {
			if (fj_pt_branch != 0) {
				fj_pt_branch->GetEntry(index);
			} else { 
				printf("branch fj_pt_branch does not exist!\n");
				exit(1);
			}
			fj_pt_isLoaded = true;
		}
		return *fj_pt_;
	}
	const vector<int> &aa::label_jet()
	{
		if (not label_jet_isLoaded) {
			if (label_jet_branch != 0) {
				label_jet_branch->GetEntry(index);
			} else { 
				printf("branch label_jet_branch does not exist!\n");
				exit(1);
			}
			label_jet_isLoaded = true;
		}
		return *label_jet_;
	}
	const vector<vector<bool> > &aa::btag_trackjet()
	{
		if (not btag_trackjet_isLoaded) {
			if (btag_trackjet_branch != 0) {
				btag_trackjet_branch->GetEntry(index);
			} else { 
				printf("branch btag_trackjet_branch does not exist!\n");
				exit(1);
			}
			btag_trackjet_isLoaded = true;
		}
		return *btag_trackjet_;
	}
	const vector<vector<int> > &aa::label_trackjet()
	{
		if (not label_trackjet_isLoaded) {
			if (label_trackjet_branch != 0) {
				label_trackjet_branch->GetEntry(index);
			} else { 
				printf("branch label_trackjet_branch does not exist!\n");
				exit(1);
			}
			label_trackjet_isLoaded = true;
		}
		return *label_trackjet_;
	}
	const vector<int> &aa::tj_fj()
	{
		if (not tj_fj_isLoaded) {
			if (tj_fj_branch != 0) {
				tj_fj_branch->GetEntry(index);
			} else { 
				printf("branch tj_fj_branch does not exist!\n");
				exit(1);
			}
			tj_fj_isLoaded = true;
		}
		return *tj_fj_;
	}
	const vector<int> &aa::bpart_fj()
	{
		if (not bpart_fj_isLoaded) {
			if (bpart_fj_branch != 0) {
				bpart_fj_branch->GetEntry(index);
			} else { 
				printf("branch bpart_fj_branch does not exist!\n");
				exit(1);
			}
			bpart_fj_isLoaded = true;
		}
		return *bpart_fj_;
	}
	const vector<int> &aa::label_fj()
	{
		if (not label_fj_isLoaded) {
			if (label_fj_branch != 0) {
				label_fj_branch->GetEntry(index);
			} else { 
				printf("branch label_fj_branch does not exist!\n");
				exit(1);
			}
			label_fj_isLoaded = true;
		}
		return *label_fj_;
	}
	const vector<vector<float> > &aa::ghost_dr_fj()
	{
		if (not ghost_dr_fj_isLoaded) {
			if (ghost_dr_fj_branch != 0) {
				ghost_dr_fj_branch->GetEntry(index);
			} else { 
				printf("branch ghost_dr_fj_branch does not exist!\n");
				exit(1);
			}
			ghost_dr_fj_isLoaded = true;
		}
		return *ghost_dr_fj_;
	}
	const vector<vector<float> > &aa::drmatch_dr_fj()
	{
		if (not drmatch_dr_fj_isLoaded) {
			if (drmatch_dr_fj_branch != 0) {
				drmatch_dr_fj_branch->GetEntry(index);
			} else { 
				printf("branch drmatch_dr_fj_branch does not exist!\n");
				exit(1);
			}
			drmatch_dr_fj_isLoaded = true;
		}
		return *drmatch_dr_fj_;
	}
	const vector<vector<int> > &aa::label_trackjet_fj()
	{
		if (not label_trackjet_fj_isLoaded) {
			if (label_trackjet_fj_branch != 0) {
				label_trackjet_fj_branch->GetEntry(index);
			} else { 
				printf("branch label_trackjet_fj_branch does not exist!\n");
				exit(1);
			}
			label_trackjet_fj_isLoaded = true;
		}
		return *label_trackjet_fj_;
	}
	const vector<vector<bool> > &aa::btag_trackjet_fj()
	{
		if (not btag_trackjet_fj_isLoaded) {
			if (btag_trackjet_fj_branch != 0) {
				btag_trackjet_fj_branch->GetEntry(index);
			} else { 
				printf("branch btag_trackjet_fj_branch does not exist!\n");
				exit(1);
			}
			btag_trackjet_fj_isLoaded = true;
		}
		return *btag_trackjet_fj_;
	}
	const vector<int> &aa::ghost_tj_fj()
	{
		if (not ghost_tj_fj_isLoaded) {
			if (ghost_tj_fj_branch != 0) {
				ghost_tj_fj_branch->GetEntry(index);
			} else { 
				printf("branch ghost_tj_fj_branch does not exist!\n");
				exit(1);
			}
			ghost_tj_fj_isLoaded = true;
		}
		return *ghost_tj_fj_;
	}
	const vector<vector<float> > &aa::fj_dr_matched_trackjet_pt()
	{
		if (not fj_dr_matched_trackjet_pt_isLoaded) {
			if (fj_dr_matched_trackjet_pt_branch != 0) {
				fj_dr_matched_trackjet_pt_branch->GetEntry(index);
			} else { 
				printf("branch fj_dr_matched_trackjet_pt_branch does not exist!\n");
				exit(1);
			}
			fj_dr_matched_trackjet_pt_isLoaded = true;
		}
		return *fj_dr_matched_trackjet_pt_;
	}
	const vector<float> &aa::tj_pt_check()
	{
		if (not tj_pt_check_isLoaded) {
			if (tj_pt_check_branch != 0) {
				tj_pt_check_branch->GetEntry(index);
			} else { 
				printf("branch tj_pt_check_branch does not exist!\n");
				exit(1);
			}
			tj_pt_check_isLoaded = true;
		}
		return *tj_pt_check_;
	}
	const vector<float> &aa::caloCluster_pt()
	{
		if (not caloCluster_pt_isLoaded) {
			if (caloCluster_pt_branch != 0) {
				caloCluster_pt_branch->GetEntry(index);
			} else { 
				printf("branch caloCluster_pt_branch does not exist!\n");
				exit(1);
			}
			caloCluster_pt_isLoaded = true;
		}
		return *caloCluster_pt_;
	}
	const vector<float> &aa::caloCluster_px()
	{
		if (not caloCluster_px_isLoaded) {
			if (caloCluster_px_branch != 0) {
				caloCluster_px_branch->GetEntry(index);
			} else { 
				printf("branch caloCluster_px_branch does not exist!\n");
				exit(1);
			}
			caloCluster_px_isLoaded = true;
		}
		return *caloCluster_px_;
	}
	const vector<float> &aa::caloCluster_py()
	{
		if (not caloCluster_py_isLoaded) {
			if (caloCluster_py_branch != 0) {
				caloCluster_py_branch->GetEntry(index);
			} else { 
				printf("branch caloCluster_py_branch does not exist!\n");
				exit(1);
			}
			caloCluster_py_isLoaded = true;
		}
		return *caloCluster_py_;
	}
	const vector<float> &aa::caloCluster_pz()
	{
		if (not caloCluster_pz_isLoaded) {
			if (caloCluster_pz_branch != 0) {
				caloCluster_pz_branch->GetEntry(index);
			} else { 
				printf("branch caloCluster_pz_branch does not exist!\n");
				exit(1);
			}
			caloCluster_pz_isLoaded = true;
		}
		return *caloCluster_pz_;
	}
	const vector<float> &aa::caloCluster_E()
	{
		if (not caloCluster_E_isLoaded) {
			if (caloCluster_E_branch != 0) {
				caloCluster_E_branch->GetEntry(index);
			} else { 
				printf("branch caloCluster_E_branch does not exist!\n");
				exit(1);
			}
			caloCluster_E_isLoaded = true;
		}
		return *caloCluster_E_;
	}
	const vector<float> &aa::caloCluster_EM_PROBABILITY()
	{
		if (not caloCluster_EM_PROBABILITY_isLoaded) {
			if (caloCluster_EM_PROBABILITY_branch != 0) {
				caloCluster_EM_PROBABILITY_branch->GetEntry(index);
			} else { 
				printf("branch caloCluster_EM_PROBABILITY_branch does not exist!\n");
				exit(1);
			}
			caloCluster_EM_PROBABILITY_isLoaded = true;
		}
		return *caloCluster_EM_PROBABILITY_;
	}
	const vector<float> &aa::caloCluster_ENG_BAD_CELLS()
	{
		if (not caloCluster_ENG_BAD_CELLS_isLoaded) {
			if (caloCluster_ENG_BAD_CELLS_branch != 0) {
				caloCluster_ENG_BAD_CELLS_branch->GetEntry(index);
			} else { 
				printf("branch caloCluster_ENG_BAD_CELLS_branch does not exist!\n");
				exit(1);
			}
			caloCluster_ENG_BAD_CELLS_isLoaded = true;
		}
		return *caloCluster_ENG_BAD_CELLS_;
	}
	const vector<float> &aa::caloCluster_ENG_FRAC_MAX()
	{
		if (not caloCluster_ENG_FRAC_MAX_isLoaded) {
			if (caloCluster_ENG_FRAC_MAX_branch != 0) {
				caloCluster_ENG_FRAC_MAX_branch->GetEntry(index);
			} else { 
				printf("branch caloCluster_ENG_FRAC_MAX_branch does not exist!\n");
				exit(1);
			}
			caloCluster_ENG_FRAC_MAX_isLoaded = true;
		}
		return *caloCluster_ENG_FRAC_MAX_;
	}
	const vector<float> &aa::caloCluster_ENG_POS()
	{
		if (not caloCluster_ENG_POS_isLoaded) {
			if (caloCluster_ENG_POS_branch != 0) {
				caloCluster_ENG_POS_branch->GetEntry(index);
			} else { 
				printf("branch caloCluster_ENG_POS_branch does not exist!\n");
				exit(1);
			}
			caloCluster_ENG_POS_isLoaded = true;
		}
		return *caloCluster_ENG_POS_;
	}
	const vector<float> &aa::caloCluster_FIRST_ENG_DES()
	{
		if (not caloCluster_FIRST_ENG_DES_isLoaded) {
			if (caloCluster_FIRST_ENG_DES_branch != 0) {
				caloCluster_FIRST_ENG_DES_branch->GetEntry(index);
			} else { 
				printf("branch caloCluster_FIRST_ENG_DES_branch does not exist!\n");
				exit(1);
			}
			caloCluster_FIRST_ENG_DES_isLoaded = true;
		}
		return *caloCluster_FIRST_ENG_DES_;
	}
	const vector<float> &aa::caloCluster_ISOLATION()
	{
		if (not caloCluster_ISOLATION_isLoaded) {
			if (caloCluster_ISOLATION_branch != 0) {
				caloCluster_ISOLATION_branch->GetEntry(index);
			} else { 
				printf("branch caloCluster_ISOLATION_branch does not exist!\n");
				exit(1);
			}
			caloCluster_ISOLATION_isLoaded = true;
		}
		return *caloCluster_ISOLATION_;
	}
	const vector<float> &aa::caloCluster_LATERAL()
	{
		if (not caloCluster_LATERAL_isLoaded) {
			if (caloCluster_LATERAL_branch != 0) {
				caloCluster_LATERAL_branch->GetEntry(index);
			} else { 
				printf("branch caloCluster_LATERAL_branch does not exist!\n");
				exit(1);
			}
			caloCluster_LATERAL_isLoaded = true;
		}
		return *caloCluster_LATERAL_;
	}
	const vector<float> &aa::caloCluster_LONGITUDINAL()
	{
		if (not caloCluster_LONGITUDINAL_isLoaded) {
			if (caloCluster_LONGITUDINAL_branch != 0) {
				caloCluster_LONGITUDINAL_branch->GetEntry(index);
			} else { 
				printf("branch caloCluster_LONGITUDINAL_branch does not exist!\n");
				exit(1);
			}
			caloCluster_LONGITUDINAL_isLoaded = true;
		}
		return *caloCluster_LONGITUDINAL_;
	}
	const vector<float> &aa::caloCluster_N_BAD_CELLS()
	{
		if (not caloCluster_N_BAD_CELLS_isLoaded) {
			if (caloCluster_N_BAD_CELLS_branch != 0) {
				caloCluster_N_BAD_CELLS_branch->GetEntry(index);
			} else { 
				printf("branch caloCluster_N_BAD_CELLS_branch does not exist!\n");
				exit(1);
			}
			caloCluster_N_BAD_CELLS_isLoaded = true;
		}
		return *caloCluster_N_BAD_CELLS_;
	}
	const vector<float> &aa::caloCluster_SECOND_LAMBDA()
	{
		if (not caloCluster_SECOND_LAMBDA_isLoaded) {
			if (caloCluster_SECOND_LAMBDA_branch != 0) {
				caloCluster_SECOND_LAMBDA_branch->GetEntry(index);
			} else { 
				printf("branch caloCluster_SECOND_LAMBDA_branch does not exist!\n");
				exit(1);
			}
			caloCluster_SECOND_LAMBDA_isLoaded = true;
		}
		return *caloCluster_SECOND_LAMBDA_;
	}
	const vector<float> &aa::caloCluster_SECOND_R()
	{
		if (not caloCluster_SECOND_R_isLoaded) {
			if (caloCluster_SECOND_R_branch != 0) {
				caloCluster_SECOND_R_branch->GetEntry(index);
			} else { 
				printf("branch caloCluster_SECOND_R_branch does not exist!\n");
				exit(1);
			}
			caloCluster_SECOND_R_isLoaded = true;
		}
		return *caloCluster_SECOND_R_;
	}
	const vector<float> &aa::caloCluster_SIGNIFICANCE()
	{
		if (not caloCluster_SIGNIFICANCE_isLoaded) {
			if (caloCluster_SIGNIFICANCE_branch != 0) {
				caloCluster_SIGNIFICANCE_branch->GetEntry(index);
			} else { 
				printf("branch caloCluster_SIGNIFICANCE_branch does not exist!\n");
				exit(1);
			}
			caloCluster_SIGNIFICANCE_isLoaded = true;
		}
		return *caloCluster_SIGNIFICANCE_;
	}
	const vector<float> &aa::caloCluster_altE()
	{
		if (not caloCluster_altE_isLoaded) {
			if (caloCluster_altE_branch != 0) {
				caloCluster_altE_branch->GetEntry(index);
			} else { 
				printf("branch caloCluster_altE_branch does not exist!\n");
				exit(1);
			}
			caloCluster_altE_isLoaded = true;
		}
		return *caloCluster_altE_;
	}
	const vector<float> &aa::caloCluster_altEta()
	{
		if (not caloCluster_altEta_isLoaded) {
			if (caloCluster_altEta_branch != 0) {
				caloCluster_altEta_branch->GetEntry(index);
			} else { 
				printf("branch caloCluster_altEta_branch does not exist!\n");
				exit(1);
			}
			caloCluster_altEta_isLoaded = true;
		}
		return *caloCluster_altEta_;
	}
	const vector<float> &aa::caloCluster_altM()
	{
		if (not caloCluster_altM_isLoaded) {
			if (caloCluster_altM_branch != 0) {
				caloCluster_altM_branch->GetEntry(index);
			} else { 
				printf("branch caloCluster_altM_branch does not exist!\n");
				exit(1);
			}
			caloCluster_altM_isLoaded = true;
		}
		return *caloCluster_altM_;
	}
	const vector<float> &aa::caloCluster_altPhi()
	{
		if (not caloCluster_altPhi_isLoaded) {
			if (caloCluster_altPhi_branch != 0) {
				caloCluster_altPhi_branch->GetEntry(index);
			} else { 
				printf("branch caloCluster_altPhi_branch does not exist!\n");
				exit(1);
			}
			caloCluster_altPhi_isLoaded = true;
		}
		return *caloCluster_altPhi_;
	}
	const vector<float> &aa::caloCluster_calE()
	{
		if (not caloCluster_calE_isLoaded) {
			if (caloCluster_calE_branch != 0) {
				caloCluster_calE_branch->GetEntry(index);
			} else { 
				printf("branch caloCluster_calE_branch does not exist!\n");
				exit(1);
			}
			caloCluster_calE_isLoaded = true;
		}
		return *caloCluster_calE_;
	}
	const vector<float> &aa::caloCluster_calEta()
	{
		if (not caloCluster_calEta_isLoaded) {
			if (caloCluster_calEta_branch != 0) {
				caloCluster_calEta_branch->GetEntry(index);
			} else { 
				printf("branch caloCluster_calEta_branch does not exist!\n");
				exit(1);
			}
			caloCluster_calEta_isLoaded = true;
		}
		return *caloCluster_calEta_;
	}
	const vector<float> &aa::caloCluster_calM()
	{
		if (not caloCluster_calM_isLoaded) {
			if (caloCluster_calM_branch != 0) {
				caloCluster_calM_branch->GetEntry(index);
			} else { 
				printf("branch caloCluster_calM_branch does not exist!\n");
				exit(1);
			}
			caloCluster_calM_isLoaded = true;
		}
		return *caloCluster_calM_;
	}
	const vector<float> &aa::caloCluster_calPhi()
	{
		if (not caloCluster_calPhi_isLoaded) {
			if (caloCluster_calPhi_branch != 0) {
				caloCluster_calPhi_branch->GetEntry(index);
			} else { 
				printf("branch caloCluster_calPhi_branch does not exist!\n");
				exit(1);
			}
			caloCluster_calPhi_isLoaded = true;
		}
		return *caloCluster_calPhi_;
	}
	const vector<unsigned int> &aa::caloCluster_clusterSize()
	{
		if (not caloCluster_clusterSize_isLoaded) {
			if (caloCluster_clusterSize_branch != 0) {
				caloCluster_clusterSize_branch->GetEntry(index);
			} else { 
				printf("branch caloCluster_clusterSize_branch does not exist!\n");
				exit(1);
			}
			caloCluster_clusterSize_isLoaded = true;
		}
		return *caloCluster_clusterSize_;
	}
	const vector<float> &aa::caloCluster_rawE()
	{
		if (not caloCluster_rawE_isLoaded) {
			if (caloCluster_rawE_branch != 0) {
				caloCluster_rawE_branch->GetEntry(index);
			} else { 
				printf("branch caloCluster_rawE_branch does not exist!\n");
				exit(1);
			}
			caloCluster_rawE_isLoaded = true;
		}
		return *caloCluster_rawE_;
	}
	const vector<float> &aa::caloCluster_rawEta()
	{
		if (not caloCluster_rawEta_isLoaded) {
			if (caloCluster_rawEta_branch != 0) {
				caloCluster_rawEta_branch->GetEntry(index);
			} else { 
				printf("branch caloCluster_rawEta_branch does not exist!\n");
				exit(1);
			}
			caloCluster_rawEta_isLoaded = true;
		}
		return *caloCluster_rawEta_;
	}
	const vector<float> &aa::caloCluster_rawM()
	{
		if (not caloCluster_rawM_isLoaded) {
			if (caloCluster_rawM_branch != 0) {
				caloCluster_rawM_branch->GetEntry(index);
			} else { 
				printf("branch caloCluster_rawM_branch does not exist!\n");
				exit(1);
			}
			caloCluster_rawM_isLoaded = true;
		}
		return *caloCluster_rawM_;
	}
	const vector<float> &aa::caloCluster_rawPhi()
	{
		if (not caloCluster_rawPhi_isLoaded) {
			if (caloCluster_rawPhi_branch != 0) {
				caloCluster_rawPhi_branch->GetEntry(index);
			} else { 
				printf("branch caloCluster_rawPhi_branch does not exist!\n");
				exit(1);
			}
			caloCluster_rawPhi_isLoaded = true;
		}
		return *caloCluster_rawPhi_;
	}
	const vector<float> &aa::caloCluster_time()
	{
		if (not caloCluster_time_isLoaded) {
			if (caloCluster_time_branch != 0) {
				caloCluster_time_branch->GetEntry(index);
			} else { 
				printf("branch caloCluster_time_branch does not exist!\n");
				exit(1);
			}
			caloCluster_time_isLoaded = true;
		}
		return *caloCluster_time_;
	}
	const vector<float> &aa::caloCluster_AVG_LAR_Q()
	{
		if (not caloCluster_AVG_LAR_Q_isLoaded) {
			if (caloCluster_AVG_LAR_Q_branch != 0) {
				caloCluster_AVG_LAR_Q_branch->GetEntry(index);
			} else { 
				printf("branch caloCluster_AVG_LAR_Q_branch does not exist!\n");
				exit(1);
			}
			caloCluster_AVG_LAR_Q_isLoaded = true;
		}
		return *caloCluster_AVG_LAR_Q_;
	}
	const vector<float> &aa::caloCluster_AVG_TILE_Q()
	{
		if (not caloCluster_AVG_TILE_Q_isLoaded) {
			if (caloCluster_AVG_TILE_Q_branch != 0) {
				caloCluster_AVG_TILE_Q_branch->GetEntry(index);
			} else { 
				printf("branch caloCluster_AVG_TILE_Q_branch does not exist!\n");
				exit(1);
			}
			caloCluster_AVG_TILE_Q_isLoaded = true;
		}
		return *caloCluster_AVG_TILE_Q_;
	}
	const vector<float> &aa::caloCluster_BADLARQ()
	{
		if (not caloCluster_BADLARQ_isLoaded) {
			if (caloCluster_BADLARQ_branch != 0) {
				caloCluster_BADLARQ_branch->GetEntry(index);
			} else { 
				printf("branch caloCluster_BADLARQ_branch does not exist!\n");
				exit(1);
			}
			caloCluster_BADLARQ_isLoaded = true;
		}
		return *caloCluster_BADLARQ_;
	}
	const vector<float> &aa::caloCluster_CELL_SIGNIFICANCE()
	{
		if (not caloCluster_CELL_SIGNIFICANCE_isLoaded) {
			if (caloCluster_CELL_SIGNIFICANCE_branch != 0) {
				caloCluster_CELL_SIGNIFICANCE_branch->GetEntry(index);
			} else { 
				printf("branch caloCluster_CELL_SIGNIFICANCE_branch does not exist!\n");
				exit(1);
			}
			caloCluster_CELL_SIGNIFICANCE_isLoaded = true;
		}
		return *caloCluster_CELL_SIGNIFICANCE_;
	}
	const vector<float> &aa::caloCluster_CELL_SIG_SAMPLING()
	{
		if (not caloCluster_CELL_SIG_SAMPLING_isLoaded) {
			if (caloCluster_CELL_SIG_SAMPLING_branch != 0) {
				caloCluster_CELL_SIG_SAMPLING_branch->GetEntry(index);
			} else { 
				printf("branch caloCluster_CELL_SIG_SAMPLING_branch does not exist!\n");
				exit(1);
			}
			caloCluster_CELL_SIG_SAMPLING_isLoaded = true;
		}
		return *caloCluster_CELL_SIG_SAMPLING_;
	}
	const vector<float> &aa::caloCluster_CENTER_LAMBDA()
	{
		if (not caloCluster_CENTER_LAMBDA_isLoaded) {
			if (caloCluster_CENTER_LAMBDA_branch != 0) {
				caloCluster_CENTER_LAMBDA_branch->GetEntry(index);
			} else { 
				printf("branch caloCluster_CENTER_LAMBDA_branch does not exist!\n");
				exit(1);
			}
			caloCluster_CENTER_LAMBDA_isLoaded = true;
		}
		return *caloCluster_CENTER_LAMBDA_;
	}
	const vector<float> &aa::caloCluster_CENTER_MAG()
	{
		if (not caloCluster_CENTER_MAG_isLoaded) {
			if (caloCluster_CENTER_MAG_branch != 0) {
				caloCluster_CENTER_MAG_branch->GetEntry(index);
			} else { 
				printf("branch caloCluster_CENTER_MAG_branch does not exist!\n");
				exit(1);
			}
			caloCluster_CENTER_MAG_isLoaded = true;
		}
		return *caloCluster_CENTER_MAG_;
	}
	const vector<float> &aa::track_pt()
	{
		if (not track_pt_isLoaded) {
			if (track_pt_branch != 0) {
				track_pt_branch->GetEntry(index);
			} else { 
				printf("branch track_pt_branch does not exist!\n");
				exit(1);
			}
			track_pt_isLoaded = true;
		}
		return *track_pt_;
	}
	const vector<float> &aa::track_px()
	{
		if (not track_px_isLoaded) {
			if (track_px_branch != 0) {
				track_px_branch->GetEntry(index);
			} else { 
				printf("branch track_px_branch does not exist!\n");
				exit(1);
			}
			track_px_isLoaded = true;
		}
		return *track_px_;
	}
	const vector<float> &aa::track_py()
	{
		if (not track_py_isLoaded) {
			if (track_py_branch != 0) {
				track_py_branch->GetEntry(index);
			} else { 
				printf("branch track_py_branch does not exist!\n");
				exit(1);
			}
			track_py_isLoaded = true;
		}
		return *track_py_;
	}
	const vector<float> &aa::track_pz()
	{
		if (not track_pz_isLoaded) {
			if (track_pz_branch != 0) {
				track_pz_branch->GetEntry(index);
			} else { 
				printf("branch track_pz_branch does not exist!\n");
				exit(1);
			}
			track_pz_isLoaded = true;
		}
		return *track_pz_;
	}
	const vector<float> &aa::track_E()
	{
		if (not track_E_isLoaded) {
			if (track_E_branch != 0) {
				track_E_branch->GetEntry(index);
			} else { 
				printf("branch track_E_branch does not exist!\n");
				exit(1);
			}
			track_E_isLoaded = true;
		}
		return *track_E_;
	}
	const vector<float> &aa::track_vz()
	{
		if (not track_vz_isLoaded) {
			if (track_vz_branch != 0) {
				track_vz_branch->GetEntry(index);
			} else { 
				printf("branch track_vz_branch does not exist!\n");
				exit(1);
			}
			track_vz_isLoaded = true;
		}
		return *track_vz_;
	}
	const vector<float> &aa::track_z0()
	{
		if (not track_z0_isLoaded) {
			if (track_z0_branch != 0) {
				track_z0_branch->GetEntry(index);
			} else { 
				printf("branch track_z0_branch does not exist!\n");
				exit(1);
			}
			track_z0_isLoaded = true;
		}
		return *track_z0_;
	}
	const vector<float> &aa::track_phi()
	{
		if (not track_phi_isLoaded) {
			if (track_phi_branch != 0) {
				track_phi_branch->GetEntry(index);
			} else { 
				printf("branch track_phi_branch does not exist!\n");
				exit(1);
			}
			track_phi_isLoaded = true;
		}
		return *track_phi_;
	}
	const vector<unsigned char> &aa::track_expectInnermostPixelLayerHit()
	{
		if (not track_expectInnermostPixelLayerHit_isLoaded) {
			if (track_expectInnermostPixelLayerHit_branch != 0) {
				track_expectInnermostPixelLayerHit_branch->GetEntry(index);
			} else { 
				printf("branch track_expectInnermostPixelLayerHit_branch does not exist!\n");
				exit(1);
			}
			track_expectInnermostPixelLayerHit_isLoaded = true;
		}
		return *track_expectInnermostPixelLayerHit_;
	}
	const vector<unsigned char> &aa::track_expectNextToInnermostPixelLayerHit()
	{
		if (not track_expectNextToInnermostPixelLayerHit_isLoaded) {
			if (track_expectNextToInnermostPixelLayerHit_branch != 0) {
				track_expectNextToInnermostPixelLayerHit_branch->GetEntry(index);
			} else { 
				printf("branch track_expectNextToInnermostPixelLayerHit_branch does not exist!\n");
				exit(1);
			}
			track_expectNextToInnermostPixelLayerHit_isLoaded = true;
		}
		return *track_expectNextToInnermostPixelLayerHit_;
	}
	const vector<unsigned char> &aa::track_numberOfInnermostPixelLayerHits()
	{
		if (not track_numberOfInnermostPixelLayerHits_isLoaded) {
			if (track_numberOfInnermostPixelLayerHits_branch != 0) {
				track_numberOfInnermostPixelLayerHits_branch->GetEntry(index);
			} else { 
				printf("branch track_numberOfInnermostPixelLayerHits_branch does not exist!\n");
				exit(1);
			}
			track_numberOfInnermostPixelLayerHits_isLoaded = true;
		}
		return *track_numberOfInnermostPixelLayerHits_;
	}
	const vector<unsigned char> &aa::track_numberOfNextToInnermostPixelLayerHits()
	{
		if (not track_numberOfNextToInnermostPixelLayerHits_isLoaded) {
			if (track_numberOfNextToInnermostPixelLayerHits_branch != 0) {
				track_numberOfNextToInnermostPixelLayerHits_branch->GetEntry(index);
			} else { 
				printf("branch track_numberOfNextToInnermostPixelLayerHits_branch does not exist!\n");
				exit(1);
			}
			track_numberOfNextToInnermostPixelLayerHits_isLoaded = true;
		}
		return *track_numberOfNextToInnermostPixelLayerHits_;
	}
	const vector<float> &aa::track_chiSquared()
	{
		if (not track_chiSquared_isLoaded) {
			if (track_chiSquared_branch != 0) {
				track_chiSquared_branch->GetEntry(index);
			} else { 
				printf("branch track_chiSquared_branch does not exist!\n");
				exit(1);
			}
			track_chiSquared_isLoaded = true;
		}
		return *track_chiSquared_;
	}
	const vector<float> &aa::track_d0()
	{
		if (not track_d0_isLoaded) {
			if (track_d0_branch != 0) {
				track_d0_branch->GetEntry(index);
			} else { 
				printf("branch track_d0_branch does not exist!\n");
				exit(1);
			}
			track_d0_isLoaded = true;
		}
		return *track_d0_;
	}
	const vector<unsigned char> &aa::track_numberOfPixelSharedHits()
	{
		if (not track_numberOfPixelSharedHits_isLoaded) {
			if (track_numberOfPixelSharedHits_branch != 0) {
				track_numberOfPixelSharedHits_branch->GetEntry(index);
			} else { 
				printf("branch track_numberOfPixelSharedHits_branch does not exist!\n");
				exit(1);
			}
			track_numberOfPixelSharedHits_isLoaded = true;
		}
		return *track_numberOfPixelSharedHits_;
	}
	const vector<float> &aa::track_numberDoF()
	{
		if (not track_numberDoF_isLoaded) {
			if (track_numberDoF_branch != 0) {
				track_numberDoF_branch->GetEntry(index);
			} else { 
				printf("branch track_numberDoF_branch does not exist!\n");
				exit(1);
			}
			track_numberDoF_isLoaded = true;
		}
		return *track_numberDoF_;
	}
	const vector<unsigned char> &aa::track_numberOfSCTSharedHits()
	{
		if (not track_numberOfSCTSharedHits_isLoaded) {
			if (track_numberOfSCTSharedHits_branch != 0) {
				track_numberOfSCTSharedHits_branch->GetEntry(index);
			} else { 
				printf("branch track_numberOfSCTSharedHits_branch does not exist!\n");
				exit(1);
			}
			track_numberOfSCTSharedHits_isLoaded = true;
		}
		return *track_numberOfSCTSharedHits_;
	}
	const vector<unsigned char> &aa::track_numberOfPhiHoleLayers()
	{
		if (not track_numberOfPhiHoleLayers_isLoaded) {
			if (track_numberOfPhiHoleLayers_branch != 0) {
				track_numberOfPhiHoleLayers_branch->GetEntry(index);
			} else { 
				printf("branch track_numberOfPhiHoleLayers_branch does not exist!\n");
				exit(1);
			}
			track_numberOfPhiHoleLayers_isLoaded = true;
		}
		return *track_numberOfPhiHoleLayers_;
	}
	const vector<unsigned char> &aa::track_numberOfPhiLayers()
	{
		if (not track_numberOfPhiLayers_isLoaded) {
			if (track_numberOfPhiLayers_branch != 0) {
				track_numberOfPhiLayers_branch->GetEntry(index);
			} else { 
				printf("branch track_numberOfPhiLayers_branch does not exist!\n");
				exit(1);
			}
			track_numberOfPhiLayers_isLoaded = true;
		}
		return *track_numberOfPhiLayers_;
	}
	const vector<unsigned char> &aa::track_numberOfPixelDeadSensors()
	{
		if (not track_numberOfPixelDeadSensors_isLoaded) {
			if (track_numberOfPixelDeadSensors_branch != 0) {
				track_numberOfPixelDeadSensors_branch->GetEntry(index);
			} else { 
				printf("branch track_numberOfPixelDeadSensors_branch does not exist!\n");
				exit(1);
			}
			track_numberOfPixelDeadSensors_isLoaded = true;
		}
		return *track_numberOfPixelDeadSensors_;
	}
	const vector<unsigned char> &aa::track_numberOfPixelHits()
	{
		if (not track_numberOfPixelHits_isLoaded) {
			if (track_numberOfPixelHits_branch != 0) {
				track_numberOfPixelHits_branch->GetEntry(index);
			} else { 
				printf("branch track_numberOfPixelHits_branch does not exist!\n");
				exit(1);
			}
			track_numberOfPixelHits_isLoaded = true;
		}
		return *track_numberOfPixelHits_;
	}
	const vector<unsigned char> &aa::track_numberOfPrecisionLayers()
	{
		if (not track_numberOfPrecisionLayers_isLoaded) {
			if (track_numberOfPrecisionLayers_branch != 0) {
				track_numberOfPrecisionLayers_branch->GetEntry(index);
			} else { 
				printf("branch track_numberOfPrecisionLayers_branch does not exist!\n");
				exit(1);
			}
			track_numberOfPrecisionLayers_isLoaded = true;
		}
		return *track_numberOfPrecisionLayers_;
	}
	const vector<unsigned char> &aa::track_numberOfSCTDeadSensors()
	{
		if (not track_numberOfSCTDeadSensors_isLoaded) {
			if (track_numberOfSCTDeadSensors_branch != 0) {
				track_numberOfSCTDeadSensors_branch->GetEntry(index);
			} else { 
				printf("branch track_numberOfSCTDeadSensors_branch does not exist!\n");
				exit(1);
			}
			track_numberOfSCTDeadSensors_isLoaded = true;
		}
		return *track_numberOfSCTDeadSensors_;
	}
	const vector<unsigned char> &aa::track_numberOfSCTHits()
	{
		if (not track_numberOfSCTHits_isLoaded) {
			if (track_numberOfSCTHits_branch != 0) {
				track_numberOfSCTHits_branch->GetEntry(index);
			} else { 
				printf("branch track_numberOfSCTHits_branch does not exist!\n");
				exit(1);
			}
			track_numberOfSCTHits_isLoaded = true;
		}
		return *track_numberOfSCTHits_;
	}
	const vector<unsigned char> &aa::track_numberOfSCTHoles()
	{
		if (not track_numberOfSCTHoles_isLoaded) {
			if (track_numberOfSCTHoles_branch != 0) {
				track_numberOfSCTHoles_branch->GetEntry(index);
			} else { 
				printf("branch track_numberOfSCTHoles_branch does not exist!\n");
				exit(1);
			}
			track_numberOfSCTHoles_isLoaded = true;
		}
		return *track_numberOfSCTHoles_;
	}
	const vector<unsigned char> &aa::track_numberOfTRTHits()
	{
		if (not track_numberOfTRTHits_isLoaded) {
			if (track_numberOfTRTHits_branch != 0) {
				track_numberOfTRTHits_branch->GetEntry(index);
			} else { 
				printf("branch track_numberOfTRTHits_branch does not exist!\n");
				exit(1);
			}
			track_numberOfTRTHits_isLoaded = true;
		}
		return *track_numberOfTRTHits_;
	}
	const vector<unsigned char> &aa::track_numberOfTRTOutliers()
	{
		if (not track_numberOfTRTOutliers_isLoaded) {
			if (track_numberOfTRTOutliers_branch != 0) {
				track_numberOfTRTOutliers_branch->GetEntry(index);
			} else { 
				printf("branch track_numberOfTRTOutliers_branch does not exist!\n");
				exit(1);
			}
			track_numberOfTRTOutliers_isLoaded = true;
		}
		return *track_numberOfTRTOutliers_;
	}
	const vector<float> &aa::track_qOverp()
	{
		if (not track_qOverp_isLoaded) {
			if (track_qOverp_branch != 0) {
				track_qOverp_branch->GetEntry(index);
			} else { 
				printf("branch track_qOverp_branch does not exist!\n");
				exit(1);
			}
			track_qOverp_isLoaded = true;
		}
		return *track_qOverp_;
	}
	const vector<float> &aa::track_theta()
	{
		if (not track_theta_isLoaded) {
			if (track_theta_branch != 0) {
				track_theta_branch->GetEntry(index);
			} else { 
				printf("branch track_theta_branch does not exist!\n");
				exit(1);
			}
			track_theta_isLoaded = true;
		}
		return *track_theta_;
	}
	const vector<float> &aa::track_vertex_x()
	{
		if (not track_vertex_x_isLoaded) {
			if (track_vertex_x_branch != 0) {
				track_vertex_x_branch->GetEntry(index);
			} else { 
				printf("branch track_vertex_x_branch does not exist!\n");
				exit(1);
			}
			track_vertex_x_isLoaded = true;
		}
		return *track_vertex_x_;
	}
	const vector<float> &aa::track_vertex_y()
	{
		if (not track_vertex_y_isLoaded) {
			if (track_vertex_y_branch != 0) {
				track_vertex_y_branch->GetEntry(index);
			} else { 
				printf("branch track_vertex_y_branch does not exist!\n");
				exit(1);
			}
			track_vertex_y_isLoaded = true;
		}
		return *track_vertex_y_;
	}
	const vector<float> &aa::track_vertex_z()
	{
		if (not track_vertex_z_isLoaded) {
			if (track_vertex_z_branch != 0) {
				track_vertex_z_branch->GetEntry(index);
			} else { 
				printf("branch track_vertex_z_branch does not exist!\n");
				exit(1);
			}
			track_vertex_z_isLoaded = true;
		}
		return *track_vertex_z_;
	}
	const vector<short> &aa::track_vertex_type()
	{
		if (not track_vertex_type_isLoaded) {
			if (track_vertex_type_branch != 0) {
				track_vertex_type_branch->GetEntry(index);
			} else { 
				printf("branch track_vertex_type_branch does not exist!\n");
				exit(1);
			}
			track_vertex_type_isLoaded = true;
		}
		return *track_vertex_type_;
	}
	const vector<float> &aa::primary_vertex_x()
	{
		if (not primary_vertex_x_isLoaded) {
			if (primary_vertex_x_branch != 0) {
				primary_vertex_x_branch->GetEntry(index);
			} else { 
				printf("branch primary_vertex_x_branch does not exist!\n");
				exit(1);
			}
			primary_vertex_x_isLoaded = true;
		}
		return *primary_vertex_x_;
	}
	const vector<float> &aa::primary_vertex_y()
	{
		if (not primary_vertex_y_isLoaded) {
			if (primary_vertex_y_branch != 0) {
				primary_vertex_y_branch->GetEntry(index);
			} else { 
				printf("branch primary_vertex_y_branch does not exist!\n");
				exit(1);
			}
			primary_vertex_y_isLoaded = true;
		}
		return *primary_vertex_y_;
	}
	const vector<float> &aa::primary_vertex_z()
	{
		if (not primary_vertex_z_isLoaded) {
			if (primary_vertex_z_branch != 0) {
				primary_vertex_z_branch->GetEntry(index);
			} else { 
				printf("branch primary_vertex_z_branch does not exist!\n");
				exit(1);
			}
			primary_vertex_z_isLoaded = true;
		}
		return *primary_vertex_z_;
	}
	const vector<short> &aa::primary_vertex_type()
	{
		if (not primary_vertex_type_isLoaded) {
			if (primary_vertex_type_branch != 0) {
				primary_vertex_type_branch->GetEntry(index);
			} else { 
				printf("branch primary_vertex_type_branch does not exist!\n");
				exit(1);
			}
			primary_vertex_type_isLoaded = true;
		}
		return *primary_vertex_type_;
	}
	const vector<float> &aa::a_pt()
	{
		if (not a_pt_isLoaded) {
			if (a_pt_branch != 0) {
				a_pt_branch->GetEntry(index);
			} else { 
				printf("branch a_pt_branch does not exist!\n");
				exit(1);
			}
			a_pt_isLoaded = true;
		}
		return *a_pt_;
	}
	const vector<float> &aa::mc_pt()
	{
		if (not mc_pt_isLoaded) {
			if (mc_pt_branch != 0) {
				mc_pt_branch->GetEntry(index);
			} else { 
				printf("branch mc_pt_branch does not exist!\n");
				exit(1);
			}
			mc_pt_isLoaded = true;
		}
		return *mc_pt_;
	}
	const vector<float> &aa::mc_eta()
	{
		if (not mc_eta_isLoaded) {
			if (mc_eta_branch != 0) {
				mc_eta_branch->GetEntry(index);
			} else { 
				printf("branch mc_eta_branch does not exist!\n");
				exit(1);
			}
			mc_eta_isLoaded = true;
		}
		return *mc_eta_;
	}
	const vector<float> &aa::mc_phi()
	{
		if (not mc_phi_isLoaded) {
			if (mc_phi_branch != 0) {
				mc_phi_branch->GetEntry(index);
			} else { 
				printf("branch mc_phi_branch does not exist!\n");
				exit(1);
			}
			mc_phi_isLoaded = true;
		}
		return *mc_phi_;
	}
	const vector<float> &aa::mc_e()
	{
		if (not mc_e_isLoaded) {
			if (mc_e_branch != 0) {
				mc_e_branch->GetEntry(index);
			} else { 
				printf("branch mc_e_branch does not exist!\n");
				exit(1);
			}
			mc_e_isLoaded = true;
		}
		return *mc_e_;
	}
	const vector<int> &aa::mc_pdgId()
	{
		if (not mc_pdgId_isLoaded) {
			if (mc_pdgId_branch != 0) {
				mc_pdgId_branch->GetEntry(index);
			} else { 
				printf("branch mc_pdgId_branch does not exist!\n");
				exit(1);
			}
			mc_pdgId_isLoaded = true;
		}
		return *mc_pdgId_;
	}
	const vector<int> &aa::mc_status()
	{
		if (not mc_status_isLoaded) {
			if (mc_status_branch != 0) {
				mc_status_branch->GetEntry(index);
			} else { 
				printf("branch mc_status_branch does not exist!\n");
				exit(1);
			}
			mc_status_isLoaded = true;
		}
		return *mc_status_;
	}

  void aa::progress( int nEventsTotal, int nEventsChain ){
    int period = 1000;
    if(nEventsTotal%1000 == 0) {
      // xterm magic from L. Vacavant and A. Cerri
      if (isatty(1)) {
        if( ( nEventsChain - nEventsTotal ) > period ){
          float frac = (float)nEventsTotal/(nEventsChain*0.01);
          printf("\015\033[32m ---> \033[1m\033[31m%4.1f%%"
               "\033[0m\033[32m <---\033[0m\015", frac);
          fflush(stdout);
        }
        else {
          printf("\015\033[32m ---> \033[1m\033[31m%4.1f%%"
                 "\033[0m\033[32m <---\033[0m\015", 100.);
          cout << endl;
        }
      }
    }
  }
  
namespace tas {
	const float &weight_mc() { return events.weight_mc(); }
	const float &weight_pileup() { return events.weight_pileup(); }
	const float &weight_leptonSF() { return events.weight_leptonSF(); }
	const float &weight_bTagSF() { return events.weight_bTagSF(); }
	const float &weight_leptonSF_EL_SF_Trigger_UP() { return events.weight_leptonSF_EL_SF_Trigger_UP(); }
	const float &weight_leptonSF_EL_SF_Trigger_DOWN() { return events.weight_leptonSF_EL_SF_Trigger_DOWN(); }
	const float &weight_leptonSF_EL_SF_Reco_UP() { return events.weight_leptonSF_EL_SF_Reco_UP(); }
	const float &weight_leptonSF_EL_SF_Reco_DOWN() { return events.weight_leptonSF_EL_SF_Reco_DOWN(); }
	const float &weight_leptonSF_EL_SF_ID_UP() { return events.weight_leptonSF_EL_SF_ID_UP(); }
	const float &weight_leptonSF_EL_SF_ID_DOWN() { return events.weight_leptonSF_EL_SF_ID_DOWN(); }
	const float &weight_leptonSF_EL_SF_Isol_UP() { return events.weight_leptonSF_EL_SF_Isol_UP(); }
	const float &weight_leptonSF_EL_SF_Isol_DOWN() { return events.weight_leptonSF_EL_SF_Isol_DOWN(); }
	const float &weight_leptonSF_MU_SF_Trigger_STAT_UP() { return events.weight_leptonSF_MU_SF_Trigger_STAT_UP(); }
	const float &weight_leptonSF_MU_SF_Trigger_STAT_DOWN() { return events.weight_leptonSF_MU_SF_Trigger_STAT_DOWN(); }
	const float &weight_leptonSF_MU_SF_Trigger_SYST_UP() { return events.weight_leptonSF_MU_SF_Trigger_SYST_UP(); }
	const float &weight_leptonSF_MU_SF_Trigger_SYST_DOWN() { return events.weight_leptonSF_MU_SF_Trigger_SYST_DOWN(); }
	const float &weight_leptonSF_MU_SF_ID_STAT_UP() { return events.weight_leptonSF_MU_SF_ID_STAT_UP(); }
	const float &weight_leptonSF_MU_SF_ID_STAT_DOWN() { return events.weight_leptonSF_MU_SF_ID_STAT_DOWN(); }
	const float &weight_leptonSF_MU_SF_ID_SYST_UP() { return events.weight_leptonSF_MU_SF_ID_SYST_UP(); }
	const float &weight_leptonSF_MU_SF_ID_SYST_DOWN() { return events.weight_leptonSF_MU_SF_ID_SYST_DOWN(); }
	const float &weight_leptonSF_MU_SF_Isol_UP() { return events.weight_leptonSF_MU_SF_Isol_UP(); }
	const float &weight_leptonSF_MU_SF_Isol_DOWN() { return events.weight_leptonSF_MU_SF_Isol_DOWN(); }
	const float &weight_indiv_SF_EL_Trigger() { return events.weight_indiv_SF_EL_Trigger(); }
	const float &weight_indiv_SF_EL_Trigger_UP() { return events.weight_indiv_SF_EL_Trigger_UP(); }
	const float &weight_indiv_SF_EL_Trigger_DOWN() { return events.weight_indiv_SF_EL_Trigger_DOWN(); }
	const float &weight_indiv_SF_EL_Reco() { return events.weight_indiv_SF_EL_Reco(); }
	const float &weight_indiv_SF_EL_Reco_UP() { return events.weight_indiv_SF_EL_Reco_UP(); }
	const float &weight_indiv_SF_EL_Reco_DOWN() { return events.weight_indiv_SF_EL_Reco_DOWN(); }
	const float &weight_indiv_SF_EL_ID() { return events.weight_indiv_SF_EL_ID(); }
	const float &weight_indiv_SF_EL_ID_UP() { return events.weight_indiv_SF_EL_ID_UP(); }
	const float &weight_indiv_SF_EL_ID_DOWN() { return events.weight_indiv_SF_EL_ID_DOWN(); }
	const float &weight_indiv_SF_EL_Isol() { return events.weight_indiv_SF_EL_Isol(); }
	const float &weight_indiv_SF_EL_Isol_UP() { return events.weight_indiv_SF_EL_Isol_UP(); }
	const float &weight_indiv_SF_EL_Isol_DOWN() { return events.weight_indiv_SF_EL_Isol_DOWN(); }
	const float &weight_indiv_SF_MU_Trigger() { return events.weight_indiv_SF_MU_Trigger(); }
	const float &weight_indiv_SF_MU_Trigger_STAT_UP() { return events.weight_indiv_SF_MU_Trigger_STAT_UP(); }
	const float &weight_indiv_SF_MU_Trigger_STAT_DOWN() { return events.weight_indiv_SF_MU_Trigger_STAT_DOWN(); }
	const float &weight_indiv_SF_MU_Trigger_SYST_UP() { return events.weight_indiv_SF_MU_Trigger_SYST_UP(); }
	const float &weight_indiv_SF_MU_Trigger_SYST_DOWN() { return events.weight_indiv_SF_MU_Trigger_SYST_DOWN(); }
	const float &weight_indiv_SF_MU_ID() { return events.weight_indiv_SF_MU_ID(); }
	const float &weight_indiv_SF_MU_ID_STAT_UP() { return events.weight_indiv_SF_MU_ID_STAT_UP(); }
	const float &weight_indiv_SF_MU_ID_STAT_DOWN() { return events.weight_indiv_SF_MU_ID_STAT_DOWN(); }
	const float &weight_indiv_SF_MU_ID_SYST_UP() { return events.weight_indiv_SF_MU_ID_SYST_UP(); }
	const float &weight_indiv_SF_MU_ID_SYST_DOWN() { return events.weight_indiv_SF_MU_ID_SYST_DOWN(); }
	const float &weight_indiv_SF_MU_Isol() { return events.weight_indiv_SF_MU_Isol(); }
	const float &weight_indiv_SF_MU_Isol_UP() { return events.weight_indiv_SF_MU_Isol_UP(); }
	const float &weight_indiv_SF_MU_Isol_DOWN() { return events.weight_indiv_SF_MU_Isol_DOWN(); }
	const vector<float> &weight_bTagSF_eigenvars_B_up() { return events.weight_bTagSF_eigenvars_B_up(); }
	const vector<float> &weight_bTagSF_eigenvars_C_up() { return events.weight_bTagSF_eigenvars_C_up(); }
	const vector<float> &weight_bTagSF_eigenvars_Light_up() { return events.weight_bTagSF_eigenvars_Light_up(); }
	const vector<float> &weight_bTagSF_eigenvars_B_down() { return events.weight_bTagSF_eigenvars_B_down(); }
	const vector<float> &weight_bTagSF_eigenvars_C_down() { return events.weight_bTagSF_eigenvars_C_down(); }
	const vector<float> &weight_bTagSF_eigenvars_Light_down() { return events.weight_bTagSF_eigenvars_Light_down(); }
	const float &weight_bTagSF_extrapolation_up() { return events.weight_bTagSF_extrapolation_up(); }
	const float &weight_bTagSF_extrapolation_down() { return events.weight_bTagSF_extrapolation_down(); }
	const float &weight_bTagSF_extrapolation_from_charm_up() { return events.weight_bTagSF_extrapolation_from_charm_up(); }
	const float &weight_bTagSF_extrapolation_from_charm_down() { return events.weight_bTagSF_extrapolation_from_charm_down(); }
	const unsigned int &eventNumber() { return events.eventNumber(); }
	const unsigned int &runNumber() { return events.runNumber(); }
	const unsigned int &mcChannelNumber() { return events.mcChannelNumber(); }
	const float &mu() { return events.mu(); }
	const vector<float> &el_pt() { return events.el_pt(); }
	const vector<float> &el_eta() { return events.el_eta(); }
	const vector<float> &el_phi() { return events.el_phi(); }
	const vector<float> &el_e() { return events.el_e(); }
	const vector<float> &el_charge() { return events.el_charge(); }
	const vector<float> &el_topoetcone20() { return events.el_topoetcone20(); }
	const vector<float> &el_ptvarcone20() { return events.el_ptvarcone20(); }
	const vector<float> &mu_pt() { return events.mu_pt(); }
	const vector<float> &mu_eta() { return events.mu_eta(); }
	const vector<float> &mu_phi() { return events.mu_phi(); }
	const vector<float> &mu_e() { return events.mu_e(); }
	const vector<float> &mu_charge() { return events.mu_charge(); }
	const vector<float> &mu_topoetcone20() { return events.mu_topoetcone20(); }
	const vector<float> &mu_ptvarcone30() { return events.mu_ptvarcone30(); }
	const vector<float> &jet_pt() { return events.jet_pt(); }
	const vector<float> &jet_eta() { return events.jet_eta(); }
	const vector<float> &jet_phi() { return events.jet_phi(); }
	const vector<float> &jet_e() { return events.jet_e(); }
	const vector<float> &jet_mv1() { return events.jet_mv1(); }
	const vector<float> &jet_mvb() { return events.jet_mvb(); }
	const vector<float> &jet_mv1c() { return events.jet_mv1c(); }
	const vector<float> &jet_mv2c00() { return events.jet_mv2c00(); }
	const vector<float> &jet_mv2c10() { return events.jet_mv2c10(); }
	const vector<float> &jet_mv2c20() { return events.jet_mv2c20(); }
	const vector<float> &jet_ip3dsv1() { return events.jet_ip3dsv1(); }
	const vector<float> &jet_jvt() { return events.jet_jvt(); }
	const vector<float> &ljet_pt() { return events.ljet_pt(); }
	const vector<float> &ljet_eta() { return events.ljet_eta(); }
	const vector<float> &ljet_phi() { return events.ljet_phi(); }
	const vector<float> &ljet_e() { return events.ljet_e(); }
	const vector<float> &ljet_m() { return events.ljet_m(); }
	const vector<float> &ljet_sd12() { return events.ljet_sd12(); }
	const float &met_met() { return events.met_met(); }
	const float &met_phi() { return events.met_phi(); }
	const int &sub_1b_2fj() { return events.sub_1b_2fj(); }
	const int &sub_1b_3fj() { return events.sub_1b_3fj(); }
	const int &sub_1b_allfj() { return events.sub_1b_allfj(); }
	const float &TotalEventWeight() { return events.TotalEventWeight(); }
	const float &EventParticleWeight() { return events.EventParticleWeight(); }
	const float &ScaleFactorWeight() { return events.ScaleFactorWeight(); }
	const float &EventParameterWeight() { return events.EventParameterWeight(); }
	const float &HT() { return events.HT(); }
	const float &HhadT() { return events.HhadT(); }
	const float &HT_ratio_met() { return events.HT_ratio_met(); }
	const float &HT_ratio_lep() { return events.HT_ratio_lep(); }
	const float &meff() { return events.meff(); }
	const float &Centrality() { return events.Centrality(); }
	const float &MetSignificance() { return events.MetSignificance(); }
	const float &MT2reco() { return events.MT2reco(); }
	const float &MCTreco() { return events.MCTreco(); }
	const float &dPhimin_met_jet() { return events.dPhimin_met_jet(); }
	const float &dPhimin_met_lep() { return events.dPhimin_met_lep(); }
	const float &dPhisumjetmet() { return events.dPhisumjetmet(); }
	const float &dPhisumjetlep() { return events.dPhisumjetlep(); }
	const float &dPhisumjetmetlep() { return events.dPhisumjetmetlep(); }
	const float &dRlj_MindR() { return events.dRlj_MindR(); }
	const float &Mbb_MindR() { return events.Mbb_MindR(); }
	const float &Mjj_MaxPt() { return events.Mjj_MaxPt(); }
	const float &Mjjj_MaxPt() { return events.Mjjj_MaxPt(); }
	const float &Mbbb_MaxPt() { return events.Mbbb_MaxPt(); }
	const float &Mjjjj_MaxPt() { return events.Mjjjj_MaxPt(); }
	const float &Mbbbb_MaxPt() { return events.Mbbbb_MaxPt(); }
	const float &Mbbbj_MaxPt() { return events.Mbbbj_MaxPt(); }
	const float &Mjjj_MaxMV2c20() { return events.Mjjj_MaxMV2c20(); }
	const float &Mbbb_MaxMV2c20() { return events.Mbbb_MaxMV2c20(); }
	const float &Mjjjj_MaxMV2c20() { return events.Mjjjj_MaxMV2c20(); }
	const float &Mbbbb_MaxMV2c20() { return events.Mbbbb_MaxMV2c20(); }
	const float &Mbbbj_MaxMV2c20() { return events.Mbbbj_MaxMV2c20(); }
	const float &DeltaMbbbb_MinDeltaM() { return events.DeltaMbbbb_MinDeltaM(); }
	const float &dR_lep_jet1() { return events.dR_lep_jet1(); }
	const float &dPhibl_MindPhi() { return events.dPhibl_MindPhi(); }
	const float &dRbl_MindR() { return events.dRbl_MindR(); }
	const float &dPhibb_MindPhi() { return events.dPhibb_MindPhi(); }
	const float &dRbb_MindR() { return events.dRbb_MindR(); }
	const float &PtDiff_Higgs_Vector() { return events.PtDiff_Higgs_Vector(); }
	const int &el_n() { return events.el_n(); }
	const int &el_MT() { return events.el_MT(); }
	const int &el_M() { return events.el_M(); }
	const int &mu_n() { return events.mu_n(); }
	const int &mu_MT() { return events.mu_MT(); }
	const int &mu_M() { return events.mu_M(); }
	const int &lep_n() { return events.lep_n(); }
	const int &jet_n() { return events.jet_n(); }
	const int &jet20_n() { return events.jet20_n(); }
	const int &jet30_n() { return events.jet30_n(); }
	const int &jet40_n() { return events.jet40_n(); }
	const int &bjet_n() { return events.bjet_n(); }
	const int &ljet_n() { return events.ljet_n(); }
	const vector<float> &ljet_width() { return events.ljet_width(); }
	const vector<float> &ljet_tau1() { return events.ljet_tau1(); }
	const vector<float> &ljet_tau2() { return events.ljet_tau2(); }
	const vector<float> &ljet_tau3() { return events.ljet_tau3(); }
	const vector<float> &ljet_tau1_wta() { return events.ljet_tau1_wta(); }
	const vector<float> &ljet_tau2_wta() { return events.ljet_tau2_wta(); }
	const vector<float> &ljet_tau3_wta() { return events.ljet_tau3_wta(); }
	const vector<float> &ljet_planarFlow() { return events.ljet_planarFlow(); }
	const vector<float> &ljet_ktsplit12() { return events.ljet_ktsplit12(); }
	const vector<float> &ljet_ktsplit23() { return events.ljet_ktsplit23(); }
	const vector<float> &ljet_ktsplit34() { return events.ljet_ktsplit34(); }
	const vector<float> &ljet_ZCut12() { return events.ljet_ZCut12(); }
	const vector<float> &ljet_ZCut23() { return events.ljet_ZCut23(); }
	const vector<float> &ljet_ZCut34() { return events.ljet_ZCut34(); }
	const vector<float> &ljet_KtDR() { return events.ljet_KtDR(); }
	const vector<float> &ljet_Angularity() { return events.ljet_Angularity(); }
	const vector<float> &ljet_Aplanarity() { return events.ljet_Aplanarity(); }
	const vector<float> &ljet_Dip12() { return events.ljet_Dip12(); }
	const vector<float> &ljet_Dip13() { return events.ljet_Dip13(); }
	const vector<float> &ljet_Dip23() { return events.ljet_Dip23(); }
	const vector<float> &ljet_D2() { return events.ljet_D2(); }
	const vector<float> &ljet_C2() { return events.ljet_C2(); }
	const vector<float> &ljet_tau21() { return events.ljet_tau21(); }
	const vector<float> &ljet_tau32() { return events.ljet_tau32(); }
	const vector<float> &ljet_tau31() { return events.ljet_tau31(); }
	const vector<float> &ljet_tau21_wta() { return events.ljet_tau21_wta(); }
	const vector<float> &ljet_tau32_wta() { return events.ljet_tau32_wta(); }
	const vector<float> &ljet_tau31_wta() { return events.ljet_tau31_wta(); }
	const vector<int> &jet_truth_matching() { return events.jet_truth_matching(); }
	const vector<int> &boosted_jet_truth_matching() { return events.boosted_jet_truth_matching(); }
	const vector<int> &boosted_trackjet_truth_matching() { return events.boosted_trackjet_truth_matching(); }
	const int &truth_nbquarks() { return events.truth_nbquarks(); }
	const vector<int> &nbtag_tjets_truth() { return events.nbtag_tjets_truth(); }
	const vector<int> &nbtag_tjets_reco() { return events.nbtag_tjets_reco(); }
	const vector<int> &n_tjets_fat() { return events.n_tjets_fat(); }
	const vector<int> &n_btjets_bfat() { return events.n_btjets_bfat(); }
	const vector<int> &n_btjets_fat() { return events.n_btjets_fat(); }
	const vector<int> &n_tbtjets_fat() { return events.n_tbtjets_fat(); }
	const vector<int> &n_tjets_subfat() { return events.n_tjets_subfat(); }
	const vector<float> &leadfat_leadtrack_pt() { return events.leadfat_leadtrack_pt(); }
	const vector<float> &leadfat_subtrack_pt() { return events.leadfat_subtrack_pt(); }
	const float &higgs_mass() { return events.higgs_mass(); }
	const vector<float> &b_pt() { return events.b_pt(); }
	const vector<float> &notj_fj_pt() { return events.notj_fj_pt(); }
	const vector<int> &n_1tbtjets_fat() { return events.n_1tbtjets_fat(); }
	const vector<int> &n_2tbtjets_fat() { return events.n_2tbtjets_fat(); }
	const vector<int> &n_1inc_tbtjets_fat() { return events.n_1inc_tbtjets_fat(); }
	const vector<int> &n_2inc_tbtjets_fat() { return events.n_2inc_tbtjets_fat(); }
	const vector<vector<int> > &trub_track_jets() { return events.trub_track_jets(); }
	const vector<vector<bool> > &tagb_track_jets() { return events.tagb_track_jets(); }
	const int &nb() { return events.nb(); }
	const vector<vector<int> > &trub_2track_jets() { return events.trub_2track_jets(); }
	const vector<int> &btj() { return events.btj(); }
	const vector<int> &tj_j() { return events.tj_j(); }
	const vector<int> &btj_j() { return events.btj_j(); }
	const vector<int> &b_j() { return events.b_j(); }
	const vector<int> &bh_j() { return events.bh_j(); }
	const vector<float> &j_pt() { return events.j_pt(); }
	const vector<float> &trackjet_pt() { return events.trackjet_pt(); }
	const vector<float> &dr_matched_jet_pt() { return events.dr_matched_jet_pt(); }
	const vector<vector<float> > &dr_matched_trackjet_pt() { return events.dr_matched_trackjet_pt(); }
	const vector<bool> &b_tag_jet() { return events.b_tag_jet(); }
	const vector<float> &fj_pt() { return events.fj_pt(); }
	const vector<int> &label_jet() { return events.label_jet(); }
	const vector<vector<bool> > &btag_trackjet() { return events.btag_trackjet(); }
	const vector<vector<int> > &label_trackjet() { return events.label_trackjet(); }
	const vector<int> &tj_fj() { return events.tj_fj(); }
	const vector<int> &bpart_fj() { return events.bpart_fj(); }
	const vector<int> &label_fj() { return events.label_fj(); }
	const vector<vector<float> > &ghost_dr_fj() { return events.ghost_dr_fj(); }
	const vector<vector<float> > &drmatch_dr_fj() { return events.drmatch_dr_fj(); }
	const vector<vector<int> > &label_trackjet_fj() { return events.label_trackjet_fj(); }
	const vector<vector<bool> > &btag_trackjet_fj() { return events.btag_trackjet_fj(); }
	const vector<int> &ghost_tj_fj() { return events.ghost_tj_fj(); }
	const vector<vector<float> > &fj_dr_matched_trackjet_pt() { return events.fj_dr_matched_trackjet_pt(); }
	const vector<float> &tj_pt_check() { return events.tj_pt_check(); }
	const vector<float> &caloCluster_pt() { return events.caloCluster_pt(); }
	const vector<float> &caloCluster_px() { return events.caloCluster_px(); }
	const vector<float> &caloCluster_py() { return events.caloCluster_py(); }
	const vector<float> &caloCluster_pz() { return events.caloCluster_pz(); }
	const vector<float> &caloCluster_E() { return events.caloCluster_E(); }
	const vector<float> &caloCluster_EM_PROBABILITY() { return events.caloCluster_EM_PROBABILITY(); }
	const vector<float> &caloCluster_ENG_BAD_CELLS() { return events.caloCluster_ENG_BAD_CELLS(); }
	const vector<float> &caloCluster_ENG_FRAC_MAX() { return events.caloCluster_ENG_FRAC_MAX(); }
	const vector<float> &caloCluster_ENG_POS() { return events.caloCluster_ENG_POS(); }
	const vector<float> &caloCluster_FIRST_ENG_DES() { return events.caloCluster_FIRST_ENG_DES(); }
	const vector<float> &caloCluster_ISOLATION() { return events.caloCluster_ISOLATION(); }
	const vector<float> &caloCluster_LATERAL() { return events.caloCluster_LATERAL(); }
	const vector<float> &caloCluster_LONGITUDINAL() { return events.caloCluster_LONGITUDINAL(); }
	const vector<float> &caloCluster_N_BAD_CELLS() { return events.caloCluster_N_BAD_CELLS(); }
	const vector<float> &caloCluster_SECOND_LAMBDA() { return events.caloCluster_SECOND_LAMBDA(); }
	const vector<float> &caloCluster_SECOND_R() { return events.caloCluster_SECOND_R(); }
	const vector<float> &caloCluster_SIGNIFICANCE() { return events.caloCluster_SIGNIFICANCE(); }
	const vector<float> &caloCluster_altE() { return events.caloCluster_altE(); }
	const vector<float> &caloCluster_altEta() { return events.caloCluster_altEta(); }
	const vector<float> &caloCluster_altM() { return events.caloCluster_altM(); }
	const vector<float> &caloCluster_altPhi() { return events.caloCluster_altPhi(); }
	const vector<float> &caloCluster_calE() { return events.caloCluster_calE(); }
	const vector<float> &caloCluster_calEta() { return events.caloCluster_calEta(); }
	const vector<float> &caloCluster_calM() { return events.caloCluster_calM(); }
	const vector<float> &caloCluster_calPhi() { return events.caloCluster_calPhi(); }
	const vector<unsigned int> &caloCluster_clusterSize() { return events.caloCluster_clusterSize(); }
	const vector<float> &caloCluster_rawE() { return events.caloCluster_rawE(); }
	const vector<float> &caloCluster_rawEta() { return events.caloCluster_rawEta(); }
	const vector<float> &caloCluster_rawM() { return events.caloCluster_rawM(); }
	const vector<float> &caloCluster_rawPhi() { return events.caloCluster_rawPhi(); }
	const vector<float> &caloCluster_time() { return events.caloCluster_time(); }
	const vector<float> &caloCluster_AVG_LAR_Q() { return events.caloCluster_AVG_LAR_Q(); }
	const vector<float> &caloCluster_AVG_TILE_Q() { return events.caloCluster_AVG_TILE_Q(); }
	const vector<float> &caloCluster_BADLARQ() { return events.caloCluster_BADLARQ(); }
	const vector<float> &caloCluster_CELL_SIGNIFICANCE() { return events.caloCluster_CELL_SIGNIFICANCE(); }
	const vector<float> &caloCluster_CELL_SIG_SAMPLING() { return events.caloCluster_CELL_SIG_SAMPLING(); }
	const vector<float> &caloCluster_CENTER_LAMBDA() { return events.caloCluster_CENTER_LAMBDA(); }
	const vector<float> &caloCluster_CENTER_MAG() { return events.caloCluster_CENTER_MAG(); }
	const vector<float> &track_pt() { return events.track_pt(); }
	const vector<float> &track_px() { return events.track_px(); }
	const vector<float> &track_py() { return events.track_py(); }
	const vector<float> &track_pz() { return events.track_pz(); }
	const vector<float> &track_E() { return events.track_E(); }
	const vector<float> &track_vz() { return events.track_vz(); }
	const vector<float> &track_z0() { return events.track_z0(); }
	const vector<float> &track_phi() { return events.track_phi(); }
	const vector<unsigned char> &track_expectInnermostPixelLayerHit() { return events.track_expectInnermostPixelLayerHit(); }
	const vector<unsigned char> &track_expectNextToInnermostPixelLayerHit() { return events.track_expectNextToInnermostPixelLayerHit(); }
	const vector<unsigned char> &track_numberOfInnermostPixelLayerHits() { return events.track_numberOfInnermostPixelLayerHits(); }
	const vector<unsigned char> &track_numberOfNextToInnermostPixelLayerHits() { return events.track_numberOfNextToInnermostPixelLayerHits(); }
	const vector<float> &track_chiSquared() { return events.track_chiSquared(); }
	const vector<float> &track_d0() { return events.track_d0(); }
	const vector<unsigned char> &track_numberOfPixelSharedHits() { return events.track_numberOfPixelSharedHits(); }
	const vector<float> &track_numberDoF() { return events.track_numberDoF(); }
	const vector<unsigned char> &track_numberOfSCTSharedHits() { return events.track_numberOfSCTSharedHits(); }
	const vector<unsigned char> &track_numberOfPhiHoleLayers() { return events.track_numberOfPhiHoleLayers(); }
	const vector<unsigned char> &track_numberOfPhiLayers() { return events.track_numberOfPhiLayers(); }
	const vector<unsigned char> &track_numberOfPixelDeadSensors() { return events.track_numberOfPixelDeadSensors(); }
	const vector<unsigned char> &track_numberOfPixelHits() { return events.track_numberOfPixelHits(); }
	const vector<unsigned char> &track_numberOfPrecisionLayers() { return events.track_numberOfPrecisionLayers(); }
	const vector<unsigned char> &track_numberOfSCTDeadSensors() { return events.track_numberOfSCTDeadSensors(); }
	const vector<unsigned char> &track_numberOfSCTHits() { return events.track_numberOfSCTHits(); }
	const vector<unsigned char> &track_numberOfSCTHoles() { return events.track_numberOfSCTHoles(); }
	const vector<unsigned char> &track_numberOfTRTHits() { return events.track_numberOfTRTHits(); }
	const vector<unsigned char> &track_numberOfTRTOutliers() { return events.track_numberOfTRTOutliers(); }
	const vector<float> &track_qOverp() { return events.track_qOverp(); }
	const vector<float> &track_theta() { return events.track_theta(); }
	const vector<float> &track_vertex_x() { return events.track_vertex_x(); }
	const vector<float> &track_vertex_y() { return events.track_vertex_y(); }
	const vector<float> &track_vertex_z() { return events.track_vertex_z(); }
	const vector<short> &track_vertex_type() { return events.track_vertex_type(); }
	const vector<float> &primary_vertex_x() { return events.primary_vertex_x(); }
	const vector<float> &primary_vertex_y() { return events.primary_vertex_y(); }
	const vector<float> &primary_vertex_z() { return events.primary_vertex_z(); }
	const vector<short> &primary_vertex_type() { return events.primary_vertex_type(); }
	const vector<float> &a_pt() { return events.a_pt(); }
	const vector<float> &mc_pt() { return events.mc_pt(); }
	const vector<float> &mc_eta() { return events.mc_eta(); }
	const vector<float> &mc_phi() { return events.mc_phi(); }
	const vector<float> &mc_e() { return events.mc_e(); }
	const vector<int> &mc_pdgId() { return events.mc_pdgId(); }
	const vector<int> &mc_status() { return events.mc_status(); }
}
