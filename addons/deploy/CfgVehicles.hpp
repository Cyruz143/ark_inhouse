class CfgVehicles {
    class ARK_Module;
    class ARK_Enable_Deploy: ARK_Module {
        scope = 2;
        displayName = "Inhouse - Enable Group Deploy";
        function = "ark_deploy_module_init";
        class ModuleDescription {
            description = "Enables Group Deploy";
        };
        class Arguments {
            class Pre_Safety {
                displayName = "Pre Safety Deploy Factions";
                description = "The factions which will deploy before safety is off. (west, east, resistance, civilian). Pass as an array of sides, not strings.";
                typeName = "STRING";
                defaultValue = "[west]";
            };
            class Post_Safety {
                displayName = "Post Safety Deploy Factions";
                description = "The factions which will deploy after safety is off. (west, east, resistance, civilian). Pass as an array of sides, not strings.";
                typeName = "STRING";
                defaultValue = "[east]";
            };
        };
    };

    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class ARK_Menu {
                displayName = "ARK";
                condition = "true";
                statement = "";
                icon = "\x\ark\addons\ark_main\resources\ark_star.paa";
                exceptions[] = {"isNotSwimming", "isNotInside", "isNotSitting", "isNotOnLadder", "isNotRefueling"};

                class Deploy_Group {
                    displayName = "Deploy Group (Post Safety)";
                    condition = "([player] call ark_deploy_fnc_canPlayerPostDeploy) && ark_deploy_deployEnabled";
                    statement = "[player] call ark_deploy_fnc_assignDeployClick;";
                    icon = "\x\ark\addons\ark_main\resources\deploy.paa";
                    exceptions[] = {"isNotSwimming", "isNotInside", "isNotSitting", "isNotOnLadder", "isNotRefueling"};
                };

                class Pre_Deploy_Group {
                    displayName = "Deploy Group (Pre Safety)";
                    condition = "([player] call ark_deploy_fnc_canPlayerPreDeploy) && ark_deploy_deployEnabled";
                    statement = "[player] call ark_deploy_fnc_assignDeployClick;";
                    icon = "\x\ark\addons\ark_main\resources\deploy.paa";
                    exceptions[] = {"isNotSwimming", "isNotInside", "isNotSitting", "isNotOnLadder", "isNotRefueling"};
                };

                class Host_Menu {
                    displayName = "Host Menu";
                    condition = "((call ark_main_fnc_isHost) || { (isServer && hasInterface) })";
                    statement = "";
                    icon = "\x\ark\addons\ark_main\resources\ark_star.paa";
                    exceptions[] = {"isNotSwimming", "isNotInside", "isNotSitting", "isNotOnLadder", "isNotRefueling"};

                    class Activate_Pre_Deploy {
                        displayName = "Activate (Pre Safety) Group Deploy";
                        icon = "\x\ark\addons\ark_main\resources\deploy_activate.paa";
                        condition = "ark_deploy_deployEnabled && (!ark_deploy_preDeployActive) && ark_deploy_preDeployRequired";
                        statement = "[] call ark_deploy_fnc_activatePreGroupDeploy;";
                        exceptions[] = {"isNotSwimming", "isNotInside", "isNotSitting", "isNotOnLadder", "isNotRefueling"};
                    };
                };
            };
        };
    };
};
