ark_chase_ai_fnc_log = {
    params ["_level","_fnc","_msg","_args"];

    private _txt = format ["[ARK] (Chase AI) - [%1] - (%2) - %3", _level, _fnc, _msg];

    if (!isNil "_args") then {
        _txt = format ["[ARK] (Chase AI) - [%1] - (%2) - %3: %4", _level, _fnc, _msg, _args];
    };

    if ((isServer && !isDedicated) || { _level isEqualTo "ERROR" } || { _level isEqualTo "WARNING" }) then {
        [_txt] remoteExec ["systemChat", 0];
    };

    diag_log _txt;
};