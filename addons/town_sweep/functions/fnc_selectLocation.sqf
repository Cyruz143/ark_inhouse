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

if (player getSlotItemName 608 != "") then {
    openMap [true, true];

    ts_mapSingleClickID = addMissionEventHandler ["MapSingleClick", {
        params ["", "_newPos"];

        QGVAR(selectedLocationMarker) setMarkerPosLocal _newPos;
        QGVAR(selectedLocationMarker) setMarkerSize [GVAR(positionSize), GVAR(positionSize)];

        GVAR(selectedPosition) = _newPos;
        publicVariable QGVAR(selectedPosition);

        GVAR(positionActive) = false;
        publicVariable QGVAR(positionActive);

        ts_spawn_playerCount = count ([false] call EFUNC(common,players));
        publicVariable "ts_spawn_playerCount";

        removeMissionEventHandler ["MapSingleClick", ts_mapSingleClickID];
        openMap [false, false];
    }];
};
