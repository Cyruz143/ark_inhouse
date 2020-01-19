class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class ARK_Interaction {
                displayName = "ARK";
                runOnHover = 0;
                hotkey = "";
                exceptions[] = {"isNotInside","isNotSwimming"};
                condition = "true";
                statement = "";
                icon = "\x\ark\addons\ark_main\resources\ark_star.paa";

                class ARK_Category {
                    displayName = "ARK Client Action";
                    icon = "\x\ark\addons\ark_main\resources\ark_star.paa";
                    exceptions[] = {"isNotInside","isNotSwimming"};
                    condition = "true";
                    statement = "";
                };

                class ARK_Action {
                    displayName = "ARK Client Action";
                    icon = "\x\ark\addons\ark_main\resources\ark_star.paa";
                    exceptions[] = {"isNotInside","isNotSwimming"};
                    condition = "true";
                    statement = "";
                };

                class Map_Click_Teleport : ARK_Action {
                    displayName = "Click Map Teleport";
                    icon = "\x\ark\addons\ark_main\resources\click.paa";
                    condition = "ark_mapTeleportEnabled";
                    statement = "player call ark_admin_tools_fnc_enableMapTeleport;";
                };

                class Ammo_Drop : ARK_Action {
                    displayName = "Request Ammo Drop";
                    icon = "\A3\ui_f\data\map\vehicleicons\iconParachute_ca.paa";
                    condition = "call ark_admin_tools_fnc_isTownSweep && (player isEqualTo leader group _player) && !(player getVariable ['ark_ts_paradropInProgress', false])";
                    statement = "player call ark_admin_tools_fnc_ammoDrop;";
                };

                class Unflip_Vehicle : ARK_Action {
                    displayName = "Unflip Vehicle";
                    icon = "\A3\ui_f\data\Map\VehicleIcons\pictureRepair_ca.paa";
                    condition = "objectParent player call ark_admin_tools_fnc_canUnflip";
                    statement = "call ark_admin_tools_fnc_unFlip;";
                };

                class Check_Spectators : ARK_Action {
                    displayName = "Count Spectators";
                    icon = "\z\ace\addons\spectator\data\Icon_Module_Spectator_ca.paa";
                    condition = "['ark_co', briefingName] call BIS_fnc_inString;";
                    statement = "player sideChat format ['There are %1 people in spectator',count (call ace_spectator_fnc_players)];";
                };

                // Host Menu
                class Host_Actions : ARK_Category {
                    displayName = "Host Menu";
                    condition = "(call ark_admin_tools_fnc_isHost) || { (isServer && hasInterface) }";

                    class Safety_Off : ARK_Action {
                        displayName = "Turn Safety Off";
                        condition = "!(call hull3_mission_fnc_hasSafetyTimerEnded)";
                        showDisabled = 1;
                        statement = "[nil, nil, nil, ['confirm']] call compile preProcessFileLineNumbers 'x\ark\addons\hull3\mission_host_safetytimer_stop.sqf';";
                        icon = "\x\ark\addons\ark_main\resources\hull_disable.paa";
                    };

                    class Enable_AI_Debug : ARK_Action {
                        displayName = "Enable AI Debug";
                        condition = "!ark_aiDebugEnabled";
                        statement = "true call ark_admin_tools_fnc_aiDebug;";
                        icon = "\x\ark\addons\ark_main\resources\ai_enable.paa";
                    };

                    class Disable_AI_Debug : ARK_Action {
                        displayName = "Disable AI Debug";
                        condition = "ark_aiDebugEnabled";
                        statement = "false call ark_admin_tools_fnc_aiDebug;";
                        icon = "\x\ark\addons\ark_main\resources\ai_disable.paa";
                    };

                    class Enable_Click_Teleport : ARK_Action {
                        displayName = "Enable Global Click Teleport";
                        condition = "!ark_mapTeleportEnabled";
                        statement = "true call ark_admin_tools_fnc_assignMapTeleport;";
                        icon = "\x\ark\addons\ark_main\resources\click_enable.paa";
                    };

                    class Disable_Click_Teleport : ARK_Action {
                        displayName = "Disable Global Click Teleport";
                        condition = "ark_mapTeleportEnabled";
                        statement = "false call ark_admin_tools_fnc_assignMapTeleport;";
                        icon = "\x\ark\addons\ark_main\resources\click_disable.paa";
                    };

                    class Call_Attack_Helo : ARK_Action {
                        displayName = "Call Attack Helo";
                        condition = "call ark_admin_tools_fnc_isAdmiralEnabled && { !(call ark_admin_tools_fnc_isTownSweep) }";
                        statement = "[player] remoteExecCall ['ark_admin_tools_fnc_callAttackHelo',2]";
                        icon = "\A3\ui_f\data\map\vehicleicons\iconHelicopter_ca.paa";
                    };

                    class Call_Armour : ARK_Action {
                        displayName = "Call Armour";
                        condition = "call ark_admin_tools_fnc_isAdmiralEnabled && { !(call ark_admin_tools_fnc_isTownSweep) }";
                        statement = "[player] remoteExecCall ['ark_admin_tools_fnc_callArmour',2]";
                        icon = "\A3\ui_f\data\map\vehicleicons\iconTank_ca.paa";
                    };

                    class Call_Technical : ARK_Action {
                        displayName = "Call Technical";
                        condition = "call ark_admin_tools_fnc_isAdmiralEnabled && { !(call ark_admin_tools_fnc_isTownSweep) }";
                        statement = "[player] remoteExecCall ['ark_admin_tools_fnc_callTechnical',2]";
                        icon = "\A3\ui_f\data\map\vehicleicons\iconAPC_ca.paa";
                    };

                };
            };
        };
    };
};
