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
            class Unit_Amount {
                displayName = "Unit amount";
                description = "Maxmimum number of chase units spawned";
                typeName = "NUMBER";
                defaultValue = 20;
            };
            class Respawn_Time {
                displayName = "Unit spawn time";
                description = "How long between unit spawns";
                typeName = "NUMBER";
                defaultValue = 5;
            };
            class Max_Distance {
                displayName = "Maxmimum spawn range";
                description = "Furthest away a unit can spawn";
                typeName = "NUMBER";
                defaultValue = 500;
            };
            class Min_Distance {
                displayName = "Minimum spawn range";
                description = "Closest a unit can spawn";
                typeName = "NUMBER";
                defaultValue = 300;
            };
            class Unit_Template {
                displayName = "Admiral template name";
                description = "Default will use admiral camps template";
                typeName = "STRING";
                defaultValue = "Default";
            };
            class Unit_Classnames {
                displayName = "Override default classnames";
                description = "Must be an ARRAY e.g. ['class1','class2']";
                typeName = "STRING";
                defaultValue = "Default";
            };
        };
    };
};
