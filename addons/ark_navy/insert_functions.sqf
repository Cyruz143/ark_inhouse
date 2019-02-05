ark_navy_fnc_insert = {
    params ["_logic", "_trigger", "_vehicleClassname", "_unitTemplate", "_waypoints"];

    private _side = [_unitTemplate] call adm_common_fnc_getUnitTemplateSide;
    private _vehicle = [_vehicleClassname, _trigger, _logic] call ark_navy_fnc_createVehicle;
    
    private _pilotClassnames = [_unitTemplate, "pilots"] call adm_common_fnc_getUnitTemplateArray;
    private _pilot = [_pilotClassnames, _side, _vehicle] call ark_navy_fnc_createPilot;
    
    private _cargoClassnames = [_unitTemplate, "infantry"] call adm_common_fnc_getUnitTemplateArray;
    private _cargoGroup = [_cargoClassnames, _side, _vehicle] call ark_navy_fnc_createCargo;

    private _landWP = [_pilot, _waypoints, 1, _logic, "MOVE"] call ark_navy_fnc_addWaypoint;
    private _deleteWP = [_pilot, _waypoints, 2, _logic, "MOVE"] call ark_navy_fnc_addWaypoint;
    private _landingPad = createVehicle ["Land_HelipadEmpty_F", (getWPPos _landWP), [], 0, "NONE"];

    //If taking over 600 seconds delete as something has gone wrong
    [
        {((_this #0) distance (getWPPos (_this #1))) < 750},
        {(_this #0) land "GET OUT";},
        [_vehicle,_landWP],
        600,
        {[(_this #0)] call ark_navy_fnc_cleanUp;}
    ] call CBA_fnc_waitUntilAndExecute;

    [
        {((getPosATL (_this #0)) #2) < 0.5},
        {[(_this #0)] call ark_navy_fnc_emtpyCargo;},
        [_vehicle,_landWP],
        600,
        {[(_this #0)] call ark_navy_fnc_cleanUp;}
    ] call CBA_fnc_waitUntilAndExecute;

    // Wait another two minutes, if not at delete WP kill it anyway
    [
        {((_this #0) distance (getWPPos (_this #1))) < 750},
        {
            [(_this #0)] call ark_navy_fnc_cleanUp;
        },
        [_vehicle,_deleteWP],
        720,
        {[(_this #0)] call ark_navy_fnc_cleanUp;}
    ] call CBA_fnc_waitUntilAndExecute;
};

ark_navy_fnc_emtpyCargo = {
    params ["_vehicle"];
    [
        {
            params ["_args", "_id"];
            _args params ["_vehicle","_landingPad"];

            private _unit = fullCrew [_vehicle, "cargo", false] param [0, [objNull]] select 0;

            if (isNull _unit) exitWith {
                _vehicle land "NONE";
                deleteVehicle _landingPad;
                _id call CBA_fnc_removePerFrameHandler;
            };

            unassignVehicle _unit;
            moveOut _unit;
        },
        0.25,
        [_vehicle,_landingPad]
    ] call CBA_fnc_addPerFrameHandler;
};