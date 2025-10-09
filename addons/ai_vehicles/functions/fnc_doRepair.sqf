#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Repairs a vehicle
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_ai_vehicles_fnc_doRepair
 */

params ["_vehicle"];

private _driver = driver _vehicle;

if (!alive _driver || { !alive _vehicle } || { lifeState _driver == "INCAPACITATED" }) exitWith {
    {
        _vehicle setVariable [_x, nil];
    } forEach ["ark_ai_vehicles_awaiting_repair","ark_ai_vehicles_last_hit"];
};

[_vehicle,_driver] spawn {
    params ["_vehicle","_driver"];

    _vehicle forceSpeed 0;
    sleep 2;

    private _group = group _driver;
    _group lockWP true;
    _group addWaypoint [getPos _driver, 0, currentWaypoint _group];

    {
        _driver disableAI _x;
    } forEach ["TARGET", "AUTOTARGET", "PATH", "FSM", "AUTOCOMBAT"];

    doGetOut _driver;
    sleep 2;

    _driver setVectorDir (getPos _driver vectorFromTo getPos _vehicle);
    _driver playMoveNow "Acts_carFixingWheel";
    ["Acts_carFixingWheel", getPosASL _driver, 5, 100] call ace_common_fnc_playConfigSound3D;
    sleep 15;

    if (!alive _driver || { !alive _vehicle } || { lifeState _driver == "INCAPACITATED" }) exitWith {
        {
            _vehicle setVariable [_x, nil];
        } forEach ["ark_ai_vehicles_awaiting_repair", "ark_ai_vehicles_last_hit"];
    };

    {
        _vehicle setHitPointDamage [_x, 0, true];
    } forEach GVAR(wheelArray);

    _driver playMove "";
    _driver assignAsDriver _vehicle;
    _driver moveInDriver _vehicle;
    _driver enableAI "ALL";
    _vehicle setVectorUp surfaceNormal position _vehicle;
    _vehicle forceSpeed -1;

    deleteWaypoint [_group, currentWaypoint _group];
    _group lockWP false;

    {
        _vehicle setVariable [_x, nil];
    } forEach ["ark_ai_vehicles_awaiting_repair","ark_ai_vehicles_last_hit"];
};
