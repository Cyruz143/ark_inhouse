ark_navy_fnc_paradrop = {
    params ["_logic", "_trigger", "_vehicleClassname", "_unitTemplate", "_waypoints"];

    private _side = [_unitTemplate] call adm_common_fnc_getUnitTemplateSide;
    private _vehicle = [_vehicleClassname, _trigger, _logic] call ark_navy_fnc_createVehicle;
    
    private _pilotClassnames = [_unitTemplate, "pilots"] call adm_common_fnc_getUnitTemplateArray;
    private _pilot = [_pilotClassnames, _side, _vehicle] call ark_navy_fnc_createPilot;
    
    private _cargoClassnames = [_unitTemplate, "infantry"] call adm_common_fnc_getUnitTemplateArray;
    private _cargoGroup = [_cargoClassnames, _side, _vehicle, true] call ark_navy_fnc_createCargo;

    private _paradropWP = [_pilot, _waypoints, 1, _logic] call ark_navy_fnc_addWaypoint;
    private _deleteWP = [_pilot, _waypoints, 2, _logic] call ark_navy_fnc_addWaypoint;
    
    //If taking over 600 seconds delete as something has gone wrong
    [
        {((_this #0) distance (getWPPos (_this #1))) < 500},
        {[(_this #0)] call ark_navy_fnc_jumpController;},
        [_vehicle,_paradropWP],
        600,
        {[(_this #0)] call ark_navy_fnc_cleanUp;}
    ] call CBA_fnc_waitUntilAndExecute;

    // Wait another two minutes, if not at delete WP kill it anyway
    [
        {((_this #0) distance (getWPPos (_this #1))) < 750},
        {[(_this #0)] call ark_navy_fnc_cleanUp;},
        [_vehicle,_deleteWP],
        720,
        {[(_this #0)] call ark_navy_fnc_cleanUp;}
    ] call CBA_fnc_waitUntilAndExecute;
};

ark_navy_fnc_jumpController = {
    params ["_vehicle"];
    [
        {
            params ["_args", "_id"];
            _args params ["_vehicle"];

            private _crewArr = crew _vehicle - [driver _vehicle];
            private _unit = _crewArr #0;

            if (isNil "_crewArr" || { count _crewArr isEqualTo 0 }) exitWith {
                diag_log "[ARK] (Navy) - All cargo ejected";
                _id call CBA_fnc_removePerFrameHandler;
            };

            [_unit,_vehicle] call ark_navy_fnc_doJump;
        },
        0.5,
        [_vehicle]
    ] call CBA_fnc_addPerFrameHandler;
};

ark_navy_fnc_doJump = {
    params ["_unit", "_vehicle"];

    private _jumpDirection = ((getDir _vehicle) - 180);
    unassignVehicle _unit;
    moveOut _unit;
    _unit setDir _jumpDirection;
};