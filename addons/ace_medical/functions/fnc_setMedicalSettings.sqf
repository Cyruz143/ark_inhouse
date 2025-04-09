#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Set TvT medical settings & Handles vest switching
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_ace_medical_fnc_setMedicalSettings
 */

{
    if ((toLowerANSI briefingName) find _x isNotEqualTo -1) exitWith {
        ["ace_medical_playerDamageThreshold", 1, true, "server"] call CBA_settings_fnc_set;
        ["ace_medical_fatalDamageSource", 2, true, "server"] call CBA_settings_fnc_set;
        ["ace_medical_statemachine_cardiacArrestTime", 60, true, "server"] call CBA_settings_fnc_set;
        ["ace_medical_deathChance", 1, true, "server"] call CBA_settings_fnc_set;

        // Vest Switch
        [{
            (_this #0) getVariable ["hull3_gear_radiosAssigned", false];
        }, {
            (_this #0) call FUNC(tvtVestSwitch);
        }, [ace_player]] call CBA_fnc_waitUntilAndExecute;
    };
} forEach ["ark_tvt", "ark_gtvt", "ark_cotvt", "ark44_tvt", "ark44_gtvt", "ark44_cotvt"];
