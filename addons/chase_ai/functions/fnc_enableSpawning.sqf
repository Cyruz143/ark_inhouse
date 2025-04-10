#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Checks if spawning is enabled
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_chase_ai_fnc_enableSpawning
 */

params ["_enabled"];

if (_enabled && { ark_chase_ai_var_spawning }) exitWith {
    WARNING("fnc_enableSpawning, You tried to enable spawning while it was already enabled.");
};

ark_chase_ai_var_spawning = _enabled;

if (_enabled) then {
    call FUNC(unitSpawner);
};
