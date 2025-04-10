#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Checks if gunner is dead and replaces it
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_ai_vehicles_fnc_isGunnerDead
 */

if (!is3DENPreview && {!isServer}) exitWith {};

params ["_unit"];

private _vehicle = vehicle _unit;

if (_vehicle isKindOf "Car" || _vehicle isKindOf "Tank") then {
    if (gunner _vehicle isEqualTo _unit && { alive (driver _vehicle) } && { !isPlayer (driver _vehicle) }) then {
        _vehicle call FUNC(replaceGunner);
    };
};
