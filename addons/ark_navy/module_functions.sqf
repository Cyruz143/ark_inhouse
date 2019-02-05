ark_navy_module_preinit = {
    params ["_logic", "", "_activated"];

    if !(_activated) exitWith {
        diag_log "[ARK] (Navy) - Module not activated - Disabling";
    };

    [
        {ark_navy_isInitialised},
        {[(_this #0)] call ark_navy_fnc_checkTrigger},
        [_logic],
        30,
        {diag_log "[ARK] (Navy) - Module not loaded - Disabling";}
    ] call CBA_fnc_waitUntilAndExecute;
};