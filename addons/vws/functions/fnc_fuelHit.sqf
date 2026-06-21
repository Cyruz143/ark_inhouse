#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Check if fuel selection damaged and warn pilot
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 * 1: Selection <STRING>
 * 2: Damage <NUMBER>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_vehicle, "hitFuel", 0.5]] call ark_vws_fnc_fuelHit
 */

params ["_vehicle", "_selection", "_damage"];

// Logging for testing
systemChat format ["Vehicle: %1 | Selection: %2 | Damage: %3",_vehicle,_selection,_damage];

if (_selection isEqualTo "hitFuel" && _damage > 0.05) then {
    {
        systemChat "PLAYING SOUND";
        ["ark_vws_playSound", ["ark_vws_fuel_pressure"], _x] call CBA_fnc_targetEvent;
    } forEach crew _vehicle;
};
