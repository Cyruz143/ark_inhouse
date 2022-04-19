ark_chase_ai_fnc_enableSpawning = {
    params ["_enabled"];

    ark_chase_ai_var_spawning = _enabled;
    if (_enabled) then {
        ark_chase_ai_grp = createGroup ark_chase_ai_var_side;
        ark_chase_ai_grp deleteGroupWhenEmpty false;
        ark_chase_ai_grp enableAttack false;
        call ark_chase_ai_fnc_unitSpawner;
    };
};