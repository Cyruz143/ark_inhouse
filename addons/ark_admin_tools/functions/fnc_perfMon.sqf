ark_admin_tools_fnc_perfMon = {
    private _moduleGrps = count biModuleGrps;
    private _modulesEntities = count (entities "Module_F");
    private _logicEntities = count (entities "logic");

    diag_log  "[ARK] --- Starting perfmon dump";
    diag_log  "------------------------------";
    diag_log format ["[ARK] --- BI Module Grps: %1",_moduleGrps];
    diag_log format ["[ARK] --- Modules: %1", _modulesEntities];
    diag_log format ["[ARK] --- Logic: %1", _logicEntities];
    diag_log  "------------------------------";
    diag_log  "[ARK] --- Ending perfmon dump";
};


if (isDedicated) then {
    [{call ark_admin_tools_fnc_perfMon}, 60] call CBA_fnc_addPerFrameHandler;
};

