addMissionEventHandler ["MapSingleClick", {call ark_mw_fnc_draw3dMarker}];

ark_mw_fnc_draw3dMarker = {
    params ["_units","_pos","_alt","_shift"];

    if ((objectParent player) isKindOf "Air" && _shift isEqualTo true) then {
        player setVariable ["ark_map_wp_POI", _pos, false];

        if !(isNil "mwEhID") then {
            removeMissionEventHandler ["Draw3D", mwEhID];
        };

        mwEhID = addMissionEventHandler ["Draw3D", {call ark_mw_fnc_addPOIMarker}];
    };

    if ((_alt isEqualTo true) && !(isNil "mwEhID")) then {
        removeMissionEventHandler ["Draw3D", mwEhID];
        mwEhID = nil;
    };
};

ark_mw_fnc_addPOIMarker = {
    private _pos = player getVariable ["ark_map_wp_POI", [0,0,0]];
    private _meters = round (player distance _pos);
    private _km = floor (_meters / 1000);
    private _meters_left = _meters - (_km * 1000);
    private _hmeters = round (_meters_left / 100);
    drawIcon3D ["\A3\ui_f\data\map\markers\military\dot_CA.paa", [1,1,0,1], _pos, 1, 1, 45, format ["POI %1.%2km",_km,_hmeters], 2, 0.03, "TahomaB", "center", true];
};