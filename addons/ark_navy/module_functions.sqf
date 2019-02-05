ark_navy_module_preinit = {
    params ["_logic", "", "_activated"];

    if !(_activated) exitWith {
        diag_log "[ARK] (Navy) - Module not activated - Disabling";
    };

    [_logic] call ark_navy_fnc_checkTrigger;
};