ark_admin_tools_fnc_createDebugMarkers = {
    params ["_enabled"];

    if (_enabled && {isNil {ark_admin_canUpdateMarkers} || {!ark_admin_canUpdateMarkers}}) then {
        ark_admin_canUpdateMarkers = true;
        ark_admin_sideCountMarkers = [];
        private _sides = [EAST, WEST, RESISTANCE, CIVILIAN];
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

        [
            {
                params ["_args", "_id"];

                if (!ark_admin_canUpdateMarkers) exitWith {
                    _id call CBA_fnc_removePerFrameHandler;
                };

                {
                    private _marker = _x getVariable "ark_admin_unitMarker";
                    if (!isNil {_marker}) then {
                        deleteMarkerLocal _marker;
                    }
                } foreach allDead;
            },
            10
        ] call CBA_fnc_addPerFrameHandler;

        [
            {
                params ["_args", "_id"];
                _args params ["_sides"];

                if (!ark_admin_canUpdateMarkers) exitWith {
                    _id call CBA_fnc_removePerFrameHandler;
                };

                {
                    private _unit = _x;
                    private _simEnabled = simulationEnabled _x;
                    private _marker = _unit getVariable "ark_admin_unitMarker";
                    if (!isNil {_marker}) then {
                        _marker setMarkerPosLocal getPosATL _unit;
                        _marker setMarkerDirLocal getDir _unit;
                        if (_simEnabled) then {
                            _marker setMarkerAlphaLocal 1;
                        } else {
                            _marker setMarkerAlphaLocal 0.25;
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
                } foreach allUnits;

                {
                    private "_markerName";
                    _side = _x;
                    (format ["ark_admin_sideCountMarker_%1", _side]) setMarkerTextLocal format ["%1: %2 (%3)", _side, count (allUnits select {side _x isEqualTo _side && {simulationEnabled _x} }), count (allUnits select {side _x isEqualTo _side})];
                } foreach ark_admin_sideCountMarkers;
            },
            3,
            [_sides]
        ] call CBA_fnc_addPerFrameHandler;
    };

    if (!_enabled && {!isNil {ark_admin_canUpdateMarkers}} && {ark_admin_canUpdateMarkers}) then {
        ark_admin_canUpdateMarkers = false;
        {
            private _marker = _x getVariable "ark_admin_unitMarker";
            if (!isNil {_marker}) then {
                _x setVariable ["ark_admin_unitMarker", nil, false];
                deleteMarkerLocal _marker;
            }
        } foreach allUnits;
        {
            private _marker = _x getVariable "ark_admin_unitMarker";
            if (!isNil {_marker}) then {
                _x setVariable ["ark_admin_unitMarker", nil, false];
                deleteMarkerLocal _marker;
            }
        } foreach allDead;
        {
            deleteMarkerLocal (format ["ark_admin_sideCountMarker_%1", _x]);
        } foreach ark_admin_sideCountMarkers;
        ark_admin_sideCountMarkers = nil;
    };
};

ark_admin_tools_fnc_aiDebug = {
    params ["_enabled"];

    ark_aiDebugEnabled = _enabled;
    _enabled call ark_admin_tools_fnc_createDebugMarkers;
};

ark_admin_tools_fnc_canUnflip = {
    params ["_vehicle"];

    if (isNull _vehicle) exitWith {false};
    if ((speed _vehicle) > 2) exitWith {false};

    private _pB = _vehicle call BIS_fnc_getPitchBank;
    if ((_pB #0 < -60 || _pB #0 > 60) || (_pB #1 < -60 || _pB #1 > 60)) then {true} else {false};
};

ark_admin_tools_fnc_unFlip = {
    [[objectParent player], {
        params ["_vehicle"];

        private _lastUnflipTime = _vehicle getVariable ["ark_admin_tools_lastUnflipTime", 0];
        if (time - _lastUnflipTime <= 10) exitWith {
            {"Please wait 10 seconds \nbefore trying to unflip again" remoteExec ["hint", _x];} forEach (crew _vehicle);
        };

        private _emptyPos = (getPos _vehicle) findEmptyPosition [0, 20, (typeOf _vehicle)];

        if (isNil "_emptyPos" || { count _emptyPos isEqualTo 0 }) exitWith {
            {"No room to flip \nPlease contact Staff!" remoteExec ["hint", _x];} forEach (crew _vehicle);
        };

        private _allowDamage = isDamageAllowed _vehicle;
        _vehicle allowDamage false;
        _vehicle setPos _emptyPos;
        _vehicle setVectorUp surfaceNormal _emptyPos;
        _vehicle allowDamage _allowDamage;
        _vehicle setVariable ["ark_admin_tools_lastUnflipTime", time, true];
    }] remoteExec ["bis_fnc_call", objectParent player];
};

ark_admin_tools_fnc_countSpec = {
    player sideChat format ['There are %1 people in spectator',count (call ace_spectator_fnc_players)];
};
