ark_chase_ai_fnc_createGroup = {
    if (isNil "ark_chase_ai_grp" || {ark_chase_ai_grp isEqualTo grpNull}) then {
        ark_chase_ai_grp = createGroup ark_chase_ai_var_side;
        ark_chase_ai_grp deleteGroupWhenEmpty true;
        ark_chase_ai_grp enableAttack false;
    };
};