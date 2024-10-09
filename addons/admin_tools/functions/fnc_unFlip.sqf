ark_admin_tools_fnc_canUnflip = {
    params ["_vehicle"];

    if (isNull _vehicle) exitWith {false};
    if ((speed _vehicle) > 2) exitWith {false};

    private _pB = _vehicle call BIS_fnc_getPitchBank;
    [false, true] select ((((_pB # 0) < - 60) || ((_pB # 0) > 60)) || (((_pB # 1) < - 60) || ((_pB # 1) > 60)))
};

ark_admin_tools_fnc_unFlip = {
    [[objectParent player], {
        params ["_vehicle"];

        private _lastUnflipTime = _vehicle getVariable ["ark_admin_tools_lastUnflipTime", 0];
        if (time - _lastUnflipTime <= 10) exitWith {
            {"Please wait 10 seconds \nbefore trying to unflip again" remoteExec ["hint", _x];} forEach (crew _vehicle);
        };

        private _emptyPos = (getPos _vehicle) findEmptyPosition [0, 20, (typeOf _vehicle)];

        if (isNil "_emptyPos" || { count _emptyPos isEqualTo 0 }) exitWith {
            {"No room to flip \nPlease contact Staff!" remoteExec ["hint", _x];} forEach (crew _vehicle);
        };

        private _allowDamage = isDamageAllowed _vehicle;
        _vehicle allowDamage false;
        _vehicle setPos _emptyPos;
        _vehicle setVectorUp surfaceNormal _emptyPos;
        _vehicle allowDamage _allowDamage;
        _vehicle setVariable ["ark_admin_tools_lastUnflipTime", time, true];
    }] remoteExec ["bis_fnc_call", objectParent player];
};
