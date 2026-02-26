#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * N/A
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

private _size = (getMarkerSize "ts_spawn_selectedLocation" select 0) + _sizeChange;
"ts_spawn_selectedLocation" setMarkerSize [_size, _size];

GVAR(positionSize) = [_size, _size];
publicVariable QGVAR(positionSize);
