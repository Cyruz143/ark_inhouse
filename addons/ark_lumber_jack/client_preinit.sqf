ark_lumber_jack_fnc_canChop = {
    private _nearTrees = nearestTerrainObjects [player, ["Tree","Small Tree"], 10];

    if (isNil "_nearTrees" || { count _nearTrees == 0 }) exitWith {
        false;
    };

    true;
};

ark_lumber_jack_fnc_doChop = {
    private _nearTrees = nearestTerrainObjects [player, ["Tree","Small Tree"], 10];
    private _nearestTree = _nearTrees #0;
    
    [
        5,
        _nearestTree,
        {
            params ["_nearestTree"];
            _nearestTree setDamage 1;
        },
        {hint "Can't cut down this tree"},
        "Chopping down tree"
    ] call ace_common_fnc_progressBar;

    [
        {
             (_this #0) remoteExec ["hideObjectGlobal", 2]; 
        },
        [_nearestTree],
        10
    ] call CBA_fnc_waitAndExecute;
};