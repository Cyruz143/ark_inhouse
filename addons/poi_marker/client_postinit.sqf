addMissionEventHandler ["MapSingleClick", {call ark_pm_fnc_canAddMarker}];
player addEventHandler ["GetOutMan", {call ark_pm_fnc_removeMarker}];
player addEventHandler ["Killed", {call ark_pm_fnc_removeMarker}];

ark_pm_fnc_canAddMarker = {
    params ["","_pos","_alt","_shift"];

    if !((objectParent player) isKindOf "Air") exitWith {};

    if (_shift isEqualTo true) then {
        player setVariable ["ark_map_wp_POI", _pos, false];

        if !(isNil "ark_pm_eh_ID") then {
            removeMissionEventHandler ["Draw3D", ark_pm_eh_ID];
        };

        ark_pm_eh_ID = addMissionEventHandler ["Draw3D", {call ark_pm_fnc_addMarker}];
    };

    if (_alt isEqualTo true) then {
        call ark_pm_fnc_removeMarker;
    };
};

ark_pm_fnc_addMarker = {
    private _pos = player getVariable ["ark_map_wp_POI", [0,0,0]];
    private _meters = round (player distance _pos);
    private _km = floor (_meters / 1000);
    private _meters_left = _meters - (_km * 1000);
    private _hmeters = floor (_meters_left / 100);

    drawIcon3D ["\A3\ui_f\data\map\markers\military\dot_CA.paa", [1,1,0,1], _pos, 1, 1, 45, format ["POI %1.%2km",_km,_hmeters], 2, 0.03, "TahomaB", "center", true];
};

ark_pm_fnc_removeMarker = {
    if !(isNil "ark_pm_eh_ID") then {
        removeMissionEventHandler ["Draw3D", ark_pm_eh_ID];
        ark_pm_eh_ID = nil;
    };
};
