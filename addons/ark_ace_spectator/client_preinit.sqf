ark_ace_spectator_fnc_initSpec = {
    params ["_victim","_killer","_instigator"];

    if ((getMissionConfigValue ["respawn",1]) != 1) exitWith {};
    private _killerVehicle = "";

    if (isNull _killer) then {
        _killer = _instigator;
    };

    //If killer in a vehicle then get the DisplayName for later use
    if ((!isNull _killer) && {!(_killer isKindof "CAManBase")}) then {
        _killerVehicle = getText (configfile >> "CfgVehicles" >> (typeOf _killer) >> "displayName");
        _killer = effectiveCommander _killer;
    };

    private _killerName = [_killer] call ace_common_fnc_getName;
    private _killerDistance = round ((getPosASL _victim) distance (getPosASL _killer));
    private _killerWeapon = getText (configFile >> "CfgWeapons" >> (currentWeapon vehicle _killer) >> "DisplayName");
    private _killMessage = format ["You were <t color='#CC0000'>killed</t> by %1 with an %2 at %3 m",_killerName,_killerWeapon,_killerDistance];

    if (_killerVehicle != "") then {
        _killMessage = format ["You were <t color='#CC0000'>killed</t> by %1 in a %2 at %3 m",_killerName,_killerVehicle,_killerDistance];
    };

    if ([(side group _victim), (side group _killer)] call BIS_fnc_areFriendly) then {
        _killMessage = format ["You were <t color='#0066CC'>friendly fired</t> by %1 with an %2 at %3 m",_killerName,_killerWeapon,_killerDistance];
    };

    if (_killer isEqualTo _victim) then {
        _killMessage = "You <t color='#009933'>killed yourself</t>";
    };

    if (isNull _killer) then {
        _killMessage = "You were <t color='#CC0000'>killed</t> by an explosion or grenade";
    };

    ["west", "east", "resistance", "civ"] call acre_api_fnc_babelSetSpokenLanguages;
    [2, _killer, -2, (getPosATL _killer)] call ace_spectator_fnc_setCameraAttributes;
    ["unconscious", false] call ace_common_fnc_setDisableUserInputStatus;

    [_killMessage] spawn {
        params ["_killMessage"];
            [true] call ace_common_fnc_setVolume;
            cutText ["", "BLACK OUT", 5];
            uiSleep 5;

            [_killMessage,-1,-1,5,1] spawn BIS_fnc_dynamicText;

            uiSleep 5;
            cutText ["", "PLAIN", 2];
            [true] call ace_spectator_fnc_setSpectator;
            [false] call ace_common_fnc_setVolume;
    };
};

ark_ace_spectator_fnc_getInitialPlayableUnitsFromServer = {
    if (!isMultiplayer || !didJIP) exitWith {};

    [[clientOwner], {
        params ["_clientId"];

        [[ark_ace_spectator_initialPlayableUnits], {
            params ["_initialPlayableUnits"];

            ark_ace_spectator_initialPlayableUnits = _initialPlayableUnits;
            [] spawn ark_ace_spectator_fnc_checkIfNotInitialPlayableUnit;
        }] remoteExecCall ["BIS_fnc_call", _clientId, false];
    }] remoteExecCall ["BIS_fnc_call", 2, false];
};

ark_ace_spectator_fnc_checkIfNotInitialPlayableUnit = {
    if !(player in ark_ace_spectator_initialPlayableUnits) then {
        private _action =
            [ "ARK_ACE_Spectator"
            , "ACE Spectator"
            , "\z\ace\addons\spectator\data\Icon_Module_Spectator_ca.paa"
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
    player addEventHandler ["Killed", {call ark_ace_spectator_fnc_initSpec}];
    [] call ark_ace_spectator_fnc_getInitialPlayableUnitsFromServer;
}] call hull3_event_fnc_addEventHandler;
