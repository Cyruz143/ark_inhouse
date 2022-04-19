ark_admin_tools_fnc_chaseAI = {
    params [["_pos",[0,0,0]],["_dist",250],["_tp",false]];

    if (_pos isEqualTo [0,0,0]) exitWith {
        ["Admin Tools","INFO","fnc_chaseAI","Invalid/No position passed"] call ark_admin_tools_fnc_log;
    };

    private _closeUnits = allUnits select {
        (side group _x) isEqualTo ([adm_camp_defaultUnitTemplate] call adm_common_fnc_getUnitTemplateSide) &&
        {isNull objectParent _x} &&
        {((getPosATL _x) distance2D _pos) <= _dist}
    };

    {
        private _unit = _x;
        private _grp = group _unit;
        [_grp] call CBA_fnc_clearWaypoints;

        if !(_unit checkAIFeature "PATH") then {
            if !(simulationEnabled _unit) then {
                _unit enableSimulation true;
            };
            {_unit enableAI _x} forEach ["PATH","MOVE"];
            if (_tp) then {
                private _building = (nearestObjects [_unit, ["House", "Building"], 50]) #0;
                _unit setPos (_building buildingExit 0);
            };
        };

        {_unit disableAI _x} forEach ["SUPPRESSION","AUTOCOMBAT"];
        _unit enableAttack false;
        _unit setBehaviour "AWARE";
        _unit setSpeedMode "FULL";
        _unit allowFleeing 0;
        _unit setDestination [_pos, "LEADER PLANNED", true];
        _unit doMove _pos;
        _unit setVariable ["ark_admin_tools_fnc_chaseAI_hunting", true, false];
    } forEach _closeUnits;

    ["Admin Tools","INFO","fnc_chaseAI","Chase AI executed with args",_pos,_dist,_tp] call ark_admin_tools_fnc_log;
};