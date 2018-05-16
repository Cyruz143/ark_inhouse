["ace_unconscious", {
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
        };
    };
}] call CBA_fnc_addEventHandler;