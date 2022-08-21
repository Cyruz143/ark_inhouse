ark_clear_cargo_fnc_doClearVehicle = {
    params ["_vehicle"];

    clearMagazineCargoGlobal _vehicle;
    clearWeaponCargoGlobal _vehicle;
    clearItemCargoGlobal _vehicle;
    clearBackpackCargoGlobal _vehicle;
};

ark_clear_cargo_fnc_clearVehicle = {
    params ["_logic","_units"];

    if (_units isEqualTo []) exitWith {
        ["Clear Cargo","ERROR","fnc_clearVehicle","Module not syncd to any vehicle",_logic] call ark_admin_tools_fnc_log;
    };

    {
        [_x] call ark_clear_cargo_fnc_doClearVehicle;
    } forEach _units;

    ["Clear Cargo","INFO","fnc_clearVehicle","Deleting module",_logic] call ark_admin_tools_fnc_log;
    deleteVehicle _logic;
};