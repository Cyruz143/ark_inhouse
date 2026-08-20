#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Used to disable terrain lights
 *
 * Arguments:
 * 0: Disable Lights <BOOL> (Optional)
 *
 * Return Value:
 * None
 *
 * Example:
 * [true] call ark_common_fnc_lights
 */

params [["_disabled", true]];

if (isDedicated) exitWith {};

private _nObjs = nearestObjects [(getArray(configFile >> "CfgWorlds" >> worldName >> "centerPosition")), [], worldSize / 2];

private _state = ["ON", "OFF"] select _disabled;

{
    _x switchLight _state;
} forEach _nObjs;
