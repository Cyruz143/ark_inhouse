#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * NEED DESC.
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 * 1: Landing Pad <OBJECT>
 * 2: Pilot <OBJECT>
 * 3: Group <GROUP>
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_rotor_fnc_emptyCargo
 */

params ["_vehicle", "_landingPad", "_pilot", "_cargoGroup"];

_cargoGroup call FUNC(taskAttack);
_vehicle flyInHeight [1, true];

[{
    params ["_args", "_id"];
    _args params ["_vehicle","_landingPad","_pilot"];

    private _crewArr = crew _vehicle - [driver _vehicle];

    if (isNil "_crewArr" || { _crewArr isEqualTo [] }) exitWith {
        INFO("fnc_emptyCargo, All Cargo Dismounted");
        [_vehicle,_landingPad,_pilot] call FUNC(waitForCargo);
        _id call CBA_fnc_removePerFrameHandler;
    };

    private _unit = _crewArr #0;
    unassignVehicle _unit;
    moveOut _unit;
}, 0.5, [_vehicle,_landingPad,_pilot]] call CBA_fnc_addPerFrameHandler;
