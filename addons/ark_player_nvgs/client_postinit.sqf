["visionMode", {
    params ["_unit", "_visionMode"];
    if (isNull objectParent _unit) then {
        if (_visionMode isEqualTo 1) then {
            playSound "ark_nvg_on";
        } else {
            playSound "ark_nvg_off";
        };
    };
}] call CBA_fnc_addPlayerEventHandler;