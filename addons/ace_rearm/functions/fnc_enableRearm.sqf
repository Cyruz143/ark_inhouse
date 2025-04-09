#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Called from a module for making vehicles a rearm source.
 *
 * Arguments:
 * 0: Logic <OBJECT/MODULE>
 * 1: Vehicles <ARRAY>
 *
 * Return Value:
 * true
 *
 * Example:
 * [] call ark_ace_rearm_enableRearm
 */

params ["_logic","_vehicles"];

if (_vehicles isEqualTo []) exitWith {
    ERROR_MSG_1("fnc_enableRearm, Module (%1) is not sync'd to any vehicle",_logic);
};

{
    _x call FUNC(makeSource);
} forEach _vehicles;

INFO_1("fnc_enableRearm, Deleting Module (%1)",_logic);
deleteVehicle _logic;

//Return true because spawnd from module
true;
