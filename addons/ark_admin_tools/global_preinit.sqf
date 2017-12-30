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
