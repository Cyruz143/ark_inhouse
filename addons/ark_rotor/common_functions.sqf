ark_rotor_fnc_checkTrigger = {
    params ["_logic"];

    private _syncdTrg = synchronizedObjects _logic;
    if (count _syncdTrg isEqualTo 0) exitWith {
        diag_log "[ARK] (Rotor) - ERROR - Trigger not syncd to the module";
    };

    if (count _syncdTrg > 1) then {
        diag_log "[ARK] (Rotor) - WARNING - Only sync one trigger to the module";
    };

    private _trigger = _syncdTrg #0;
    private _vrUnit = [_trigger] call ark_rotor_fnc_checkWaypoints;

    if (isNil "_vrUnit") exitWith {
        diag_log format ["[ARK] (Rotor) - ERROR - No VR entity syncd with trigger: %1", _trigger];
    };

    private _waypoints = waypoints _vrUnit;
    if (count _waypoints isEqualTo 0) exitWith {
        diag_log format ["[ARK] (Rotor) - ERROR - VR entity: %1 had no waypoints attached!", _vrUnit];
    };

    deleteVehicle _vrUnit;
    diag_log format ["[ARK] (Rotor) - INFO - VR entity: %1 deleted", _vrUnit];
    private _unitTemplate = adm_camp_defaultUnitTemplate;
    private _vehicleClassname = _logic getVariable ["Vehicle_ClassName", "Default"];

    if (_vehicleClassname isEqualTo "Default") then {
        private _heloArray = [_unitTemplate, "th"] call adm_common_fnc_getUnitTemplateArray;
        if (isNil "_heloArray" || { count _heloArray isEqualTo 0 }) exitWith {
            diag_log "[ARK] (Rotor) - ERROR - No helo defined in Admiral template";
        };
        _vehicleClassname = selectRandom _heloArray;
    };

    private _routineFunction = _logic getVariable ["Routine_Function", {ark_rotor_fnc_paradrop}];

    diag_log format ["[ARK] (Rotor) - INFO - Compiled Rotor routine - Logic: %1 - Trigger: %2 - Classname: %3 - Template: %4 - Waypoints: %5 - Routine: %6", _logic, _trigger, _vehicleClassname, _unitTemplate, _waypoints, _routineFunction];
    [_logic, _trigger, _vehicleClassname, _unitTemplate, _waypoints] call (call compile _routineFunction);
};

ark_rotor_fnc_checkWaypoints = {
    params ["_trigger"];

    private _syncUnits = [];

    {
        if ((typeOf _x) isEqualTo "C_Jeff_VR") then {
           _syncUnits pushBack _x;
        };
    } forEach synchronizedObjects _trigger;

    if (count _syncUnits > 1) then {
       diag_log "[ARK] (Rotor) - WARNING - Only sync one VR entity to the trigger";
    };

    private _vrUnit = _syncUnits #0;

    if (isNil "_vrUnit") exitWith {};

    _vrUnit;
};

ark_rotor_fnc_createVehicle = {
    params ["_vehicleClassname", "_trigger", "_logic"];

    if (isNil "_trigger") exitWith {
        diag_log format ["[ARK] (Rotor) - ERROR - No trigger was provided to try and spawn the vehicle with classname: %1", _vehicleClassname];
    };

    private _flyHeight = _logic getVariable ["Fly_Height", 200];
    private _spawnPosition = [(triggerArea _trigger), (getpos _trigger), true] call adm_api_fnc_getRandomPositionInArea;
    _spawnPosition set [2, _flyHeight];
    _vehicle = createVehicle [_vehicleClassname, _spawnPosition, [], 0, "FLY"];
    _vehicle setPos _spawnPosition;
    _vehicle flyInHeight _flyHeight;

    _vehicle;
};

ark_rotor_fnc_createPilot = {
    params ["_pilotClassnames", "_side", "_vehicle"];

    private _skillArray = ["Camp"] call adm_common_fnc_getZoneTemplateSkillValues;
    private _grp = createGroup _side;
    private _pilot = [[0,0,0], _grp, _pilotClassnames, _skillArray] call adm_common_fnc_placeMan;
    _pilot assignAsDriver _vehicle;
    _pilot moveInDriver _vehicle;
    _pilot setBehaviour "CARELESS";
    _pilot allowFleeing 0;
    {_pilot disableAI _x} forEach ["AUTOTARGET", "AIMINGERROR", "SUPPRESSION"];

    _pilot;
};

ark_rotor_fnc_createCargo = {
    params ["_cargoClassnames", "_side", "_vehicle", "_parachute", "_logic"];

    private _skillArray = ["Camp"] call adm_common_fnc_getZoneTemplateSkillValues;
    private _emptySeats = count (fullCrew [_vehicle, "", true] - fullCrew [_vehicle, "driver"]);
    private _adjSeats = floor ((_logic getVariable ["Crew_Percentage", 50])/100 * _emptySeats);
    private _grp = createGroup _side;
    for "_i" from 1 to _adjSeats do {
        private _unit = [[0,0,0], _grp, _cargoClassnames, _skillArray] call adm_common_fnc_placeMan;
        _unit assignAsCargo _vehicle;
        _unit moveInAny _vehicle;
        if (_parachute) then {
            removeBackpack _unit;
            _unit addBackpack "ACE_NonSteerableParachute";
        };
    };

    _grp;
};

ark_rotor_fnc_addWaypoint = {
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

ark_rotor_fnc_taskAttack = {
    params ["_grp"];

    private _nearEnemies = [];
    {
        if ((_x distance2D (leader _grp)) < 5000) then {
            _nearEnemies pushBack _x;
        };
    } forEach ((playableUnits + switchableUnits) select {isPlayer _x && {!(_x isKindOf "HeadlessClient_F")}});

    if (count _nearEnemies isEqualTo 0) exitWith {diag_log "[ARK] (Rotor) - ERROR - No players to attack";};
    diag_log format ["[ARK] (Rotor) - INFO - Available enemies: %1",_nearEnemies];

    [_grp, getpos (selectRandom _nearEnemies), 100, 4, "MOVE", "AWARE", "RED", "FULL", "STAG COLUMN"] call CBA_fnc_taskPatrol;
};

ark_rotor_fnc_cleanUp = {
    params ["_vehicle","_logic"];

    {_vehicle deleteVehicleCrew _x} forEach crew _vehicle;
    {deleteVehicle _x} forEach [_vehicle,_logic];
};
