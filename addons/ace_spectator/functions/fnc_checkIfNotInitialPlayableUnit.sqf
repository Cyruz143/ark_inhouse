#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Checks if is not initially a playable unit.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_ace_spectator_fnc_checkIfNotInitialPlayableUnit
 */

if !(player in ark_ace_spectator_initialPlayableUnits) then {
    private _action = [
        "ARK_ACE_Spectator",
        "ACE Spectator",
        "\z\ace\addons\spectator\data\Icon_Module_Spectator_ca.paa",
        {player setDamage 1; player setPosASL [0, 0, 0];},
        {true}
    ] call ace_interact_menu_fnc_createAction;

    [player, 1, ["ACE_SelfActions", "ARK_Menu"], _action] call ace_interact_menu_fnc_addActionToObject;

    for "_i" from 1 to 20 do {
        player globalChat format ["You have JIP'd without AI on! If you were not given permission by staff, enable spectator from ACE self-interact! (%1)", _i];
        sleep 1;
    };

    sleep 60;
    player globalChat format ["Removing respawn action from ACE self-interact."];
    [player, 1, ["ACE_SelfActions", "ARK_Menu", "ARK_ACE_Spectator"]] call ace_interact_menu_fnc_removeActionFromObject;
};
