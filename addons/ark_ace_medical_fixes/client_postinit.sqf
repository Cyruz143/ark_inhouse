["ace_killed", {
    if (_this #0 isEqualTo player) then {
        ["unconscious", false] call ace_common_fnc_setDisableUserInputStatus;
    };
}] call CBA_fnc_addEventHandler;