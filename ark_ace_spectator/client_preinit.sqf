ark_fnc_initSpec = {
    private _victim = _this select 0;
    private _attacker = _this select 1;
    private _instigator = _this select 2;

    private _respawn = getMissionConfigValue ["respawn",1];
    if (_respawn != 1) exitWith {};

    if (isNull _attacker) then {
        _attacker = _instigator;
    };

    if ((isNull _attacker) || (_attacker == _victim)) then {
        private _aceSource = _victim getVariable ["ace_medical_lastDamageSource", objNull];
        if ((!isNull _aceSource) && {_aceSource != _victim}) then {
            _attacker = _aceSource;
        };
    };

    private _attackerName = name _attacker;
    private _attackerDistance = round (getPos _victim distance getPos _attacker);
    private _attackerWeapon = getText (configFile >> "CfgWeapons" >> (currentWeapon vehicle _attacker) >> "DisplayName");
    private _attackerPos = getPosATL _attacker;

    if ((!isNull _attacker) && {!(_attacker isKindof "CAManBase")}) then {
        _attacker = effectiveCommander _attacker;
    };

    private _killMessage = format ["You were <t color='#CC0000'>killed</t> by %1 with an %2 at %3 m",_attackerName,_attackerWeapon,_attackerDistance];

    if ((_attacker == "Error: No Vehicle") || (_attacker == "Error: No unit")) then {
        private _killMessage = "You were <t color='#CC0000'>killed</t> by an explosion or grenade";
    };
    
    if((side group _victim) == (side group _attacker)) then {
        _killMessage = format ["You were <t color='#0066CC'>friendly fired</t> by %1 with an %2 at %3 m",_attackerName,_attackerWeapon,_attackerDistance];
    };

    if(_attacker == _victim) then {
        _killMessage = format ["You <t color='#009933'>played yourself</t> with an %1",_attackerWeapon];
    };

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

ark_fnc_getInitialPlayableUnitsFromServer = {
    if (!isMultiplayer || !didJIP) exitWith {};

    [[clientOwner], {
        params ["_clientId"];

        [[ark_ace_spectator_initialPlayableUnits], {
            params ["_initialPlayableUnits"];

            ark_ace_spectator_initialPlayableUnits = _initialPlayableUnits;
            [] spawn ark_fnc_checkIfNotInitialPlayableUnit;
        }] remoteExecCall ["BIS_fnc_call", _clientId, false];
    }] remoteExecCall ["BIS_fnc_call", 2, false];
};

ark_fnc_checkIfNotInitialPlayableUnit = {
    if !(player in ark_ace_spectator_initialPlayableUnits) then {
        private _action =
            [ "ARK_ACE_Spectator"
            , "ACE Spectator"
            , "\z\ace\addons\spectator\UI\Icon_Module_Spectator_ca.paa"
            , { player setDamage 1; player setPosASL [0, 0, 0]; }
            , { true }
            ] call ace_interact_menu_fnc_createAction;
        [player, 1, ["ACE_SelfActions", "ARK_Interaction"], _action] call ace_interact_menu_fnc_addActionToObject;
        for "_i" from 1 to 20 do {
            player globalChat format ["You have JIP'd without AI on! If you were not given permission by staff, enable spectator from ACE self-interact! (%1)", _i];
            sleep 1;
        };
        sleep 60;
        player globalChat format ["Removing respawn action from ACE self-interact."];
        [player, 1, ["ACE_SelfActions", "ARK_Interaction", "ARK_ACE_Spectator"]] call ace_interact_menu_fnc_removeActionFromObject;
    };
};

["player.initialized", {
    player addEventHandler ["Killed", {call ark_fnc_initSpec}];
    [] call ark_fnc_getInitialPlayableUnitsFromServer;
}] call hull3_event_fnc_addEventHandler;