#include "script_component.hpp"

if (!hasInterface) exitWith {};

["ace_unconscious", {
    params ["_unit", "_state"];

    if (!_state || { !alive _unit } || { !isNull objectParent _unit }) exitWith {};

    _unit say3D [(selectRandom [MACRO_PLAYER_SCREAMS]), 200, 1, false];

    if (isPlayer _unit) then {
        [] call FUNC(unconsciousFX);
    };
}] call CBA_fnc_addEventHandler;
