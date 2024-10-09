private "_action";
_action = _this select 3 select 0;
call {
    if (!isMultiplayer) then {
        _action = "confirm";
    };
    if (_action == "activated") exitWith {
        [] call hull3_mission_fnc_removeSafetyTimerActions;
        [] call hull3_mission_fnc_addSafetyTimerConfirmActions;
    };
    if (_action == "confirm") exitWith {
        [] call hull3_mission_fnc_removeSafetyTimerActions;
        [] call hull3_mission_fnc_endSafetyTimer;
    };
    if (_action == "cancel") exitWith {
        [] call hull3_mission_fnc_removeSafetyTimerActions;
        [] call hull3_mission_fnc_addHostSafetyTimerStopAction;
    };
};