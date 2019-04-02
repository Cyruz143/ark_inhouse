ark_rotor_module_preinit = {
    params ["_logic", "", "_activated"];

    if !(_activated) exitWith {
        diag_log "[ARK] (Rotor) - ERROR - Module not activated - Disabling";
    };

    [_logic] call ark_rotor_fnc_checkTrigger;
};