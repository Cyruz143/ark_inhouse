// Credits to Commy2 and ACE2 team for the grass cutter idea!

ark_forestry_fnc_canChop = {
    private _nearTrees = nearestTerrainObjects [player, ["TREE", "SMALL TREE", "BUSH"], 3, true, true];

    if (isNil "_nearTrees" || { _nearTrees isEqualTo [] }) exitWith {
        false;
    };

    true;
};

ark_forestry_fnc_doChop = {
    private _nearTrees = nearestTerrainObjects [player, ["TREE", "SMALL TREE", "BUSH"], 3, true, true];
    private _nearestTree = _nearTrees #0;

    playSound3D ["x\ark\addons\ark_forestry\resources\chop.ogg", objNull, false, getPosASL player, 5, 1, 75];
    [
        5,
        _nearestTree,
        {
            params ["_nearestTree"];
            _nearestTree call ark_forestry_fnc_tidyTree;
        },
        {[["\x\ark\addons\ark_forestry\resources\tree.paa", 2.0], ["Aborted nature abuse"]] call CBA_fnc_notify},
        "Attacking nature"
    ] call ace_common_fnc_progressBar;
};

ark_forestry_fnc_tidyTree = {
    params ["_nearestTree"];

    _nearestTree setDamage 1;

    [
        {
             (_this #0) remoteExec ["hideObjectGlobal", 2];
             [(_this #0), false] remoteExec ["enableSimulationGlobal", 2];
        },
        [_nearestTree],
        5
    ] call CBA_fnc_waitAndExecute;
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


