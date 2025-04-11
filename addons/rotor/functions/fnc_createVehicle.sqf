#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * NEED DESC.
 *
 * Arguments:
 * 0: Classname <STRING>
 * 1: Trigger <TRIGGER>
 * 2: Logic <MODULE>
 *
 * Return Value:
 * Vehicle
 *
 * Example:
 * [] call ark_rotor_fnc_createVehicle
 */

params ["_vehicleClassname", "_trigger", "_logic"];

if (isNil "_trigger") exitWith {
    ERROR_MSG_1("fnc_createVehicle, No trigger was provided to try and spawn the vehicle with classname %1",_vehicleClassname);
};

private _flyHeight = _logic getVariable ["Fly_Height", 200];
private _spawnPosition = [(triggerArea _trigger), (getPos _trigger), true] call adm_api_fnc_getRandomPositionInArea;
_spawnPosition set [2, _flyHeight];
_vehicle = createVehicle [_vehicleClassname, _spawnPosition, [], 0, "FLY"];
_vehicle setPos _spawnPosition;
_vehicle flyInHeight [_flyHeight, true];

// Some modded planes don't spawn with velocity correctly with "FLY"
if (_vehicle isKindOf "Plane") then {
    _vehicle engineOn true;
    _vehicle setVelocityModelSpace [0, 150, 0];
};

_vehicle;
