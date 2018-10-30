class CfgVehicles {
    class ARK_Module;
    class ARK_Player_Paradrop: ARK_Module {
        scope = 2;
        displayName = "Player Paradrop";
        function = "ark_player_paradrop_fnc_setJumpHeight";
        class ModuleDescription {
            description = "Place this module to enable paradrops from planes";
        };
        class Arguments {
            class Chute_Height {
                displayName = "Set chute deploy height";
                description = "Set height the chute will automatically deploy";
                typeName = "NUMBER";
                defaultValue = 200;
            };
            class Jump_Gap {
                displayName = "Time between each jump";
                description = "Set the time in seconds between each player jumping";
                typeName = "NUMBER";
                defaultValue = 1;
            };
        };
    };

    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {               
            class Start_Drop {
                displayName = "Start Paradrop";
                exceptions[] = {"isNotInside"};
                condition = "call ark_player_paradrop_fnc_canDrop";
                statement = "['ark_player_paradrop_eh_jumpController', [(vehicle player)]] call CBA_fnc_serverEvent; (vehicle player) setVariable ['ark_player_paradrop_var_jumpInProgress', true, true];";
                icon = "\A3\ui_f\data\map\vehicleicons\iconParachute_ca.paa";
            };
            class Stop_Drop: Start_Drop {
                displayName = "Stop Paradrop";
                condition = "call ark_player_paradrop_fnc_stopDrop";
                statement = "(vehicle player) setVariable ['ark_player_paradrop_var_jumpInProgress', false, true];";
                icon = "\A3\ui_f\data\map\vehicleicons\iconParachute_ca.paa";
            };
        };
    };
};