class CfgVehicles {
    class ARK_Module;
    class ARK_ACE_Rearm: ARK_Module {
        scope = 2;
        displayName = "Inhouse - Allow rearm";
        function = QUOTE(FUNC(enableRearm));
        class ModuleDescription {
            description = "Allows the synced vehicles to rearm other vehicles";
        };
    };
};
