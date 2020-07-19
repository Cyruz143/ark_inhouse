ark_rotor_module_preinit = {
    params ["_logic", "", "_activated"];

    if (_activated) then {
        if (_logic getVariable ["ark_rotor_var_moduleRan", false]) exitWith {
            ["ERROR","module_preinit","Module tried to execute multiple times",_logic] call ark_rotor_fnc_log;
        };

        _logic setVariable ["ark_rotor_var_moduleRan", _activated];
        [_logic] call ark_rotor_fnc_checkTrigger;
    } else {
        ["ERROR","module_preinit","Module not activated - Disabling"] call ark_rotor_fnc_log;
    };
};