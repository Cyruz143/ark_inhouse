ark_ace_spectator_fnc_initSpec = {
    params ["_unit", "", "_killer", "_instigator"];

    if (!local _unit || { !(_unit isEqualTo player) } || { (getMissionConfigValue ["respawn",0]) != 0 }) exitWith {};

    if (isNull _killer) then {
        _killer = _instigator;
    };

    // If hosted SP, exit to default ending screen
    if ((call bis_fnc_getNetMode) isEqualTo "SinglePlayer") exitWith {
        [_unit,_killer] spawn BIS_fnc_respawnNone;
    };

    // Remove unit from group after delay
    if (group _unit isEqualTo grpNull) then {
        diag_log "[ARK] (ACE Spectator) - Unit had no group";
    } else {
        [{
            [_this] join grpNull;
            diag_log format ["[ARK] (ACE Spectator) - Removed unit: %1 from group: %2",_this, group _this];
        }, _unit, 90] call CBA_fnc_waitAndExecute;
    };

    private _killMessage = "";
    private _killerVehicle = "";

    if (!isNull _killer) then {
        if (!(_killer isKindof "CAManBase")) then {
            _killerVehicle = getText (configfile >> "CfgVehicles" >> (typeOf _killer) >> "displayName");
            _killer = effectiveCommander _killer;
        };

        private _killerName = [_killer] call ace_common_fnc_getName;
        private _killerDistance = round ((getPosASL _unit) distance (getPosASL _killer));
        private _killerWeapon = getText (configFile >> "CfgWeapons" >> (currentWeapon vehicle _killer) >> "DisplayName");
        _killMessage = format ["You were <t color='#CC0000'>killed</t> by %1 with an %2 at %3 m",_killerName,_killerWeapon,_killerDistance];

        if (_killerVehicle != "") then {
            _killMessage = format ["You were <t color='#CC0000'>killed</t> by %1 in a %2 at %3 m",_killerName,_killerVehicle,_killerDistance];
        };

        if ([(side group _unit), (side group _killer)] call BIS_fnc_areFriendly) then {
            _killMessage = format ["You were <t color='#0066CC'>friendly fired</t> by %1 with an %2 at %3 m",_killerName,_killerWeapon,_killerDistance];
        };

        if (_killer isEqualTo _unit) then {
            _killMessage = "You <t color='#009933'>killed yourself</t>";
        };

        [2, _killer, -2, (getPosATL _killer)] call ace_spectator_fnc_setCameraAttributes;
    } else {
        _killMessage = "You were <t color='#CC0000'>killed</t> by an explosion or grenade";
        [2, _unit, -2, (getPosATL _unit)] call ace_spectator_fnc_setCameraAttributes;
    };

    ["west", "east", "resistance", "civ"] call acre_api_fnc_babelSetSpokenLanguages;

    [_killMessage] spawn {
        params ["_killMessage"];
            [false] call ace_common_fnc_setVolume;
            cutText ["", "BLACK OUT", 5];
            uiSleep 5;

            [_killMessage,-1,-1,5,1] spawn BIS_fnc_dynamicText;

            uiSleep 5;
            cutText ["", "PLAIN", 2];
            [true] call ace_common_fnc_setVolume;
            [true] call ace_spectator_fnc_setSpectator;
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
        [player, 1, ["ACE_SelfActions", "ARK_Menu"], _action] call ace_interact_menu_fnc_addActionToObject;
        for "_i" from 1 to 20 do {
            player globalChat format ["You have JIP'd without AI on! If you were not given permission by staff, enable spectator from ACE self-interact! (%1)", _i];
            sleep 1;
        };
        sleep 60;
        player globalChat format ["Removing respawn action from ACE self-interact."];
        [player, 1, ["ACE_SelfActions", "ARK_Menu", "ARK_ACE_Spectator"]] call ace_interact_menu_fnc_removeActionFromObject;
    };
};

["player.initialized", {
    ["ace_killed", {call ark_ace_spectator_fnc_initSpec}] call CBA_fnc_addEventHandler;
    [] call ark_ace_spectator_fnc_getInitialPlayableUnitsFromServer;
}] call hull3_event_fnc_addEventHandler;
