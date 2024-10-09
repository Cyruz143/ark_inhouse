ark_chase_ai_fnc_findSpawnPos = {
    private _units = allPlayers select {alive _x &&
        { _x inArea ark_chase_ai_var_triggerArea } &&
        { !(objectParent _x isKindOf "Air") }
    };

    if (_units isEqualTo []) exitWith {};

    private _distance = ark_chase_ai_var_minDistance;
    private _validPositions = [];

    while {count _validPositions == 0 && _distance <= ark_chase_ai_var_maxDistance} do {
        {
            for "_direction" from 0 to 350 step 10 do {
                private _position = AGLToASL (_x getPos [_distance, _direction]);

                private _visibleToAnyone = _units findIf {
                    [objNull, "VIEW"] checkVisibility [eyePos _x, _position] > 0.2
                } != -1;

                if (!(_visibleToAnyone) && { !(surfaceIsWater _position) }) then {
                    _validPositions pushBack _position;
                };
            };
        } forEach _units;

        _distance = _distance + 50;
    };

    selectRandom _validPositions; // return
};