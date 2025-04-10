#include "..\script_component.hpp"
/*
 * Author: Cyruz, Diwako
 * Does a cached config lookup to find the relevant voice line to play based on the units identity
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Sound type <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_ai_voices_fnc_selectSound
 */

params ["_unit","_sndType"];

private _lastLine = _unit getVariable [QGVAR(lastLine), nil];

private "_voiceLine";
if (isNil "_lastLine") then {
    switch (_sndType) do {
        case ("suppressed"): {
            _voiceLine = selectRandom ["UnderFireE", "ContactE_1", "ContactE_2", "ContactE_3", "CombatGenericE", "CoverMeE", "moveBack", "EndangeredE"];
        };
        case ("firing"): {
            _voiceLine = selectRandom ["CheeringE", "ContactE_1", "ContactE_2", "ContactE_3", "CombatGenericE", "CoveringE", "moveUp", "SuppressingE"];
        };
        case ("grenade"): {
            _voiceLine = selectRandom ["ThrowingGrenadeE_1", "ThrowingGrenadeE_2", "ThrowingGrenadeE_3"];
        };
        case ("reloading"): {
            _voiceLine = "ReloadingE";
        };
        case ("wakeup"): {
            _voiceLine = "ScreamingE";
        };
    };
} else {
    switch (_sndType) do {
        case ("suppressed"): {
            private _arr = ["UnderFireE", "ContactE_1", "ContactE_2", "ContactE_3", "CombatGenericE", "CoverMeE", "moveBack", "EndangeredE"];
            _arr deleteAt (_arr find _lastLine);
            _voiceLine = selectRandom _arr;
        };
        case ("firing"): {
            private _arr = ["CheeringE", "ContactE_1", "ContactE_2", "ContactE_3", "CombatGenericE", "CoveringE", "moveUp", "SuppressingE"];
            _arr deleteAt (_arr find _lastLine);
            _voiceLine = selectRandom _arr;
        };
        case ("grenade"): {
            private _arr = ["ThrowingGrenadeE_1", "ThrowingGrenadeE_2", "ThrowingGrenadeE_3"];
            _arr deleteAt (_arr find _lastLine);
            _voiceLine = selectRandom _arr;
        };
        case ("reloading"): {
            _voiceLine = "ReloadingE";
        };
        case ("wakeup"): {
            _voiceLine = "ScreamingE";
        };
    };
};

_unit setVariable [QGVAR(lastLine), _voiceLine];

// Handle muted units, ww2 and sog
private _speaker = speaker _unit;
if (toLowerANSI _speaker in ["", "novoice", "ace_novoice", "fow_mute", "vie", "mute"]) exitWith {
    _unit setVariable [QGVAR(disableVoice), true];
};

private _speakerVoiceLine = _speaker + _voiceLine;
private _soundPathArr = GVAR(nameSpace) get _speakerVoiceLine;

if (isNil "_soundPathArr") then {
    private _dirPath = (getArray (configFile >> "CfgVoice" >> _speaker >> "directories")) #0;
    if (_dirPath isEqualTo "") exitWith {
        ERROR_1("fnc_selectSound, No directory path for sounds for %1",_speaker);
        _unit setVariable [QGVAR(disableVoice), true];
    };

    private _protocolArr = getArray (configFile >> (getText (configFile >> "CfgVoice" >> _speaker >> "protocol")) >> "Words" >> "Combat" >> _voiceLine);

    // Some mods/DLCS don't have combat words, fallback to "Normal"
    if (_protocolArr isEqualTo []) then {
        _protocolArr = getArray (configFile >> (getText (configFile >> "CfgVoice" >> _speaker >> "protocol")) >> "Words" >> "Normal" >> _voiceLine);
    };

    // If it's still empty, unit has fucked config
    if (_protocolArr isEqualTo []) exitWith {
        ERROR_2("fnc_selectSound, No protocol path sound files available for %1, %2",_speaker,_voiceline);
        _unit setVariable [QGVAR(disableVoice), true];
    };

    _soundPathArr = [];
    {
        private _soundPath = _dirPath + _x;
        _soundPathArr pushBack _soundPath;
    } forEach _protocolArr;

    GVAR(nameSpace) set [_speakerVoiceLine, _soundPathArr];
};

if (isNil "_soundPathArr" || { _soundPathArr isEqualTo [] }) exitWith {
    ERROR_1("fnc_selectSound, No sound file to play for unit (%1)",_unit);
    _unit setVariable [QGVAR(disableVoice), true];
};

[QGVAR(ps3d), [_unit, (selectRandom _soundPathArr)]] call CBA_fnc_globalEvent;
