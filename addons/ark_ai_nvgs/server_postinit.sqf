addMissionEventHandler ["EntityKilled", {call ark_ai_nvgs_fnc_nvgRemove}];

ark_ai_nvgs_fnc_nvgRemove = {
    params ["_unit"];

    if (hmd _unit == "NVGoggles_AI") then {
        _unit unlinkItem _hmd;
    };
};