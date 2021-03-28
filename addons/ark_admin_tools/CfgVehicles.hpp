class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class ARK_Menu {
            displayName = "ARK";
            condition = "true";
            statement = "";
            icon = "\x\ark\addons\ark_main\resources\ark_star.paa";
            exceptions[] = {"isNotSwimming", "isNotInside", "isNotSitting", "isNotOnLadder", "isNotRefueling"};

                class Map_Click_Teleport {
                    displayName = "Click Map Teleport";
                    icon = "\x\ark\addons\ark_main\resources\click.paa";
                    condition = "ark_mapTeleportEnabled";
                    statement = "player call ark_admin_tools_fnc_enableMapTeleport";
                    exceptions[] = {"isNotSwimming", "isNotInside", "isNotSitting", "isNotOnLadder", "isNotRefueling"};
                };

                class Unflip_Vehicle {
                    displayName = "Unflip Vehicle";
                    icon = "\A3\ui_f\data\Map\VehicleIcons\pictureRepair_ca.paa";
                    condition = "objectParent player call ark_admin_tools_fnc_canUnflip";
                    statement = "call ark_admin_tools_fnc_unFlip";
                    exceptions[] = {"isNotSwimming", "isNotInside", "isNotSitting", "isNotOnLadder", "isNotRefueling"};
                };

                class Check_Spectators {
                    displayName = "Count Spectators";
                    icon = "\z\ace\addons\spectator\data\Icon_Module_Spectator_ca.paa";
                    condition = "['ark_co', briefingName] call BIS_fnc_inString";
                    statement = "call ark_admin_tools_fnc_countSpec";
                    exceptions[] = {"isNotSwimming", "isNotInside", "isNotSitting", "isNotOnLadder", "isNotRefueling"};
                };

                class Host_Menu {
                    displayName = "Host Menu";
                    condition = "((call ark_main_fnc_isHost) || { (isServer && hasInterface) })";
                    statement = "";
                    icon = "\x\ark\addons\ark_main\resources\ark_star.paa";
                    exceptions[] = {"isNotSwimming", "isNotInside", "isNotSitting", "isNotOnLadder", "isNotRefueling"};

                    class Safety_Off {
                        displayName = "Turn Safety Off";
                        condition = "!(call hull3_mission_fnc_hasSafetyTimerEnded)";
                        showDisabled = 1;
                        statement = "[nil, nil, nil, ['confirm']] call compileScript ['x\ark\addons\hull3\mission_host_safetytimer_stop.sqf'];";
                        icon = "\x\ark\addons\ark_main\resources\hull_disable.paa";
                        exceptions[] = {"isNotSwimming", "isNotInside", "isNotSitting", "isNotOnLadder", "isNotRefueling"};
                    };

                    class Enable_AI_Debug {
                        displayName = "Enable AI Debug";
                        condition = "!ark_aiDebugEnabled";
                        statement = "true call ark_admin_tools_fnc_aiDebug;";
                        icon = "\x\ark\addons\ark_main\resources\ai_enable.paa";
                        exceptions[] = {"isNotSwimming", "isNotInside", "isNotSitting", "isNotOnLadder", "isNotRefueling"};
                    };

                    class Disable_AI_Debug {
                        displayName = "Disable AI Debug";
                        condition = "ark_aiDebugEnabled";
                        statement = "false call ark_admin_tools_fnc_aiDebug;";
                        icon = "\x\ark\addons\ark_main\resources\ai_disable.paa";
                        exceptions[] = {"isNotSwimming", "isNotInside", "isNotSitting", "isNotOnLadder", "isNotRefueling"};
                    };

                    class Enable_Click_Teleport {
                        displayName = "Enable Global Click Teleport";
                        condition = "!ark_mapTeleportEnabled";
                        statement = "true call ark_admin_tools_fnc_assignMapTeleport;";
                        icon = "\x\ark\addons\ark_main\resources\click_enable.paa";
                        exceptions[] = {"isNotSwimming", "isNotInside", "isNotSitting", "isNotOnLadder", "isNotRefueling"};
                    };

                    class Disable_Click_Teleport {
                        displayName = "Disable Global Click Teleport";
                        condition = "ark_mapTeleportEnabled";
                        statement = "false call ark_admin_tools_fnc_assignMapTeleport;";
                        icon = "\x\ark\addons\ark_main\resources\click_disable.paa";
                        exceptions[] = {"isNotSwimming", "isNotInside", "isNotSitting", "isNotOnLadder", "isNotRefueling"};
                    };

                    class Call_Attack_Helo {
                        displayName = "Call Attack Helo";
                        condition = "call ark_main_fnc_isAdmiralEnabled && { !(call ark_main_fnc_isTownSweep) }";
                        statement = "[player] remoteExecCall ['ark_admin_tools_fnc_callAttackHelo',2]";
                        icon = "\A3\ui_f\data\map\vehicleicons\iconHelicopter_ca.paa";
                        exceptions[] = {"isNotInside", "isNotSitting", "isNotOnLadder", "isNotRefueling"};
                    };

                    class Call_Armour {
                        displayName = "Call Armour";
                        condition = "call ark_main_fnc_isAdmiralEnabled && { !(call ark_main_fnc_isTownSweep) }";
                        statement = "[player] remoteExecCall ['ark_admin_tools_fnc_callArmour',2]";
                        icon = "\A3\ui_f\data\map\vehicleicons\iconTank_ca.paa";
                        exceptions[] = {"isNotInside", "isNotSitting", "isNotOnLadder", "isNotRefueling"};
                    };

                    class Call_Technical {
                        displayName = "Call Technical";
                        condition = "call ark_main_fnc_isAdmiralEnabled && { !(call ark_main_fnc_isTownSweep) }";
                        statement = "[player] remoteExecCall ['ark_admin_tools_fnc_callTechnical',2]";
                        icon = "\A3\ui_f\data\map\vehicleicons\iconAPC_ca.paa";
                        exceptions[] = {"isNotInside", "isNotSitting", "isNotOnLadder", "isNotRefueling"};
                    };
                };
            };
        };
    };
};