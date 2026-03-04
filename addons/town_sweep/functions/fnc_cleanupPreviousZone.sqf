#include "..\script_component.hpp"
/*
 * Author: Mike
 * Handles cleanup of any AI, vehicles or crates left in previous objectives, including dead.
 *
 * Locality: Server (called from activateLocation)
 *
 * Arguments:
 * 0: Task ID <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_town_sweep_fnc_cleanupPreviousZone
 */

params ["_taskID"];
[{
    params ["_taskID"];
    private _markerName = format [QGVAR(cleanupMarker_%1), _taskID];
    private _thingsToClean = _markerName nearEntities [[], false, false, true]; // Grab everything
    private _playerFilter = [] call EFUNC(common,players);

    // Filter out VR, Logics and players.
    _thingsToClean = _thingsToClean select {!(typeOf _x in ["C_Bob_VR", "C_Jeff_VR"])};
    _thingsToClean = _thingsToClean select {!(_x isKindOf "Logic")};
    _thingsToClean = _thingsToClean select {!(_x in _playerFilter)};

    // Slight delay to ensure things are collected.
    [{
        params ["_thingsToClean"];
        deleteVehicle _thingsToClean;
    }, [_thingsToClean], 5] call CBA_fnc_waitAndExecute;
}, [_taskID], 60] call CBA_fnc_waitAndExecute;
