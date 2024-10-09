#include "hull3_macros.h"

#define ADDON_NS                        hull3
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
    FUN_ARGS_2(_eventName,_code);

    private ["_eventIndex", "_handlerId"];
    _eventIndex = [_eventName] call FNC_FIND_EVENT;
    _handlerId = -1;
    if (_eventIndex != -1) then {
        DECLARE(_handlerArray) = EVENTS_ARRAY select _eventIndex select 2;
        _handlerId = count _handlerArray;
        PUSH(_handlerArray,_code);
    };

    _handlerId;
};

FNC_REMOVE_EVENT_HANDLER = {
    FUN_ARGS_2(_eventName,_handlerId);

    private ["_eventIndex", "_handlerArray"];
    _eventIndex = [_eventName] call FNC_FIND_EVENT;
    _handlerArray = EVENTS_ARRAY select _eventIndex select 2;
    if (_eventIndex != -1 && {_handlerId >= 0} && {count _handlerArray >= _handlerId + 1}) then {
        _handlerArray set [_handlerId, {}];
    };
};

FNC_ADD_EVENT = {
    FUN_ARGS_2(_eventName,_eventConfigName);

    if ([_eventName] call FNC_FIND_EVENT == -1) then {
        PUSH(EVENTS_ARRAY,AS_ARRAY_3(_eventName,_eventConfigName,[]));
    };
};

FNC_EMIT_EVENT = {
    FUN_ARGS_2(_eventName,_arguments);

    DECLARE(_eventIndex) = [_eventName] call FNC_FIND_EVENT;
    if (_eventIndex != -1) then {
        {
            _arguments call _x;
        } forEach (EVENTS_ARRAY select _eventIndex select 2);
        [EVENTS_ARRAY select _eventIndex select 1, _arguments] call hull3_common_fnc_callEventFile;
    };
};

FNC_FIND_EVENT = {
    FUN_ARGS_1(_eventName);

    DECLARE(_eventIndex) = -1;
    {
        if (_x select 0 == _eventName) exitWith {_eventIndex = _forEachIndex};
    } forEach EVENTS_ARRAY;

    _eventIndex;
};

FNC_ADD_ALL_EVENTS = {
    ["hull3.initialized", "hull3_initialized"] call FNC_ADD_EVENT;
    ["player.initialized", "player_initialized"] call FNC_ADD_EVENT;
    ["player.respawned", "player_respawned"] call FNC_ADD_EVENT;
    ["marker.group.created", "marker_group_created"] call FNC_ADD_EVENT;
    ["acre.initialized", "acre_initialized"] call FNC_ADD_EVENT;
    ["acre.channels.set", "acre_channels_set"] call FNC_ADD_EVENT;
    ["gear.assigned", "gear_assigned"] call FNC_ADD_EVENT;
    ["gear.radio.assigned", "gear_radio_assigned"] call FNC_ADD_EVENT;
    ["mission.safetytimer.ended", "mission_safetytimer_ended"] call FNC_ADD_EVENT;
    ["mission.jip.sending", "mission_jip_sending"] call FNC_ADD_EVENT;
    ["mission.jip.received", "mission_jip_received"] call FNC_ADD_EVENT;
};

FNC_INIT = {
    EVENTS_ARRAY = [];
    [] call FNC_ADD_ALL_EVENTS;
};
