#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Handles movement, despawning and teleporting of chase units
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_chase_ai_fnc_doMove
 */

params ["_unit"];

[{
    params ["_args", "_id"];
    _args params ["_unit"];
    if (isNil "_unit" || { !alive _unit }) exitWith {
        [_id] call CBA_fnc_removePerFrameHandler;
    };

    // If unit uncon, just skip this cycle
    if (lifeState _unit == "INCAPACITATED") exitWith {};

    private _target = [_unit] call FUNC(nearEnemies);
    if (isNil "_target" || { _target isEqualTo [] } ) exitWith {
        deleteVehicle _unit;
    };

    // If unit further than max range try and move them or delete
    private _distanceToTarget = _unit distance2D _target;
    if (_distanceToTarget > (ark_chase_ai_var_maxDistance + 50)) exitWith {
        private _pos = call FUNC(findSpawnPos);
        if (isNil "_pos" || { _pos isEqualTo [] }) exitWith {
            deleteVehicle _unit;
        };
        _unit setPosASL _pos;
    };

    // if more than 50m just move to a near pos
    private _targetPos = [_target] call FUNC(findSafePos);
    if (_distanceToTarget > 50) exitWith {
        _unit setDestination [_targetPos, "LEADER PLANNED", true];
        _unit doMove _targetPos;
    };

    // Try to handle stuck units who cant path to a buildingPos
    private _notMoving = false;
    private _lastPos = _unit getVariable ["ark_chase_ai_lastPos", nil];
    if (!isNil "_lastPos") then {
        if (_lastPos distance (getPosASL _unit) < 0.5) then {
            _notMoving = true;
        };
    };

    if (ark_chase_ai_var_allowBS && { insideBuilding _target == 1 } ) then {
        _targetPos = [_target] call FUNC(nearestBuildingPos);
        if (_targetPos isEqualTo "outside" || { _notMoving }) then {
            _unit doSuppressiveFire _target;
            _targetPos = [_target] call FUNC(findSafePos);
        };
    };

    _unit setDestination [_targetPos, "LEADER PLANNED", true];
    _unit doMove _targetPos;
    _unit lookAt _target;
    _unit setVariable ["ark_chase_ai_lastPos", (getPosASL _unit)];
}, 15, [_unit]] call CBA_fnc_addPerFrameHandler;
