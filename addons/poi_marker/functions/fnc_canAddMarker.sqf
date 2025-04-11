#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Checks if a POI Marker can be added
 *
 * Arguments:
 * Arguments from MapSingleClick missionEventHandler
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_poi_marker_fnc_canAddMarker
 */

params ["","_pos","_alt","_shift"];

if !((objectParent player) isKindOf "Air") exitWith {};

if (_shift) then {
    player setVariable [QGVAR(POI), _pos, false];

    if !(isNil QGVAR(drawID)) then {
        removeMissionEventHandler ["Draw3D", ark_pm_eh_ID];
    };

    GVAR(drawID) = addMissionEventHandler ["Draw3D", {
        call FUNC(addMarker);
    }];
};

if (_alt) then {
    call FUNC(removeMarker);
};
