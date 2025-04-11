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
 * [] call ark_town_sweep_fnc_enableRotor
 */

params ["_insertType"];
ts_spawn_selectedLocation params ["_position"];

private _lzPos = [_position, 0, 150, 10, 0, 0.2] call BIS_fnc_findSafePos;
// BIS_fnc_findSafePos returns X and Y with success and  X Y Z on failure... fucking BI
if (count _selectedPos isEqualTo 3) exitWith {};

private _spawnPos = _position getPos [3000, random 360];
private _spawnZone = createTrigger ["EmptyDetector", _spawnPos, false];
private _grp = createGroup civilian;
_grp deleteGroupWhenEmpty true;

private _jeff = _grp createUnit ["C_Jeff_VR", _spawnPos, [], 0, "NONE"];
_grp addWaypoint [_lzPos, 0, 1];
_grp addWaypoint [[worldSize, worldSize, 0], 100, 2];

private "_module";
if (_insertType isEqualTo "paradrop") then {
    _module = "ARK_Rotor_Paradrop" createVehicleLocal _spawnPos;
    _module setVariable ["Routine_Function", "ark_rotor_fnc_paradrop"];
} else {
    _module = "ARK_Rotor_Insert" createVehicleLocal _spawnPos;
    _module setVariable ["Routine_Function", "ark_rotor_fnc_insert"];
    _module setVariable ["Fly_Height", 75];
};

_module setVariable ["Crew_Percentage", 100];
_spawnZone synchronizeObjectsAdd [_module,_jeff];
