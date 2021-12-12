ark_chase_ai_fnc_unitSpawner = {
    [
        {
            params ["", "_id"];
            if (ark_chase_ai_var_spawning isEqualTo false) exitWith {_id call CBA_fnc_removePerFrameHandler};
            if ((count ark_chase_ai_var_unitPool) < ark_chase_ai_var_maxAIUnits) then {
                private _unit = call ark_chase_ai_fnc_createUnit;
                if (isNil "_unit") exitWith {diag_log "ARK - GH - INFO - Unable to create unit due to no spawn pos - Exiting current loop ark_chase_ai_fnc_unitSpawner"};

                private _nearEnemy = _unit call ark_chase_ai_fnc_nearEnemies;
                if (isNil "_nearEnemy" || { _nearEnemy isEqualTo [] } ) exitWith {diag_log "ARK - GH - INFO - Unable to find a near enemy, should only occur if all dead! - Exiting current loop ark_chase_ai_fnc_unitSpawner"};

                [_unit,_nearEnemy] call ark_chase_ai_fnc_doMove;
            };
        },
        1
    ] call CBA_fnc_addPerFrameHandler;
};