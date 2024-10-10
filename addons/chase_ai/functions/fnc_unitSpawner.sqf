#include "..\script_component.hpp"

ark_chase_ai_fnc_unitSpawner = {
    [
        {
            params ["", "_id"];
            if (ark_chase_ai_var_spawning isEqualTo false) exitWith {_id call CBA_fnc_removePerFrameHandler};
            if ((count ark_chase_ai_var_unitPool) < ark_chase_ai_var_maxAIUnits) then {
                private _unit = call ark_chase_ai_fnc_createUnit;
                if (isNil "_unit") exitWith {
                    if (missionNamespace getVariable ["ark_chase_ai_var_allowLogging", true]) then {
                        INFO_1("[ARK] %1 - fnc_unitSpawner, No players available alive or in the AO",COMPONENT);
                        missionNamespace setVariable ["ark_chase_ai_var_allowLogging", false, false];
                    };
                };

                [_unit] call ark_chase_ai_fnc_doMove;
                missionNamespace setVariable ["ark_chase_ai_var_allowLogging", true, false];
            };
        },
        ark_chase_ai_var_spawnTime
    ] call CBA_fnc_addPerFrameHandler;
};
