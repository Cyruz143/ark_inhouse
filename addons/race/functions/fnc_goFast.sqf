#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Super special speed boost for race missions.
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_race_fnc_goFast
 */

params ["_vehicle"];

if (_vehicle isKindOf "Ship") exitWith {
    systemChat "Boost unavailable in boats";
};

private _lastBoostTime = _vehicle getVariable [QGVAR(lastBoostTime), 0];

private _timeLeft = time - _lastBoostTime;
if (_timeLeft <= 10) exitWith {
    systemChat format ["Please wait %1 seconds before trying to boost again", (round _timeLeft)];
};

_vehicle setVelocityModelSpace [0,75,0];
_vehicle setVariable [QGVAR(lastBoostTime), time, false];
