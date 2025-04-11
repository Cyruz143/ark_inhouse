#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Releases the helo from it's landing pad and sends to final WP.
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 * 1: Landing Pad <OBJECT>
 * 2: Pilot <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_rotor_fnc_waitForCargo
 */

params ["_vehicle", "_landingPad", "_pilot"];

[{
    params ["_vehicle", "_landingPad", "_pilot"];
    private _grp = group _pilot;
    _grp lockWP false;
    _grp setCurrentWaypoint [_grp, 2];
    _vehicle land "NONE";
    _vehicle flyInHeight [50, true];
    deleteVehicle _landingPad;
}, [_vehicle,_landingPad,_pilot], 2] call CBA_fnc_waitAndExecute;
