ark_chase_ai_fnc_createUnit = {
    private _pos = call ark_chase_ai_fnc_findSpawnPos;
    if (isNil "_pos" || { _pos isEqualTo [] }) exitWith {diag_log format ["ARK - GH - ERROR - Bad spawn position returned: %1",_pos]};

    private _grp = createGroup ark_chase_ai_var_side;
    _grp deleteGroupWhenEmpty true;
    _grp enableAttack false;

    private _unit = [(ASLtoATL _pos), _grp, ark_chase_ai_var_classNames, ark_chase_ai_var_skillArray] call adm_common_fnc_placeMan;
    _unit setBehaviour "AWARE";
    _unit setSpeedMode "FULL";
    _unit setUnitPos "UP";
    {_unit disableAI _x} forEach ["SUPPRESSION", "AUTOCOMBAT"];
    _unit linkItem "NVGoggles_AI";
    ark_chase_ai_var_unitPool pushBack _unit;

    if (typeOf _unit isEqualTo "CUP_I_TK_GUE_Soldier_AT") then {
        _unit removeWeapon (primaryWeapon _unit);
        _unit addEventHandler ["Fired", {
            params ["_unit", "_weapon"];
            if (!local _unit) exitWith {};
            if (_weapon isEqualTo "CUP_launch_RPG7V") then {
                _unit addWeapon "CUP_arifle_AKM";
                _unit removeEventHandler ["Fired", _thisEventHandler];
            };
        }];
    };

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