["ace_unconscious", {
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
        };
    };
};

player addEventHandler ["AnimChanged", {call ark_ace_medical_ragdoll_fnc_removeRagdoll}];