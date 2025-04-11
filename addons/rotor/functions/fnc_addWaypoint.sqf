#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Adds WP to pilot and sets flags to ensure behavior
 *
 * Arguments:
 * 0: Pilot <OBJECT>
 * 1: Waypoints <ARRAY>
 * 2: Index <NUMBER>
 * 3: Logic <MODULE>
 *
 * Return Value:
 * Waypoint
 *
 * Example:
 * [] call ark_rotor_fnc_addWaypoint
 */

params ["_pilot", "_waypoints", "_index", "_logic"];

private _waypointPositions = [];
{_waypointPositions pushBack (getWPPos _x)} forEach _waypoints;
private _wp = (group _pilot) addWaypoint [(group _pilot), _index];
_wp setWPPos (_waypointPositions select _index);
_wp setWaypointSpeed (_logic getVariable ["Fly_Speed", "NORMAL"]);
_wp setWaypointType "MOVE";
_wp setWaypointBehaviour "CARELESS";
_wp setWaypointCombatMode "BLUE";

_wp
