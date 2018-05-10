["ace_unconscious", {
    params [["_unit", objNull],["_state", false]];
    if(_unit != player) exitWith {};
    if(_state && {vehicle _unit == _unit && {!([_unit] call ace_medical_fnc_isBeingCarried) && {!([_unit] call ace_medical_fnc_isBeingDragged)}}}) then {
        _unit setUnconscious true;
    };
    if(!_state) then {
        _unit setUnconscious false;
    };
}] call CBA_fnc_addEventHandler;

ark_ace_medical_ragdoll_fnc_removeRagdoll = {
    params ["_unit","_anim"];
    if(_anim == "unconsciousrevivedefault" && {alive _unit && {_unit getVariable ["ACE_isUnconscious",false] && {vehicle _unit == _unit}}}) then {
        _unit setUnconscious false;
        [_unit, [_unit] call ace_common_fnc_getDeathAnim, 2, true] call ace_common_fnc_doAnimation;
        if(isMultiplayer) then {
            [_unit] spawn {
                params["_unit"];
                uiSleep 5;
                if(!(_unit getVariable ["ACE_isUnconscious",false])) then {
                    _unit setUnconscious false;
                } else {
                    [_unit, [_unit] call ace_common_fnc_getDeathAnim, 2, true] call ace_common_fnc_doAnimation;
                };
            };
        };
    };
};

player addEventHandler ["AnimChanged", {call ark_ace_medical_ragdoll_fnc_removeRagdoll}];