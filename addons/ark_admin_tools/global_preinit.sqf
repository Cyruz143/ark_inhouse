ark_admin_tools_fnc_callAttackHelo = {
    params ["_player"];

    private _unitTemplate = adm_camp_defaultUnitTemplate;
    private _side = [_unitTemplate] call adm_common_fnc_getUnitTemplateSide;
    private _pilotArray = getArray (configfile >> "Admiral" >> "UnitTemplates" >> _unitTemplate >> "pilots");
    private _heloArray = getArray (configfile >> "Admiral" >> "UnitTemplates" >> _unitTemplate >> "ah");
    if (isNil "_heloArray" || { count _heloArray == 0 }) exitWith {
        diag_log "[ARK] (Admin Tools) - No helo defined in Admiral template";
    };

    private _randomDir = random [0, 180, 360];
    private _pos = _player getPos [2500, _randomDir];
    private _vehicle = createVehicle [(selectRandom _heloArray), _pos, [], 0, "FLY"]; 
    private _grp = createGroup _side;

    private _driver = _grp createUnit [(selectRandom _pilotArray), [0,0,0], [], 0, "NONE"];
    _driver assignAsDriver _vehicle;
    _driver moveInDriver _vehicle;

    {
        private _unit = _grp createUnit [(selectRandom _pilotArray), [0,0,0], [], 0, "NONE"];
        _unit assignAsTurret [_vehicle, _x];
        _unit moveInTurret [_vehicle, _x];
    } forEach allTurrets _vehicle;

    {
        _x setskill ["spotDistance",1];
        _x setskill ["spotTime",1];
        _x setskill ["courage",1];
        _x setskill ["commanding",1];
    } forEach units _grp;

    [_grp, position _player, 250, 6, "SAD", "AWARE", "RED", "FULL", "STAG COLUMN", "", [3,6,9]] call CBA_fnc_taskPatrol;
};

ark_admin_tools_fnc_callArmour = {
    params ["_player"];

    private _unitTemplate = adm_camp_defaultUnitTemplate;
    private _side = [_unitTemplate] call adm_common_fnc_getUnitTemplateSide;
    private _pos = [_player, 850, 1000, 3, 0, 20, 0] call BIS_fnc_findSafePos;
    private _crewmanArray = getArray (configfile >> "Admiral" >> "UnitTemplates" >> _unitTemplate >> "crewmen");
    private _armourArray = getArray (configfile >> "Admiral" >> "UnitTemplates" >> _unitTemplate >> "armour");

    private _vehicle = createVehicle [(selectRandom _armourArray), _pos, [], 0, "NONE"];
    private _grp = createGroup _side;

    private _driver = _grp createUnit [(_crewmanArray #0), [0,0,0], [], 0, "NONE"];
    _driver assignAsDriver _vehicle;
    _driver moveInDriver _vehicle;

    {
        private _unit = _grp createUnit [(selectRandom _crewmanArray), [0,0,0], [], 0, "NONE"];
        _unit assignAsTurret [_vehicle, _x];
        _unit moveInTurret [_vehicle, _x];
    } forEach allTurrets _vehicle;

    _vehicle allowCrewInImmobile true;
    _vehicle setUnloadInCombat [false, false];

    [_grp, position _player, 100, 4, "MOVE", "AWARE", "RED", "FULL"] call CBA_fnc_taskPatrol;
};

ark_admin_tools_fnc_canUnflip = {
    params ["_vehicle"];

    private _vector = (vectorUp _vehicle) select 2; 
    private _canUnflip = _vector < 0.5;

    _canUnflip;
};

ark_admin_tools_fnc_unFlip = {
    [[objectParent player], {
        params ["_vehicle"];

        private _lastUnflipTime = _vehicle getVariable ["ark_admin_tools_lastUnflipTime", 0];
        if (time - _lastUnflipTime <= 10) exitWith {
            {"Please wait 10 seconds \nbefore trying to unflip again" remoteExec ["hint", _x];} forEach (crew _vehicle);
        };
        
        private _position = getPosATL _vehicle;
        private _emptyPos = _position findEmptyPosition [0, 20, (typeOf _vehicle)];

        if (isNil "_emptyPos" || { count _emptyPos == 0 }) exitWith {
            {"No room to flip \nPlease contact Staff!" remoteExec ["hint", _x];} forEach (crew _vehicle);
        };

        _vehicle allowDamage false;
        _vehicle setVectorUp surfaceNormal _emptyPos;
        _vehicle setPosATL _emptyPos;
        _vehicle allowDamage true;
        _vehicle setVariable ["ark_admin_tools_lastUnflipTime", time, true];
    }] remoteExec ["bis_fnc_call", objectParent player];
};

// Custom CBA EHs
["ark_admin_tools_eh_endMission", BIS_fnc_endMission] call CBA_fnc_addEventHandler;

// Custom CBA chat commands
["endmission", {
    params ["_ending"];
    if (_ending == "") then {
        ["ark_admin_tools_eh_endMission", ["end1", true]] call CBA_fnc_globalEvent;
    } else {
        ["ark_admin_tools_eh_endMission", [_ending, true]] call CBA_fnc_globalEvent;
    };
}, "adminLogged"] call CBA_fnc_registerChatCommand;

["failmission", {
    params ["_ending"];
    if (_ending == "") then {
        ["ark_admin_tools_eh_endMission", ["loser", false]] call CBA_fnc_globalEvent;
    } else {
        ["ark_admin_tools_eh_endMission", [_ending, false]] call CBA_fnc_globalEvent;
    };
}, "adminLogged"] call CBA_fnc_registerChatCommand;