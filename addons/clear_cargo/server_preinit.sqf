#include "script_component.hpp"

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
        ERROR_1("fnc_clearVehicle, Module (%1) not sync'd to any vehicle",_logic);
    };

    {
        [_x] call ark_clear_cargo_fnc_doClearVehicle;
    } forEach _units;

    INFO_1("fnc_clearVehicle, Deleting Module (%1)",_logic);
    deleteVehicle _logic;

    //Return true because spawnd from module
    true;
};
