re_attacker_side = west;
re_defender_side = east;

re_fnc_preinit = {
    re_camouflage = ["woodland", "desert", "snow"] select (["RandomEngagements_Camouflage", 0] call BIS_fnc_getParamValue);

    re_attacker_faction = "Default";
    re_attacker_factionRawSide = "west";
    re_attacker_factionSide = west;
    re_attacker_gearTemplate = "Default";
    re_attacker_uniformTemplate = "Default";

    re_defender_faction = "Default";
    re_defender_factionRawSide = "east";
    re_defender_factionSide = east;
    re_defender_gearTemplate = "Default";
    re_defender_uniformTemplate = "Default";

    hull3_gear_fnc_validateFaction = { true };
    hull3_gear_fnc_getFaction = {
        params ["_unit"];
        if (side _unit isEqualTo re_attacker_side) exitWith { re_attacker_faction };
        re_defender_faction;
    };
    hull3_gear_fnc_getTemplate = {
        params ["_unit"];
        if (side _unit isEqualTo re_attacker_side) exitWith { re_attacker_gearTemplate };
        re_defender_gearTemplate;
    };
    hull3_uniform_fnc_getTemplate = {
        params ["_unit"];
        if (side _unit isEqualTo re_attacker_side) exitWith { re_attacker_uniformTemplate };
        re_defender_uniformTemplate;
    };

    [] call re_fnc_randomizeFactions;


    re_selectedLocationMarkerName = "re_selectedLocation";
    re_selectedLocationMarkerSize = 300;
    re_selectedLocation = [[0, 0, 0], 0];

    [] call re_fnc_createLocationMarker;
};

re_fnc_randomizeFactions = {
    private _factionConfigs = "re_camouflage in getArray (_x >> 'camouflage') && {getText (_x >> 'name') isNotEqualTo 'Default'}" configClasses (configFile >> "Hull3" >> "Faction");
    private _attackerFactionConfig = _factionConfigs select floor random count _factionConfigs;
    re_attacker_faction = configName _attackerFactionConfig;
    publicVariable "re_attacker_faction";
    re_attacker_factionName = getText (_attackerFactionConfig >> "name");
    publicVariable "re_attacker_factionName";
    re_attacker_factionRawSide = getText (_attackerFactionConfig >> "side");
    re_attacker_factionSide = call compile re_attacker_factionRawSide;
    re_attacker_gearTemplate = getText (_attackerFactionConfig >> "gear");
    re_attacker_uniformTemplate = getText (_attackerFactionConfig >> "uniform");

    private _defenderFactionConfigs = _factionConfigs select { call compile getText (_x >> "side") isNotEqualTo re_attacker_factionSide };
    private _defenderFactionConfig = _defenderFactionConfigs select floor random count _defenderFactionConfigs;
    re_defender_faction = configName _defenderFactionConfig;
    publicVariable "re_defender_faction";
    re_defender_factionName = getText (_defenderFactionConfig >> "name");
    publicVariable "re_defender_factionName";
    re_defender_factionRawSide = getText (_defenderFactionConfig >> "side");
    re_defender_factionSide = call compile re_defender_factionRawSide;
    re_defender_gearTemplate = getText (_defenderFactionConfig >> "gear");
    re_defender_uniformTemplate = getText (_defenderFactionConfig >> "uniform");
};

re_fnc_createLocationMarker = {
    private _marker = createMarker [re_selectedLocationMarkerName, [0, 0, 0]];
    _marker setMarkerSize [1, 1];
    _marker setMarkerAlpha 0.5;
    _marker setMarkerShape "ELLIPSE";
    _marker setMarkerBrush "Solid";
    _marker setMarkerColor "ColorRed";
};

re_fnc_changeLocationSize = {
    params ["_sizeChange"];

    private _size = (re_selectedLocation select 1) + _sizeChange;
    re_selectedLocation set [1, _size];
    re_selectedLocationMarkerName setMarkerSize [_size, _size];
};

re_fnc_moveLocationMarker = {
    params ["_position"];

    re_selectedLocation = [_position, re_selectedLocationMarkerSize];
    re_selectedLocationMarkerName setMarkerPos _position;
    re_selectedLocationMarkerName setMarkerSize [re_selectedLocationMarkerSize, re_selectedLocationMarkerSize];
    [-1, { player globalChat "A new attack location has been selected by the host!" }, []] call CBA_fnc_globalExecute;
};

re_fnc_getUniformPath = {
    params ["_side"];

    private "_finalPath";
    private _rawPath = getText (configFile >> "CfgWeapons" >> (uniform (units _side #0)) >> "picture");
    if (_rawPath find ".paa" != -1) then {
        _finalPath = _rawPath;
    } else {
        _finalPath = _rawPath + ".paa";
    };

    _finalPath
};

re_fnc_aoWarning = {
    if (side group player isEqualTo re_attacker_side) exitWith {};

    [{
        if (alive player && { !(player inArea re_selectedLocationMarkerName) }) then {
            private _msg = "<t color='#FF0000'>You're outside of the playable area!</t>";
            [_msg,0,0,0,0] spawn BIS_fnc_dynamicText;
            playSound "Alarm";
        };
    }, 1] call CBA_fnc_addPerFrameHandler;
};
