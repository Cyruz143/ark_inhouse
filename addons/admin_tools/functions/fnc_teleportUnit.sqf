#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Teleports Unit
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Position <POSITION>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_unit, [0, 0, 0]] call ark_admin_tools_fnc_teleportUnit
 */

params ["_unit", "_pos"];

[{
    params ["_unit", "_pos"];
    _pos params ["_xPos", "_yPos"];

    if (surfaceIsWater _pos) then {
        _unit setPosASL [_xPos, _yPos, 0];
    } else {
        _unit setPosATL [_xPos, _yPos, 0];
    };
    openMap [false, false];
    onMapSingleClick "";
}, [_unit, _pos]] call CBA_fnc_execNextFrame;
