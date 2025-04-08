#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * ..Something?
 *
 * Arguments:
 * 0: Enabled <BOOL>
 *
 * Return Value:
 * None
 *
 * Example:
 * [true] call ark_admin_tools_fnc_aiDebug
 */

params ["_enabled"];

ark_aiDebugEnabled = _enabled;
_enabled call FUNC(createDebugMarkers);
