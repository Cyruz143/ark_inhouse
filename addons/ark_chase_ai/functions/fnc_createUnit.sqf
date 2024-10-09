ark_chase_ai_fnc_createUnit = {
    private _pos = call ark_chase_ai_fnc_findSpawnPos;
    if (isNil "_pos" || { _pos isEqualTo [] }) exitWith {};

    // Creates inital grp, if grp exists does nothing
    call ark_chase_ai_fnc_createGroup;

    private _unit = [(ASLToATL _pos), ark_chase_ai_grp, ark_chase_ai_var_classNames, ark_chase_ai_var_skillArray] call adm_common_fnc_placeMan;
    _unit setVariable ["ark_chase_ai_unit", true];
    _unit setBehaviour "AWARE";
    _unit setSpeedMode "FULL";
    _unit setUnitPos "UP";
    {_unit disableAI _x} forEach ["SUPPRESSION", "AUTOCOMBAT", "COVER"];

    private _hmd = hmd _unit;
    if (ark_chase_ai_var_allowNVGs) then {
        if (_hmd isEqualTo "") then {
            _unit linkItem "NVGoggles_AI";
        };
    } else {
        _unit unlinkItem _hmd;
    };

    if (ark_chase_ai_var_forceFlashlights) then {
        private _flashLight = _unit call ark_chase_ai_fnc_compatibleFlashlight;
        _unit addPrimaryWeaponItem _flashLight;
        _unit enableGunLights "ForceOn";
    };

    ark_chase_ai_var_unitPool pushBack _unit;

    _unit addEventHandler ["Killed", {
        params ["_unit"];
        ark_chase_ai_var_unitPool deleteAt (ark_chase_ai_var_unitPool find _unit);
    }];

    _unit addEventHandler ["Deleted", {
        params ["_unit"];
        ark_chase_ai_var_unitPool deleteAt (ark_chase_ai_var_unitPool find _unit);
    }];

    _unit;
};
