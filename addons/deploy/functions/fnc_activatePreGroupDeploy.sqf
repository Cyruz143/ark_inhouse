#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Unsure
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_deploy_fnc_activatePreGroupDeploy
 */

[["\x\ark\addons\main\resources\click.paa", 2.0], ["Activating (Pre Safety) Group Deploy now"]] call CBA_fnc_notify;

ark_deploy_preDeployActive = true;
publicVariable "ark_deploy_preDeployActive";

{
    if ((_x isEqualTo leader group _x) && (side _x in ark_deploy_pre_factions)) then {
        _x setVariable ["ark_deploy_canDeploy", true, true];
    };
} forEach allUnits;
