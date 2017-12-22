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

                class Activate_Pre_Deploy : ARK_Action {
                    displayName = "Activate (Pre Safety) Group Deploy";
                    icon = ADDON_PATH(resources\deploy_activate.paa);
                    condition = "ark_deploy_deployEnabled && (!ark_deploy_preDeployActive) && ark_deploy_preDeployRequired";
                    statement = "[] call ark_deploy_fnc_activatePreGroupDeploy;";
                };

            };
        };
    };
};
