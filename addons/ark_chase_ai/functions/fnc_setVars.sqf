ark_chase_ai_fnc_setVars = {
    params ["_logic"];

    private _unitTemplate = _logic getVariable ["Unit_Template", "Default"];
    if (isNil "_unitTemplate" || { _unitTemplate isEqualTo "" }) exitWith {
        ["ERROR","fnc_setVars","Blank unit template provided!"] call ark_chase_ai_fnc_log;
    };

    if (_unitTemplate isEqualTo "Default") then {
        private _unitTemplate = adm_camp_defaultUnitTemplate;
    };

    private _unitClassNames = _logic getVariable ["Unit_Classnames", "Default"];
    if (isNil "_unitClassNames" || { _unitClassNames isEqualTo "" || { !((typeName _unitClassNames) isEqualTo "ARRAY") } }) exitWith {
        ["ERROR","fnc_setVars","Improper classnames provided!"] call ark_chase_ai_fnc_log;
    };

    if (_unitClassNames isEqualTo "Default") then {
        private _unitClassNames = [_unitTemplate, "infantry"] call adm_common_fnc_getUnitTemplateArray;
    };

    ark_chase_ai_var_unitTemplate = _unitTemplate;
    ark_chase_ai_var_classNames = _unitClassNames;
    ark_chase_ai_var_maxAIUnits = _logic getVariable ["Unit_Amount", 20];
    ark_chase_ai_var_maxDistance = _logic getVariable ["Max_Distance", 500];
    ark_chase_ai_var_minDistance = _logic getVariable ["Min_Distance", 300];
    ark_chase_ai_var_spawnTime = _logic getVariable ["Spawn_Time", 5];
    ark_chase_ai_var_side = [ark_chase_ai_var_unitTemplate] call adm_common_fnc_getUnitTemplateSide;
    ark_chase_ai_var_skillArray = ["Camp"] call adm_common_fnc_getZoneTemplateSkillValues;
    ark_chase_ai_var_unitPool = [];
    ark_chase_ai_var_spawning = false;
};