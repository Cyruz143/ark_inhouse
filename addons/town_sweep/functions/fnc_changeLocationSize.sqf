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

if !(call FUNC(canLocationBeActivated)) exitWith {};

private _size = (ts_spawn_selectedLocation #1) + _sizeChange;
ts_spawn_selectedLocation set [1, _size];
ts_spawn_selectedLocationMarkerName setMarkerSize [_size, _size];
