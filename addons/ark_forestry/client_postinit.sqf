// Credit to commy2 and ACE2 team for the grass cutter idea!
// Credit to @drofseh for updated code (https://github.com/Drofseh/Dro_Mods)

ark_forestry_fnc_canChop = {
    private _nearObj = nearestTerrainObjects [player, ["TREE", "SMALL TREE", "BUSH"], 5, false, true];

    if (isNil "_nearObj" || { _nearObj isEqualTo [] }) exitWith {
        false;
    };

    true;
};

ark_forestry_fnc_doChop = {
    private _playerPos = AGLToASL positionCameraToWorld [0, 0, 0];
    private _endPos = AGLToASL positionCameraToWorld [0, 0, 5];
    private _intersection = (lineIntersectsSurfaces [_playerPos, _endPos, cameraOn, objNull, true, 1, "VIEW"]) #0;
    if (isNil "_intersection") exitWith {
        [["\x\ark\addons\ark_forestry\resources\tree.paa", 2.0], ["Nothing to cut down"]] call CBA_fnc_notify
    };

    private _intersectObj = _intersection #2;
    private _parentObject = _intersection #3;
    if (_intersectObj isEqualTo objNull && {_parentObject isEqualTo objNull}) exitWith {
        [["\x\ark\addons\ark_forestry\resources\tree.paa", 2.0], ["Nothing to cut down"]] call CBA_fnc_notify
    };

    private _obj = (nearestTerrainObjects [_intersectObj, ["TREE", "SMALL TREE", "BUSH"], 0, false, true]) #0;
    playSound3D ["x\ark\addons\ark_forestry\resources\chop.ogg", objNull, false, getPosASL player, 5, 1, 75];

    [
        5,
        _obj,
        {
            params ["_obj"];
            _obj setDamage 1;

            [
                {
                     _this remoteExec ["hideObjectGlobal", 2];
                     [_this, false] remoteExec ["enableSimulationGlobal", 2];
                },
                _obj,
                5
            ] call CBA_fnc_waitAndExecute;
        },
        {[["\x\ark\addons\ark_forestry\resources\tree.paa", 2.0], ["Aborted nature abuse"]] call CBA_fnc_notify},
        "Attacking nature"
    ] call ace_common_fnc_progressBar;
};

ark_forestry_fnc_doFlatten = {
    playSound3D ["x\ark\addons\ark_forestry\resources\flatten.ogg", objNull, false, getPosASL player, 5, 1, 25];
    player call ace_common_fnc_goKneeling;
    [
        5,
        [],
        {createSimpleObject ["Land_ClutterCutter_medium_F", (player modelToWorldVisualWorld [0,2.5,0]), false]},
        {[["\x\ark\addons\ark_forestry\resources\grass.paa", 2.0], ["Aborted grass flattening"]] call CBA_fnc_notify},
        "Flattening Grass"
    ] call ace_common_fnc_progressBar;
};


