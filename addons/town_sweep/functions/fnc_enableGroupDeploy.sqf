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
 * [] call ark_town_sweep_fnc_enableGroupDeploy
 */

ark_deploy_post_factions = [ts_player_side];
publicVariable "ark_deploy_post_factions";

ark_deploy_deployEnabled = true;
publicVariable "ark_deploy_deployEnabled";

[] call EFUNC(deploy,activatePostGroupDeploy);
