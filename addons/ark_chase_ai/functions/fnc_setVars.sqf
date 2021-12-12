ark_chase_ai_fnc_setVars = {
    ark_chase_ai_var_unitTemplate = adm_camp_defaultUnitTemplate;
    ark_chase_ai_var_side = [ark_chase_ai_var_unitTemplate] call adm_common_fnc_getUnitTemplateSide;
    ark_chase_ai_var_skillArray = ["Camp"] call adm_common_fnc_getZoneTemplateSkillValues;
    ark_chase_ai_var_classNames = ["CUP_I_TK_GUE_Soldier_AR","CUP_I_TK_GUE_Soldier","CUP_I_TK_GUE_Soldier_AK_47S","CUP_I_TK_GUE_Soldier_M16A2","CUP_I_TK_GUE_Mechanic","CUP_I_TK_GUE_Soldier_MG","CUP_I_TK_GUE_Soldier_TL","CUP_I_TK_GUE_Commander","CUP_I_TK_GUE_Soldier_AT"];
    ark_chase_ai_var_unitPool = [];
    ark_chase_ai_var_maxAIUnits = (round ((count allPlayers) * 1.5)) min 50;
    ark_chase_ai_var_AIincrease = round (ark_chase_ai_var_maxAIUnits / 4);
    ark_chase_ai_var_maxDistance = 500;
    ark_chase_ai_var_minDistance = 300;
    ark_chase_ai_var_spawning = false;
};