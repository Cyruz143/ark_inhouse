#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Handles deleting objects/kill units when a building is destroyed
 *
 * Arguments:
 * 0: Object <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_building_cleaner_doClean
 */

params ["_objectect"];

if (_object isKindOf "Logic") exitWith {};

// Dont kill players and kill AI (they get stuck in ruins)
if (_object isKindOf "CAManBase" && {!isPlayer _object && alive _object}) exitWith {
    _object setDamage 1;
};

// simpleObjects & buildings float regardless so delete
if (isSimpleObject _object || {_object isKindOf "Building"}) exitWith {deleteVehicle _object};

// enableSim on objects to allow them to fall and destroy them as they were simDisabled
if (!(simulationEnabled _object)) then {
    _object enableSimulation true;
    [{
        _this setDamage [1, false];
        _this enableSimulation false;
    }, _object, 3] call CBA_fnc_waitAndExecute;
};
