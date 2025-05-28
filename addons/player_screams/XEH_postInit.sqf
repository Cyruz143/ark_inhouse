#include "script_component.hpp"

if (!hasInterface) exitWith {};

["ace_unconscious", {
    params ["_unit", "_state"];

    if (!_state || { !alive _unit } || { !isNull objectParent _unit }) exitWith {};

    private _scream = selectRandom [MACRO_PLAYER_SCREAMS];
    [QEGVAR(common,say3D), [_unit, _scream, 200]] call CBA_fnc_globalEvent;

    if (isPlayer _unit) then {
        [] call FUNC(unconsciousFX);
    };
}] call CBA_fnc_addEventHandler;
