ark_admin_tools_fnc_perfMon = {
    private _westGrps = count (allGroups select {side _x isEqualTo west});
    private _eastGrps = count (allGroups select {side _x isEqualTo east});
    private _indGrps = count (allGroups select {side _x isEqualTo resistance});
    private _civGrps = count (allGroups select {side _x isEqualTo civilian});
    private _allGrps = count allGroups;
    private _logicEntities = count (entities "logic");
    private _modulesEntities = count (entities "Module_F");

    diag_log text format ["[ARK] --- West Groups: %1 / 288",_westGrps];
    diag_log text format ["[ARK] --- East Groups: %1 / 288",_eastGrps];
    diag_log text format ["[ARK] --- Ind Groups: %1 / 288",_indGrps];
    diag_log text format ["[ARK] --- Civ Groups: %1 / 288",_civGrps];
    diag_log text format ["[ARK] --- All Groups: %1 / 1152",_allGrps];
    diag_log text format ["[ARK] --- Logics: %1", _logicEntities];
    diag_log text format ["[ARK] --- Modules: %1", _modulesEntities];
};

/*
if (isDedicated) then {
    [{call ark_admin_tools_fnc_perfMon}, 90] call CBA_fnc_addPerFrameHandler;
};
*/
