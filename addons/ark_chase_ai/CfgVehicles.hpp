class CBA_Extended_EventHandlers_base;

class CfgVehicles {
    class ARK_Module;
    class ark_chase_ai_Base : ARK_Module {
        scope = 1;
        function = "ark_chase_ai_module_preinit";
        isTriggerActivated = 1;
        isGlobal = 1;
    };

    class ark_chase_ai_Paradrop: ark_chase_ai_Base {
        scope = 2;
        displayName = "Chase AI";
        icon = "\x\ark\addons\ark_rotor\resources\chase.paa";
        class ModuleDescription {
            description = "Paradrops EI on the first waypoint";
        };
        class Arguments {
            class Fly_Height {
                displayName = "Set fly in height";
                description = "Set the height in meters the helo will try to fly at";
                typeName = "NUMBER";
                defaultValue = 200;
            };
            class Fly_Speed {
                displayName = "Set aircraft speed";
                description = "Set the speed the aircraft will maintain";
                typeName = "STRING";
                defaultValue = "NORMAL";
                class Values {
                    class limited_speed {name = "Slow";  value = "LIMITED";};
                    class normal_speed {name = "Normal"; value = "NORMAL";};
                    class full_speed {name = "Fast"; value = "FULL";};
                };
            };
            class Crew_Percentage {
                displayName = "Set amount of troops";
                description = "Set the percentage of the vehicle filled with troops";
                typeName = "NUMBER";
                defaultValue = 50;
                class Values {
                    class twenty_five {name = "25%"; value = 25;};
                    class fifty {name = "50%"; value = 50;};
                    class seventy_five {name = "75%"; value = 75;};
                    class one_hundred {name = "100%"; value = 100;};
                };
            };
            class Vehicle_ClassName {
                displayName = "Vehicle classname";
                description = "If you want to specify the vehicle classname enter it here";
                typeName = "STRING";
                defaultValue = "Default";
            };
            class Routine_Function {
                displayName = "Routine Function";
                description = "The function called by this module. Do not change this unless you know what it does";
                typeName = "STRING";
                defaultValue = "ark_chase_ai_fnc_paradrop";
            };
        };
    };
};
