#include "script_component.hpp"

if (!hasInterface) exitWith {};

GVAR(soundList) = [MACRO_PLAYER_SCREAMS];

["ace_unconscious", {
    params ["_unit", "_state"];

    if (!_state || { !alive _unit } || { !isNull objectParent _unit }) exitWith {};

    _unit say3D [(selectRandom GVAR(soundList)), 200, 1, false];
}] call CBA_fnc_addEventHandler;

