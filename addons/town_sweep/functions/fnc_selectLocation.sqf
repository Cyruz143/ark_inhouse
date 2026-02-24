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

ts_mapSingleClickID = addMissionEventHandler ["MapSingleClick", {
    params ["", "_pos"];

    ts_spawn_selectedLocation params ["_position", "_size", "_active"];
    ts_spawn_selectedLocationMarkerName setMarkerPosLocal _position;
    ts_spawn_selectedLocationMarkerName setMarkerSize [_size, _size];

    ts_spawnSelectedLocation set [0, _pos];
    publicVariable "ts_spawnSelectedLocation";

    ts_spawn_playerCount = count ([false] call EFUNC(common,players));
    publicVariable "ts_spawn_playerCount";

    removeMissionEventHandler ["MapSingleClick", ts_mapSingleClickID];
}];
