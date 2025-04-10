#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Adds POI marker
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_poi_marker_addMarker
 */

private _pos = player getVariable [QGVAR(POI), [0,0,0]];
private _meters = round (player distance _pos);
private _km = floor (_meters / 1000);
private _meters_left = _meters - (_km * 1000);
private _hmeters = floor (_meters_left / 100);

drawIcon3D ["\A3\ui_f\data\map\markers\military\dot_CA.paa", [1,1,0,1], _pos, 1, 1, 45, format ["POI %1.%2km",_km,_hmeters], 2, 0.03, "TahomaB", "center", true];
