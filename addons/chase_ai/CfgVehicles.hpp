class CBA_Extended_EventHandlers_base;

class CfgVehicles {
    class ARK_Module;
    class ark_chase_ai_module: ARK_Module {
        scope = 2;
        displayName = "Chase AI - Module";
        icon = QPATHTOF(resources\chase.paa);
        function = QUOTE(call FUNC(module));
        isTriggerActivated = 1;
        class ModuleDescription {
            description = "Spawns AI that hunt players";
        };
        class Arguments {
            class Unit_Template {
                displayName = "Template Override";
                description = "Default will use admiral camps template";
                typeName = "STRING";
                defaultValue = "ADMIRAL";
            };
            class Unit_Classnames {
                displayName = "Classnames Override";
                description = "Must be an ARRAY e.g. ['class1','class2']";
                typeName = "STRING";
                defaultValue = "[ADMIRAL]";
            };
            class Unit_Amount {
                displayName = "Total Amount of Units";
                description = "Maxmimum number of chase units spawned";
                typeName = "NUMBER";
                defaultValue = 20;
            };
            class Max_Distance {
                displayName = "Max Spawn Range";
                description = "Furthest away a unit can spawn";
                typeName = "NUMBER";
                defaultValue = 500;
            };
            class Min_Distance {
                displayName = "Min Spawn Range";
                description = "Closest a unit can spawn (Use with caution!)";
                typeName = "NUMBER";
                defaultValue = 300;
            };
            class Waypoint_Accuracy {
                displayName = "Waypoint Accuracy";
                description = "How close to the chosen target the AI will move in metres (Minimum: 10!)";
                typeName = "NUMBER";
                defaultValue = 50;
            };
            class Spawn_Time {
                displayName = "Unit Spawn Time";
                description = "How long between unit spawns (Minimum: 1!)";
                typeName = "NUMBER";
                defaultValue = 5;
            };
            class Allow_NVGs {
                displayName = "Allow NVGs";
                description = "Will add/leave existing NVGs or remove";
                typeName = "BOOL";
                defaultValue = 1;
            };
            class Allow_BuildingSearch {
                displayName = "Allow Building Search";
                description = "Will POSSIBLY allow AI to enter buildings. WILL OVERRIDE WP Accuracy if target in a building";
                typeName = "BOOL";
                defaultValue = 0;
            };
            class Force_Flashlights {
                displayName = "Force flashlights";
                description = "Equip the chase units with flashlights and force them on";
                typeName = "BOOL";
                defaultValue = 0;
            };
        };
    };
};
