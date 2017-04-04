if (hasInterface) then {
    ["visionMode", {
        params ["_playerUnit", "_newVisionMode"];
        if (_newVisionMode = 1) then {
            playSound "ark_nvg_on"
            } else {
            playSound "ark_nvg_off"
            };
    }] call CBA_fnc_addPlayerEventHandler;
};