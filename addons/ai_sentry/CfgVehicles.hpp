class CfgVehicles {
    class ARK_Module;
    class ARK_Make_Sentry: ARK_Module {
        scope = 2;
        displayName = "Inhouse - Make Sentry";
        function = "ark_ai_sentry_fnc_makeSentry";
        class ModuleDescription {
            description = "Set options to make an EI sentry";
        };
        class Arguments {
            class Enabled_Nightvision {
                displayName = "Enabled Nightvision";
                description = "Enables or Disables nightvision for the sentry";
                typeName = "BOOL";
                defaultValue = 1;
            };
        };
    };
};
