ark_player_paradrop_fnc_init = {
    params ["_logic", "", "_activated"];

    if (!(_activated) || { !(_logic getVariable ["Enabled", false]) } ) exitWith {
        diag_log "[ARK] (Player Paradrop) - System Disabled";
    };

    missionNamespace setVariable ["ark_player_paradrop_var_enabled", (_logic getVariable ["Enabled", false]), true];
    missionNamespace setVariable ["ark_player_paradrop_var_jumpHeight", (_logic getVariable ["Chute_Height", 200]), true];
    missionNamespace setVariable ["ark_player_paradrop_var_jumpGap", (_logic getVariable ["Jump_Gap", 1]), true];

    diag_log "[ARK] (Player Paradrop) - System Enabled";
};