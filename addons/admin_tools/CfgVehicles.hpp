class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class ARK_Menu {
            displayName = "ARK";
            condition = "true";
            statement = "";
            icon = "\x\ark\addons\main\resources\ark_star.paa";
            exceptions[] = {"isNotSwimming", "isNotInside", "isNotSitting", "isNotOnLadder", "isNotRefueling"};


                class Group_Leader_Teleport {
                    displayName = "Teleport (To Leader)";
                    icon = "\a3\ui_f\data\igui\cfg\simpletasks\types\meet_ca.paa";
                    condition = "missionNameSpace getVariable ['ark_admin_tools_mapTP', false]";
                    statement = QUOTE(call FUNC(tpToLeader));
                    exceptions[] = {"isNotSwimming", "isNotInside", "isNotSitting", "isNotOnLadder", "isNotRefueling"};
                };

                class Map_Click_Teleport {
                    displayName = "Teleport (Click Map)";
                    icon = "\a3\ui_f\data\igui\cfg\simpletasks\types\move_ca.paa";
                    condition = "missionNameSpace getVariable ['ark_admin_tools_mapTP', false]";
                    statement = QUOTE(player call FUNC(enableMapTeleport));
                    exceptions[] = {"isNotSwimming", "isNotInside", "isNotSitting", "isNotOnLadder", "isNotRefueling"};
                };

                class Check_Spectators {
                    displayName = "Count Spectators";
                    icon = "\z\ace\addons\spectator\data\Icon_Module_Spectator_ca.paa";
                    condition = "['ark_co', briefingName] call BIS_fnc_inString";
                    statement = QUOTE(call FUNC(countSpec));
                    exceptions[] = {"isNotSwimming", "isNotInside", "isNotSitting", "isNotOnLadder", "isNotRefueling"};
                };

                class Enter_Spectator {
                    displayName = "Enter Spectator (Emergency AFK)";
                    icon = "\A3\ui_f\data\igui\cfg\simpleTasks\types\walk_ca.paa";
                    condition = "['ark_co', briefingName] call BIS_fnc_inString";
                    statement = "[true, false] call ace_spectator_fnc_setSpectator";
                    exceptions[] = {"isNotSwimming", "isNotInside", "isNotSitting", "isNotOnLadder", "isNotRefueling"};
                };

                class Host_Menu {
                    displayName = "Host Menu";
                    condition = "((call ark_main_fnc_isHost) || { (isServer && hasInterface) })";
                    statement = "";
                    icon = "\x\ark\addons\main\resources\ark_star.paa";
                    exceptions[] = {"isNotSwimming", "isNotInside", "isNotSitting", "isNotOnLadder", "isNotRefueling"};

                    class Safety_Off {
                        displayName = "Turn Safety Off";
                        condition = "!(call hull3_mission_fnc_hasSafetyTimerEnded)";
                        showDisabled = 1;
                        statement = "[nil, nil, nil, ['confirm']] call compileScript ['x\ark\addons\hull3\mission_host_safetytimer_stop.sqf'];";
                        icon = "\x\ark\addons\main\resources\hull_disable.paa";
                        exceptions[] = {"isNotSwimming", "isNotInside", "isNotSitting", "isNotOnLadder", "isNotRefueling"};
                    };

                    class Enable_AI_Debug {
                        displayName = "Enable AI Debug";
                        condition = "!ark_aiDebugEnabled";
                        statement = "true call ark_admin_tools_fnc_aiDebug;";
                        icon = "\x\ark\addons\main\resources\ai_enable.paa";
                        exceptions[] = {"isNotSwimming", "isNotInside", "isNotSitting", "isNotOnLadder", "isNotRefueling"};
                    };

                    class Disable_AI_Debug {
                        displayName = "Disable AI Debug";
                        condition = "ark_aiDebugEnabled";
                        statement = "false call ark_admin_tools_fnc_aiDebug;";
                        icon = "\x\ark\addons\main\resources\ai_disable.paa";
                        exceptions[] = {"isNotSwimming", "isNotInside", "isNotSitting", "isNotOnLadder", "isNotRefueling"};
                    };

                    class Enable_Click_Teleport {
                        displayName = "Enable Teleport";
                        condition = "!(missionNameSpace getVariable ['ark_admin_tools_mapTP', false])";
                        statement = "missionNameSpace setVariable ['ark_admin_tools_mapTP', true, true]";
                        icon = "\x\ark\addons\main\resources\click_enable.paa";
                        exceptions[] = {"isNotSwimming", "isNotInside", "isNotSitting", "isNotOnLadder", "isNotRefueling"};
                    };

                    class Disable_Click_Teleport {
                        displayName = "Disable Teleport";
                        condition = "missionNameSpace getVariable ['ark_admin_tools_mapTP', false]";
                        statement = "missionNameSpace setVariable ['ark_admin_tools_mapTP', false, true]";
                        icon = "\x\ark\addons\main\resources\click_disable.paa";
                        exceptions[] = {"isNotSwimming", "isNotInside", "isNotSitting", "isNotOnLadder", "isNotRefueling"};
                    };

                    class Call_Attack_Helo {
                        displayName = "Call AH";
                        condition = "call ark_main_fnc_isAdmiralEnabled && { !(call ark_main_fnc_isTownSweep) }";
                        statement = QUOTE([ARR_2(player,'ah')] call FUNC(callReinforcementsLocal));
                        icon = "\A3\ui_f\data\map\vehicleicons\iconHelicopter_ca.paa";
                        exceptions[] = {"isNotInside", "isNotSitting", "isNotOnLadder", "isNotRefueling"};
                    };

                    class Call_Armour {
                        displayName = "Call Armour";
                        condition = "call ark_main_fnc_isAdmiralEnabled && { !(call ark_main_fnc_isTownSweep) }";
                        statement = QUOTE([ARR_2(player,'armour')] call FUNC(callReinforcementsLocal));
                        icon = "\A3\ui_f\data\map\vehicleicons\iconTank_ca.paa";
                        exceptions[] = {"isNotInside", "isNotSitting", "isNotOnLadder", "isNotRefueling"};
                    };

                    class Call_Technical {
                        displayName = "Call Technical";
                        condition = "call ark_main_fnc_isAdmiralEnabled && { !(call ark_main_fnc_isTownSweep) }";
                        statement = QUOTE([ARR_2(player,'technicals')] call FUNC(callReinforcementsLocal));
                        icon = "\A3\ui_f\data\map\vehicleicons\iconAPC_ca.paa";
                        exceptions[] = {"isNotInside", "isNotSitting", "isNotOnLadder", "isNotRefueling"};
                    };
                };
            };
        };
    };
};
