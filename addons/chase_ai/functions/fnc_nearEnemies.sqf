#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Selects a nearby enemy.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * Selected enemy
 *
 * Example:
 * [] call ark_chase_ai_fnc_nearEnemies
 */

params ["_unit"];

private _selectedEnemy = _unit findNearestEnemy _unit;

if (_selectedEnemy isEqualTo objNull || { objectParent _selectedEnemy isKindOf "Air" }) then {
    private _nearEnemies = _unit nearEntities [["Man","Car","Tank"], (ark_chase_ai_var_maxDistance + 50)] select {isPlayer _x  && {alive _x}};

    if (_nearEnemies isEqualTo []) then {
        _selectedEnemy = [];
    } else {
        _selectedEnemy = selectRandom _nearEnemies;
    };
};

_selectedEnemy //return
