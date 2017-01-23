["player.initialized", {
    player addEventHandler ["Killed", ark_fnc_initSpec];
}] call hull3_event_fnc_addEventHandler;

ark_fnc_initSpec = {
    private _victim = _this select 0;
    private _attacker = _this select 1;

    private _respawn = getMissionConfigValue ["respawn",1];
    if (_respawn != 1) exitWith {};

    private _attackerName = name _attacker;
    private _attackerDistance = round (getPos _victim distance getPos _attacker);
    private _attackerWeapon = getText (configFile >> "CfgWeapons" >> (currentWeapon vehicle _attacker) >> "DisplayName");
    private _attackerPos = getPosATL _attacker;

    if ((!isNull _attacker) && {!(_attacker isKindof "CAManBase")}) then {
        _attacker = effectiveCommander _attacker;
    };

    private _sideCheck = "<t color='#CC0000'>killed</t>";
    
    if((side group _victim) == (side group _attacker)) then {
        _sideCheck = "<t color='#0066CC'>friendly fired</t>";
    };

    private _killMessage = format ["You were %1 by %2 with an %3 at %4 m",_sideCheck,_attackerName,_attackerWeapon,_attackerDistance];

    [_attacker,_attackerPos,_killMessage] spawn {
        params ["_attacker","_attackerPos","_killMessage"];
            5 fadeSound 0;
            cutText ["", "BLACK OUT", 5];
            sleep 5;
            
            [_killMessage,-1,-1,5,1] spawn BIS_fnc_dynamicText;

            sleep 5;
            cutText ["", "PLAIN", 0];
            2 fadeSound 1;

            ["west", "east", "resistance", "civ"] call acre_api_fnc_babelSetSpokenLanguages;

            [2, _attacker, -2, _attackerPos] call ace_spectator_fnc_setCameraAttributes;
            [true] call ace_spectator_fnc_setSpectator;
    };
};