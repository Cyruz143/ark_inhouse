ark_navy_fnc_barrelbomb = {
    params ["_logic", "_trigger", "_vehicleClassname", "_unitTemplate", "_waypoints"];

    private _side = [_unitTemplate] call adm_common_fnc_getUnitTemplateSide;
    private _vehicle = [_vehicleClassname, _trigger, _logic] call ark_navy_fnc_createVehicle;

    private _pilotClassnames = [_unitTemplate, "pilots"] call adm_common_fnc_getUnitTemplateArray;
    private _pilot = [_pilotClassnames, _side, _vehicle] call ark_navy_fnc_createPilot;

    private _stageWP = [_pilot, _waypoints, 1, _logic] call ark_navy_fnc_addWaypoint;
    private _bombWP = [_pilot, _waypoints, 2, _logic] call ark_navy_fnc_addWaypoint;
    private _deleteWP = [_pilot, _waypoints, 3, _logic] call ark_navy_fnc_addWaypoint;

    //If taking over 600 seconds delete as something has gone wrong
    [
        {((_this #0) distance (getWPPos (_this #1))) < 1000},
        {(_this #0) forceSpeed 50;},
        [_vehicle,_stageWP,_logic],
        600,
        {[(_this #0),(_this #1)] call ark_navy_fnc_cleanUp;}
    ] call CBA_fnc_waitUntilAndExecute;

    //When 1st WP completed drop the bombs
    [
        {(currentWaypoint (group (_this #1))) isEqualTo 2},
        {[(_this #0),(_this #1),(_this #2)] call ark_navy_fnc_dropBombs;},
        [_vehicle,_logic,_pilot,_logic],
        600,
        {[(_this #0),(_this #3)] call ark_navy_fnc_cleanUp;}
    ] call CBA_fnc_waitUntilAndExecute;

    // Wait another two minutes, if not at delete WP kill it anyway
    [
        {((_this #0) distance (getWPPos (_this #1))) < 750},
        {
            [(_this #0),(_this #2)] call ark_navy_fnc_cleanUp;
        },
        [_vehicle,_deleteWP,_logic],
        720,
        {[(_this #0),(_this #2)] call ark_navy_fnc_cleanUp;}
    ] call CBA_fnc_waitUntilAndExecute;
};

ark_navy_fnc_dropBombs = {
    params ["_vehicle","_logic","_pilot"];

    private _bombAmount = _logic getVariable ["Bomb_Amount", 3]
    [
        {
            params ["_args", "_id"];
            _args params ["_vehicle","_bombAmount","_pilot"];

            if (isNil "_bombAmount" || { count _bombAmount isEqualTo 0 }) exitWith {
                diag_log "[ARK] (Navy) - All bombs dropped";
                _vehicle forceSpeed -1;
                (group _pilot) setCurrentWaypoint [(group _pilot), 3];
                _id call CBA_fnc_removePerFrameHandler;
            };

            _bombAmount = _bombAmount - 1;
            [_vehicle] call ark_navy_fnc_createBomb;
        },
        4,
        [_vehicle,_landingPad,_pilot]
    ] call CBA_fnc_addPerFrameHandler;
};

ark_navy_fnc_createBomb = {
    params ["_vehicle"];

    private _barrelClassname = selectRandom ["Land_WaterBarrel_F","Land_MetalBarrel_F","Land_BarrelEmpty_F"];
    private _barrel = createVehicle [_barrelClassname, [(getPosATL _vehicle #0), (getPosATL _vehicle #1), (getPosATL _vehicle #2) - 5], [], 0, "FLY"];
    _barrel setVelocityModelSpace [0, 0, -25];
    _barrel addTorque (_barrel vectorModelToWorld [-100,3,3]);
    _barrel addEventHandler ["EpeContactStart", {
        params ["_object1"];
        private _impactPos = getPosATL _object1;
        private _bomb2a = createVehicle ["Bo_GBU12_LGB", _impactPos,[], 0, "CAN_COLLIDE"];
        private _bomb2b = createVehicle ["HelicopterExploBig", _impactPos,[], 0, "CAN_COLLIDE"];
        deleteVehicle _object1;
    }];
};

