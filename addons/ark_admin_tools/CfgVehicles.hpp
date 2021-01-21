class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
        class ARK_Interaction;
            class ARK_Menu {
            displayName = "ARK";
            condition = "true";
            statement = "";
            icon = "\x\ark\addons\ark_main\resources\ark_star.paa";
            exceptions[] = {"isNotSwimming", "isNotInside", "isNotSitting", "isNotOnLadder", "isNotRefueling"};

                class Map_Click_Teleport : ARK_Interaction {
                    displayName = "Click Map Teleport";
                    icon = "\x\ark\addons\ark_main\resources\click.paa";
                    condition = "ark_mapTeleportEnabled";
                    statement = "player call ark_admin_tools_fnc_enableMapTeleport";
                };

                class Unflip_Vehicle : ARK_Interaction {
                    displayName = "Unflip Vehicle";
                    icon = "\A3\ui_f\data\Map\VehicleIcons\pictureRepair_ca.paa";
                    condition = "objectParent player call ark_admin_tools_fnc_canUnflip";
                    statement = "call ark_admin_tools_fnc_unFlip";
                };

                class Check_Spectators : ARK_Interaction {
                    displayName = "Count Spectators";
                    icon = "\z\ace\addons\spectator\data\Icon_Module_Spectator_ca.paa";
                    condition = "['ark_co', briefingName] call BIS_fnc_inString";
                    statement = "call ark_admin_tools_fnc_countSpec";
                };

                class Host_Actions;
                class Host_Menu {
                    displayName = "Host Menu";
                    icon = "\x\ark\addons\ark_main\resources\ark_star.paa";
                    exceptions[] = {"isNotSwimming", "isNotInside", "isNotSitting", "isNotOnLadder", "isNotRefueling"};

                    class Safety_Off : Host_Actions {
                        displayName = "Turn Safety Off";
                        condition = "!(call hull3_mission_fnc_hasSafetyTimerEnded)";
                        showDisabled = 1;
                        statement = "[nil, nil, nil, ['confirm']] call compile preProcessFileLineNumbers 'x\ark\addons\hull3\mission_host_safetytimer_stop.sqf';";
                        icon = "\x\ark\addons\ark_main\resources\hull_disable.paa";
                    };

                    class Enable_AI_Debug : Host_Actions {
                        displayName = "Enable AI Debug";
                        condition = "!ark_aiDebugEnabled";
                        statement = "true call ark_admin_tools_fnc_aiDebug;";
                        icon = "\x\ark\addons\ark_main\resources\ai_enable.paa";
                    };

                    class Disable_AI_Debug : Host_Actions {
                        displayName = "Disable AI Debug";
                        condition = "ark_aiDebugEnabled";
                        statement = "false call ark_admin_tools_fnc_aiDebug;";
                        icon = "\x\ark\addons\ark_main\resources\ai_disable.paa";
                    };

                    class Enable_Click_Teleport : Host_Actions {
                        displayName = "Enable Global Click Teleport";
                        condition = "!ark_mapTeleportEnabled";
                        statement = "true call ark_admin_tools_fnc_assignMapTeleport;";
                        icon = "\x\ark\addons\ark_main\resources\click_enable.paa";
                    };

                    class Disable_Click_Teleport : Host_Actions {
                        displayName = "Disable Global Click Teleport";
                        condition = "ark_mapTeleportEnabled";
                        statement = "false call ark_admin_tools_fnc_assignMapTeleport;";
                        icon = "\x\ark\addons\ark_main\resources\click_disable.paa";
                    };

                    class Call_Attack_Helo : Host_Actions {
                        displayName = "Call Attack Helo";
                        condition = "call ark_main_fnc_isAdmiralEnabled && { !(call ark_main_fnc_isTownSweep) }";
                        statement = "[player] remoteExecCall ['ark_admin_tools_fnc_callAttackHelo',2]";
                        icon = "\A3\ui_f\data\map\vehicleicons\iconHelicopter_ca.paa";
                    };

                    class Call_Armour : Host_Actions {
                        displayName = "Call Armour";
                        condition = "call ark_main_fnc_isAdmiralEnabled && { !(call ark_main_fnc_isTownSweep) }";
                        statement = "[player] remoteExecCall ['ark_admin_tools_fnc_callArmour',2]";
                        icon = "\A3\ui_f\data\map\vehicleicons\iconTank_ca.paa";
                    };

                    class Call_Technical : Host_Actions {
                        displayName = "Call Technical";
                        condition = "call ark_main_fnc_isAdmiralEnabled && { !(call ark_main_fnc_isTownSweep) }";
                        statement = "[player] remoteExecCall ['ark_admin_tools_fnc_callTechnical',2]";
                        icon = "\A3\ui_f\data\map\vehicleicons\iconAPC_ca.paa";
                    };
                };
            };
        };
    };
};