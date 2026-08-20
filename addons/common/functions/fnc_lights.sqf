#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Used to disable terrain lights
 *
 * Arguments:
 * 0: Disabled <BOOL> (Optional)
 *
 * Return Value:
 * None
 *
 * Example:
 * [true] call ark_common_fnc_lights
 */

params [["_disabled", true]];

if (isDedicated) exitWith {};

private _nObjs = nearestObjects [(getArray(configFile >> "CfgWorlds" >> worldName >> "centerPosition")), [], worldSize/2];

if (_disabled) then {
    {
        _x switchLight "OFF";
    } forEach _nObjs;
} else {
    {
        _x switchLight "ON";
    } forEach _nObjs;
};
