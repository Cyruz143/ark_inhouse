/* Credit to veteran29 for the idea and sane damage values */

ark_ace_medical_fnc_doDamage = {
    params ["_unit"];
    
    private _aceHitpoints = _unit getVariable ["ace_medical_bodypartstatus",[0,0,0,0,0,0]];
    _aceHitpoints params ["_head", "_body", "_hand_l", "_hand_r", "_leg_l", "_leg_r"];
    
    private _damage = _body;
    {_damage = _damage + _x} forEach _aceHitpoints;

    if (_head > 6) exitWith {
        _unit call ace_medical_fnc_setDead;
    };
    
    if (_body > 3) exitWith {
        _unit call ace_medical_fnc_setDead;
    };
    
    if (_damage > 16) exitWith {
        _unit call ace_medical_fnc_setDead;
    };
};

["ace_unconscious", {
    params ["_unit", "_state"];
    
    if (!local _unit || { !_state } || { !alive _unit }) exitWith {};
    
    // Must wait 2 frames for ACE medical damage to be applied!
    [{
            [ark_ace_medical_fnc_doDamage, _this] call CBA_fnc_execNextFrame;
    }, _unit] call CBA_fnc_execNextFrame;

}] call CBA_fnc_addEventHandler;