#include "..\script_component.hpp"
/*
 * Author: Cyruz, Commy2, Drofseh
 * Condition for chopping the shrubbery.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * 0: Can Chop <BOOL>
 *
 * Example:
 * [] call ark_forestry_fnc_canChop
 */

private _nearObj = nearestTerrainObjects [player, ["TREE", "SMALL TREE", "BUSH"], 5, false, true];

if (isNil "_nearObj" || { _nearObj isEqualTo [] }) exitWith {
    false;
};

true
