// [COMPONENT_BEAUTIFIED,"LEVEL","fnc_myFnc","Message",_args] call ark_admin_tools_fnc_log

ark_admin_tools_fnc_log = {
    params ["_module","_level","_fnc","_msg","_args"];

    private _txt = format ["[ARK] (%1) - [%2] - (%3) - %4", _module, _level, _fnc, _msg];

    if (!isNil "_args") then {
        _txt = format ["[ARK] (%1) - [%2] - (%3) - %4: %5", _module, _level, _fnc, _msg, _args];
    };

    if ((isServer && !isDedicated) || { _level isEqualTo "ERROR" } || { _level isEqualTo "WARNING" }) then {
        [_txt] remoteExec ["systemChat", 0];
    };

    diag_log _txt;
};