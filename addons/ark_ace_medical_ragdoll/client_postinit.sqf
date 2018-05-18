["ace_unconscious", {
<<<<<<< HEAD
    params [["_unit", objNull],["_isUnconscious", false]];

    if (!local _unit) exitWith {};

    _unit setUnconscious _isUnconscious;

    if (_isUnconscious) then {
        // set animation inside vehicles
        if (vehicle _unit != _unit) then {
            private _unconAnim = [_unit] call ace_common_fnc_getDeathAnim;
            [_unit, _unconAnim] call ace_common_fnc_doAnimation;
        };
    } else {
        // reset animation inside vehicles
        if (vehicle _unit != _unit) then {
            private _awakeAnim = [_unit] call ace_common_fnc_getAwakeAnim;
            [_unit, _awakeAnim, 2] call ace_common_fnc_doAnimation;
        } else {
            // and on foot
            [_unit, "AmovPpneMstpSnonWnonDnon"] call ace_common_fnc_doAnimation;

            if (currentWeapon _unit == secondaryWeapon _unit && {currentWeapon _unit != ""}) then {
                [_unit, "AmovPknlMstpSrasWlnrDnon"] call ace_common_fnc_doAnimation;
            };

            [{
                params ["_unit"];

                if (animationState _unit == "unconscious" && {lifeState _unit != "INCAPACITATED"}) then {
                    [_unit, "AmovPpneMstpSnonWnonDnon", 2] call ace_common_fnc_doAnimation;
                };
            }, _unit, 0.5] call CBA_fnc_waitAndExecute;
=======
    params [["_unit", objNull],["_state", false]];
    if (_unit != player || [_unit] call ace_medical_fnc_isBeingCarried || [_unit] call ace_medical_fnc_isBeingDragged) exitWith {};

    _unit setUnconscious _state;
}] call CBA_fnc_addEventHandler;

ark_ace_medical_ragdoll_fnc_removeRagdoll = {
    params ["_unit","_anim"];
    if (_anim == "unconsciousrevivedefault" && {alive _unit && {_unit getVariable ["ACE_isUnconscious",false] && {vehicle _unit == _unit}}}) then {
        _unit setUnconscious false;
        private _deathAnim = [_unit] call ace_common_fnc_getDeathAnim;
        [_unit, _deathAnim, 1, true] call ace_common_fnc_doAnimation;

        if (isMultiplayer) then {
            [{
                _this#0 setUnconscious false;
                [_this#0, _this#1, 2, true] call ace_common_fnc_doAnimation;
            }, [_unit, _deathAnim], 5] call CBA_fnc_waitAndExecute;
>>>>>>> be3db1ed429d472ecc3c0d6141ef3173777516dd
        };
    };
}] call CBA_fnc_addEventHandler;