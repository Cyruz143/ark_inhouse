#include "..\script_component.hpp"
/*
 * Author: Cyruz, MikeMF
 * Selects random objective and removes it from the available pool.
 *
 * Locality: Server (called from activateLocation)
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_town_sweep_fnc_selectObjective
 */

// Remove the picked mission so subsequent choices will be different
private _selectedMission = selectRandom GVAR(availableMissions);
switch (_selectedMission) do {
    case 1: { call FUNC(objectiveDestroyVehicle) };
    case 2: { call FUNC(objectiveRecoverIntel) };
    case 3: { call FUNC(objectiveDestroyAmmo) };
    case 4: { call FUNC(objectiveDownloadIntel) };
    default { ERROR_MSG("Town Sweep, activateLocation, _selectedMission was not found.") };
};

GVAR(availableMissions) deleteAt (GVAR(availableMissions) find _selectedMission);
publicVariable "GVAR(availableMissions)";
