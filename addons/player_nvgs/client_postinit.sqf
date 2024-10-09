player addEventHandler ["VisionModeChanged", {
    params ["_person", "_visionMode"];
    if (isNull objectParent _person) then {
        if (_visionMode == 1) then {
            playSound "ark_nvg_on";
        };
        if (_visionMode == 0) then {
            playSound "ark_nvg_off";
        };
    };
}];