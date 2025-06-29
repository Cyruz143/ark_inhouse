#include "re_macros.h"


if (getNumber(missionConfigFile >> "RandomEngagements" >> "isEnabled") isEqualTo 0) exitWith {};

call compileScript [ADDON_PATH(re_functions.sqf)];
call compileScript [ADDON_PATH(interaction_functions.sqf)];

if (isServer) then {
    [] call re_fnc_preinit;
};

if (hasInterface) then {
    [] call re_interaction_fnc_preinit;
};
