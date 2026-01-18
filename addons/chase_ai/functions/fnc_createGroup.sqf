#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Creates group for AI
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_chase_ai_fnc_createGroup
 */

if (isNil "ark_chase_ai_grp" || {ark_chase_ai_grp isEqualTo grpNull}) then {
    ark_chase_ai_grp = createGroup [ark_chase_ai_var_side, true];
    ark_chase_ai_grp enableAttack false;
    ark_chase_ai_grp setCombatMode "RED";
    ark_chase_ai_grp allowFleeing 0;
};
