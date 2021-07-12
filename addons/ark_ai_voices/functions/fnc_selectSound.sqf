/*
 * Big thanks to @diwako for helping with this, it's a straight nightmare
*/

ark_ai_voices_fnc_selectSound = {
    params ["_unit","_sndType"];

    private "_voiceLine";
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
    };

    private _speaker = speaker _unit;
    private _speakerVoiceLine = _speaker + _voiceLine;
    private _soundPathArr = ark_ai_voices_namespace getVariable _speakerVoiceLine;

    if (isNil "_soundPathArr") then {
        ["INFO", "fnc_selectSound", "Building cached array for", _speakerVoiceLine] call ark_ai_voices_fnc_log;
        private _dirPath = (getArray (configFile >> "CfgVoice" >> _speaker >> "directories")) #0;
        if (_dirPath isEqualTo "") exitWith {
            ["ERROR", "fnc_selectSound", "No directory path for sounds found for", _speaker] call ark_ai_voices_fnc_log;
        };

        // Fucking config returns with a leading slash that breaks PS3D.... fucking bi
        if ((_dirPath select [0,1]) isEqualTo "\") then {
            _dirPath = _dirPath select [1];
        };

        private _protocolArr = getArray (configFile >> (getText (configFile >> "CfgVoice" >> _speaker >> "protocol")) >> "Words" >> "Combat" >> _voiceLine);
        if (_protocolArr isEqualTo []) exitWith {
            ["ERROR", "fnc_selectSound", "No protocol path sound files available for", _voiceLine] call ark_ai_voices_fnc_log;
        };

        _soundPathArr = [];
        {
            private _soundPath = _dirPath + _x;
            _soundPathArr pushBack _soundPath;
        } forEach _protocolArr;

        ark_ai_voices_namespace setVariable [_speakerVoiceLine, _soundPathArr];
    };

    if (_soundPathArr isEqualTo []) exitWith {
        ["ERROR", "fnc_selectSound", "No sound file to play for unit", _unit] call ark_ai_voices_fnc_log;
    };

    ["ark_ai_voices_ps3d", [_unit, (selectRandom _soundPathArr)]] call CBA_fnc_globalEvent;
};