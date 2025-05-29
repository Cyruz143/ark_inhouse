#include "..\script_component.hpp"
/*
 * Author: Kami
 * Gets cycles per second
 *
 * Arguments:
 * None
 *
 * Return Value:
 * Number
 *
 * Example:
 * [] call ark_asm_fnc_getCurrentCps
 */

private _elapsedTime = diag_tickTime - GVAR(previousTickTime);

if (_elapsedTime > 0) then {
    (GVAR(conditionEvaluationCount) - GVAR(previousConditionEvaluationCount)) / _elapsedTime;
} else {
    0;
};
