#include "script_component.hpp"

#define ADDON_NS                        plank
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

    private _eventIndex = [_eventName] call FNC_FIND_EVENT;
    private _handlerId = -1;
    if (_eventIndex != -1) then {
        private _handlerArray = EVENTS_ARRAY select _eventIndex select 2;
        _handlerId = count _handlerArray;
        PUSH(_handlerArray,_code);
    };

    _handlerId;
};

FNC_REMOVE_EVENT_HANDLER = {
    params ["_eventName","_handlerId"];

    private _eventIndex = [_eventName] call FNC_FIND_EVENT;
    private _handlerArray = EVENTS_ARRAY select _eventIndex select 2;
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
    if (_eventIndex != -1) then {
        {
            _arguments call _x;
        } forEach (EVENTS_ARRAY select _eventIndex select 2);
        [EVENTS_ARRAY select _eventIndex select 1, _arguments] call plank_common_fnc_callEventFile;
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
    ["plank.initialized", "plank_initialized"] call FNC_ADD_EVENT;
};

FNC_INIT = {
    EVENTS_ARRAY = [];
    [] call FNC_ADD_ALL_EVENTS;
};
