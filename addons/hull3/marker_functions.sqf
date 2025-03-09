#include "script_component.hpp"

hull3_marker_fnc_preInit = {
    hull3_marker_rawGroupMarkers = [];
    hull3_marker_updatableMarkers = [];
    hull3_marker_groups = [];
    hull3_marker_units = [];
    hull3_marker_fireTeam = [];
    hull3_marker_custom = [];
    hull3_marker_defaultDelay = ["Marker", "defaultDelay"] call hull3_config_fnc_getNumber;
    LOG("hull3.marker: Marker functions preInit finished.");
};

hull3_marker_fnc_postInit = {
    if (isDedicated) then {
        {
            _x params ["_unit", "_gearClass", "_markerText"];
            LOG_2("hull3.marker.group: Setting Group ID on server for group %1 to %2.",group _unit,_markerText);
            (group _unit) setGroupId [_markerText];
        } forEach hull3_marker_rawGroupMarkers;
    } else {
        call hull3_marker_fnc_cacheColours;
        allGroups apply {
            _x addEventHandler ["UnitLeft", {call hull3_marker_fnc_removeFireTeamMarker}];
            _x addEventHandler ["UnitJoined", {call hull3_marker_fnc_joinFireTeamMarker}];
        };
    };
};

hull3_marker_fnc_disableGroupMarkers = {
    hull3_marker_isGroupEnabled = false;
};

hull3_marker_fnc_disableFireTeamMarkers = {
    hull3_marker_isFireTeamEnabled = false;
};

hull3_marker_fnc_initMarker = {
    params ["_unit", "_markerText", "_markerColor"];
    hull3_marker_rawGroupMarkers pushBack [_unit, _unit getVariable ["hull3_gear_class", hull3_gear_unitBaseClass], _markerText, _markerColor];
};

hull3_marker_fnc_addMarkers = {
    [] call hull3_marker_fnc_addGroupAndUnitMarkers;
    [player] call hull3_marker_fnc_addFireTeamMarkers;
    ["marker.group.created", []] call hull3_event_fnc_emitEvent;
};

hull3_marker_fnc_addGroupAndUnitMarkers = {
    {
        if (side player == side (_x select 0)) then {
            _x call hull3_marker_fnc_addGroupAndUnitMarker;
        };
    } forEach hull3_marker_rawGroupMarkers;
    if (hull3_marker_isGroupEnabled) then {
        hull3_marker_updatableMarkers pushBack [hull3_marker_groups, hull3_marker_fnc_updateGroupMarkers];
        hull3_marker_updatableMarkers pushBack [hull3_marker_units, hull3_marker_fnc_updateUnitMarkers];
    };
    hull3_marker_rawGroupMarkers = nil;
};

hull3_marker_fnc_addGroupAndUnitMarker = {
    params ["_unit", "_gearClass", "_markerText", "_markerColor"];

    private "_markerName";
    call {
        if (toLower _gearClass in ["ftl", "matg", "hatg", "mmgg"]) exitWith {
            [_unit, "b_inf", _markerText, _markerColor] call hull3_marker_fnc_addGroupMarker;
        };
        if (toLower _gearClass in ["sl", "co"]) exitWith {
            [_unit, "b_hq", _markerText, _markerColor] call hull3_marker_fnc_addGroupMarker;
        };
        if (toLower _gearClass == "p") exitWith {
            [_unit, "b_air", _markerText, _markerColor] call hull3_marker_fnc_addGroupMarker;
        };
        if (toLower _gearClass == "vc") exitWith {
            [_unit, "b_armor", _markerText, _markerColor] call hull3_marker_fnc_addGroupMarker;
        };
        if (toLower _gearClass == "eng") exitWith {
            [_unit, "b_maint", _markerText, _markerColor] call hull3_marker_fnc_addGroupMarker;
        };
        if (toLower _gearClass == "xo") exitWith {
            [_unit, "b_hq", _markerText, _markerColor, [1, 1]] call hull3_marker_fnc_addUnitMarker;
        };
        if (toLower _gearClass == "medic") exitWith {
            [_unit, "b_med", _markerText, _markerColor, ["Marker", "MedicMarker", "size"] call hull3_config_fnc_getArray] call hull3_marker_fnc_addUnitMarker;
        };
        [_unit, "b_unknown", _markerText, _markerColor] call hull3_marker_fnc_addGroupMarker;
    };
};

hull3_marker_fnc_addGroupMarker = {
    params ["_unit", "_markerType", "_markerText", "_markerColor"];

    (group _unit) setGroupId [_markerText];
    if (hull3_marker_isGroupEnabled) then {
        _markerName = format ["hull3_marker_group_%1_%2", _markerText, group _unit];
        [_markerName, getPosATL _unit, "ICON", _markerType, _markerColor, _markerText] call hull3_marker_fnc_createMarker;
        (group _unit) setVariable ["hull3_marker_group", _markerName, false];
    };
    hull3_marker_groups pushBack group _unit;
};

hull3_marker_fnc_addUnitMarker = {
    params ["_unit","_markerType","_markerText","_markerColor","_markerSize"];

    _markerName = format ["hull3_marker_unit_%1_%2", _markerText, _unit];
    if (hull3_marker_isGroupEnabled) then {
        [_markerName, getPosATL _unit, "ICON", _markerType, _markerColor, _markerText, _markerSize] call hull3_marker_fnc_createMarker;
        _unit setVariable ["hull3_marker_unit", _markerName, false];
    };
    hull3_marker_units pushBack _unit;
};

hull3_marker_fnc_updateAllMarkers = {
    [
        {
            {
                [_x select 0] call (_x select 1);
            } forEach hull3_marker_updatableMarkers;
        },
        hull3_marker_defaultDelay
    ] call CBA_fnc_addPerFrameHandler;
};

hull3_marker_fnc_updateCustomMarkers = {
    [
        {
            {
                _x call hull3_marker_fnc_updateCustomMarker;
            } forEach hull3_marker_custom;
        },
        1
    ] call CBA_fnc_addPerFrameHandler;
};

hull3_marker_fnc_updateGroupMarkers = {
    params ["_groups"];

    {
        private _group = _x;
        private _markerName = _group getVariable "hull3_marker_group";
        if ({alive _x} count units _group > 0) then {
            _markerName setMarkerPosLocal getPosASL leader _group;
        }
    } forEach _groups;
};

hull3_marker_fnc_updateUnitMarkers = {
    params ["_units"];

    {
        private _unit = _x;
        private _markerName = _unit getVariable "hull3_marker_unit";
        if (alive _unit) then {
            _markerName setMarkerPosLocal getPosASL _unit;
        }
    } forEach _units;
};

hull3_marker_fnc_updateFireTeamMarkers = {
    params ["_fireTeam"];

    {
        private _unit = _x;
        private _markerName = _unit getVariable "hull3_marker_fireTeam";
        if (alive _unit) then {
            _markerName setMarkerPosLocal getPosASL _unit;
            _markerName setMarkerDirLocal getDir _unit;
            _markerName setMarkerColorLocal (hull3_marker_colours getOrDefault [assignedTeam _unit, "ColorWhite"]);
        }
    } forEach _fireTeam;
};

hull3_marker_fnc_updateCustomMarker = {
    params ["_markerName", "_isActive", "_lastUpdate", "_object", "_delay"];

    if (_isActive && {alive _object} && {time - _lastUpdate >= _delay}) then {
        _markerName setMarkerPosLocal getPosASL _object;
        _this set [2, time];
    };
};

hull3_marker_fnc_addFireTeamMarkers = {
    params ["_unit"];

    {
        [_x] call hull3_marker_fnc_addFireTeamMarker;
    } forEach (units group _unit);
    hull3_marker_updatableMarkers pushBack [hull3_marker_fireTeam, hull3_marker_fnc_updateFireTeamMarkers];
};

hull3_marker_fnc_addFireTeamMarker = {
    params ["_unit"];

    if !(hull3_marker_isFireTeamEnabled) exitWith {};
    _markerName = format ["hull3_marker_fireTeam_%1", _unit];
    [
        _markerName,
        getPosATL _unit,
        "ICON",
        "Hull3_UnitMarker",
        ["Marker", "FireTeamMemberMarker", "color"] call hull3_config_fnc_getText,
        "",
        ["Marker", "FireTeamMemberMarker", "size"] call hull3_config_fnc_getArray,
        ["Marker", "FireTeamMemberMarker", "alpha"] call hull3_config_fnc_getNumber
    ] call hull3_marker_fnc_createMarker;
    _unit setVariable ["hull3_marker_fireTeam", _markerName];
    hull3_marker_fireTeam pushBack _unit;
};

hull3_marker_fnc_removeFireTeamMarker = {
    params ["_group", "_unit"];

    private _deleteFnc = {
        params ["_unit"];
        private _markerName = _unit getVariable ["hull3_marker_fireTeam", ""];
        _unit setVariable ["hull3_marker_fireTeam", nil];
        hull3_marker_fireTeam deleteAt (hull3_marker_fireTeam find _unit);
        deleteMarkerLocal _markerName;
    };

    if (_unit == ace_player) then {
        private _filteredGroup = units _group select {_x != _unit};
        {_x call _deleteFnc} forEach _filteredGroup
    } else {
        if (_group == group ace_player) then {
            _unit call _deleteFnc;
        };
    };
};

hull3_marker_fnc_joinFireTeamMarker = {
    params ["_group", "_unit"];

    if (_unit == ace_player) then {
        [
            {group (_this#1) == (_this#0)},
            {
                private _filteredGroup = units (_this#0) select {_x != (_this#1)};
                {[_x] call hull3_marker_fnc_addFireTeamMarker} forEach _filteredGroup;
            },
            [_group, _unit]
        ] call CBA_fnc_waitUntilAndExecute;
    } else {
        if (_group == group ace_player) then {
            [_unit] call hull3_marker_fnc_addFireTeamMarker;
        };
    };
};

hull3_marker_fnc_addCustomSideMarker = {
    params ["_object", "_side"];

    if (side player == _side) then {
        private _arguments = [_object];
        for "_i" from 2 to (count _this) - 1 do {
            _arguments pushBack (_this select _i);
        };
        _arguments call hull3_marker_fnc_addCustomMarker;
    };
};

hull3_marker_fnc_addCustomMarker = {
    params ["_object"];

    private ["_delay", "_shape", "_type", "_color", "_size", "_text"];
    if (count _this < 7) then {_text = ["Marker", "DefaultCustomMarker", "text"] call hull3_config_fnc_getText}      else {_text  = _this select 6};
    if (count _this < 6) then {_size = ["Marker", "DefaultCustomMarker", "size"] call hull3_config_fnc_getArray}     else {_size  = _this select 5};
    if (count _this < 5) then {_color = ["Marker", "DefaultCustomMarker", "color"] call hull3_config_fnc_getText}    else {_color = _this select 4};
    if (count _this < 4) then {_type = ["Marker", "DefaultCustomMarker", "type"] call hull3_config_fnc_getText}      else {_type  = _this select 3};
    if (count _this < 3) then {_shape = ["Marker", "DefaultCustomMarker", "shape"] call hull3_config_fnc_getText}    else {_shape = _this select 2};
    if (count _this < 2) then {_delay = hull3_marker_defaultDelay}                                                   else {_delay = _this select 1};
    private _markerIndex = count hull3_marker_custom;
    private _markerName = format ["hull3_marker_custom_%1", _markerIndex];
    [_markerName, getPosATL _object, _shape, _type, _color, _text, _size] call hull3_marker_fnc_createMarker;
    hull3_marker_custom pushBack [_markerName, true, time, _object, _delay];

    _markerIndex;
};

hull3_marker_fnc_deactivateCustomMarker = {
    params ["_markerIndex"];

    if (count hull3_marker_custom > _markerIndex) then {
        (hull3_marker_custom select _markerIndex) set [1, false];
    };
};

hull3_marker_fnc_activateCustomMarker = {
    params ["_markerIndex"];

    if (count hull3_marker_custom > _markerIndex) then {
        (hull3_marker_custom select _markerIndex) set [1, true];
    };
};

hull3_marker_fnc_deleteCustomMarker = {
    params ["_markerIndex"];

    if (count hull3_marker_custom > _markerIndex) then {
        private _markerData = hull3_marker_custom select _markerIndex;
        deleteMarkerLocal  (_markerData select 0);
        _markerData set [1, false];
    };
};

hull3_marker_fnc_createMarker = {
    params ["_name", "_position", "_shape", "_type", "_color", "_text", "_size", "_alpha"];

    createMarkerLocal [_name, _position];
    _name setMarkerShapeLocal _shape;
    _name setMarkerTypeLocal _type;
    _name setMarkerColorLocal _color;
    _name setMarkerTextLocal _text;
    if (!isNil "_size") then {
        _name setMarkerSizeLocal _size;
    };
    if (!isNil "_alpha") then {
        _name setMarkerAlphaLocal _alpha;
    } else {
        _name setMarkerAlphaLocal 1;
    };

    _name;
};

hull3_marker_fnc_cacheColours = {
    hull3_marker_colours = createHashMap;

    hull3_marker_colours set ["RED", "ColorRed"];
    hull3_marker_colours set ["GREEN", "ColorGreen"];
    hull3_marker_colours set ["BLUE", "ColorBlue"];
    hull3_marker_colours set ["YELLOW", "ColorYellow"];
};
