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

["ts_mapClick", "onMapSingleClick", {
    [0, {
        call FUNC(moveLocationMarker);
        ts_spawn_selectedLocation set [0, (_this #0)];
        ts_spawn_selectedLocation set [1, (_this #1)];
        ts_spawn_selectedLocation set [2, (_this #2)];
        ts_spawn_playerCount = count (playableUnits select { isPlayer _x });
    }, [_pos, 1000, false]] call CBA_fnc_globalExecute;

    ["ts_mapClick", "onMapSingleClick"] call BIS_fnc_removeStackedEventHandler;
}] call BIS_fnc_addStackedEventHandler;
