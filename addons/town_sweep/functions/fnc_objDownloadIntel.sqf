#include "..\script_component.hpp"
/*
 * Author: Mike, Cyruz
 * N/A
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_town_sweep_fnc_objDownloadIntel
 */

ts_spawn_selectedLocation params ["_position","_size"];

private _helo = [_position] call FUNC(createHeliWreck);
private _terminal = [_helo, "RuggedTerminal_01_F"] call FUNC(createObjectiveObject);

[QGVAR(downloadIntelActionEvent), _terminal] call CBA_fnc_globalEvent;

[
    true,
    ["task4"],
    ["Locate and download the intel from the crash site, its motion sensored so stay close.", "Download Intel"],
    _position,
    "ASSIGNED",
    -1,
    true,
    "intel"
] call BIS_fnc_taskCreate;

[_helo, _size] call FUNC(createChaseZone);

// Task completed via event
