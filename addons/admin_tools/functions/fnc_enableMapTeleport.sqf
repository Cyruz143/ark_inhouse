#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Partially heals a unit
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_unit] call ark_admin_tools_fnc_enableMapTeleport
 */

params ["_unit"];

[["\x\ark\addons\ark_main\resources\click_enable.paa", 2.0], ["Click on map to teleport"]] call CBA_fnc_notify;
openMap [true, true];

_unit onMapSingleClick {
    [_this, _pos] call ark_admin_tools_fnc_teleportUnit;
};
