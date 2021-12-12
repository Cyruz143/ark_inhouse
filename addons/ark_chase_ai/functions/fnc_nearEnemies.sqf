ark_chase_ai_fnc_nearEnemies = {
    params ["_unit"];
    private _nearEnemies = _unit nearEntities ["Man", ark_chase_ai_var_maxDistance] select {isPlayer _x  && {alive _x} && { _x inArea trgAO }};

    private "_selectedEnemy";
    if (_nearEnemies isEqualTo []) then {
        _selectedEnemy = [];
    } else {
        _selectedEnemy = selectRandom _nearEnemies;
    };

    _selectedEnemy //return
};