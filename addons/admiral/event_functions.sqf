#include "script_component.hpp"

//#define LOGGING_LEVEL_DEBUG
//#define LOGGING_TO_RPT

#define ADDON_NS                        adm
#define ADD_ADDON_NS_TO_ID(M,ID)        M##ID
#define FNC_ADD_EVENT_HANDLER           ADD_ADDON_NS_TO_ID(ADDON_NS,_event_fnc_addEventHandler)
#define FNC_REMOVE_EVENT_HANDLER        ADD_ADDON_NS_TO_ID(ADDON_NS,_event_fnc_removeEventHandler)
#define FNC_ADD_EVENT                   ADD_ADDON_NS_TO_ID(ADDON_NS,_event_fnc_addEvent)
#define FNC_EMIT_EVENT                  ADD_ADDON_NS_TO_ID(ADDON_NS,_event_fnc_emitEvent)
#define FNC_FIND_EVENT                  ADD_ADDON_NS_TO_ID(ADDON_NS,_event_fnc_findEvent)
#define FNC_ADD_ALL_EVENTS              ADD_ADDON_NS_TO_ID(ADDON_NS,_event_fnc_addAllEvents)
#define FNC_INIT                        ADD_ADDON_NS_TO_ID(ADDON_NS,_event_fnc_init)
#define EVENTS_ARRAY                    ADD_ADDON_NS_TO_ID(ADDON_NS,_event_events)


FNC_ADD_EVENT_HANDLER = {
    params ["_eventName","_code"];

    private ["_eventIndex", "_handlerId"];
    _eventIndex = [_eventName] call FNC_FIND_EVENT;
    _handlerId = -1;
    if (_eventIndex != -1) then {
        private _handlerArray = EVENTS_ARRAY select _eventIndex select 2;
        _handlerId = count _handlerArray;
        PUSH(_handlerArray,_code);
    };

    _handlerId;
};

FNC_REMOVE_EVENT_HANDLER = {
    params ["_eventName","_handlerId"];

    private ["_eventIndex", "_handlerArray"];
    _eventIndex = [_eventName] call FNC_FIND_EVENT;
    _handlerArray = EVENTS_ARRAY select _eventIndex select 2;
    if (_eventIndex != -1 && {_handlerId >= 0} && {count _handlerArray >= _handlerId + 1}) then {
        _handlerArray set [_handlerId, {}];
    };
};

FNC_ADD_EVENT = {
    params ["_eventName","_eventConfigName"];

    if ([_eventName] call FNC_FIND_EVENT == -1) then {
        PUSH(EVENTS_ARRAY,AS_ARRAY_3(_eventName,_eventConfigName,[]));
    };
};

FNC_EMIT_EVENT = {
    params ["_eventName","_arguments"];

    private _eventIndex = [_eventName] call FNC_FIND_EVENT;
    LOG_2("admiral.event.emit: Emiting event %1 with found index %2.",_eventName,_eventIndex);
    LOG_3("admiral.event.emit: Emiting event %1 with arguments %2 and found index %3.",_eventName,_arguments,_eventIndex);
    if (_eventIndex != -1) then {
        {
            _arguments call _x;
        } forEach (EVENTS_ARRAY select _eventIndex select 2);
        [EVENTS_ARRAY select _eventIndex select 1, _arguments] call adm_common_fnc_callEventFile;
        LOG_2("admiral.event.emit: Emitted event %1 with arguments %2.",_eventName,_arguments);
    };
};

FNC_FIND_EVENT = {
    params ["_eventName"];

    private _eventIndex = -1;
    {
        if (_x select 0 == _eventName) exitWith {_eventIndex = _forEachIndex};
    } forEach EVENTS_ARRAY;

    _eventIndex;
};

FNC_ADD_ALL_EVENTS = {
    ["admiral.initialized", "admiral_initialized"] call FNC_ADD_EVENT;
    ["zone.initialized", "zone_initialized"] call FNC_ADD_EVENT;
    ["zone.spawned.group", "zone_spawned_group"] call FNC_ADD_EVENT;
    ["zone.spawned.unit", "zone_spawned_unit"] call FNC_ADD_EVENT;
    ["zone.spawned.vehicle", "zone_spawned_vehicle"] call FNC_ADD_EVENT;
    ["zone.spawned.crew", "zone_spawned_crew"] call FNC_ADD_EVENT;
    ["cqc.spawned.groups", "cqc_spawned_groups"] call FNC_ADD_EVENT;
    ["cqc.spawned.group", "cqc_spawned_group"] call FNC_ADD_EVENT;
    ["cqc.spawned.unit", "cqc_spawned_unit"] call FNC_ADD_EVENT;
    ["patrol.spawned.groups", "patrol_spawned_groups"] call FNC_ADD_EVENT;
    ["patrol.spawned.group", "patrol_spawned_group"] call FNC_ADD_EVENT;
    ["patrol.spawned.unit", "patrol_spawned_unit"] call FNC_ADD_EVENT;
    ["patrol.spawned.vehicle", "patrol_spawned_vehicle"] call FNC_ADD_EVENT;
    ["patrol.spawned.crew", "patrol_spawned_crew"] call FNC_ADD_EVENT;
    ["camp.spawned.groups", "camp_spawned_groups"] call FNC_ADD_EVENT;
    ["camp.spawned.group", "camp_spawned_group"] call FNC_ADD_EVENT;
    ["camp.spawned.unit", "camp_spawned_unit"] call FNC_ADD_EVENT;
    ["camp.spawned.vehicle", "camp_spawned_vehicle"] call FNC_ADD_EVENT;
    ["camp.spawned.crew", "camp_spawned_crew"] call FNC_ADD_EVENT;
    ["behavior.state.change", "behavior_state_change"] call FNC_ADD_EVENT;
};

FNC_INIT = {
    EVENTS_ARRAY = [];
    [] call FNC_ADD_ALL_EVENTS;
};
