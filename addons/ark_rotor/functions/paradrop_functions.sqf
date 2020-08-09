ark_rotor_fnc_paradrop = {
    params ["_logic", "_trigger", "_vehicleClassname", "_unitTemplate", "_waypoints"];

    private _side = [_unitTemplate] call adm_common_fnc_getUnitTemplateSide;
    private _vehicle = [_vehicleClassname, _trigger, _logic] call ark_rotor_fnc_createVehicle;

    private _pilotClassnames = [_unitTemplate, "pilots"] call adm_common_fnc_getUnitTemplateArray;
    private _pilot = [_pilotClassnames, _side, _vehicle] call ark_rotor_fnc_createPilot;

    private _cargoClassnames = [_unitTemplate, "infantry"] call adm_common_fnc_getUnitTemplateArray;
    private _cargoGroup = [_cargoClassnames, _side, _vehicle, true, _logic] call ark_rotor_fnc_createCargo;

    private _paradropWP = [_pilot, _waypoints, 1, _logic] call ark_rotor_fnc_addWaypoint;
    private _deleteWP = [_pilot, _waypoints, 2, _logic] call ark_rotor_fnc_addWaypoint;

    //If taking over 600 seconds delete as something has gone wrong
    [
        {((_this #0) distance2D (getWPPos (_this #1))) < 500},
        {[(_this #0),(_this #3)] call ark_rotor_fnc_jumpController;},
        [_vehicle,_paradropWP,_logic,_cargoGroup],
        600,
        {[(_this #0),(_this #2)] call ark_rotor_fnc_cleanUp;}
    ] call CBA_fnc_waitUntilAndExecute;

    // Wait another two minutes, if not at delete WP kill it anyway
    [
        {((_this #0) distance2D (getWPPos (_this #1))) < 250},
        {[(_this #0),(_this #2)] call ark_rotor_fnc_cleanUp;},
        [_vehicle,_deleteWP,_logic],
        720,
        {[(_this #0),(_this #2)] call ark_rotor_fnc_cleanUp;}
    ] call CBA_fnc_waitUntilAndExecute;
};

ark_rotor_fnc_jumpController = {
    params ["_vehicle","_cargoGroup"];

    _cargoGroup call ark_rotor_fnc_taskAttack;
    [
        {
            params ["_args", "_id"];
            _args params ["_vehicle"];

            private _crewArr = crew _vehicle - [driver _vehicle];

            if (isNil "_crewArr" || { _crewArr isEqualTo [] }) exitWith {
                ["INFO","fnc_jumpController","All cargo ejected"] call ark_rotor_fnc_log;
                _id call CBA_fnc_removePerFrameHandler;
            };

            private _unit = _crewArr #0;
            unassignVehicle _unit;
            moveOut _unit;
        },
        0.5,
        [_vehicle]
    ] call CBA_fnc_addPerFrameHandler;
};
