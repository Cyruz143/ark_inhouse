ark_chase_ai_fnc_init = {
    params ["_logic"];

    private _syncdTrg = synchronizedObjects _logic;
    if (_syncdTrg isEqualTo []) exitWith {
        ["ERROR","fnc_init","Trigger not syncd to the module"] call ark_chase_ai_fnc_log;
    };

    if (count _syncdTrg > 1) then {
        ["WARNING","fnc_init","Only sync one trigger to the module"] call ark_chase_ai_fnc_log;
    };

    private _unitTemplate = _logic getVariable ["Unit_Template", "ADMIRAL"];
    if (_unitTemplate isEqualTo "") exitWith {
        ["ERROR","fnc_init","Blank unit template provided!"] call ark_chase_ai_fnc_log;
    };
    if (_unitTemplate isEqualTo "ADMIRAL") then {
        _unitTemplate = adm_camp_defaultUnitTemplate;
        ["INFO","fnc_init","Using default unit template",_unitTemplate] call ark_chase_ai_fnc_log;
    };

    private _unitClassNames = _logic getVariable ["Unit_Classnames", "[ADMIRAL]"];
    if (_unitClassNames isEqualTo "[ADMIRAL]") then {
        _unitClassNames = [_unitTemplate, "infantry"] call adm_common_fnc_getUnitTemplateArray;
        ["INFO","fnc_init","Using default unit classnames",_unitClassNames] call ark_chase_ai_fnc_log;
    } else {
        _unitClassNames = call compile (_unitClassNames);
        if (!((typeName _unitClassNames) isEqualTo "ARRAY")) exitWith {
            ["ERROR","fnc_init","Improper classname formatting provided, must be an ARRAY!",_unitClassNames] call ark_chase_ai_fnc_log;
        };
        ["INFO","fnc_init","Using custom unit classnames",_unitClassNames] call ark_chase_ai_fnc_log;
    };

    ark_chase_ai_var_triggerArea = _syncdTrg #0;
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

[{triggerActivated ark_chase_ai_var_triggerArea}, {
    ark_chase_ai_var_spawning = true;
    call ark_chase_ai_fnc_unitSpawner;
}] call CBA_fnc_waitUntilAndExecute;