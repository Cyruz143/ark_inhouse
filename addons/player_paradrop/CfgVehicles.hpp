class CfgVehicles {
    class ARK_Module;
    class ARK_Player_Paradrop: ARK_Module {
        scope = 2;
        displayName = "Inhouse - Player Paradrop";
        function = QUOTE(FUNC(preInit));
        class ModuleDescription {
            description = "Module to enable paradrops from planes";
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
                condition = QUOTE(call FUNC(canDrop));
                statement = QUOTE(call FUNC(startDrop));
                icon = "\A3\ui_f\data\map\vehicleicons\iconParachute_ca.paa";
            };
            class Stop_Drop: Start_Drop {
                displayName = "Stop Paradrop";
                condition = QUOTE(call FUNC(canStopDrop));
                statement = QUOTE(call FUNC(stopDrop));
            };
        };
    };
};
