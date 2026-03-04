#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * N/A
 *
 * Locality: Server (event from ace action)
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_town_sweep_fnc_activateLocation
 */

if (GVAR(positionActive)) exitWith {
    "Objective must be completed before a new one is started" call CBA_fnc_notify;
};

if (GVAR(availableMissions) isEqualTo []) exitWith {
    "No more objectives to activate." call CBA_fnc_notify;
};

GVAR(positionActive) = true;
publicVariable QGVAR(positionActive);

call FUNC(scaleAICount);
call FUNC(createLocationZones);
call FUNC(createFortifications);
call FUNC(selectObjective);

[{
    params ["_args", "_handle"];

    private _players = [] call EFUNC(common,players);
    private _inArea = _players findIf {_x inArea QGVAR(selectedLocationMarker)};

    if (_inArea != -1) then {
        (selectRandom ["paradrop","insert"]) call FUNC(enableRotor);
        _handle call CBA_fnc_removePerFrameHandler;
    };

}, 3] call CBA_fnc_addPerFrameHandler;
