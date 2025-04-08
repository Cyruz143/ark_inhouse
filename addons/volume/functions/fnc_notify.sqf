#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Notify player of volume levels.
 *
 * Arguments:
 * 0: Volume <NUMBER>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_unit] call ark_volume_fnc_notify
 */

params ["_volume"];

if (GVAR(notification)) then {
    private _str = format ["Volume set to %1%2", round (_volume * 100),"%"];
    [["\a3\ui_f\data\igui\cfg\simpletasks\types\listen_ca.paa", 2.0], [_str], true] call CBA_fnc_notify;
};
