#include "..\script_component.hpp"
/*
 * Author: Mike
 * Provides an invisible marker on the objective to be used for cleanup.
 *
 * Locality: Server (called from activateLocation)
 *
 * Arguments:
 * 0: Task ID <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_town_sweep_fnc_createCleanupMarker
 */

params ["_taskID"];

// Marker is essentially a clone of the regular visible town sweep marker.
private _markerName = format [QGVAR(cleanupMarker_%1), _taskID];
private _marker = createMarkerLocal [_markerName, GVAR(selectedPosition)];
_marker setMarkerSizeLocal [GVAR(positionSize), GVAR(positionSize)];
_marker setMarkerShapeLocal "ELLIPSE";
_marker setMarkerBrushLocal "Border";
