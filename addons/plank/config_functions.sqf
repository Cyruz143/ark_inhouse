#include "script_component.hpp"

plank_config_fnc_getConfig = {
    private _config = PLANK_MISSION_CONFIG_FILE;
    {
        _config = _config >> _x;
    } forEach _this;
    if (configName _config == "") then {
        _config = PLANK_CONFIG_FILE;
        {
            _config = _config >> _x;
        } forEach _this;
    };

    _config;
};

plank_config_fnc_getBothArray = {
    private _config = PLANK_MISSION_CONFIG_FILE;
    {
        _config = _config >> _x;
    } forEach _this;
    private _values = getArray _config;

    _config = PLANK_CONFIG_FILE;
    {
        _config = _config >> _x;
    } forEach _this;
    PUSH_ALL(_values,getArray _config);

    _values;
};

plank_config_fnc_getArray = {
    getArray (call plank_config_fnc_getConfig);
};

plank_config_fnc_getText = {
    getText (call plank_config_fnc_getConfig);
};

plank_config_fnc_getNumber = {
    getNumber (call plank_config_fnc_getConfig);
};

plank_config_fnc_getBool = {
    getNumber (call plank_config_fnc_getConfig) == 1;
};

plank_common_fnc_getEventFileResult = {
    params ["_fileName","_arguments"];

    private _file = ["Events", _fileName] call plank_config_fnc_getText;
    private _result = [];
    if (_file != "") then {
        _result = _arguments call compile preprocessFileLineNumbers _file;
    };

    _result;
};

plank_common_fnc_callEventFile = {
    params ["_fileName","_arguments"];

    private _file = ["Events", _fileName] call plank_config_fnc_getText;
    if (_file != "") then {
        _arguments call compile preprocessFileLineNumbers _file;
    };
};

plank_config_fnc_getCustomConfig = {
    private _config = _this select 0;
    for "_i" from 1 to (count _this) - 1 do {
        _config = _config >> (_this select _i);
    };

    _config;
};

plank_config_fnc_getCustomArray = {
    getArray (call plank_config_fnc_getCustomConfig);
};

plank_config_fnc_getCustomText = {
    getText (call plank_config_fnc_getCustomConfig);
};

plank_config_fnc_getCustomNumber = {
    getNumber (call plank_config_fnc_getCustomConfig);
};

plank_config_fnc_getCustomBool = {
    getNumber (call plank_config_fnc_getCustomConfig) == 1;
};

plank_config_fnc_getInitEntries = {
    params ["_initArray"];

    private _initEntires = [];
    for "_i" from 1 to (count _initArray) - 1 do {
        PUSH(_initEntires,_initArray select _i);
    };

    _initEntires;
};

plank_config_fnc_getEntryWithName = {
    params ["_entries","_name"];

    private _entry = [];
    {
        if (_x select 0 == _name) exitWith { _entry = _x; };
    } forEach _entries;

    _entry;
};

plank_config_fnc_getEntry = {
    params ["_entries","_name"];

    private _entryWithName = [_entries, _name] call plank_config_fnc_getEntryWithName;
    private _entry = [];
    if (count _entryWithName > 1) then {
        for "_i" from 1 to (count _entryWithName) - 1 do {
            PUSH(_entry,_entryWithName select _i);
        };
    };

    _entry;
};
