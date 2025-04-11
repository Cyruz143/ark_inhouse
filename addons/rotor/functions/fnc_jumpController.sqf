#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * NEED DESC.
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 * 1: Group <GROUP>
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_rotor_fnc_jumpController
 */

params ["_vehicle", "_cargoGroup"];

_cargoGroup call FUNC(taskAttack);
[{
    params ["_args", "_id"];
    _args params ["_vehicle"];

    private _crewArr = crew _vehicle - [driver _vehicle];

    if (isNil "_crewArr" || { _crewArr isEqualTo [] }) exitWith {
        INFO("fnc_jumpController, All Cargo Ejected");
        _id call CBA_fnc_removePerFrameHandler;
    };

    private _unit = _crewArr #0;
    unassignVehicle _unit;
    moveOut _unit;
}, 0.5, [_vehicle]] call CBA_fnc_addPerFrameHandler;
