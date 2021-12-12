ark_chase_ai_module_preinit = {
    params ["_logic", "", "_activated"];

    if (_activated) then {
        if (_logic getVariable ["ark_chase_ai_var_moduleRan", false]) exitWith {
            ["ERROR","fnc_module","Module tried to execute multiple times",_logic] call ark_chase_ai_fnc_log;
        };

        _logic setVariable ["ark_chase_ai_var_moduleRan", _activated];
        [_logic] call ark_chase_ai_fnc_init;
    } else {
        ["ERROR","fnc_module","Module not activated - Disabling"] call ark_chase_ai_fnc_log;
    };
};