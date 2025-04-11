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
 * [] call ark_town_sweep_fnc_createLocationMarker
 */

private _marker = createMarker [ts_spawn_selectedLocationMarkerName, [0, 0, 0]];
_marker setMarkerSizeLocal [1, 1];
_marker setMarkerAlphaLocal 0.5;
_marker setMarkerShapeLocal "ELLIPSE";
_marker setMarkerBrushLocal "Solid";
_marker setMarkerColor "ColorRed";
