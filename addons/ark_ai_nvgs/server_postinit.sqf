addMissionEventHandler ["EntityKilled", {call ark_ai_nvgs_fnc_nvgRemove}];

ark_ai_nvgs_fnc_nvgRemove = {
    params ["_unit"];

    private _hmd = hmd _unit;

    if (_hmd isEqualTo "NVGoggles_AI") then {
        _unit unlinkItem _hmd;
    };
};