#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * N/A
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_town_sweep_fnc_selectRandomFaction
 */

private ["_factionConfigs", "_factionConfig"];
_factionConfigs = "ts_camouflage in getArray (_x >> 'camouflage') && {getText (_x >> 'name') isNotEqualTo 'Default'}" configClasses (configFile >> "Hull3" >> "Faction");
_factionConfig = _factionConfigs select floor random count _factionConfigs;
ts_player_faction = configName _factionConfig;
ts_player_factionRawSide = getText (_factionConfig >> "side");
ts_player_factionSide = call compile ts_player_factionRawSide;
ts_player_gearTemplate = getText (_factionConfig >> "gear");
ts_player_uniformTemplate = getText (_factionConfig >> "uniform");
