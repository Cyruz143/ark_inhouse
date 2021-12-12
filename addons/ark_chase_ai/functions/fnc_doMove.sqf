ark_chase_ai_fnc_doMove = {
    params ["_unit","_target"];

    [
        {
            params ["_args", "_id"];
            _args params ["_unit","_target"];
            if (isNil "_unit" || { !alive _unit }) exitWith {
                _id call CBA_fnc_removePerFrameHandler;
            };

            if (!alive _target) then {
                _target = _unit call ark_chase_ai_fnc_nearEnemies;
            };

            if (isNil "_target" || { _target isEqualTo [] } ) exitWith {
                deleteVehicle _unit;
            };

            private _targetPos = _target getPos [50, random 360];
            if (_unit distance2D _targetPos < ark_chase_ai_var_maxDistance) then {
                _unit setDestination [_targetPos, "LEADER PLANNED", true];
                _unit doMove _targetPos;
            } else {
                deleteVehicle _unit;
            };
        },
        30,
        [_unit,_target]
    ] call CBA_fnc_addPerFrameHandler;
};