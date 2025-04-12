#include "..\script_component.hpp"
/*
 * Author: Timi007. Cplhardcore
 * Pass launcher to another unit.
 *
 * Arguments:
 * 0: Unit that passes the launcher <OBJECT>
 * 1: Unit to pass the launcher to <OBJECT>
 * 2: Launcher classname <STRING>
 *
 *
 * Return Value:
 * None
 *
 * Example:
 * [_player, _target, "launch_NLAW_F"] call ark_launchers_fnc_passLauncher
 *
 * Public: No
 */
params ["_player", "_target", "_launcher"];

private _playerName = [_player] call ace_common_fnc_getName;
private _cfgWeapons = configFile >> "CfgWeapons" >> _launcher;
private _displayName = getText (_cfgWeapons >> "displayName");

if (_launcher isEqualTo "") exitWith {
    ERROR("No launcher specified.");
};

if (secondaryWeapon _player isNotEqualTo "") exitWith {
    ERROR("Cannot add launcher to target due to lack of inventory space.");
};

private _items = (getUnitLoadout _target) select 1;

private _magazines = _items select [4, 2];
_items deleteRange [4, 2];

_target removeWeaponGlobal _launcher;

[_player, _launcher, true, _magazines] call ace_common_fnc_addWeapon;

// Add attachments
{
    _player addWeaponItem [_launcher, _x, true];
} forEach (_items select {_x != ""});

[_player, "PutDown"] call ace_common_fnc_doGesture;

private _playerName = [_player] call ace_common_fnc_getName;
private _targetName = [_target] call ace_common_fnc_getName;
["ace_common_displayTextStructured", [["%1 took your %2 off your back", _playerName, _displayName], 1.5, _target], _target] call CBA_fnc_targetEvent;
["ace_common_displayTextStructured", [["You took %1's %2", _targetName, _displayName], 1.5, _player], _player] call CBA_fnc_targetEvent;
