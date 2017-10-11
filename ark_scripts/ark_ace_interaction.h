class Man;
class CAManBase: Man {
    class ACE_SelfActions {
        class ARK_Interaction {
            displayName = "ARK";
            runOnHover = 0;
            hotkey = "";
            exceptions[] = {"isNotInside"};
            condition = "true";
            statement = "";
            icon = ADDON_PATH(resources\ark_star.paa);

            class ARK_Category {
                displayName = "ARK Client Action";
                icon = ADDON_PATH(resources\ark_star.paa);
                exceptions[] = {"isNotInside"};
                condition = "true";
                statement = "";
            };

            class ARK_Action {
                displayName = "ARK Client Action";
                icon = ADDON_PATH(resources\ark_star.paa);
                exceptions[] = {"isNotInside"};
                condition = "true";
                statement = "";
            };

            class Deploy_Group : ARK_Action {
                displayName = "Deploy Group (Post Safety)";
                exceptions[] = {};
                condition = "([player] call ark_deploy_fnc_canPlayerPostDeploy) && ark_deploy_deployEnabled";
                statement = "[player] call ark_deploy_fnc_assignDeployClick;";
                icon = ADDON_PATH(resources\deploy.paa);
            };

            class Pre_Deploy_Group : Deploy_Group {
                displayName = "Deploy Group (Pre Safety)";
                exceptions[] = {};
                condition = "([player] call ark_deploy_fnc_canPlayerPreDeploy) && ark_deploy_deployEnabled";
                statement = "[player] call ark_deploy_fnc_assignDeployClick;";
            };

            class Map_Click_Teleport : ARK_Action {
                displayName = "Click Map Teleport";
                exceptions[] = {};
                icon = ADDON_PATH(resources\click.paa);
                condition = "ark_mapTeleportEnabled";
                statement = "[player] call ark_fnc_enableMapTeleport;";
            };

            class Ammo_Drop : ARK_Action {
                displayName = "Request Ammo Drop";
                exceptions[] = {};
                icon = "\A3\ui_f\data\map\vehicleicons\iconParachute_ca.paa";
                condition = "([player] call ark_deploy_fnc_playerIsLeader) && !(player getVariable ['ark_ts_paradropInProgress', false]) && (getNumber(missionConfigFile >> 'TownSweep' >> 'isEnabled') == 1)";
                statement = "[player] call ark_fnc_ammoDrop;";
            };

            // Host Menu
            class Host_Actions : ARK_Category {
                displayName = "Host Menu";
                condition = "([] call ark_fnc_isHost) || (isServer && hasInterface)";

                class Safety_Off : ARK_Action {
                    displayName = "Turn Safety Off";
                    condition = "!([] call hull3_mission_fnc_hasSafetyTimerEnded)";
                    showDisabled = 1;
                    statement = "[nil, nil, nil, ['confirm']] call compile preProcessFileLineNumbers 'x\ark\addons\hull3\mission_host_safetytimer_stop.sqf';";
                    icon = ADDON_PATH(resources\hull_disable.paa);
                };

                class Activate_Pre_Deploy : ARK_Action {
                    displayName = "Activate (Pre Safety) Group Deploy";
                    icon = ADDON_PATH(resources\deploy_activate.paa);
                    condition = "ark_deploy_deployEnabled && (!ark_deploy_preDeployActive) && ark_deploy_preDeployRequired";
                    statement = "[] call ark_deploy_fnc_activatePreGroupDeploy;";
                };

                class Enable_AI_Debug : ARK_Action {
                    displayName = "Enable AI Debug";
                    condition = "!ark_aiDebugEnabled"; 
                    statement = "[] call ark_fnc_enableAiDebug;";
                    icon = ADDON_PATH(resources\ai_enable.paa);
                };

                class Disable_AI_Debug : ARK_Action {
                    displayName = "Disable AI Debug";
                    condition = "ark_aiDebugEnabled"; 
                    statement = "[] call ark_fnc_disableAiDebug;";
                    icon = ADDON_PATH(resources\ai_disable.paa);
                };

                class Enable_Click_Teleport : ARK_Action {
                    displayName = "Enable Global Click Teleport";
                    condition = "!ark_mapTeleportEnabled"; 
                    statement = "[true] call ark_fnc_assignMapTeleport;";
                    icon = ADDON_PATH(resources\click_enable.paa);
                };

                class Disable_Click_Teleport : ARK_Action {
                    displayName = "Disable Global Click Teleport";
                    condition = "ark_mapTeleportEnabled"; 
                    statement = "[false] call ark_fnc_assignMapTeleport;";
                    icon = ADDON_PATH(resources\click_disable.paa);
                };

                /*class Call_Attack_Helo : ARK_Action {
                    displayName = "Call Attack Helo";
                    condition = "ark_fnc_isAdmiralEnabled"; 
                    statement = "[player] remoteExecCall ['ark_fnc_callAttackHelo',2]";
                    icon = "\a3\Ui_f\data\GUI\Cfg\CommunicationMenu\casheli_ca.paa";
                };*/

                class Call_Armour : ARK_Action {
                    displayName = "Call Attack Armour";
                    condition = "ark_fnc_isAdmiralEnabled"; 
                    statement = "[player] remoteExecCall ['ark_fnc_callArmour',2]";
                    icon = "\A3\ui_f\data\map\vehicleicons\iconTank_ca.paa";
                };
            };
        };
    };
};
