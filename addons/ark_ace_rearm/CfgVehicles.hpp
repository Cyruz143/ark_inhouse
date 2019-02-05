class CfgVehicles {
    class ARK_Module;
    class ARK_ACE_Rearm: ARK_Module {
        scope = 2;
        displayName = "Inhouse - Allow rearm";
        function = "ark_ace_rearm_module_enableRearm";
        class ModuleDescription {
            description = "Allows the synced vehicles to rearm other vehicles";
        };
    };
};