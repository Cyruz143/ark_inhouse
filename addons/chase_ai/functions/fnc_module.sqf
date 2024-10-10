#include "..\script_component.hpp"

ark_chase_ai_module_preinit = {
    params ["_logic", "", "_activated"];

    isNil {
        if (_activated) then {
            if (_logic getVariable ["ark_chase_ai_var_moduleRan", false]) exitWith {
                ERROR_1("fnc_module, Module (%1) tried to execute multiple times.",_logic);
            };

            _logic setVariable ["ark_chase_ai_var_moduleRan", _activated];
            [_logic] call ark_chase_ai_fnc_init;
        };
    };

    //Return true because spawnd from module
    true;
};
