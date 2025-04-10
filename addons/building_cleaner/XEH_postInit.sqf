#include "script_component.hpp"

if (hasInterface) exitWith {};

addMissionEventHandler ["BuildingChanged", {
    _this call FUNC(canClean);
}];
