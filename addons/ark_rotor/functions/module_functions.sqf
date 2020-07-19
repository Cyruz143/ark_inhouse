ark_rotor_module_preinit = {
    params ["_logic", "", "_activated"];

    if (_logic getVariable ["ark_rotor_var_moduleRan", false]) exitWith {
        // Commented out til I can fix this as it seems to run every frame for no real reason
        //["ERROR","module_preinit","Module tried to execute multiple times",_logic] call ark_rotor_fnc_log;
    };

    if (!_activated) exitWith {
        ["ERROR","module_preinit","Module not activated - Disabling"] call ark_rotor_fnc_log;
    };

    _logic setVariable ["ark_rotor_var_moduleRan", true];
    [_logic] call ark_rotor_fnc_checkTrigger;
};