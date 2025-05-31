#include "script_component.hpp"

if (!hasInterface) exitWith {};

["ace_unconscious", {
    params ["_unit", "_state"];

    if (!_state || { !alive _unit }) exitWith {};

    private _scream = selectRandom [MACRO_PLAYER_SCREAMS];
    ["ark_common_say3D", [_unit, _scream, 200]] call CBA_fnc_localEvent;

    if (isPlayer _unit) then {
        [] call FUNC(unconsciousFX);
    };
}] call CBA_fnc_addEventHandler;
