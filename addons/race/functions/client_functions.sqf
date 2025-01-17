#include "..\script_component.hpp"

ark_race_fnc_clientInit = {
    INFO("fnc_clientInit, Race Mission Detected");
    //Disable damage for vehicles and units
    player addEventHandler ["GetInMan", {call ark_race_fnc_noDamage}];
    player addEventHandler ["GetOutMan", {call ark_race_fnc_noDamage}];

    //Cover starting in/out of vehicles
    player allowDamage false;
    (vehicle player) allowDamage false;

    //Track units and addActions
    call ark_race_fnc_createUnitMarker;
    call ark_race_fnc_addActions;
    [{(vehicle player) inArea boost_trigger}, {(vehicle player) setVelocityModelSpace [0,350,10]}] call CBA_fnc_waitUntilAndExecute;
};

ark_race_fnc_addActions = {
    player addAction ["<t color='#FF0000'>B O O S T</t>", {objectParent player call ark_race_fnc_goFast},nil,50,false,true,"","!(isNull objectParent player)"];
    player addAction ["<t color='#009900'>Unflip Car</t>", {objectParent player call ark_race_fnc_flipCar},nil,2,false,true,"","!(isNull objectParent player) && {speed objectParent player < 2}"];
};

ark_race_fnc_noDamage = {
    params ["_unit", "", "_vehicle"];

    _unit allowDamage false;

    if (!isNil "_vehicle") then {
        [
            {local (_this #0)},
            {(_this #0) allowDamage false},
            [_vehicle]
        ] call CBA_fnc_waitUntilAndExecute;
    };
};

ark_race_fnc_createUnitMarker = {
    //Unit shouldn't die but it's Arma so...
    player addEventHandler ["Killed", {str player setMarkerColor "ColorBlack"}];

    private _mkr = createMarker [str player, (getPos player)];
    _mkr setMarkerShapeLocal "ICON";
    _mkr setMarkerTypeLocal "mil_dot";
    _mkr setMarkerColor "ColorYellow";

    [
        {
            params ["_args", "_id"];

            if (alive player) then {
                str player setMarkerPos (getPos player);
                str player setMarkerText ([player] call ace_common_fnc_getName);
            } else {
                _id call CBA_fnc_removePerFrameHandler;
            };
        },
        1
    ] call CBA_fnc_addPerFrameHandler;
};

ark_race_fnc_flipCar = {
    params ["_veh"];

    private _carPos = (getPosATL _veh);
    private _emptyPos = _carPos findEmptyPosition [0, 20, (typeOf _veh)];

    if (isNil "_emptyPos" || { _emptyPos isEqualTo [] }) then {
        _veh setVectorUp surfaceNormal _carPos;
        _veh setPosATL _carPos;
    } else {
        _veh setVectorUp surfaceNormal _emptyPos;
        _veh setPosATL _emptyPos;
    };
};

ark_race_fnc_goFast = {
    params ["_veh"];

    if (_veh isKindOf "Ship") exitWith {
        systemChat "Boost unavailable in boats";
    };

    private _lastBoostTime = _veh getVariable ["ark_race_fnc_var_lastBoostTime", 0];

    private _timeLeft = time - _lastBoostTime;
    if (_timeLeft <= 10) exitWith {
        systemChat format ["Please wait %1 seconds before trying to boost again", (round _timeLeft)];
    };

    _veh setVelocityModelSpace [0,75,0];
    _veh setVariable ["ark_race_fnc_var_lastBoostTime", time, false];
};

call ark_race_fnc_clientInit;
