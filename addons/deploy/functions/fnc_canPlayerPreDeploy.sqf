#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Unsure
 *
 * Arguments:
 * None
 *
 * Return Value:
 * Bool
 *
 * Example:
 * [] call ark_deploy_fnc_canPlayerPreDeploy
 */

private _canDeploy = player getVariable ["ark_deploy_canDeploy", false];
(_canDeploy && ark_deploy_preDeployActive && (side player in ark_deploy_pre_factions));
