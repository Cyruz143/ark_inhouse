#include "script_component.hpp"
#include "admiral_macros.h"
#include "admiral_modules_macros.h"
#include "\userconfig\admiral\log\zone.h"

adm_zone_fnc_init = {
    adm_zones = [];
    adm_uninitializedZones = [];
    [] call adm_zone_fnc_addEventHandlers;
};

adm_zone_fnc_addEventHandlers = {
    ["admiral.initialized", { { _x call adm_zone_fnc_initZone; } forEach adm_uninitializedZones; }] call adm_event_fnc_addEventHandler
};

adm_zone_fnc_tryInitZone = {
    private _id = [] call adm_id_fnc_nextId;
    if (adm_isInitialized) then {
        //DEBUG("admiral.zone.tryinit",FMT_2("Admiral is initialized. Initializing zone with ID '%1' and configs '%2'.",_id,_this));
        [_id, _this] call adm_zone_fnc_initZone;
    } else {
        //DEBUG("admiral.zone.tryinit",FMT_2("Admiral is not initialized. Adding zone with ID '%1' and configs '%2' to uninitialized zones.",_id,_this));
        PUSH(adm_uninitializedZones,AS_ARRAY_2(_id,_this));
    };

    _id;
};

adm_zone_fnc_initZone = {
    params ["_id", "_configs"];

    private _zone = if (typeName (_configs select 0) == "OBJECT") then {
        //DEBUG("admiral.zone.init",FMT_3("Initializing zone from trigger '%1' with ID '%2' and configs '%3'.",_configs select 0,_id,_configs select 1));
        [_id, _configs select 0, _configs select 1] call adm_zone_fnc_createTriggerZone;
    } else {
        //DEBUG("admiral.zone.init",FMT_2("Initializing zone with ID '%1' and configs '%2'.",_id,_configs));
        [_id, _configs] call adm_zone_fnc_createZone;
    };
    ["zone.initialized", [_zone]] call adm_event_fnc_emitEvent;
    [_zone] spawn GET_ZONE_INIT_FUNCTION(_zone);

    _zone;
};

adm_zone_fnc_createTriggerZone = {
    params ["_id", "_trigger", "_configs"];

    PUSH(_configs,AS_ARRAY_2("position",getPosATL _trigger));
    PUSH(_configs,AS_ARRAY_2("area",triggerArea _trigger));

    [_id, _configs] call adm_zone_fnc_createZone;
};

adm_zone_fnc_getDefaultZoneFromType = {
    params ["_configs"];

    private _zoneType = (FIRST(_configs,{_x select 0 == "type"})) select 1;

    call {
        if (_zoneType == "camp")    exitWith {DEFAULT_CAMP_VALUES};
        if (_zoneType == "patrol")  exitWith {DEFAULT_PATROL_VALUES};
        if (_zoneType == "cqc")     exitWith {DEFAULT_CQC_VALUES};
    };
};

adm_zone_fnc_createZone = {
    params ["_id", "_configs"];

    private _zone = [_configs] call adm_zone_fnc_getDefaultZoneFromType;
    SET_ZONE_ID(_zone,_id);
    {
        [_zone,_x] call adm_zone_fnc_setZoneValueFromConfig;
    } forEach _configs;
    [_zone] call adm_zone_fnc_initZoneName;
    PUSH(adm_zones,_zone);
    //DEBUG("admiral.zone.create",FMT_2("Created zone with ID '%1' and configs '%2'.",_id,_configs));

    _zone;
};

adm_zone_fnc_initZoneName = {
    params ["_zone"];

    private _zoneName = GET_ZONE_NAME(_zone);
    if (_zoneName != "") then {
        _zone call compile format ["%1 = _this;", _zoneName];
    };

};

adm_zone_fnc_setZoneValueFromConfig = {
    params ["_zone", "_config"];

    DECLARE_2(_config,_configName,_configValue);
    call {
        if (_configName == "name")              exitWith {SET_ZONE_NAME(_zone,_configValue);};
        if (_configName == "type")              exitWith {SET_ZONE_TYPE(_zone,_configValue);};
        if (_configName == "position")          exitWith {SET_ZONE_POSITION(_zone,_configValue);};
        if (_configName == "area")              exitWith {SET_ZONE_AREA(_zone,_configValue);};
        if (_configName == "enabled")           exitWith {SET_ZONE_ENABLED(_zone,_configValue);};
        if (_configName == "unitTemplate")      exitWith {SET_ZONE_UNIT_TEMPLATE(_zone,_configValue);};
        if (_configName == "pool")              exitWith {SET_ZONE_POOL(_zone,_configValue);};
        if (_configName == "zoneTemplate")      exitWith {SET_ZONE_TEMPLATE(_zone,_configValue);};
        if (_configName == "campType")          exitWith {SET_CAMP_TYPE(_zone,_configValue);};
        if (_configName == "wave")              exitWith {SET_CAMP_WAVE(_zone,_configValue);};
        if (_configName == "campDelay")         exitWith {SET_CAMP_DELAY(_zone,_configValue);};
        if (_configName == "groupDelay")        exitWith {SET_CAMP_GROUP_DELAY(_zone,_configValue);};
        if (_configName == "spawnChance")       exitWith {SET_CAMP_SPAWN_CHANCE(_zone,_configValue);};
        if (_configName == "minHeight")         exitWith {SET_CQC_MIN_HEIGHT(_zone,_configValue);};
    };
};

adm_zone_fnc_getZoneById = {
    params ["_id"];

    FIRST(adm_zones,{GET_ZONE_ID(_x) == _id});
};

adm_zone_initZoneFromModule = {
    params ["_module", "_activated", "_configFunc"];

    if (!_activated) exitWith {
        //DEBUG("admiral.module.init",FMT_1("NOT initializing zone from module '%1', it was deactivated.",_module));
    };
    private ["_moduleConfigs", "_defaultConfigs", "_triggers"];
    _moduleConfigs = [_module] call _configFunc;
    _defaultConfigs = [_module] call adm_zone_getModuleDefaultConfigs;
    PUSH_ALL(_moduleConfigs,_defaultConfigs);
    _triggers = [];
    FILTER_PUSH_ALL(_triggers,synchronizedObjects _module,{count triggerArea _x > 0});
    if (count _triggers == 0) then {
        private _configs = +_moduleConfigs;
        _configs pushBack ["area", [_module] call adm_zone_getModuleArea];
        _configs pushBack ["position", getPosATL _module];
        _configs call adm_zone_fnc_tryInitZone;
        //DEBUG("admiral.module.init",FMT_2("Initialized zone from module '%1' with configs '%2'.",_module,_configs));
    } else {
        {
            private _configs = +_moduleConfigs;
            _configs pushBack ["area", triggerArea _x];
            _configs pushBack ["position", getPosATL _x];
            [_x, _configs] call adm_zone_fnc_tryInitZone;
            //DEBUG("admiral.module.init",FMT_3("Initialized zone from module '%1' using trigger '%2' with configs '%3'.",_module,_x,_configs));
        } forEach _triggers;
    };
};

adm_zone_initCqcZoneFromModule = {
    params ["_module", "", "_activated"];

    [_module, _activated, adm_zone_getCqcModuleConfigs] call adm_zone_initZoneFromModule;

    true;
};

adm_zone_initPatrolZoneFromModule = {
    params ["_module", "", "_activated"];

    [_module, _activated, adm_zone_getPatrolModuleConfigs] call adm_zone_initZoneFromModule;

    true;
};

adm_zone_initPeriodicCampZoneFromModule = {
    params ["_module", "", "_activated"];

    [_module, _activated, adm_zone_getPeriodicCampModuleConfigs] call adm_zone_initZoneFromModule;

    true;
};

adm_zone_initOndemandCampZoneFromModule = {
    params ["_module", "", "_activated"];

    [_module, _activated, adm_zone_getOndemandCampModuleConfigs] call adm_zone_initZoneFromModule;

    true;
};

adm_zone_initRandomCampZoneFromModule = {
    params ["_module", "", "_activated"];

    [_module, _activated, adm_zone_getRandomCampModuleConfigs] call adm_zone_initZoneFromModule;

    true;
};

adm_zone_getModuleDefaultConfigs = {
    params ["_module"];

    private _configs = [];
    {
        private ["_moduleVariableName", "_value"];
        _moduleVariableName = _x select 0;
        _value = _module getVariable _moduleVariableName;
        if (!isNil {_value} && {_value != ""}) then {
            _configs pushBack [_x select 1, _value];
        };
    } forEach DEFAULT_ARGS;

    _configs;
};

adm_zone_getModuleArea = {
    params ["_module"];

    private _area = [];
    _area pushBack (_module getVariable QUOTE(AXIS_A_ARG_CLASS));
    _area pushBack (_module getVariable QUOTE(AXIS_B_ARG_CLASS));
    _area pushBack (_module getVariable QUOTE(ANGLE_ARG_CLASS));
    _area pushBack (_module getVariable QUOTE(SHAPE_ARG_CLASS));

    _area;
};

adm_zone_getCqcModuleConfigs = {
    params ["_module"];

    private _configs = [];
    _configs pushBack ["type", "cqc"];
    _configs pushBack ["pool", _module getVariable QUOTE(CQC_POOL_ARG_CLASS)];
    _configs pushBack ["minHeight", _module getVariable QUOTE(MIN_HEIGHT_ARG_CLASS)];

    _configs;
};

adm_zone_getPatrolModuleConfigs = {
    params ["_module"];

    private _configs = [];
    PUSH_GROUP_TYPE_CONFIG("pool",_module,PATROL_POOL_MODULE_VARS,_configs);
    _configs pushBack ["type", "patrol"];

    _configs;
};

adm_zone_getPeriodicCampModuleConfigs = {
    params ["_module"];

    private _configs = [_module] call adm_zone_getCampModuleConfigs;
    _configs pushBack ["campType", "periodic"];
    PUSH_GROUP_TYPE_CONFIG("groupDelay",_module,PERIODIC_GROUP_DELAY_MODULE_VARS,_configs);

    _configs;
};

adm_zone_getOndemandCampModuleConfigs = {
    params ["_module"];

    private _configs = [_module] call adm_zone_getCampModuleConfigs;
    _configs pushBack ["campType", "ondemand"];
    PUSH_GROUP_TYPE_CONFIG("spawnChance",_module,RANDOM_SPAWN_CHANCE_MODULE_VARS,_configs);

    _configs;
};

adm_zone_getRandomCampModuleConfigs = {
    params ["_module"];

    private _configs = [_module] call adm_zone_getCampModuleConfigs;
    _configs pushBack ["campType", "random"];
    PUSH_GROUP_TYPE_CONFIG("spawnChance",_module,RANDOM_SPAWN_CHANCE_MODULE_VARS,_configs);

    _configs;
};

adm_zone_getCampModuleConfigs = {
    params ["_module"];

    private _configs = [];
    _configs pushBack ["type", "camp"];
    _configs pushBack ["campDelay", _module getVariable QUOTE(CAMP_DELAY_ARG_CLASS)];
    PUSH_GROUP_TYPE_CONFIG("pool",_module,CAMP_POOL_MODULE_VARS,_configs);
    PUSH_GROUP_TYPE_CONFIG("wave",_module,CAMP_WAVE_MODULE_VARS,_configs);

    _configs;
};
