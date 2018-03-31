addMissionEventHandler ["MapSingleClick", {call ark_mw_fnc_draw3dMarker}];

ark_mw_fnc_draw3dMarker = {
    params ["_units","_pos","_alt","_shift"];
    player setVariable ["ark_map_wp_POI", _pos, false];

    if ((objectParent player) isKindOf "Air" && _shift isEqualTo true) then {
        _mwEhID = addMissionEventHandler ["Draw3D", {call ark_mw_fnc_addPOIMarker}];
    };

    if ((!isNil _mwEhID) && (_alt isEqualTo true)) then {
        removeMissionEventHandler ["Draw3D", _mwEhID];
    };
};

ark_mw_fnc_addPOIMarker = {
    private _pos = player getVariable ["ark_map_wp_POI", [0,0,0]];
    private _meters = round (player distance _pos);
    private _km = floor (_meters / 1000);
    private _meters_left = _meters - (_km * 1000);
    private _hmeters = round (_meters_left / 100);
    drawIcon3D ["\A3\ui_f\data\map\markers\military\dot_CA.paa", [1,0,0,0.45], _pos, 1, 1, 45, format ["POI %1.%2km",_km,_hmeters], 0, 0.03, "TahomaB"];
};