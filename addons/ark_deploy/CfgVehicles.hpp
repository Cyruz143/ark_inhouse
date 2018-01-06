class CfgVehicles {
    class ARK_Module;
    class ARK_Enable_Deploy: ARK_Module {
        scope = 2;
        displayName = "Enable Group Deploy";
        function = "ark_deploy_module_init";
        class ModuleDescription {
            description = "Enables Group Deploy";
        };
        class Arguments {
            class Pre_Safety {
                displayName = "Pre Safety Deploy Factions";
                description = "The factions which will deploy before safety is off. (WEST, EAST, RESISTANCE, CIVILIAN). Pass as an array of sides, not strings.";
                typeName = "STRING";
                defaultValue = "[WEST]";
            };
            class Post_Safety {
                displayName = "Post Safety Deploy Factions";
                description = "The factions which will deploy after safety is off. (WEST, EAST, RESISTANCE, CIVILIAN). Pass as an array of sides, not strings.";
                typeName = "STRING";
                defaultValue = "[EAST]";
            };
        };
    };

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
                icon = "\x\ark\addons\ark_main\resources\ark_star.paa";

                class ARK_Category {
                    displayName = "ARK Client Action";
                    icon = "\x\ark\addons\ark_main\resources\ark_star.paa";
                    exceptions[] = {"isNotInside"};
                    condition = "true";
                    statement = "";
                };

                class ARK_Action {
                    displayName = "ARK Client Action";
                    icon = "\x\ark\addons\ark_main\resources\ark_star.paa";
                    exceptions[] = {"isNotInside"};
                    condition = "true";
                    statement = "";
                };
                class Deploy_Group : ARK_Action {
                    displayName = "Deploy Group (Post Safety)";
                    exceptions[] = {};
                    condition = "([player] call ark_deploy_fnc_canPlayerPostDeploy) && ark_deploy_deployEnabled";
                    statement = "[player] call ark_deploy_fnc_assignDeployClick;";
                    icon = "\x\ark\addons\ark_main\resources\deploy.paa";
                };

                class Pre_Deploy_Group : Deploy_Group {
                    displayName = "Deploy Group (Pre Safety)";
                    exceptions[] = {};
                    condition = "([player] call ark_deploy_fnc_canPlayerPreDeploy) && ark_deploy_deployEnabled";
                    statement = "[player] call ark_deploy_fnc_assignDeployClick;";
                };

                // Host Menu
                class Host_Actions : ARK_Category {
                    displayName = "Host Menu";
                    condition = "([] call ark_admin_tools_fnc_isHost) || (isServer && hasInterface)";

                    class Activate_Pre_Deploy : ARK_Action {
                        displayName = "Activate (Pre Safety) Group Deploy";
                        icon = "\x\ark\addons\ark_main\resources\deploy_activate.paa";
                        condition = "ark_deploy_deployEnabled && (!ark_deploy_preDeployActive) && ark_deploy_preDeployRequired";
                        statement = "[] call ark_deploy_fnc_activatePreGroupDeploy;";
                    };
                };
            };
        };
    };
};