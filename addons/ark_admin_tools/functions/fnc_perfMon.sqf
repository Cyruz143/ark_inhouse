ark_admin_tools_fnc_perfMon = {
    private _westGrps = count (allGroups select {side _x isEqualTo west});
    private _eastGrps = count (allGroups select {side _x isEqualTo east});
    private _indGrps = count (allGroups select {side _x isEqualTo resistance});
    private _civGrps = count (allGroups select {side _x isEqualTo civilian});
    private _allGrps = count allGroups;
    private _logicEntities = count (entities "logic");

    diag_log  "[ARK] --- Starting perfmon dump";
    diag_log  "------------------------------";
    diag_log format ["[ARK] --- West Groups: %1 / 288",_westGrps];
    diag_log format ["[ARK] --- East Groups: %1 / 288",_eastGrps];
    diag_log format ["[ARK] --- Ind Groups: %1 / 288",_indGrps];
    diag_log format ["[ARK] --- Civ Groups: %1 / 288",_civGrps];
    diag_log format ["[ARK] --- All Groups: %1 / 1152",_allGrps];
    diag_log format ["[ARK] --- Entities: %1", _logicEntities];
    diag_log  "------------------------------";
    diag_log  "[ARK] --- Ending perfmon dump";
};

if (isDedicated) then {
    [{call ark_admin_tools_fnc_perfMon}, 60] call CBA_fnc_addPerFrameHandler;
};
