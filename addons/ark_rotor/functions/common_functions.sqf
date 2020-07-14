ark_rotor_fnc_checkTrigger = {
    params ["_logic"];

    private _syncdTrg = synchronizedObjects _logic;
    if (count _syncdTrg isEqualTo 0) exitWith {
        ["ERROR","fnc_checkTrigger","Trigger not syncd to the module"] call ark_rotor_fnc_log;
    };

    if (count _syncdTrg > 1) then {
        ["WARNING","fnc_checkTrigger","Only sync one trigger to the module"] call ark_rotor_fnc_log;
    };

    private _trigger = _syncdTrg #0;
    private _syncUnits = [];

    {
        if ((typeOf _x) isEqualTo "C_Jeff_VR") then {
           _syncUnits pushBack _x;
        };
    } forEach synchronizedObjects _trigger;

    if (count _syncUnits > 1) then {
       ["WARNING","fnc_checkTrigger","Only sync one VR entity to the trigger"] call ark_rotor_fnc_log;
    };

    private _vrUnit = _syncUnits #0;

    if (isNil "_vrUnit") exitWith {
        ["ERROR","fnc_checkTrigger","No VR entity syncd with trigger",_trigger] call ark_rotor_fnc_log;
    };

    private _waypoints = waypoints (group _vrUnit);
    if (count _waypoints < 3) exitWith {
        ["ERROR","fnc_checkTrigger","VR entity needs minimum 2 waypoints",_vrUnit] call ark_rotor_fnc_log;
    };

    deleteVehicle _vrUnit;
    ["INFO","fnc_checkTrigger","VR entity deleted",_vrUnit] call ark_rotor_fnc_log;
    private _unitTemplate = adm_camp_defaultUnitTemplate;
    private _vehicleClassname = _logic getVariable ["Vehicle_ClassName", "Default"];

    if (_vehicleClassname isEqualTo "Default") then {
        private _heloArray = [_unitTemplate, "th"] call adm_common_fnc_getUnitTemplateArray;
        if (isNil "_heloArray" || { count _heloArray isEqualTo 0 }) exitWith {
            ["ERROR","fnc_checkTrigger","No helo defined in Admiral template"] call ark_rotor_fnc_log;
        };
        _vehicleClassname = selectRandom _heloArray;
    };

    private _routineFunction = _logic getVariable ["Routine_Function", {ark_rotor_fnc_paradrop}];

    ["INFO","fnc_checkTrigger","Compiled Rotor routine",[_logic, _trigger, _vehicleClassname, _unitTemplate, _waypoints, _routineFunction]] call ark_rotor_fnc_log;
    [_logic, _trigger, _vehicleClassname, _unitTemplate, _waypoints] call (call compile _routineFunction);
};

ark_rotor_fnc_createVehicle = {
    params ["_vehicleClassname", "_trigger", "_logic"];

    if (isNil "_trigger") exitWith {
        ["ERROR","fnc_createVehicle","No trigger was provided to try and spawn the vehicle with classname",_vehicleClassname] call ark_rotor_fnc_log;
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

    private _skillArray = ["Vehicles"] call adm_common_fnc_getZoneTemplateSkillValues;
    private _grp = createGroup _side;
    _grp deleteGroupWhenEmpty true;
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
    _grp deleteGroupWhenEmpty true;

    [
        {
            params ["_args", "_id"];
            _args params ["_vehicle","_adjSeats","_grp","_cargoClassnames","_skillArray","_parachute"];

            if (isNil "_vehicle" || { !alive _vehicle }) exitWith {
                ["ERROR","fnc_createCargo","Vehicle is dead or undefined",_vehicle] call ark_rotor_fnc_log;
                _id call CBA_fnc_removePerFrameHandler;
            };

            if (count (crew _vehicle) >= _adjSeats) exitWith {
                ["INFO","fnc_createCargo","Delayed spawning completed. Spawned total units",_adjSeats] call ark_rotor_fnc_log;
                _id call CBA_fnc_removePerFrameHandler;
            };

            private _unit = [[0,0,0], _grp, _cargoClassnames, _skillArray] call adm_common_fnc_placeMan;
            _unit assignAsCargo _vehicle;
            _unit moveInAny _vehicle;
            if (_parachute) then {
                removeBackpack _unit;
                _unit addBackpack "ACE_NonSteerableParachute";
            };
        },
        1,
        [_vehicle,_adjSeats,_grp,_cargoClassnames,_skillArray,_parachute]
    ] call CBA_fnc_addPerFrameHandler;

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
        if ((_x distance2D (leader _grp)) < 2500) then {
            _nearEnemies pushBack _x;
        };
    } forEach ((playableUnits + switchableUnits) select {isPlayer _x && {!(_x isKindOf "HeadlessClient_F")}});

    if (_nearEnemies isEqualTo []) exitWith {
        ["ERROR","fnc_taskAttack","No players to attack"] call ark_rotor_fnc_log;
        {deleteVehicle _x} forEach units _grp;
    };

    _nearEnemies sort true;
    private _target = _nearEnemies #0;

    [_grp, getpos _target, 100, true] call CBA_fnc_taskAttack;
    ["INFO","fnc_taskAttack","Units attacking player",_target] call ark_rotor_fnc_log;
};

ark_rotor_fnc_cleanUp = {
    params ["_vehicle","_logic"];

    private _crew = crew _vehicle;

    if ((_crew select {isPlayer _x}) isEqualTo []) then {
        {_vehicle deleteVehicleCrew _x} forEach _crew;
        {deleteVehicle _x} forEach [_vehicle,_logic];
        ["INFO","fnc_cleanUp","Cleaned up vehicle",_vehicle] call ark_rotor_fnc_log;
    } else {
        deleteVehicle _logic;
        ["INFO","fnc_cleanUp","Not removing vehicle as player crew detected"] call ark_rotor_fnc_log;
    };
};

ark_rotor_fnc_log = {
    params ["_level","_fnc","_msg","_args"];

    private _txt = format ["[ARK] (Rotor) - [%1] - (%2) - %3", _level, _fnc, _msg];

    if (!isNil "_args") then {
        _txt = format ["[ARK] (Rotor) - [%1] - (%2) - %3: %4", _level, _fnc, _msg, _args];
    };

    if ((isServer && !isDedicated) || { _level isEqualTo "ERROR" } || { _level isEqualTo "WARNING" }) then {
        [_txt] remoteExec ["systemChat", 0];
    };

    diag_log _txt;
};