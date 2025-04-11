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
 * [] call ark_deploy_fnc_canPlayerPostDeploy
 */

params ["_unit"];

private _canDeploy = _unit getVariable ["ark_deploy_canDeploy", false];
(_canDeploy && ark_deploy_deployActive && ((side _unit) in ark_deploy_post_factions));
