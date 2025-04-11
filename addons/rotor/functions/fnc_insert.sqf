#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * NEED DESC.
 *
 * Arguments:
 * 0: Logic <MODULE>
 * 1: Trigger <TRIGGER>
 * 2: Vehicle Classname <STRING>
 * 3: Unit Template <ARRAY>
 * 4: Waypoints <ARRAY>
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_rotor_fnc_insert
 */

if (!is3DENPreview && {!isServer}) exitWith {};

params ["_logic", "_trigger", "_vehicleClassname", "_unitTemplate", "_waypoints"];

private _side = [_unitTemplate] call adm_common_fnc_getUnitTemplateSide;
private _vehicle = [_vehicleClassname, _trigger, _logic] call FUNC(createVehicle);

private _pilotClassnames = [_unitTemplate, "pilots"] call adm_common_fnc_getUnitTemplateArray;
private _pilot = [_pilotClassnames, _side, _vehicle] call FUNC(createPilot);

private _cargoClassnames = [_unitTemplate, "infantry"] call adm_common_fnc_getUnitTemplateArray;
private _cargoGroup = [_cargoClassnames, _side, _vehicle, false, _logic] call FUNC(createCargo);

private _landWP = [_pilot, _waypoints, 1, _logic] call FUNC(addWaypoint);
private _deleteWP = [_pilot, _waypoints, 2, _logic] call FUNC(addWaypoint);
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
    {[(_this #0),(_this #3)] call FUNC(cleanUp);}
] call CBA_fnc_waitUntilAndExecute;

[
    {((getPosATL (_this #0)) #2) < 1},
    {[(_this #0),(_this #1),(_this #2),(_this #4)] call FUNC(emptyCargo)},
    [_vehicle,_landingPad,_pilot,_logic,_cargoGroup],
    600,
    {[(_this #0),(_this #3)] call FUNC(cleanUp);}
] call CBA_fnc_waitUntilAndExecute;

// Wait another two minutes, if not at delete WP kill it anyway
[
    {((_this #0) distance2D (getWPPos (_this #1))) < 250},
    {
        [(_this #0),(_this #2)] call FUNC(cleanUp);
    },
    [_vehicle,_deleteWP,_logic],
    720,
    {[(_this #0),(_this #2)] call FUNC(cleanUp);}
] call CBA_fnc_waitUntilAndExecute;
