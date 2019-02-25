/* Credit to veteran29 for the code and sane damage values */

player addEventHandler ["Hit", {
    params ["_unit"];
    [{
            [ark_ace_medical_fnc_applyDamage, _this] call CBA_fnc_execNextFrame;
    }, _unit] call CBA_fnc_execNextFrame;
}];

ark_ace_medical_fnc_applyDamage = {
    params ["_unit"];

    if (!alive _unit) exitWith {};

    private _aceHitpoints = _unit getVariable ["ace_medical_bodypartstatus",[0,0,0,0,0,0]];
    _aceHitpoints params ["_head", "_body", "_hand_l", "_hand_r", "_leg_l", "_leg_r"];
    private _damage = _body;
    {_damage = _damage + _x} forEach _aceHitpoints;

    if (_head > 6) exitWith {
        [_unit, false, false] call ace_medical_fnc_setDead;
    };
    
    if (_body > 3) exitWith {
        [_unit, false, false] call ace_medical_fnc_setDead;
    };
    
    if (_damage > 16) exitWith {
        [_unit, false, false] call ace_medical_fnc_setDead;
    };
};