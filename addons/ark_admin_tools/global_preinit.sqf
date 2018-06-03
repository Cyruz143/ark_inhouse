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

    private _vehicle = createVehicle [_helo, position _player, [], 2000, "FLY"]; 
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

    private _waypoint = _grp addWaypoint [position _player, 0, 1]; 
    _waypoint setWaypointType "SAD"; 
    _waypoint setWaypointBehaviour "COMBAT"; 
    _waypoint setWaypointCombatMode "RED"; 
    _waypoint setWaypointSpeed "FULL";
    [_grp, 2] waypointAttachVehicle _player;
    _grp reveal [_player, 3.5];
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

    private _waypoint = _grp addWaypoint [position _player, 0, 1]; 
    _waypoint setWaypointType "SAD"; 
    _waypoint setWaypointBehaviour "COMBAT"; 
    _waypoint setWaypointCombatMode "RED"; 
    _waypoint setWaypointSpeed "FULL";
    [_grp, 2] waypointAttachVehicle _player;
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

//Credit to Baer and Gruppe.W
["ark_admin_tools_eh_createZeus", {
    params ["_unit"];
    private _curator = (createGroup sideLogic) createUnit ["ModuleCurator_F", [0, 0, 0], [], 0, "CAN_COLLIDE"];
    _curator setVariable ["Addons", 3, true];
    _curator addCuratorEditableObjects [allMissionObjects "", true];
    _unit assignCurator _curator;
}] call CBA_fnc_addEventHandler;

["zeus", {
    if ([] call ark_admin_tools_fnc_isHost) then {
        systemChat "Creating Zeus module...";
        ["ark_admin_tools_eh_createZeus", [player]] call CBA_fnc_serverEvent;
    };
}, "all"] call CBA_fnc_registerChatCommand;