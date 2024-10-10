#include "script_component.hpp"

ark_player_paradrop_fnc_init = {
    params ["_logic"];

    missionNamespace setVariable ["ark_player_paradrop_var_enabled", true, true];
    missionNamespace setVariable ["ark_player_paradrop_var_jumpHeight", (_logic getVariable ["Chute_Height", 200]), true];
    missionNamespace setVariable ["ark_player_paradrop_var_jumpGap", (_logic getVariable ["Jump_Gap", 1]), true];

    INFO("fnc_init, Player paradrop system is enabled");
    INFO_1("fnc_init, Deleting Module (%1)",_logic);
    deleteVehicle _logic;

    //Return true because spawnd from module
    true;
};
