#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Switches vest
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_ace_medical_fnc_tvtVestSwitch
 */

params ["_unit"];

private _loadout = [_unit] call acre_api_fnc_filterUnitLoadout;
private _vest = toLowerANSI (_loadout #4 #0);
private _idx = _vest find "_arm";
private _newClass = _vest select [0,_idx];

if (isClass (configFile >> "CfgWeapons" >> _newClass)) then {
    [_loadout, [4,0], _newClass] call BIS_fnc_setNestedElement;
    _unit setUnitLoadout _loadout;
    LOG_1("fnc_tvtVestSwitch, Players vest replaced with %1",_newClass);
} else {
    ERROR_1("fnc_tvtVestSwitch, Invalid classname (%1) was returned",_newClass);
};
