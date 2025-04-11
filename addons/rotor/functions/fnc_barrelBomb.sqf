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
 * [] call ark_rotor_fnc_barrelBomb
 */

if (!is3DENPreview && {!isServer}) exitWith {};

params ["_logic", "_trigger", "_vehicleClassname", "_unitTemplate", "_waypoints"];

private _side = [_unitTemplate] call adm_common_fnc_getUnitTemplateSide;
private _vehicle = [_vehicleClassname, _trigger, _logic] call FUNC(createVehicle);

private _pilotClassnames = [_unitTemplate, "pilots"] call adm_common_fnc_getUnitTemplateArray;
private _pilot = [_pilotClassnames, _side, _vehicle] call FUNC(createPilot);

private _stageWP = [_pilot, _waypoints, 1, _logic] call FUNC(addWaypoint);
[_pilot, _waypoints, 2, _logic] call FUNC(addWaypoint);
private _deleteWP = [_pilot, _waypoints, 3, _logic] call FUNC(addWaypoint);

//If taking over 600 seconds delete as something has gone wrong
[
    {((_this #0) distance2D (getWPPos (_this #1))) < 750},
    {(_this #0) forceSpeed 50},
    [_vehicle, _stageWP, _logic],
    600,
    {[(_this #0),(_this #2)] call FUNC(cleanUp)}
] call CBA_fnc_waitUntilAndExecute;

//When 1st WP completed drop the bombs
[
    {(currentWaypoint (group (_this #2))) isEqualTo 2},
    {[(_this #0),(_this #1),(_this #2)] call FUNC(dropBombs)},
    [_vehicle, _logic, _pilot],
    600,
    {[(_this #0),(_this #1)] call FUNC(cleanUp)}
] call CBA_fnc_waitUntilAndExecute;

// Wait another two minutes, if not at delete WP kill it anyway
[
    {((_this #0) distance2D (getWPPos (_this #1))) < 250},
    {
        [(_this #0),(_this #2)] call FUNC(cleanUp);
    },
    [_vehicle, _deleteWP, _logic],
    720,
    {[(_this #0),(_this #2)] call FUNC(cleanUp)}
] call CBA_fnc_waitUntilAndExecute;
