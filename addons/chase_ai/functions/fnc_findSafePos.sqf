ark_chase_ai_fnc_findSafePos = {
    params ["_target"];

    private _targetPos = (getPos _target) findEmptyPosition [0, 10, "CAManBase"];
    if (_targetPos isEqualTo []) then {
        _targetPos = _target getPos [ark_chase_ai_var_wpAccuracy, random 360];
    };

    _targetPos // return
};
