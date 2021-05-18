// Credits to Commy2 and ACE2 team for the grass cutter idea!

ark_forestry_fnc_canChop = {
    private _nearObj = nearestTerrainObjects [player, ["TREE", "SMALL TREE", "BUSH"], 3, true, true];

    if (isNil "_nearObj" || { _nearObj isEqualTo [] }) exitWith {
        false;
    };

    true;
};

ark_forestry_fnc_doChop = {
    private _nearObjs = nearestTerrainObjects [player, ["TREE", "SMALL TREE", "BUSH"], 3, true, true];

    playSound3D ["x\ark\addons\ark_forestry\resources\chop.ogg", objNull, false, getPosASL player, 5, 1, 75];
    [
        5,
        _nearObjs,
        {
            params ["_nearObjs"];
            [_nearObjs] call ark_forestry_fnc_tidyTree;
        },
        {[["\x\ark\addons\ark_forestry\resources\tree.paa", 2.0], ["Aborted nature abuse"]] call CBA_fnc_notify},
        "Attacking nature"
    ] call ace_common_fnc_progressBar;
};

ark_forestry_fnc_tidyTree = {
    params ["_nearObjs"];

    {
        private _nearestObj = _x;
        _nearestObj setDamage 1;

        [
            {
                 (_this #0) remoteExec ["hideObjectGlobal", 2];
                 [(_this #0), false] remoteExec ["enableSimulationGlobal", 2];
            },
            [_nearestObj],
            5
        ] call CBA_fnc_waitAndExecute;
    } forEach _nearObjs;
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


