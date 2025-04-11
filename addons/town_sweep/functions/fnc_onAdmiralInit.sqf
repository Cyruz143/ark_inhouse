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
 * [] call ark_town_sweep_fnc_onAdmiralInit
 */

private _templateConfigs = "ts_camouflage in getArray (_x >> 'camouflage') && {configName _x isNotEqualTo 'Base'} && {getText (_x >> 'side') isNotEqualTo ts_player_factionRawSide}" configClasses (configFile >> "Admiral" >> "UnitTemplates");
private _templateConfig = selectRandom _templateConfigs;
ts_spawn_unitTemplate = configName _templateConfig;
adm_camp_defaultUnitTemplate = ts_spawn_unitTemplate;
adm_patrol_defaultUnitTemplate = ts_spawn_unitTemplate;
adm_cqc_defaultUnitTemplate = ts_spawn_unitTemplate;
adm_common_fnc_getUnitTemplateSide = { ts_enemy_side };
