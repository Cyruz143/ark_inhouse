#include "..\script_component.hpp"

ark_rotor_fnc_insert = {
    params ["_logic", "_trigger", "_vehicleClassname", "_unitTemplate", "_waypoints"];

    private _side = [_unitTemplate] call adm_common_fnc_getUnitTemplateSide;
    private _vehicle = [_vehicleClassname, _trigger, _logic] call ark_rotor_fnc_createVehicle;

    private _pilotClassnames = [_unitTemplate, "pilots"] call adm_common_fnc_getUnitTemplateArray;
    private _pilot = [_pilotClassnames, _side, _vehicle] call ark_rotor_fnc_createPilot;

    private _cargoClassnames = [_unitTemplate, "infantry"] call adm_common_fnc_getUnitTemplateArray;
    private _cargoGroup = [_cargoClassnames, _side, _vehicle, false, _logic] call ark_rotor_fnc_createCargo;

    private _landWP = [_pilot, _waypoints, 1, _logic] call ark_rotor_fnc_addWaypoint;
    private _deleteWP = [_pilot, _waypoints, 2, _logic] call ark_rotor_fnc_addWaypoint;
    private _landingPad = createVehicle ["Land_HelipadEmpty_F", (getWPPos _landWP), [], 0, "CAN_COLLIDE"];

    //If taking over 600 seconds delete as something has gone wrong
    [
        {((_this #0) distance2D (getWPPos (_this #1))) < 500},
        {
            (_this #0) landAt [(_this #4), "GET OUT"];
            (group (_this #2)) lockWP true;
        },
        [_vehicle,_landWP,_pilot,_logic,_landingPad],
        600,
        {[(_this #0),(_this #3)] call ark_rotor_fnc_cleanUp;}
    ] call CBA_fnc_waitUntilAndExecute;

    [
        {((getPosATL (_this #0)) #2) < 1},
        {[(_this #0),(_this #1),(_this #2),(_this #4)] call ark_rotor_fnc_emtpyCargo},
        [_vehicle,_landingPad,_pilot,_logic,_cargoGroup],
        600,
        {[(_this #0),(_this #3)] call ark_rotor_fnc_cleanUp;}
    ] call CBA_fnc_waitUntilAndExecute;

    // Wait another two minutes, if not at delete WP kill it anyway
    [
        {((_this #0) distance2D (getWPPos (_this #1))) < 250},
        {
            [(_this #0),(_this #2)] call ark_rotor_fnc_cleanUp;
        },
        [_vehicle,_deleteWP,_logic],
        720,
        {[(_this #0),(_this #2)] call ark_rotor_fnc_cleanUp;}
    ] call CBA_fnc_waitUntilAndExecute;
};

ark_rotor_fnc_emtpyCargo = {
    params ["_vehicle","_landingPad","_pilot","_cargoGroup"];

    _cargoGroup call ark_rotor_fnc_taskAttack;
    _vehicle flyInHeight [1, true];

    [
        {
            params ["_args", "_id"];
            _args params ["_vehicle","_landingPad","_pilot"];

            private _crewArr = crew _vehicle - [driver _vehicle];

            if (isNil "_crewArr" || { _crewArr isEqualTo [] }) exitWith {
                INFO("fnc_emptyCargo, All Cargo Dismounted");
                [_vehicle,_landingPad,_pilot] call ark_rotor_fnc_waitForCargo;
                _id call CBA_fnc_removePerFrameHandler;
            };

            private _unit = _crewArr #0;
            unassignVehicle _unit;
            moveOut _unit;
        },
        0.5,
        [_vehicle,_landingPad,_pilot]
    ] call CBA_fnc_addPerFrameHandler;
};

ark_rotor_fnc_waitForCargo = {
    params ["_vehicle","_landingPad","_pilot"];

    [
        {
            private _grp = group (_this #2);
            _grp lockWP false;
            _grp setCurrentWaypoint [_grp, 2];
            (_this #0) land "NONE";
            (_this #0) flyInHeight [50, true];
            deleteVehicle (_this #1);
        },
        [_vehicle,_landingPad,_pilot],
        2
    ] call CBA_fnc_waitAndExecute;
};
