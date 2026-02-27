#include "..\script_component.hpp"
/*
 * Author: Cyruz, MikeMF
 * Handles task creation, taskID must be unique. Task Icons can be located at: https://community.bistudio.com/wiki/Arma_3:_Task_Framework#Task_Icons
 *
 * Locality: Server (called from all missions)
 *
 * Arguments:
 * 0: Task ID <STRING>
 * 1: Task Headline <STRING>
 * 2: Task Description <STRING>
 * 3: Task Type <STRING>
 * 4: Position <POSITION / ARRAY> (Default: Objective Area)
 *
 * Return Value:
 * None
 *
 * Example:
 * ["task1", "Destroy Armour", "Locate and destroy the static armour in town", "Target"] call ark_town_sweep_fnc_createTask
 */

params ["_taskID", "_taskHeadline", "_taskDescription", "_taskIcon", ["_position", GVAR(selectedPosition)]];

[
    true,
    [_taskID],
    [_taskDescription, _taskHeadline],
    GVAR(selectedPosition),
    "ASSIGNED",
    -1,
    true,
    _taskIcon
] call BIS_fnc_taskCreate;
