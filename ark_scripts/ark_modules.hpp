// ark_modules
// Contains modules config

class Logic;
class Module_F: Logic {
    class ModuleDescription {};
};

class ARK_Module: Module_F {
    scope = 1;
    displayName = "ARK Module";
    icon = ADDON_PATH(resources\ark_star.paa);
    category = "ARK";
    function = "";
    functionPriority = 1;
    isTriggerActivated = 0;
    isGlobal = 0;
    isDisposable = 0;
    vehicleClass = "Modules"; // ?
    class ModuleDescription: ModuleDescription {
        description = "ARK Module";
    };
};

class ARK_Clear_Vehicle: ARK_Module {
    scope = 2;
    condition = "ark_scripts_isInitialized"; // testing 
    displayName = "Clear Vehicle Cargo";
    function = "ark_module_clear_vehicle";
    class ModuleDescription {
        description = "Clears vehicles of their default cargo";
    };
};

class ARK_Make_Sentry: ARK_Module {
    scope = 2;
    displayName = "Make Sentry";
    function = "ark_module_make_sentry";
    class ModuleDescription {
        description = "Clears vehicles of their default cargo";
    };
    class Arguments {
        class Stance {
            displayName = "Stance";
            description = "The stance the sentry will take. ('UP', 'MIDDLE', 'DOWN')";
            typeName = "STRING";
            defaultValue = "MIDDLE";
        };
        class Combat_Mode {
            displayName = "Combat Mode";
            description = "The combat the sentry will use. ('RED', 'YELLOW', etc)";
            typeName = "STRING";
            defaultValue = "YELLOW";
        };
        class Behaviour {
            displayName = "Behaviour";
            description = "The behaviour the sentry will use. ('COMBAT', 'AWARE', etc)";
            typeName = "STRING";
            defaultValue = "AWARE";
        };
        class Skill {
            displayName = "Skill";
            description = "The skill level of the sentry";
            typeName = "NUMBER";
            defaultValue = 0.2;
        };
        class Disabled_Functionality {
            displayName = "Disabled Functionality";
            description = "The modes that the sentry will have disabled. Pass an array of strings. (['SUPPRESSION'], ['SUPPRESSION', 'AUTOCOMBAT'] etc)";
            typeName = "STRING";
            defaultValue = "[""COVER""]";
        };
    };
};

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