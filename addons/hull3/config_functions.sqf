#include "script_component.hpp"

hull3_config_fnc_getConfig = {
    private _config = HULL3_MISSION_CONFIG_FILE;
    {
        _config = _config >> _x;
    } forEach _this;
    if (configName _config == "") then {
        _config = HULL3_CONFIG_FILE;
        {
            _config = _config >> _x;
        } forEach _this;
    };

    _config;
};

hull3_config_fnc_getBothArray = {
    private ["_config", "_values"];
    _config = HULL3_MISSION_CONFIG_FILE;
    {
        _config = _config >> _x;
    } forEach _this;
    _values = getArray _config;

    _config = HULL3_CONFIG_FILE;
    {
        _config = _config >> _x;
    } forEach _this;
    PUSH_ALL(_values,getArray _config);

    _values;
};

hull3_config_fnc_getArray = {
    getArray (call hull3_config_fnc_getConfig);
};

hull3_config_fnc_getText = {
    getText (call hull3_config_fnc_getConfig);
};

hull3_config_fnc_getNumber = {
    getNumber (call hull3_config_fnc_getConfig);
};

hull3_config_fnc_getBool = {
    getNumber (call hull3_config_fnc_getConfig) == 1;
};

hull3_common_fnc_getEventFileResult = {
    params ["_fileName","_arguments"];

    private ["_file", "_result"];
    _file = ["Events", _fileName] call hull3_config_fnc_getText;
    _result = [];
    if (_file != "") then {
        _result = _arguments call compileScript [_file];
    };

    _result;
};

hull3_common_fnc_callEventFile = {
    params ["_fileName","_arguments"];

    private _file = ["Events", _fileName] call hull3_config_fnc_getText;
    if (_file != "") then {
        _arguments call compileScript [_file];
    };
};

hull3_config_fnc_getCustomConfig = {
    private _config = _this select 0;
    for "_i" from 1 to (count _this) - 1 do {
        _config = _config >> (_this select _i);
    };

    _config;
};

hull3_config_fnc_getCustomArray = {
    getArray (call hull3_config_fnc_getCustomConfig);
};

hull3_config_fnc_getCustomText = {
    getText (call hull3_config_fnc_getCustomConfig);
};

hull3_config_fnc_getCustomNumber = {
    getNumber (call hull3_config_fnc_getCustomConfig);
};

hull3_config_fnc_getCustomBool = {
    getNumber (call hull3_config_fnc_getCustomConfig) == 1;
};

hull3_config_fnc_getInitEntries = {
    params ["_initArray"];

    private _initEntires = [];
    for "_i" from 1 to (count _initArray) - 1 do {
        PUSH(_initEntires,_initArray select _i);
    };

    _initEntires;
};

hull3_config_fnc_getEntryWithName = {
    params ["_entries","_name"];

    private _entry = [];
    {
        if (_x select 0 == _name) exitWith { _entry = _x; };
    } forEach _entries;

    _entry;
};

hull3_config_fnc_getEntry = {
    params ["_entries","_name"];

    private _entryWithName = [_entries, _name] call hull3_config_fnc_getEntryWithName;
    private _entry = [];
    if (count _entryWithName > 1) then {
        for "_i" from 1 to (count _entryWithName) - 1 do {
            PUSH(_entry,_entryWithName select _i);
        };
    };

    _entry;
};
