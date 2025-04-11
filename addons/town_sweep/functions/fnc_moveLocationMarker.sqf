#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * N/A
 *
 * Arguments:
 * 0: Position <POSITION>
 * 1: Size <NUMBER>
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_town_sweep_fnc_moveLocationMarker
 */

params ["_position", "_size"];
ts_spawn_selectedLocationMarkerName setMarkerPosLocal _position;
ts_spawn_selectedLocationMarkerName setMarkerSizeLocal [_size, _size];
ts_spawn_selectedLocationMarkerName setMarkerAlphaLocal 0.5;
ts_spawn_selectedLocationMarkerName setMarkerBrushLocal "Solid";
ts_spawn_selectedLocationMarkerName setMarkerColor "ColorRed";
