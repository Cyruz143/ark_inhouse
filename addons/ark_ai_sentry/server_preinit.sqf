ark_ai_sentry_fnc_make_sentry = {
    params ["_unit", "_enabledNightvision"];

    private _grp = group _unit;
    _grp enableAttack false;
    _grp enableDynamicSimulation true;

    [_grp, (getposASL _unit), 0, "GUARD", "AWARE", "YELLOW"] call CBA_fnc_addWaypoint;
    _unit allowFleeing 0;
    _unit disableAI "PATH";
    {
        _unit setSkill _x;
    } foreach [
        ["aimingAccuracy",0.2],
        ["aimingShake",0.15],
        ["aimingSpeed",0.5],
        ["spotDistance",0.4],
        ["spotTime",1],
        ["courage",1],
        ["reloadSpeed",1],
        ["commanding",1],
        ["general",0.7]
    ];

    private _hmd = hmd _unit;

    if (_enabledNightvision) then {
        // If unit has NVGs by default, keep them as they'll look better than fake invisible ones
        if (_hmd isEqualTo "") then {
            _unit linkItem "NVGoggles_AI";
        };
    } else {
        _unit unlinkItem _hmd;
    };
};

ark_ai_sentry_fnc_makeSentry = {
    params ["_logic","_units"];

    if (_units isEqualTo []) exitWith {
        ["AI Sentry", "ERROR", "fnc_makeSentry"," Module not syncd to any units", _logic] call ark_admin_tools_fnc_log;
    };

    private _enabledNightvision = _logic getVariable ["Enabled_Nightvision", true];

    {
        [_x, _enabledNightvision] call ark_ai_sentry_fnc_make_sentry;
    } forEach _units;

    ["AI Sentry", "INFO", "fnc_makeSentry"," Deleting module", _logic] call ark_admin_tools_fnc_log;
    deleteVehicle _logic;
};