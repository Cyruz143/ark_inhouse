class CBA_Extended_EventHandlers_base;

class CfgVehicles {
    class ARK_Module;
    class ark_chase_ai_module: ARK_Module {
        scope = 2;
        displayName = "Chase AI - Module";
        icon = "\x\ark\addons\ark_chase_ai\resources\chase.paa";
        function = "ark_chase_ai_module_preinit";
        isTriggerActivated = 1;
        isGlobal = 1;
        isDisposable = 1;
        is3DEN = 0;
        class ModuleDescription {
            description = "Spawns AI that hunt players";
        };
        class Arguments {
            class Unit_Template {
                displayName = "Admiral template name";
                description = "Blank will use admiral camps template";
                typeName = "STRING";
                defaultValue = "";
            };
            class Unit_Classnames {
                displayName = "Override default classnames";
                description = "Must be an ARRAY e.g. ['class1','class2']";
                typeName = "ARRAY";
                defaultValue = {[]};
            };
            class Unit_Amount {
                displayName = "Total unit amount";
                description = "Maxmimum number of chase units spawned";
                typeName = "NUMBER";
                defaultValue = 20;
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
            class Spawn_Time {
                displayName = "Unit spawn time";
                description = "How long between unit spawns";
                typeName = "NUMBER";
                defaultValue = 5;
            };
        };
    };
};
