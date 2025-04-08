#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Restores volume after exiting vehicle
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [_unit] call ark_volume_fnc_restoreVolume
 */

1 fadeSound 1;
1 call FUNC(notify);
