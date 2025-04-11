#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Creates units, adds WPs, controls speed, initiates paradrop at the given WP, extracts vehicle and handle deletion of helo.
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
 * [] call ark_rotor_fnc_paradrop
 */

if (!is3DENPreview && {!isServer}) exitWith {};

params ["_logic", "_trigger", "_vehicleClassname", "_unitTemplate", "_waypoints"];

private _side = [_unitTemplate] call adm_common_fnc_getUnitTemplateSide;
private _vehicle = [_vehicleClassname, _trigger, _logic] call FUNC(createVehicle);

private _pilotClassnames = [_unitTemplate, "pilots"] call adm_common_fnc_getUnitTemplateArray;
private _pilot = [_pilotClassnames, _side, _vehicle] call FUNC(createPilot);

private _cargoClassnames = [_unitTemplate, "infantry"] call adm_common_fnc_getUnitTemplateArray;
private _cargoGroup = [_cargoClassnames, _side, _vehicle, true, _logic] call FUNC(createCargo);

private _paradropWP = [_pilot, _waypoints, 1, _logic] call FUNC(addWaypoint);
private _deleteWP = [_pilot, _waypoints, 2, _logic] call FUNC(addWaypoint);

//If taking over 600 seconds delete as something has gone wrong
[
    {((_this #0) distance2D (getWPPos (_this #1))) < 500},
    {[(_this #0),(_this #3)] call FUNC(jumpController);},
    [_vehicle,_paradropWP,_logic,_cargoGroup],
    600,
    {[(_this #0),(_this #2)] call FUNC(cleanUp);}
] call CBA_fnc_waitUntilAndExecute;

// Wait another two minutes, if not at delete WP kill it anyway
[
    {((_this #0) distance2D (getWPPos (_this #1))) < 250},
    {[(_this #0),(_this #2)] call FUNC(cleanUp);},
    [_vehicle,_deleteWP,_logic],
    720,
    {[(_this #0),(_this #2)] call FUNC(cleanUp);}
] call CBA_fnc_waitUntilAndExecute;
