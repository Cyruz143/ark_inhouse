ark_rotor_fnc_barrelbomb = {
    params ["_logic", "_trigger", "_vehicleClassname", "_unitTemplate", "_waypoints"];

    private _side = [_unitTemplate] call adm_common_fnc_getUnitTemplateSide;
    private _vehicle = [_vehicleClassname, _trigger, _logic] call ark_rotor_fnc_createVehicle;

    private _pilotClassnames = [_unitTemplate, "pilots"] call adm_common_fnc_getUnitTemplateArray;
    private _pilot = [_pilotClassnames, _side, _vehicle] call ark_rotor_fnc_createPilot;

    private _stageWP = [_pilot, _waypoints, 1, _logic] call ark_rotor_fnc_addWaypoint;
    [_pilot, _waypoints, 2, _logic] call ark_rotor_fnc_addWaypoint;
    private _deleteWP = [_pilot, _waypoints, 3, _logic] call ark_rotor_fnc_addWaypoint;

    //If taking over 600 seconds delete as something has gone wrong
    [
        {((_this #0) distance2D (getWPPos (_this #1))) < 750},
        {(_this #0) forceSpeed 50},
        [_vehicle,_stageWP,_logic],
        600,
        {[(_this #0),(_this #2)] call ark_rotor_fnc_cleanUp}
    ] call CBA_fnc_waitUntilAndExecute;

    //When 1st WP completed drop the bombs
    [
        {(currentWaypoint (group (_this #2))) isEqualTo 2},
        {[(_this #0),(_this #1),(_this #2)] call ark_rotor_fnc_dropBombs},
        [_vehicle,_logic,_pilot],
        600,
        {[(_this #0),(_this #1)] call ark_rotor_fnc_cleanUp}
    ] call CBA_fnc_waitUntilAndExecute;

    // Wait another two minutes, if not at delete WP kill it anyway
    [
        {((_this #0) distance2D (getWPPos (_this #1))) < 250},
        {
            [(_this #0),(_this #2)] call ark_rotor_fnc_cleanUp;
        },
        [_vehicle,_deleteWP,_logic],
        720,
        {[(_this #0),(_this #2)] call ark_rotor_fnc_cleanUp}
    ] call CBA_fnc_waitUntilAndExecute;
};

ark_rotor_fnc_dropBombs = {
    params ["_vehicle","_logic","_pilot"];

    _vehicle setVariable ["ark_rotor_var_bombAmount", (_logic getVariable ["Bomb_Amount", 3])];

    [
        {
            params ["_args", "_id"];
            _args params ["_vehicle","_pilot"];

            if (_vehicle getVariable ["ark_rotor_var_bombAmount", 0] < 1 || {!alive _pilot} || {!alive _vehicle}) exitWith {
                ["INFO","fnc_dropBombs","All bombs dropped"] call ark_rotor_fnc_log;
                _vehicle forceSpeed -1;
                (group _pilot) setCurrentWaypoint [(group _pilot), 3];
                 _vehicle setVariable ["ark_rotor_var_bombAmount", nil];
                _id call CBA_fnc_removePerFrameHandler;
            };

            _vehicle setVariable ["ark_rotor_var_bombAmount", (_vehicle getVariable ["ark_rotor_var_bombAmount", 0] - 1)];
            [_vehicle] call ark_rotor_fnc_createBomb;
        },
        4,
        [_vehicle,_pilot]
    ] call CBA_fnc_addPerFrameHandler;
};

ark_rotor_fnc_createBomb = {
    params ["_vehicle"];

    private _barrelClassname = selectRandom ["Land_WaterBarrel_F","Land_MetalBarrel_F","Land_BarrelEmpty_F"];
    private _barrel = createVehicle [_barrelClassname, (_vehicle modelToWorld [0,-15,-10]), [], 0, "FLY"];
    _barrel addTorque (_barrel vectorModelToWorld [1000,1000,1000]);
    _barrel addEventHandler ["EpeContactStart", {call ark_rotor_fnc_bombContact}];
};

ark_rotor_fnc_bombContact = {
    params ["_barrel"];

    private _impactPos = getPosATL _barrel;
    private _gbu = createVehicle ["Bo_GBU12_LGB", _impactPos, [], 0, "CAN_COLLIDE"];
    private _explosion = createVehicle ["HelicopterExploBig", _impactPos, [], 0, "CAN_COLLIDE"];
    _gbu setVelocity [0,0,-100];
    deleteVehicle _barrel;
};
