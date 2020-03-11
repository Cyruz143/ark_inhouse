if ((briefingName find "ark_race") != -1 ) then {
    player allowDamage false;
    player call ark_race_fnc_createUnitMarker;
    player call ark_race_fnc_addActions;
    player addEventHandler ["GetInMan", {call ark_race_fnc_noDamage}];
    call ark_race_fnc_finalBoost;
};

ark_race_fnc_noDamage = {
    params ["", "", "_vehicle"];

    if (local _vehicle) then {
        _vehicle allowDamage false;
    };
};

ark_race_fnc_createUnitMarker = {
    params ["_unit"];

    private _unitStr = str _unit;
    _unit addEventHandler ["Killed", {_unitStr setMarkerColor "ColorBlack"}];

    private _mkr = createMarker [_unitStr, (getPos _unit)];
    _mkr setMarkerShape "ICON";
    _mkr setMarkerType "mil_dot";
    _mkr setMarkerColor "ColorYellow";
    _mkr setMarkerText ([ace_player] call ace_common_fnc_getName);

    [
        {
            params ["_args", "_id"];
            _args params ["_unit","_unitStr"];

            if (alive _unit) then {
                _unitStr setMarkerPos (getPos _unit);
            } else {
                _id call CBA_fnc_removePerFrameHandler;
            };
        },
        1,
        [_unit,_unitStr]
    ] call CBA_fnc_addPerFrameHandler;
};

ark_race_fnc_flipCar = {
    params ["_veh"];
    private _lastFlipTime = _veh getVariable ["ark_race_fnc_var_lastFlipTime", 0];

    if (time - _lastFlipTime <= 10) exitWith {
        systemChat "Please wait 10 seconds before trying to flip again";
    };

    private _carPos = (getPosATL _veh);
    private _emptyPos = _carPos findEmptyPosition [0, 20, (typeOf _veh)];

    if (isNil "_emptyPos" || { count _emptyPos == 0 }) then {
        _veh setVectorUp surfaceNormal _carPos;
        _veh setPosATL _carPos;
    } else {
        _veh setVectorUp surfaceNormal _emptyPos;
        _veh setPosATL _emptyPos;
    };

    _veh setVariable ["ark_race_fnc_var_lastFlipTime", time, false];
};

ark_race_fnc_goFast = {
    params ["_veh"];

    params ["_veh"];
    private _lastBoostTime = _veh getVariable ["ark_race_fnc_var_lastBoostTime", 0];

    if (time - _lastBoostTime <= 30) exitWith {
        systemChat "Please wait 30 seconds before trying to flip again";
    };

    _veh setVelocityModelSpace [0,100,0];
    _veh setVariable ["ark_race_fnc_var_lastBoostTime", time, false];
};

ark_race_fnc_finalBoost = {
    [
        {
            private _veh = objectParent player;
            if (isNil "_veh") then {_veh = player};

            if (_veh inArea boost_trigger) then {
                _veh setVelocityModelSpace [0,350,10];
            };
        }
    ] call CBA_fnc_addPerFrameHandler;
};


ark_race_fnc_addActions = {
    params ["_unit"];

    _unit addAction ["<t color='#FF0000'>B O O S T</t>", {objectParent player call ark_race_fnc_goFast},nil,50,false,true,"","!(isNull objectParent player)"];
    _unit addAction ["<t color='#009900'>Unflip Car</t>", {objectParent player call ark_race_fnc_flipCar},nil,2,false,true,"","!(isNull objectParent player) && {speed objectParent player < 2}"];
};