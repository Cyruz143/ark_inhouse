ark_rotor_module_preinit = {
    params ["_logic", "", "_activated"];

    if !(_activated) exitWith {
        ["ERROR","module_preinit","Module not activated - Disabling"] call ark_rotor_fnc_log;
        true;
    };

    [_logic] call ark_rotor_fnc_checkTrigger;

    true;
};