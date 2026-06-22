#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Adds bitching betty to air crews on mount
 *
 * Arguments:
 * 2: Vehicle <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * ["", "", _vehicle] call ark_vws_fnc_addBetty
 */

params ["", "", "_vehicle"];

if !(_vehicle isKindOf "Air" || !(isNil QGVAR(bitchingBetty))) exitWith {};

GVAR(bitchingBetty) = [{
    params ["_args"];
    _args params ["_vehicle", ["_critical", true], ["_low", true]];

    private _fuelHealth = _vehicle getVariable [QGVAR(fuelHealth), 0];
    private _fuelDamage = _vehicle getHitPointDamage "hitFuel";

    // Reset fuel warnings params when more fuel added
    if (fuel _vehicle > 0.2) then {
        _args set [1, true];
        _args set [2, true];
    };

    // Reset fuel damage var when repaired
    if (_fuelDamage == 0 && _fuelHealth != 0) then {
        _vehicle setVariable [QGVAR(fuelHealth), 0];
    };

    // Engine dies at 0.9 damage and above
    if (_vehicle getHitPointDamage "hitEngine" >= 0.9) exitWith {
        ["ark_vws_playSound", ["ark_vws_engine_failure"]] call CBA_fnc_localEvent;
    };

    if (_fuelDamage > _fuelHealth) exitWith {
        ["ark_vws_playSound", ["ark_vws_fuel_pressure"]] call CBA_fnc_localEvent;
        _vehicle setVariable [QGVAR(fuelHealth), _fuelDamage];
    };

    if (fuel _vehicle < 0.05 && _critical) exitWith {
        ["ark_vws_playSound", ["ark_vws_fuel_critical"]] call CBA_fnc_localEvent;
        _args set [1, false];
    };

    if (fuel _vehicle < 0.2 && _low) exitWith {
        ["ark_vws_playSound", ["ark_vws_fuel_low"]] call CBA_fnc_localEvent;
        _args set [2, false];
    };
}, 3, [_vehicle]] call CBA_fnc_addPerFrameHandler;
