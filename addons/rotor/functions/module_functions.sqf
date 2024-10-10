#include "..\script_component.hpp"

ark_rotor_module_preinit = {
    params ["_logic", "", "_activated"];

    isNil {
        if (_activated) then {
            if (_logic getVariable ["ark_rotor_var_moduleRan", false]) exitWith {
                if (missionNamespace getVariable ["ark_rotor_var_allowLogging", true]) then {
                    ERROR_1("module_preInit, Module (%1) tried to execute multiple times.",_logic);
                    missionNamespace setVariable ["ark_rotor_var_allowLogging", false, false];
                };
            };

        _logic setVariable ["ark_rotor_var_moduleRan", _activated];
        [_logic] call ark_rotor_fnc_checkTrigger;
        };
    };

    //Return true because spawnd from module
    true
};
