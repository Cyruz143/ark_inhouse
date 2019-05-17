ark_admin_tools_fnc_disableInstaDeath = {
    if !((briefingName find "ark_gtvt") isEqualTo -1) then {
        player setvariable ["ace_medical_preventInstaDeath", false, true];
    };
};

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
            _markerName setMarkerTextLocal format ["%1: %2", _side, {side _x == _side} count allUnits];
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
                    private _marker = _unit getVariable "ark_admin_unitMarker";
                    if (!isNil {_marker}) then {
                        _marker setMarkerPosLocal getPosATL _unit;
                        _marker setMarkerDirLocal getDir _unit;
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
                    (format ["ark_admin_sideCountMarker_%1", _side]) setMarkerTextLocal format ["%1: %2", _side, {side _x == _side} count allUnits];
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

ark_admin_tools_fnc_detachCrate = {
    params ["_ammoBox", "_parachute", "_smoke", "_player"];

    detach _ammoBox;
    deleteVehicle _smoke;
    [{deleteVehicle (_this #0)}, [_parachute]] call CBA_fnc_execNextFrame;
    _player setVariable ["ark_ts_paradropInProgress", nil];
};

ark_admin_tools_fnc_ammoDrop = {
    params ["_player"];

    _player setVariable ["ark_ts_paradropInProgress", true];
    private _groupId = groupId (group _player);
    private _squad = "";

    if (_groupId in ["ASL","A1","A2","A3"]) then {
        _squad = "Alpha";
    };

    if (_groupId in ["BSL","B1","B2","B3"]) then {
        _squad = "Bravo";
    };

    if (_groupId in ["CSL","C1","C2","C3"]) then {
        _squad = "Charlie";
    };

    if (_groupId in ["DSL","D1","D2","D3"]) then {
        _squad = "Delta";
    };

    private _position = getPos _player;
    _position set [2, 75];
    private _parachute = createVehicle ["NonSteerable_Parachute_F", _position, [], 0, "FLY"];
    private _ammoBox = createVehicle ["C_IDAP_supplyCrate_F", [0,0,0], [], 0, "NONE"];
    _ammoBox allowDamage false;
    _ammoBox attachTo [_parachute, [0, 0, -1.3]];
    [_ammoBox, ["faction", _player getVariable "hull3_faction"], ["gear", "Truck"]] call hull3_unit_fnc_init;

    private _smokeShell = "SmokeShellYellow";

    switch (_squad) do {
        case "Alpha": { _smokeShell = "SmokeShellRed"; };
        case "Bravo": { _smokeShell = "SmokeShellBlue"; };
        case "Charlie": { _smokeShell = "SmokeShellGreen"; };
        case "Delta": { _smokeShell = "SmokeShellOrange"; };
        default { diag_log "[ARK] (Admin Tools) - Couldn't get groupID for ammo drop, using default"; };
    };

    private _smoke = createVehicle [_smokeShell, [0,0,0], [], 0, "NONE"];
    _smoke attachTo [_parachute, [0,0,0]];

   [
        {getPos (_this #0) #2 < 1.5},
        {[(_this #0),(_this #1),(_this #2),(_this #3)] call ark_admin_tools_fnc_detachCrate;},
        [_ammoBox, _parachute,_smoke, _player],
        45,
        {[(_this #0),(_this #1),(_this #2),(_this #3)] call ark_admin_tools_fnc_detachCrate;}
    ] call CBA_fnc_waitUntilAndExecute;
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

        if (isNil "_emptyPos" || { count _emptyPos == 0 }) exitWith {
            {"No room to flip \nPlease contact Staff!" remoteExec ["hint", _x];} forEach (crew _vehicle);
        };

        _vehicle allowDamage false;
        _vehicle setPos _emptyPos;
        _vehicle setVectorUp surfaceNormal _emptyPos;
        _vehicle allowDamage true;
        _vehicle setVariable ["ark_admin_tools_lastUnflipTime", time, true];
    }] remoteExec ["bis_fnc_call", objectParent player];
};

call ark_admin_tools_fnc_disableInstaDeath;