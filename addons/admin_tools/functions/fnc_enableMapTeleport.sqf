#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Enables map click teleport on a unit.
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

[[QPATHTOEF(main,resources\click_enable.paa), 2.0], ["Click on map to teleport"]] call CBA_fnc_notify;
openMap [true, true];

_unit onMapSingleClick {
    [_this, _pos] call ark_admin_tools_fnc_teleportUnit;
};
