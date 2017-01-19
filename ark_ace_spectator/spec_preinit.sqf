["player.initialized", {
    player addEventHandler ["Killed", ark_fnc_initSpec];
}] call hull3_event_fnc_addEventHandler;

ark_fnc_initSpec = {
    private _victim = this select 0;
    private _attacker = this select 1;

    private _distance = _victim distance _attacker;
    private _weapon = currentWeapon _attacker;
    private _attackerPos = getPosATL _attacker;

    if ((!isNull _attacker) && {!(_attacker isKindof "CAManBase")}) then {
        _attacker = effectiveCommander _attacker;
    };

    private _sideCheck = if((side group _victim) == (side group _attacker)) then {
        _sideCheck = "<t color='#0066CC'>friendly fired</t>"
    } else {
        _sideCheck = "<t color='#CC0000'>killed</t>"
    };

    5 fadeSound 0;
    cutText ["", "BLACK OUT", 5];

    private _killMessage = format ["You were %1 by %2 with an %3 at %4 m",_sideCheck,_attacker,_weapon,_distance];
    [
        [
            ["_killMessage","<t align = 'center' shadow = '1' size = '1' font='PuristaBold'>%1</t>"]
        ]
    ] spawn BIS_fnc_typeText;

    sleep 5;
    cutText ["", "PLAIN", 0];
    2 fadeSound 1;

    ["west", "east", "resistance", "civ"] call acre_api_fnc_babelSetSpokenLanguages;

    [2, _attacker, -2, _attackerPos] call ace_spectator_fnc_setCameraAttributes;
    [true] call ace_spectator_fnc_setSpectator;
};