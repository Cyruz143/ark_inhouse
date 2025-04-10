#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Adds a PFH for spawning units
 *
 * Arguments:
 * None
 *
 * Return Value:
 * Unit that was created
 *
 * Example:
 * [] call ark_chase_ai_fnc_unitSpawner
 */

[{
    params ["", "_id"];
    if (!ark_chase_ai_var_spawning) exitWith {
        _id call CBA_fnc_removePerFrameHandler;
    };

    if ((count ark_chase_ai_var_unitPool) < ark_chase_ai_var_maxAIUnits) then {
        private _unit = call FUNC(createUnit);
        if (isNil "_unit") exitWith {
            if (missionNamespace getVariable ["ark_chase_ai_var_allowLogging", true]) then {
                INFO("fnc_unitSpawner, No players available alive or in the AO");
                missionNamespace setVariable ["ark_chase_ai_var_allowLogging", false, false];
            };
        };

        [_unit] call FUNC(doMove);
        missionNamespace setVariable ["ark_chase_ai_var_allowLogging", true, false];
    };
}, ark_chase_ai_var_spawnTime] call CBA_fnc_addPerFrameHandler;
