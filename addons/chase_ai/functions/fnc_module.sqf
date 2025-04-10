#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Module initialisation
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
 * [] call ark_chase_ai_fnc_module
 */

params ["_logic", "", "_activated"];

if (!is3DENPreview && {!isServer}) exitWith {};

isNil {
    if (_activated) then {
        if (_logic getVariable ["ark_chase_ai_var_moduleRan", false]) exitWith {
            ERROR_1("fnc_module, Module (%1) tried to execute multiple times.",_logic);
        };

        _logic setVariable ["ark_chase_ai_var_moduleRan", _activated];
        [_logic] call FUNC(init);
    };
};

//Return true because spawned from module
true;
