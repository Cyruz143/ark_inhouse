#include "re_macros.h"


if (getNumber(missionConfigFile >> "RandomEngagements" >> "isEnabled") == 0) exitWith {};

call compile preprocessFileLineNumbers ADDON_PATH(re_functions.sqf);
call compile preprocessFileLineNumbers ADDON_PATH(interaction_functions.sqf);

if (isServer) then {
    [] call re_fnc_preinit;
};

if (hasInterface) then {
    [] call re_interaction_fnc_preinit;
};