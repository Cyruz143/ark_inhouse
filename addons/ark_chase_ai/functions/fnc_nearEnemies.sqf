ark_chase_ai_fnc_nearEnemies = {
    params ["_unit"];

    private _selectedEnemy = _unit findNearestEnemy _unit;

    if (_selectedEnemy isEqualTo objNull || { objectParent _selectedEnemy isKindOf "Air" }) then {
        private _nearEnemies = _unit nearEntities [["Man","Car","Tank"], ark_chase_ai_var_maxDistance] select {isPlayer _x  && {alive _x}};

        if (_nearEnemies isEqualTo []) then {
            _selectedEnemy = [];
        } else {
            _selectedEnemy = selectRandom _nearEnemies;
        };
    };

    _selectedEnemy //return
};