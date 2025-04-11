#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * NEED DESC.
 *
 * Arguments:
 * 0: Group <GROUP>
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_rotor_fnc_taskAttack
 */

params ["_grp"];

private _nearEnemies = [];
{
    if ((_x distance2D (leader _grp)) < 5000) then {
        _nearEnemies pushBack _x;
    };
} forEach ((playableUnits + switchableUnits) select {isPlayer _x && {!(_x isKindOf "HeadlessClient_F")}});

if (_nearEnemies isEqualTo []) exitWith {
    INFO("fnc_taskAttack, No players to attack");
    deleteVehicle (units _grp);
};

_nearEnemies sort true;
private _target = _nearEnemies #0;

[_grp, getPos _target, 100] call CBA_fnc_taskPatrol;
INFO_1("fnc_taskAttack, Units attacking player (%1)",_target);
