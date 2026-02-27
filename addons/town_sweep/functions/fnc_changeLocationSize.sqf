#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * N/A
 *
 * Locality: Player (ace action, publicVariable'd)
 *
 * Arguments:
 * 0: Size Change <NUMBER>
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_town_sweep_fnc_changeLocationSize
 */

params ["_sizeChange"];

if (GVAR(positionActive)) exitWith {};

private _size = (getMarkerSize QGVAR(selectedLocationMarker) select 0) + _sizeChange;
QGVAR(selectedLocationMarker) setMarkerSize [_size, _size];

GVAR(positionSize) = [_size, _size];
publicVariable QGVAR(positionSize);
