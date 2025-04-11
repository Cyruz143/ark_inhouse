#include "script_component.hpp"

if (!hasInterface) exitWith {};

addMissionEventHandler ["MapSingleClick", {
    _this call FUNC(canAddMarker);
}];

player addEventHandler ["GetOutMan", {
    _this call FUNC(removeMarker);
}];

player addEventHandler ["Killed", {
    _this call FUNC(removeMarker);
}];
