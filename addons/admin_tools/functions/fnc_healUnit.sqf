#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Partially heals a unit
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_admin_tools_fnc_healUnit
 */

private _unit = ace_player;

if (!alive _unit) exitWith {};

private _heartRate = _unit getVariable ["ace_medical_heartRate", 80];
private _blood = _unit getVariable ["ace_medical_bloodVolume", 6.0];
private _bloodPressure = [_unit] call ace_medical_status_fnc_getBloodPressure;
_bloodPressure params ["_bloodPressureL", "_bloodPressureH"];

if (_heartRate < 40) then {
    _unit setVariable ["ace_medical_heartRate", 40, true];
    [{
        ["ace_medical_CPRSucceeded", _this] call CBA_fnc_localEvent;
    }, [_unit], 0.25] call CBA_fnc_waitAndExecute
};
if (_heartRate > 220) then {
    _unit setVariable ["ace_medical_heartRate", 80, true];
};
if (_bloodPressureH < 50) then {
    _bloodPressureH = 50;
};
if (_bloodPressureL < 40) then {
    _bloodPressureL = 40;
};
if (_bloodPressureL >= 190) then {
    _bloodPressureL = 180;
};
if (_blood <= 5.100) then {
    _blood = 5.100 + 0.25;
    _unit setVariable ["ace_medical_bloodVolume", _blood, true];
};

_bloodPressure = [_bloodPressureL, _bloodPressureH];
_unit setVariable ["ace_medical_bloodPressure", _bloodPressure, true];

[{
    ["ace_medical_WakeUp", _this] call CBA_fnc_localEvent;
}, [_unit], random 15] call CBA_fnc_waitAndExecute;
