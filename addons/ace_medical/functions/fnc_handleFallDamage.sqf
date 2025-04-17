#include "..\script_component.hpp"
/*
 * Author: Cyruz, Diwako
 * Handles fall damage from ACE
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Damage Info <ARRAY>
 * 3: Damage Type <STRING>
 *
 * Return Value:
 * Array of ACE damage info, effectively same info structure as arguments
 *
 * Example:
 * [] call ark_ace_medical_fnc_handleFallDamage
 */

params ["_unit", "_allDamages", "_typeOfDamage", ["_ammo", ""]];

private _copy = _allDamages call BIS_fnc_arrayShuffle;
private _addDamage = 0;
private _lethality = 0;
for "_" from 2 to ((count _copy) - 1)  do {
    private _deleted = _copy deleteAt 0;
    _addDamage = _addDamage + (_deleted select 0);
    _lethality = _lethality + (_deleted select 2);
};

{
    _x set [0, (_x select 0) + (_addDamage / 2)];
    _x set [2, (_x select 2) + (_lethality / 2)];
} forEach _copy;

[_unit, _copy, _typeOfDamage, _ammo]
