#include "..\script_component.hpp"
/*
 * Author: Cyruz, MikeMF
 * Handles task completion and allows new objectives to be activated.
 *
 * Locality: Server (called from objective completion conditions)
 *
 * Arguments:
 * 0: Task ID <STRING>
 * 1: Task State <STRING> (Default: "SUCCEEDED")
 *
 * Return Value:
 * None
 *
 * Example:
 * ["task1", "SUCCEEDED"] call ark_town_sweep_fnc_completeTask
 */

params ["_taskID", ["_state", "SUCCEEDED"]];

[_taskID, _state] call BIS_fnc_taskSetState;

// Will allow activation of new locations.
GVAR(positionActive) = false;
publicVariable QGVAR(positionActive);

[_taskID] call FUNC(cleanupPreviousZone);
