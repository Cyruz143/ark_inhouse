#include "script_component.hpp"

ark_ai_sentry_fnc_make_sentry = {
    params ["_unit", "_enabledNightvision"];

    private _grp = group _unit;
    _grp enableAttack false;
    _grp enableDynamicSimulation true;

    [_grp, (getPosASL _unit), 0, "GUARD", "AWARE", "YELLOW"] call CBA_fnc_addWaypoint;
    _unit allowFleeing 0;
    _unit disableAI "PATH";
    {
        _unit setSkill _x;
    } forEach [
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
    params ["_logic", "_units"];

    if (_units isEqualTo []) exitWith {
        ERROR_2("[ARK] %1 - fnc_makeSentry, Module (%2) is not sync'd to any units.",COMPONENT,_logic);
    };

    private _enabledNightvision = _logic getVariable ["Enabled_Nightvision", true];

    {
        [_x, _enabledNightvision] call ark_ai_sentry_fnc_make_sentry;
    } forEach _units;

    INFO_2("[ARK] %1 - fnc_makeSentry, Deleting Module (%2)",COMPONENT,_logic);
    deleteVehicle _logic;

    //Return true because spawnd from module
    true;
};
