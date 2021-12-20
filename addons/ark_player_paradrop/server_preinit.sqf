ark_player_paradrop_fnc_init = {
    params ["_logic"];

    missionNamespace setVariable ["ark_player_paradrop_var_enabled", true, true];
    missionNamespace setVariable ["ark_player_paradrop_var_jumpHeight", (_logic getVariable ["Chute_Height", 200]), true];
    missionNamespace setVariable ["ark_player_paradrop_var_jumpGap", (_logic getVariable ["Jump_Gap", 1]), true];

    [COMPONENT_BEAUTIFIED,"INFO","fnc_init","System Enabled"] call ark_admin_tools_fnc_log;
};