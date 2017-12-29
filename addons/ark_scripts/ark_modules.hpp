// ark_modules
// Contains modules config

class ARK_Module;
class ARK_Enable_Deploy: ARK_Module {
    scope = 2;
    displayName = "Enable Group Deploy";
    function = "ark_deploy_module_init";
    class ModuleDescription {
        description = "Enables Group Deploy";
    };
    class Arguments {
        class Pre_Safety {
            displayName = "Pre Safety Deploy Factions";
            description = "The factions which will deploy before safety is off. (WEST, EAST, RESISTANCE, CIVILIAN). Pass as an array of sides, not strings.";
            typeName = "STRING";
            defaultValue = "[WEST]";
        };
        class Post_Safety {
            displayName = "Post Safety Deploy Factions";
            description = "The factions which will deploy after safety is off. (WEST, EAST, RESISTANCE, CIVILIAN). Pass as an array of sides, not strings.";
            typeName = "STRING";
            defaultValue = "[EAST]";
        };
    };
};