class CfgVehicles {
    class ARK_Module;
    class ARK_ACE_Rearm: ARK_Module {
        scope = 2;
        displayName = "Inhouse - Allow rearm";
        function = QFUNC(enableRearm); // Function has to be called this way otherwise it will error.
        class ModuleDescription {
            description = "Allows the synced vehicles to rearm other vehicles";
        };
    };
};
