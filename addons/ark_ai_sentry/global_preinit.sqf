ark_ai_sentry_fnc_make_sentry = {
    if (isServer) then {
        params ["_unit", "_enabledNightvision"];
        
        if (isNil "_unit") exitWith {
            diag_log "ARK - AI Sentry - Not synced to any units";
        };
        
        (group _unit) enableAttack false;
        private _guardWaypoint = (group _unit) addWaypoint [(getposATL _unit), 0];
        _guardWaypoint setWaypointType "GUARD";
        _guardWaypoint setWaypointCombatMode "YELLOW";
        _guardWaypoint setWaypointBehaviour "AWARE";
        (group _unit) setCurrentWaypoint _guardWaypoint;
        _unit allowFleeing 0;
        _unit setCombatMode "YELLOW";
        _unit setBehaviour "AWARE";
        _unit setSkill 0.2;
        _unit disableAI "FSM";
        doStop _unit;
 
        _unit unlinkItem hmd _unit;
        if (_enabledNightvision) then {
            _unit linkItem "NVGoggles_AI";
        };
    };
};

ark_ai_sentry_module_make_sentry = {
    params ["_logic","_units","_activated"];

    if !(_activated) exitWith {
        diag_log "ARK - AI Sentry - Logic not activated";
    };
    
    if (count _units == 0) exitWith {
        diag_log "ARK - AI Sentry - Not synced to any units";
    };

    private _enabledNightvision = _logic getVariable ["Enabled_Nightvision", true];

    {
        [_x, _enabledNightvision] call ark_ai_sentry_fnc_make_sentry;
    } forEach _units;
};