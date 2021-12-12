ark_chase_ai_fnc_createUnit = {
    private _pos = call ark_chase_ai_fnc_findSpawnPos;
    if (isNil "_pos" || { _pos isEqualTo [] }) exitWith {
        ["ERROR","fnc_createUnit"," Bad spawn position returned",_pos] call ark_chase_ai_fnc_log;
    };

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