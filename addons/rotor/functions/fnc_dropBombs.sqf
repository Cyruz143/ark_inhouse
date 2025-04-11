#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Adds barrelbomb PFH, once all bombs dropped assigns a final waypoint.
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 * 1: Logic <MODULE>
 * 2: Pilot <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_rotor_fnc_dropBombs
 */

params ["_vehicle","_logic","_pilot"];

_vehicle setVariable ["ark_rotor_var_bombAmount", (_logic getVariable ["Bomb_Amount", 3])];

[{
    params ["_args", "_id"];
    _args params ["_vehicle","_pilot"];

    if (_vehicle getVariable ["ark_rotor_var_bombAmount", 0] < 1 || {!alive _pilot} || {!alive _vehicle}) exitWith {
        INFO("fnc_dropBombs, All Bombs Dropped");
        _vehicle forceSpeed -1;
        (group _pilot) setCurrentWaypoint [(group _pilot), 3];
            _vehicle setVariable ["ark_rotor_var_bombAmount", nil];
        _id call CBA_fnc_removePerFrameHandler;
    };

    _vehicle setVariable ["ark_rotor_var_bombAmount", ((_vehicle getVariable ["ark_rotor_var_bombAmount", 0]) - 1)];
    [_vehicle] call FUNC(createBomb);
}, 4, [_vehicle,_pilot]] call CBA_fnc_addPerFrameHandler;
