ark_admin_tools_fnc_perfMon = {
    private _logicEntities = count (entities "logic");
    private _moduleGrps = count biModuleGrps;

    diag_log  "[ARK] --- Starting perfmon dump";
    diag_log  "------------------------------";
    diag_log format ["[ARK] --- BI Module Grps: %1 / 288",_moduleGrps];
    diag_log format ["[ARK] --- Entities: %1", _logicEntities];
    diag_log  "------------------------------";
    diag_log  "[ARK] --- Ending perfmon dump";
};


if (isDedicated) then {
    [{call ark_admin_tools_fnc_perfMon}, 60] call CBA_fnc_addPerFrameHandler;
};

