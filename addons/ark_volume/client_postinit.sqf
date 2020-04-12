addMissionEventHandler ["Map", {call ark_volume_fnc_mapVolume}];
player addEventHandler ["GetInMan", {call ark_volume_fnc_setVolume}];
player addEventHandler ["GetOutMan", {call ark_volume_fnc_restoreVolume}];
player setVariable ["ark_volume_var_currentVolume",1];

ark_volume_fnc_setVolume = {
    params ["_unit", "", "_vehicle"];

    if (isNull _vehicle) exitWith {};

    if (_vehicle isKindOf "Car" || { _vehicle isKindOf "Truck" } || { _vehicle isKindOf "Tank" }) then {
        _unit setVariable ["ark_volume_var_currentVolume",ark_volume_groundVolume];
        1 fadeSound ark_volume_groundVolume;
    };

    if (_vehicle isKindOf "Ship") then {
        _unit setVariable ["ark_volume_var_currentVolume",ark_volume_waterVolume];
        1 fadeSound ark_volume_waterVolume;
    };

    if (_vehicle isKindOf "Air") then {
        _unit setVariable ["ark_volume_var_currentVolume",ark_volume_airVolume];
        1 fadeSound ark_volume_airVolume;
    };
};

ark_volume_fnc_restoreVolume = {
    params ["_unit"];

    _unit setVariable ["ark_volume_var_currentVolume",1];
    1 fadeSound 1;
};

ark_volume_fnc_mapVolume = {
    params ["_mapIsOpened"];

    private _currentVol = player getVariable ["ark_volume_var_currentVolume",1];

    if (_mapIsOpened && {_currentVol > 0.65}) then {
        1 fadeSound 0.65;
    } else {
        1 fadeSound _currentVol;
    };
};

["CBA_SettingChanged", {
    params ["_setting"];

    if (_setting isEqualTo "ark_volume_ground" || { _setting isEqualTo "ark_volume_air" }) then {
        [player,nil,objectParent player] call ark_volume_fnc_setVolume;
    };
}] call CBA_fnc_addEventHandler;