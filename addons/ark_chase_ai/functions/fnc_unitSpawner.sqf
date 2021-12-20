ark_chase_ai_fnc_unitSpawner = {
    [
        {
            params ["", "_id"];
            if (ark_chase_ai_var_spawning isEqualTo false) exitWith {_id call CBA_fnc_removePerFrameHandler};
            if ((count ark_chase_ai_var_unitPool) < ark_chase_ai_var_maxAIUnits) then {
                private _unit = call ark_chase_ai_fnc_createUnit;
                if (isNil "_unit") exitWith {
                    ["Chase AI", "INFO","fnc_unitSpawner","Unable to create unit due to no spawn pos"] call ark_admin_tools_fnc_log;
                };

                private _nearEnemy = _unit call ark_chase_ai_fnc_nearEnemies;
                if (isNil "_nearEnemy" || { _nearEnemy isEqualTo [] } ) exitWith {
                    ["Chase AI", "INFO","fnc_unitSpawner","Unable to find a near enemy"] call ark_admin_tools_fnc_log;
                };

                [_unit,_nearEnemy] call ark_chase_ai_fnc_doMove;
            };
        },
        ark_chase_ai_var_spawnTime
    ] call CBA_fnc_addPerFrameHandler;
};