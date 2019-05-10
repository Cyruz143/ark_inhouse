ark_lumber_jack_fnc_canChop = {
    private _nearTrees = nearestTerrainObjects [player, ["TREE", "SMALL TREE"], 3, true, true];

    if (isNil "_nearTrees" || { count _nearTrees == 0 }) exitWith {
        false;
    };

    true;
};

ark_lumber_jack_fnc_doChop = {
    private _nearTrees = nearestTerrainObjects [player, ["TREE", "SMALL TREE"], 3, true, true];
    private _nearestTree = _nearTrees #0;

    playSound3D ["x\ark\addons\ark_lumber_jack\resources\chop.ogg", objNull, false, getPosASL player, 5, 1, 75];
    [
        5,
        _nearestTree,
        {
            params ["_nearestTree"];
            _nearestTree call ark_lumber_jack_fnc_tidyTree;
        },
        {hint "Aborted tree surgery"},
        "Chopping down tree"
    ] call ace_common_fnc_progressBar;
};

ark_lumber_jack_fnc_tidyTree = {
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
