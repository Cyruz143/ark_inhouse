#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Initialises module
 *
 * Arguments:
 * None
 *
 * Return Value:
 * true
 *
 * Example:
 * [] call ark_deploy_fnc_init
 */

params ["_logic"];

ark_deploy_pre_factions = _logic getVariable "Pre_Safety";
ark_deploy_post_factions = _logic getVariable "Post_Safety";
ark_deploy_pre_factions = call compile ark_deploy_pre_factions;
ark_deploy_post_factions = call compile ark_deploy_post_factions;
if (count ark_deploy_pre_factions > 0) then {
    ark_deploy_preDeployRequired = true;
};
ark_deploy_deployEnabled = true;
publicVariable "ark_deploy_deployEnabled";
publicVariable "ark_deploy_deployActive";
publicVariable "ark_deploy_preDeployActive";
publicVariable "ark_deploy_preDeployRequired";
publicVariable "ark_deploy_pre_factions";
publicVariable "ark_deploy_post_factions";

//Return true because spawnd from module
true;
