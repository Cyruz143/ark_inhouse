#include "admiral_macros.h"

#include "\userconfig\admiral\log\config.h"
#include "logbook.h"


adm_config_fnc_getConfig = {
    DECLARE(_config) = ADMIRAL_MISSION_CONFIG_FILE;
    {
        _config = _config >> _x;
    } foreach _this;
    if (configName _config == "") then {
        _config = ADMIRAL_CONFIG_FILE;
        {
            _config = _config >> _x;
        } foreach _this;
    };

    _config;
};

adm_config_fnc_getBothArray = {
    private ["_config", "_values"];
    _config = ADMIRAL_MISSION_CONFIG_FILE;
    {
        _config = _config >> _x;
    } foreach _this;
    _values = getArray _config;

    _config = ADMIRAL_CONFIG_FILE;
    {
        _config = _config >> _x;
    } foreach _this;
    PUSH_ALL(_values,getArray _config);

    _values;
};

adm_config_fnc_getArray = {
    getArray (_this call adm_config_fnc_getConfig);
};

adm_config_fnc_getText = {
    getText (_this call adm_config_fnc_getConfig);
};

adm_config_fnc_getNumber = {
    getNumber (_this call adm_config_fnc_getConfig);
};

adm_config_fnc_getBool = {
    getNumber (_this call adm_config_fnc_getConfig) == 1;
};

adm_common_fnc_getEventFileResult = {
    FUN_ARGS_2(_fileName,_arguments);

    private ["_file", "_result"];
    _file = ["Events", _fileName] call adm_config_fnc_getText;
    _result = [];
    if (_file != "") then {
        _result = _arguments call compile preprocessFileLineNumbers _file;
    };

    _result;
};

adm_common_fnc_callEventFile = {
    FUN_ARGS_2(_fileName,_arguments);

    DECLARE(_file) = ["Events", _fileName] call adm_config_fnc_getText;
    if (_file != "") then {
        _arguments call compile preprocessFileLineNumbers _file;
    };
};

adm_config_fnc_getCustomConfig = {
    DECLARE(_config) = _this select 0;
    for "_i" from 1 to (count _this) - 1 do {
        _config = _config >> (_this select _i);
    };

    _config;
};

adm_config_fnc_getCustomArray = {
    getArray (_this call adm_config_fnc_getCustomConfig);
};

adm_config_fnc_getCustomText = {
    getText (_this call adm_config_fnc_getCustomConfig);
};

adm_config_fnc_getCustomNumber = {
    getNumber (_this call adm_config_fnc_getCustomConfig);
};

adm_config_fnc_getCustomBool = {
    getNumber (_this call adm_config_fnc_getCustomConfig) == 1;
};