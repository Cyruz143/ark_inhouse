class CfgVehicles {
    class ARK_Module;
    class ARK_Enable_Deploy: ARK_Module {
        scope = 2;
        displayName = "Inhouse - Enable Group Deploy";
        function = QFUNC(init); // Function has to be called this way otherwise it will error.
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
                icon = QPATHTOEF(main,resources\ark_star.paa);
                exceptions[] = {"isNotSwimming", "isNotInside", "isNotSitting", "isNotOnLadder", "isNotRefueling"};

                class Deploy_Group {
                    displayName = "Deploy Group (Post Safety)";
                    condition = QUOTE(([player] call FUNC(canPlayerPostDeploy)) && ark_deploy_deployEnabled);
                    statement = QUOTE(call FUNC(assignDeployClick));
                    icon = QPATHTOEF(main,resources\deploy.paa);
                    exceptions[] = {"isNotSwimming", "isNotInside", "isNotSitting", "isNotOnLadder", "isNotRefueling"};
                };

                class Pre_Deploy_Group {
                    displayName = "Deploy Group (Pre Safety)";
                    condition = QUOTE(([player] call FUNC(canPlayerPreDeploy)) && ark_deploy_deployEnabled);
                    statement = QUOTE(call FUNC(assignDeployClick));
                    icon = QPATHTOEF(main,resources\deploy.paa);
                    exceptions[] = {"isNotSwimming", "isNotInside", "isNotSitting", "isNotOnLadder", "isNotRefueling"};
                };

                class Host_Menu {
                    displayName = "Host Menu";
                    condition = QUOTE((call EFUNC(main,isHost) || { (isServer && hasInterface) }));
                    statement = "";
                    icon = QPATHTOEF(main,resources\ark_star.paa);
                    exceptions[] = {"isNotSwimming", "isNotInside", "isNotSitting", "isNotOnLadder", "isNotRefueling"};

                    class Activate_Pre_Deploy {
                        displayName = "Activate (Pre Safety) Group Deploy";
                        icon = QPATHTOEF(main,resources\deploy_activate.paa);
                        condition = "ark_deploy_deployEnabled && (!ark_deploy_preDeployActive) && ark_deploy_preDeployRequired";
                        statement = QUOTE(call FUNC(activatePreGroupDeploy));
                        exceptions[] = {"isNotSwimming", "isNotInside", "isNotSitting", "isNotOnLadder", "isNotRefueling"};
                    };
                };
            };
        };
    };
};
