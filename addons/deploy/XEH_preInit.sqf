#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

ark_deploy_deployEnabled = false; // module sets this to true
ark_deploy_deployActive = false;
ark_deploy_preDeployRequired = false;
ark_deploy_preDeployActive = false;
ark_deploy_deployActive = false;
ark_deploy_pre_factions = [];
ark_deploy_post_factions = [];

ADDON = true;
