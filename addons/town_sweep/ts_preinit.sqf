#include "ts_macros.h"


if (getNumber(missionConfigFile >> "TownSweep" >> "isEnabled") isEqualTo 0) exitWith {};

call compile preprocessFileLineNumbers ADDON_PATH(ts_functions.sqf);
call compile preprocessFileLineNumbers ADDON_PATH(interaction_functions.sqf);
call compile preprocessFileLineNumbers ADDON_PATH(spawn_functions.sqf);

if (isServer) then {
    [] call ts_fnc_preinit;
    [] call ts_spawn_fnc_preinit;
};

if (hasInterface) then {
    [] call ts_interaction_fnc_preinit;
};
