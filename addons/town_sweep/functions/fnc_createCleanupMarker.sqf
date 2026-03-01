#include "..\script_component.hpp"
/*
 * Author: Mike
 * Provides an invisible marker on the objective to be used for cleanup.
 *
 * Locality: Server (called from activateLocation)
 *
 * Arguments:
 * 0: Mission Number <NUMBER>
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_town_sweep_fnc_createCleanupMarker
 */

// Marker is essentially a clone of the regular visible town sweep marker.
private _markerName = format ["Mission_Cleanup_Marker_%1", GVAR(missionNumber)];
private _marker = createMarkerLocal [_markerName, GVAR(selectedPosition)];
_marker setMarkerSizeLocal [GVAR(positionSize), GVAR(positionSize)];
_marker setMarkerShapeLocal "ELLIPSE";
_marker setMarkerBrushLocal "Border";
