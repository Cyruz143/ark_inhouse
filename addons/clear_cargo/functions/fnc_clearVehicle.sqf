#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Initialises module and clears vehicle inventory.
 *
 * Arguments:
 * 0: Logic <OBJECT>
 * 0: Vehicles <ARRAY>
 *
 * Return Value:
 * true
 *
 * Example:
 * [] call ark_clear_cargo_fnc_clearVehicle
 */

params ["_logic","_units"];

if (!is3DENPreview && {!isServer}) exitWith {};

if (_units isEqualTo []) exitWith {
    ERROR_MSG_1("fnc_clearVehicle, Module (%1) not sync'd to any vehicle",_logic);
};

{
    _x call FUNC(doClearVehicle);
} forEach _units;

INFO_1("fnc_clearVehicle, Deleting Module (%1)",_logic);
deleteVehicle _logic;

//Return true because spawnd from module
true;
