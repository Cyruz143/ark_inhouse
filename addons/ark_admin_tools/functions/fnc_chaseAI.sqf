/*
 * Building search can be a bit iffy, sometimes they pick the wrong one or don't path well.
 * If you feed it getPosATL (rather than getPos) and set _search to false, they'll move to the exact pos in the building
*/

ark_admin_tools_fnc_chaseAI = {
    params [["_pos",[0,0,0]],["_dist",1000],["_search",false]];

    if (_pos isEqualTo [0,0,0]) exitWith {
        ["Admin Tools","INFO","fnc_chaseAI","Invalid/No position passed"] call ark_admin_tools_fnc_log;
    };

    private _closeUnits = allUnits select {
        (side group _x) isEqualTo ([adm_camp_defaultUnitTemplate] call adm_common_fnc_getUnitTemplateSide) &&
        {isNull objectParent _x} &&
        {((getpos _x) distance2D _pos) <= _dist}
    };

    {
        private _unit = _x;
        private _grp = group _unit;
        [_grp] call CBA_fnc_clearWaypoints;
        _unit disableAI "SUPPRESSION";
        _unit disableAI "AUTOCOMBAT";
        _unit enableAI "PATH";
        _unit enableAI "MOVE";
        _unit enableAttack false;
        _unit setBehaviour "AWARE";
        _unit setSpeedMode "FULL";
        _unit allowFleeing 0;
        _unit setDestination [_pos, "LEADER PLANNED", true];
        _unit doMove _pos;
        _unit setVariable ["ark_admin_tools_fnc_chaseAI_hunting", true, false];
        if (_search isEqualTo true && { leader _grp isEqualTo _unit }) then {
            [{
                (_this#0 distance2D _this#2) < 15
            }, {
                [_this#1] call CBA_fnc_searchNearby;
            }, [_unit,_grp,_pos]] call CBA_fnc_waitUntilAndExecute;
        };
    } forEach _closeUnits;

    ["Admin Tools","INFO","fnc_chaseAI","Chase AI executed with building search",_search] call ark_admin_tools_fnc_log;
};