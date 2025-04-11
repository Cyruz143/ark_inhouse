#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Adds markers for players during race missions.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_race_fnc_createUnitMarker
 */

//Unit shouldn't die but it's Arma so...
player addEventHandler ["Killed", {
    str player setMarkerColor "ColorBlack"
}];

private _mkr = createMarker [str player, (getPos player)];
_mkr setMarkerShapeLocal "ICON";
_mkr setMarkerTypeLocal "mil_dot";
_mkr setMarkerColor "ColorYellow";

[{
    params ["_args", "_id"];

    if (alive player) then {
        str player setMarkerPos (getPos player);
        str player setMarkerText ([player] call ace_common_fnc_getName);
    } else {
        _id call CBA_fnc_removePerFrameHandler;
    };
}, 1] call CBA_fnc_addPerFrameHandler;
