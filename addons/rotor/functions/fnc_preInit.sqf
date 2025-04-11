#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Module init and error handling
 *
 * Arguments:
 * 0: Logic <MODULE>
 * 1: Unused
 * 2: Activated <BOOL>
 *
 * Return Value:
 * true
 *
 * Example:
 * [] call ark_rotor_fnc_preInit
 */

if (!is3DENPreview && {!isServer}) exitWith {};

params ["_logic", "", "_activated"];

if (_activated) then {
    if (_logic getVariable ["ark_rotor_var_moduleRan", false]) exitWith {
        if (missionNamespace getVariable ["ark_rotor_var_allowLogging", true]) then {
            ERROR_1("module_preInit, Module (%1) tried to execute multiple times.",_logic);
            missionNamespace setVariable ["ark_rotor_var_allowLogging", false, false];
        };
    };

    _logic setVariable ["ark_rotor_var_moduleRan", _activated];
    [_logic] call FUNC(checkTrigger);
};

//Return true because spawnd from module
true
