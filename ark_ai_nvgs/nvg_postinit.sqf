addMissionEventHandler ["EntityKilled", {call ark_fnc_nvgRemove}];

ark_fnc_nvgRemove = {
    private _unit = _this select 0;
    private _hmd = hmd _unit;
    if (_hmd == "NVGoggles_AI") then {
        _unit unlinkItem _hmd;
    };
};