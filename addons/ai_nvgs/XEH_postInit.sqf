#include "script_component.hpp"

if (hasInterface) exitWith {};

addMissionEventHandler ["EntityKilled", {
    params ["_killed", "_killer", "_instigator"];
    _killed call FUNC(nvgRemove);
}];
