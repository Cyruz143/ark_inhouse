#include "script_component.hpp"

//if (!isServer) exitWith {};

addMissionEventHandler ["BuildingChanged", {
    _this call FUNC(canClean);
}];
