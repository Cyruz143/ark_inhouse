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
 * [] call ark_deploy_fnc_assignDeployClick
 */

[["\x\ark\addons\main\resources\click.paa", 2.0], ["Click anywhere on the map to deploy"]] call CBA_fnc_notify;

openMap [true, true];
player onMapSingleClick {
    if (surfaceIsWater _pos) then {
        [_this, _pos] call FUNC(waterDeploy);
    } else {
        [_this, _pos] call FUNC(landDeploy);
    };
};
