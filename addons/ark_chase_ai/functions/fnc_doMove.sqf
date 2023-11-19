ark_chase_ai_fnc_doMove = {
    params ["_unit"];

    [
        {
            params ["_args", "_id"];
            _args params ["_unit"];
            if (isNil "_unit" || { !alive _unit } || { _unit getVariable ["ark_admin_tools_fnc_chaseAI_hunting", false] }) exitWith {
                [_id] call CBA_fnc_removePerFrameHandler;
            };

            private _target = [_unit] call ark_chase_ai_fnc_nearEnemies;
            if (isNil "_target" || { _target isEqualTo [] } ) exitWith {
                deleteVehicle _unit;
            };

            // If unit further than max range try and move them or delete
            private _distanceToTarget = _unit distance2D _target;
            if (_distanceToTarget > (ark_chase_ai_var_maxDistance + 50)) exitWith {
                private _pos = call ark_chase_ai_fnc_findSpawnPos;
                if (isNil "_pos" || { _pos isEqualTo [] }) exitWith {
                    deleteVehicle _unit;
                };
                _unit setPosASL _pos;
            };

            // if more than 50m sjust move to a safe pos
            private _targetPos = [_target] call ark_chase_ai_fnc_findSafePos;
            if (_distanceToTarget > 50) exitWith {
                _unit setDestination [_targetPos, "LEADER PLANNED", true];
                _unit doMove _targetPos;
                _unit lookAt _target;
            };

            // Try to handle stuck units who cant path to a buildingPos
            private _notMoving = false;
            private _lastPos = _unit getVariable ["ark_chase_ai_lastPos", nil];
            if (!isNil "_lastPos") then {
                if (_lastPos distance (getPosASL _unit) < 0.5) then {
                    _notMoving = true;
                };
            };

            if (ark_chase_ai_var_allowBS && { insideBuilding _target == 1 } ) then {
                _targetPos = [_target] call ark_chase_ai_fnc_nearestBuildingPos;
                if (_targetPos isEqualTo "outside" || { _notMoving }) then {
                    _unit doSuppressiveFire _target;
                    _targetPos = [_target] call ark_chase_ai_fnc_findSafePos;
                };
            };

            _unit setDestination [_targetPos, "LEADER PLANNED", true];
            _unit doMove _targetPos;
            _unit lookAt _target;
            _unit setVariable ["ark_chase_ai_lastPos", (getposASL _unit)];
        },
        15,
        [_unit]
    ] call CBA_fnc_addPerFrameHandler;
};