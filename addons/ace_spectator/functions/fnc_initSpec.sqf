#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Initialises spectator, displays message showing who killed you and from what distance
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Unused
 * 2: Killer <OBJECT>
 * 3: Instigator <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_ace_spectator_fnc_initSpec
 */

params ["_unit", "", "_killer", "_instigator"];

if (!local _unit || { _unit isNotEqualTo player } || { (getMissionConfigValue ["respawn",0]) isNotEqualTo 0 }) exitWith {};

if (isNull _killer) then {
    _killer = _instigator;
};

// If hosted SP, exit to default ending screen
if ((call bis_fnc_getNetMode) isEqualTo "SinglePlayer") exitWith {
    [_unit,_killer] spawn BIS_fnc_respawnNone;
};

private _killMessage = "";
private _killerVehicle = "";

if (!isNull _killer) then {
    if (!(_killer isKindOf "CAManBase")) then {
        _killerVehicle = getText (configOf vehicle _killer >> "displayName");
        _killer = effectiveCommander _killer;
    };

    private _killerName = [_killer] call ace_common_fnc_getName;
    private _killerDistance = round ((getPosASL _unit) distance (getPosASL _killer));
    private _killerWeapon = getText (configFile >> "CfgWeapons" >> (currentWeapon vehicle _killer) >> "DisplayName");
    _killMessage = format ["You were <t color='#CC0000'>killed</t> by %1 with an %2 at %3 m",_killerName,_killerWeapon,_killerDistance];

    if (_killerVehicle isNotEqualTo "") then {
        _killMessage = format ["You were <t color='#CC0000'>killed</t> by %1 in a %2 at %3 m",_killerName,_killerVehicle,_killerDistance];
    };

    if ([(side group _unit), (side group _killer)] call BIS_fnc_areFriendly) then {
        _killMessage = format ["You were <t color='#0066CC'>friendly fired</t> by %1 with an %2 at %3 m",_killerName,_killerWeapon,_killerDistance];
    };

    if (_killer isEqualTo _unit) then {
        _killMessage = "You <t color='#009933'>killed yourself</t>";
    };

    [2, _killer, -2, (getPosATL _killer)] call ace_spectator_fnc_setCameraAttributes;
} else {
    _killMessage = "You were <t color='#CC0000'>killed</t> by an explosion or grenade";
    [2, _unit, -2, (getPosATL _unit)] call ace_spectator_fnc_setCameraAttributes;
};

["west", "east", "resistance", "civ"] call acre_api_fnc_babelSetSpokenLanguages;

[_killMessage] spawn {
    params ["_killMessage"];
    [false] call ace_common_fnc_setVolume;
    cutText ["", "BLACK OUT", 3];
    uiSleep 3;

    [_killMessage,-1,-1,5,1] spawn BIS_fnc_dynamicText;

    uiSleep 5;
    cutText ["", "PLAIN", 2];
    [true] call ace_common_fnc_setVolume;
    [true] call ace_spectator_fnc_setSpectator;
};
