#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * N/A
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_town_sweep_fnc_selectLocation
 */

[[QPATHTOEF(main,resources\click.paa), 2.0], ["Click on map to select attack location"]] call CBA_fnc_notify;

if ("itemMap" in assignedItems player) then {
    openMap [true, true];

    ts_mapSingleClickID = addMissionEventHandler ["MapSingleClick", {
        params ["", "_newPos"];

        ts_spawn_selectedLocationMarkerName setMarkerPosLocal _newPos;
        ts_spawn_selectedLocationMarkerName setMarkerSize [1000, 1000];

        // Backwards compatibility: Location, Size, Activated
        ts_spawn_selectedLocation set [0, _newPos];
        ts_spawn_selectedLocation set [1, 1000];
        ts_spawn_selectedLocation set [2, false];

        publicVariable "ts_spawnSelectedLocation";

        ts_spawn_playerCount = count ([false] call EFUNC(common,players));
        publicVariable "ts_spawn_playerCount";

        removeMissionEventHandler ["MapSingleClick", ts_mapSingleClickID];
        openMap [false, false];
    }];
};
