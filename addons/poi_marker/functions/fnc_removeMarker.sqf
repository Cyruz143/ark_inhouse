#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Removes POI marker
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_poi_marker_fnc_removeMarker
 */

if !(isNil QGVAR(drawID)) then {
    removeMissionEventHandler ["Draw3D", GVAR(drawID)];
    GVAR(drawID) = nil;
};
