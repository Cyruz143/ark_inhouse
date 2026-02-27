#include "..\script_component.hpp"
/*
 * Author: Mike, Cyruz
 * N/A
 *
 * Locality: Server (called from selectObjective)
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_town_sweep_fnc_objDownloadIntel
 */

private _helo = [GVAR(selectedPosition)] call FUNC(createHeliWreck);
private _terminal = [_helo, "RuggedTerminal_01_F"] call FUNC(createObjectiveObject);

[QGVAR(downloadIntelActionEvent), _terminal] call CBA_fnc_globalEvent;

["task4", "Download Intel", "Locate and download the intel from the crash site, its motion sensored so stay close.", "download"] call FUNC(createTask);

[_helo, GVAR(positionSize)] call FUNC(createChaseZone);
