ark_clear_cargo_fnc_clearVehicle = {
    params ["_vehicle"];

    clearMagazineCargoGlobal _vehicle;
    clearWeaponCargoGlobal _vehicle;
    clearItemCargoGlobal _vehicle;
    clearBackpackCargoGlobal _vehicle;
};

ark_clear_cargo_module_clearVehicle = {
    params ["_logic","_units","_activated"];

    if !(_activated) exitWith {
        diag_log "[ARK] (Clear Cargo) - Module not activated";
        true;
    };

    if (count _units == 0) exitWith {
        diag_log "[ARK] (Clear Cargo) - Module not syncd to any vehicle";
        true;
    };

    {
        [_x] call ark_clear_cargo_fnc_clearVehicle;
    } forEach _units;

    true;
};