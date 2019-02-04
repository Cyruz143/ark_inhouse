ark_navy_module_preinit = {
    params ["_logic", "", "_activated"];

    if !(_activated) exitWith {
        diag_log "[ARK] (Navy) - Logic not activated";
    };

    ark_navy_isInitialised = false;

    [
        {ark_navy_isInitialised},
        {[(_this #0)] call ark_navy_fnc_checkTrigger},
        [_logic]
    ] call CBA_fnc_waitUntilAndExecute;
};