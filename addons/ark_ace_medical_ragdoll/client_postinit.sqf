["ace_unconscious", {
    params [["_unit", objNull],["_isUnconscious", false]];
    if (_unit != player || [_unit] call ace_medical_fnc_isBeingCarried || [_unit] call ace_medical_fnc_isBeingDragged) exitWith {};

    if (lifeState _unit isEqualTo "INCAPACITATED") then {
        _unit setUnconscious _isUnconscious;
        [_unit] call ark_ace_medical_ragdoll_fnc_resetAnimation;
    } else {
        _unit setUnconscious _isUnconscious;
    };
}] call CBA_fnc_addEventHandler;

ark_ace_medical_ragdoll_fnc_removeRagdoll = {
    params ["_unit","_anim"];
    if (_anim == "unconsciousrevivedefault" && {alive _unit && {_unit getVariable ["ACE_isUnconscious",false] && {vehicle _unit == _unit}}}) then {
        _unit setUnconscious false;
        [_unit] call ark_ace_medical_ragdoll_fnc_resetAnimation;
    };
};

ark_ace_medical_ragdoll_fnc_resetAnimation = {
  params ["_unit"];

    private _deathAnim = [_unit] call ace_common_fnc_getDeathAnim;
    [_unit, _deathAnim, 1, true] call ace_common_fnc_doAnimation;
    [{
        _this#0 setUnconscious false;
        [_this#0, _this#1, 2, true] call ace_common_fnc_doAnimation;
    }, [_unit, _deathAnim]] call CBA_fnc_execNextFrame;
};

player addEventHandler ["AnimChanged", {call ark_ace_medical_ragdoll_fnc_removeRagdoll}];