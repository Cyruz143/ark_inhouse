ark_admin_tools_fnc_callAttackHelo = {
    params ["_player"];
    private _unitTemplate = adm_camp_defaultUnitTemplate;
    private _side = [_unitTemplate] call adm_common_fnc_getUnitTemplateSide;
    private _pilotArray = getArray (configfile >> "Admiral" >> "UnitTemplates" >> _unitTemplate >> "pilots");
    private _heloArray = getArray (configfile >> "Admiral" >> "UnitTemplates" >> _unitTemplate >> "ah");
    if (isNil "_heloArray" || { count _heloArray == 0 }) exitWith {
        diag_log "[ARK] (Admin Tools) - No helo defined in Admiral template";
    };
    private _unit = selectRandom _pilotArray;
    private _helo = selectRandom _heloArray;

    private _randomDir = random [0, 180, 360];
    private _pos = _player getPos [2500, _randomDir];
    private _vehicle = createVehicle [_helo, _pos, [], 0, "FLY"]; 
    private _grp = createGroup _side;
    private _allTurrets = allTurrets [_vehicle, true];

    private _driver = _grp createUnit [_unit, [0,0,0], [], 0, "NONE"];
    _driver assignAsDriver _vehicle;
    _driver moveInDriver _vehicle;

    {
        private _units = _grp createUnit [_unit, [0,0,0], [], 0, "NONE"];
        _units assignAsTurret [_vehicle, _x];
        _units moveInTurret [_vehicle, _x];
    } forEach _allTurrets;

    private _wp1 = _grp addWaypoint [position _player, 0, 1]; 
    _wp1 setWaypointType "SAD"; 
    _wp1 setWaypointBehaviour "COMBAT"; 
    _wp1 setWaypointCombatMode "RED"; 
    _wp1 setWaypointSpeed "FULL";
    _grp reveal [_player, 4];
    
    private _wp2 = _grp addWaypoint [position _player, 0, 2]; 
    _wp2 setWaypointType "LOITER"; 
    _wp2 setWaypointLoiterRadius 200;
    _wp2 setWaypointLoiterType "CIRCLE_L";
    _wp2 setWaypointBehaviour "COMBAT"; 
    _wp2 setWaypointCombatMode "RED"; 
    _wp2 setWaypointSpeed "LIMITED";
};

ark_admin_tools_fnc_callArmour = {
    params ["_player"];
    private _unitTemplate = adm_camp_defaultUnitTemplate;
    private _side = [_unitTemplate] call adm_common_fnc_getUnitTemplateSide;
    private _pos = [_player, 1000, 1100, 3, 0, 20, 0] call BIS_fnc_findSafePos;
    private _crewmanArray = getArray (configfile >> "Admiral" >> "UnitTemplates" >> _unitTemplate >> "crewmen");
    private _armourArray = getArray (configfile >> "Admiral" >> "UnitTemplates" >> _unitTemplate >> "armour");
    private _unit = selectRandom _crewmanArray;
    private _vic = selectRandom _armourArray;

    private _vehicle = createVehicle [_vic, _pos, [], 0, "NONE"];
    private _grp = createGroup _side;
    private _allTurrets = allTurrets [_vehicle, true];

    private _driver = _grp createUnit [_unit, [0,0,0], [], 0, "NONE"];
    _driver assignAsDriver _vehicle;
    _driver moveInDriver _vehicle;

    {
        private _units = _grp createUnit [_unit, [0,0,0], [], 0, "NONE"];
        _units assignAsTurret [_vehicle, _x];
        _units moveInTurret [_vehicle, _x];
    } forEach _allTurrets;

    _vehicle allowCrewInImmobile true;
    _vehicle setUnloadInCombat [false, false];

    private _wp1 = _grp addWaypoint [position _player, 0, 1]; 
    _wp1 setWaypointType "SAD"; 
    _wp1 setWaypointBehaviour "COMBAT"; 
    _wp1 setWaypointCombatMode "RED"; 
    _wp1 setWaypointSpeed "FULL";
    _grp reveal [_player, 4];
    
    private _wp2 = _grp addWaypoint [position _player, 0, 2]; 
    _wp2 setWaypointType "LOITER"; 
    _wp2 setWaypointLoiterRadius 200;
    _wp2 setWaypointLoiterType "CIRCLE_L";
    _wp2 setWaypointBehaviour "COMBAT"; 
    _wp2 setWaypointCombatMode "RED"; 
    _wp2 setWaypointSpeed "LIMITED";
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