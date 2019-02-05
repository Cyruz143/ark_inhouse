ark_navy_fnc_checkTrigger = {
    params ["_logic"];

    private _syncdTrg = synchronizedObjects _logic;
    if (count _syncdTrg isEqualTo 0) exitWith {
        diag_log "[ARK] (Navy) - Trigger not syncd to the module";
    };

    if (count _syncdTrg > 1) exitWith {
        diag_log "[ARK] (Navy) - Only sync one trigger to the module";
    };

    private _trigger = _syncdTrg #0;
    private _vrUnit = [_trigger] call ark_navy_fnc_checkWaypoints;

    if (isNil "_vrUnit") exitWith {
        diag_log "[ARK] (Navy) - No VR entity syncd with trigger"];
    };

    private _waypoints = waypoints _vrUnit;
    if (count _waypoints isEqualTo 0) exitWith {
        diag_log format ["[ARK] (Navy) - VR entity: %1 had no waypoints attached!", _vrUnit];
    };

    deleteVehicle _vrUnit;
    private _unitTemplate = adm_camp_defaultUnitTemplate;

    private _heloArray = getArray (configfile >> "Admiral" >> "UnitTemplates" >> _unitTemplate >> "th");
    if (isNil "_heloArray" || { count _heloArray isEqualTo 0 }) exitWith {
        diag_log "[ARK] (Navy) - No helo defined in Admiral template";
    };

    private _vehicleClassname = selectRandom _heloArray;
    private _routineFunction = _logic getVariable ["Routine_Function", "ark_navy_fnc_paradrop"];

    [_logic, _trigger, _vehicleClassname, _unitTemplate, _waypoints] call (call compile _routineFunction);
};

ark_navy_fnc_checkWaypoints = {
    params ["_trigger"];

    private _syncUnits = [];
    private _vrUnit = nil;

    {
        if ((typeOf _x) isEqualTo "C_Jeff_VR") then {
           _syncUnits pushBack _x;
        };
    } forEach synchronizedObjects _trigger;

    if (count _syncUnits > 1) then {
       diag_log "[ARK] (Navy) - Only sync one VR entity to the trigger";
    };

    _vrUnit = _syncUnits #0;

    if (isNil "_vrUnit") exitWith {
        diag_log "[ARK] (Navy) - No VR entity syncd with trigger"];
    };

    _vrUnit;
};

ark_navy_fnc_createVehicle = {
    params ["_vehicleClassname", "_trigger", "_logic"];

    if (isNil "_trigger") exitWith {
        diag_log format ["No trigger was provided to try and spawn the vehicle with classname: %1", _vehicleClassname];
    };

    private _flyHeight = (_logic getVariable ["Fly_Height", 200]);
    private _spawnPosition = [(triggerArea _trigger), (getposATL _trigger), true] call adm_api_fnc_getRandomPositionInArea;
    _spawnPosition set [2, _flyHeight];
    _vehicle = createVehicle [_vehicleClassname, _spawnPosition, [], 0, "FLY"];
    _vehicle setPosATL _spawnPosition;
    _vehicle flyInHeight _flyHeight;

    _vehicle;
};

ark_navy_fnc_createPilot = {
    params ["_pilotClassnames", "_side", "_vehicle"];

    private _skillArray = ["Camp"] call adm_common_fnc_getZoneTemplateSkillValues;
    private _grp = createGroup _side;
    private _unit = [[0,0,0], _grp, _pilotClassnames, _skillArray] call adm_common_fnc_placeMan;
    _pilot assignAsDriver _vehicle;
    _pilot moveInDriver _vehicle;
    _pilot setBehaviour "CARELESS";
    _pilot allowFleeing 0;
    {_pilot disableAI _x} forEach ["AUTOTARGET", "AIMINGERROR", "SUPPRESSION"];

    _pilot;
};

ark_navy_fnc_createCargo = {
    params ["_cargoClassnames", "_side", "_vehicle"];

    private _crewCount = (count (fullCrew [_vehicle,'cargo',true])) + (count (fullCrew [_vehicle,'turret',true]));
    private _skillArray = ["Camp"] call adm_common_fnc_getZoneTemplateSkillValues;
    private _grp = createGroup _side;
    for "_i" from 1 to _crewCount step 1 do {
        private _unit = [[0,0,0], _grp, _cargoClassnames, _skillArray] call adm_common_fnc_placeMan;
        _unit assignAsCargo _vehicle;
        _unit moveInCargo _vehicle;
        removeBackpack _unit;
        _unit addBackpack "B_Parachute";
    };

    // TO DO, figure out what to do with units on the ground!

    _grp;
};

ark_navy_fnc_addWaypoint = {
    params ["_pilot", "_waypoints", "_index", "_logic"];

    private _waypointPositions = [];
    {_waypointPositions pushBack (getWPPos _x)} forEach _waypoints;
    private _wp = (group _pilot) addWaypoint [(group _pilot), _index];
    _wp setWPPos (_waypointPositions select _index);
    _wp setWaypointSpeed (_logic getVariable ["Fly_Speed", "NORMAL"]);
    _wp setWaypointType "MOVE";
    _wp setWaypointBehaviour "CARELESS";
    _wp setWaypointCombatMode "BLUE";

    _wp;
};

ark_navy_fnc_cleanUp = {
    params ["_vehicle"];

    {_vehicle deleteVehicleCrew _x} forEach crew _vehicle;
    deleteVehicle _vehicle;
};