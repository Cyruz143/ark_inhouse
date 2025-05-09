#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Creates debug markers
 *
 * Arguments:
 * 0: Enabled <BOOL>
 *
 * Return Value:
 * None
 *
 * Example:
 * [true] call ark_admin_tools_fnc_createDebugMarkers
 */

params ["_enabled"];

if (_enabled && {isNil {ark_admin_canUpdateMarkers} || {!ark_admin_canUpdateMarkers}}) then {
    ark_admin_canUpdateMarkers = true;
    ark_admin_sideCountMarkers = [];
    private _sides = [east, west, resistance, civilian];
    private _sideColors = ["ColorRed", "ColorBlue", "ColorGreen", "ColorPink"];

    for "_i" from 0 to (count _sides) - 1 do {
        private _side = _sides select _i;
        private _markerName = format ["ark_admin_sideCountMarker_%1", _side];
        createMarkerLocal [_markerName, [-500, 1500 + _i * 200]];
        _markerName setMarkerShapeLocal "ICON";
        _markerName setMarkerTypeLocal "mil_dot";
        _markerName setMarkerColorLocal (_sideColors select _i);
        _markerName setMarkerTextLocal format ["%1: %2", _side, {side _x isEqualTo _side} count allUnits];
        _markerName setMarkerSizeLocal [1,1];
        ark_admin_sideCountMarkers set [count ark_admin_sideCountMarkers, _side];
    };

    [{
        params ["_args", "_id"];

        if (!ark_admin_canUpdateMarkers) exitWith {
            _id call CBA_fnc_removePerFrameHandler;
        };

        {
            private _marker = _x getVariable "ark_admin_unitMarker";
            if (!isNil {_marker}) then {
                deleteMarkerLocal _marker;
            }
        } forEach allDead;
        }, 10] call CBA_fnc_addPerFrameHandler;

    [{
            params ["_args", "_id"];
            _args params ["_sides"];

            if (!ark_admin_canUpdateMarkers) exitWith {
                _id call CBA_fnc_removePerFrameHandler;
            };

            {
                private _unit = _x;
                private _simEnabled = simulationEnabled _unit;
                private _uncon = lifeState _unit == "INCAPACITATED";
                private _marker = _unit getVariable "ark_admin_unitMarker";
                if (!isNil {_marker}) then {
                    _marker setMarkerPosLocal getPosATL _unit;
                    _marker setMarkerDirLocal getDir _unit;
                    if (!_simEnabled || { _uncon }) then {
                        _marker setMarkerAlphaLocal 0.25;
                    } else {
                        _marker setMarkerAlphaLocal 1;
                    };
                } else {
                    private _markerName = format ["ark_admin_unitMarker_%1", _unit];
                    _unit setVariable ["ark_admin_unitMarker", _markerName, false];
                    private _sideIndex = _sides find side _unit;
                    private _sideColor = "ColorWhite";
                    if (_sideIndex >= 0) then {
                        _sideColor = ["ColorRed", "ColorBlue", "ColorGreen", "ColorPink"] select _sideIndex;
                    };
                    createMarkerLocal [_markerName, getPosATL _unit];
                    _markerName setMarkerShapeLocal "ICON";
                    _markerName setMarkerTypeLocal "mil_triangle";
                    _markerName setMarkerColorLocal _sideColor;
                    _markerName setMarkerTextLocal "";
                    _markerName setMarkerSizeLocal [0.5,0.75];
                    _markerName setMarkerDirLocal getDir _unit;
                    if (!isNil {(group _unit) getVariable "ark_adm_spawnedBy"}) then {
                        _markerName setMarkerTextLocal "*";
                    };
                };
            } forEach allUnits;

            {
                private "_markerName";
                _side = _x;
                (format ["ark_admin_sideCountMarker_%1", _side]) setMarkerTextLocal format ["%1: %2 (%3)", _side, count (allUnits select {side _x isEqualTo _side && {simulationEnabled _x} }), count (allUnits select {side _x isEqualTo _side})];
            } forEach ark_admin_sideCountMarkers;
        }, 3, [_sides]] call CBA_fnc_addPerFrameHandler;
};

if (!_enabled && {!isNil {ark_admin_canUpdateMarkers}} && {ark_admin_canUpdateMarkers}) then {
    ark_admin_canUpdateMarkers = false;
    {
        private _marker = _x getVariable "ark_admin_unitMarker";
        if (!isNil {_marker}) then {
            _x setVariable ["ark_admin_unitMarker", nil, false];
            deleteMarkerLocal _marker;
        }
    } forEach allUnits;

    {
        private _marker = _x getVariable "ark_admin_unitMarker";
        if (!isNil {_marker}) then {
            _x setVariable ["ark_admin_unitMarker", nil, false];
            deleteMarkerLocal _marker;
        }
    } forEach allDead;

    {
        deleteMarkerLocal (format ["ark_admin_sideCountMarker_%1", _x]);
    } forEach ark_admin_sideCountMarkers;

    ark_admin_sideCountMarkers = nil;
};
