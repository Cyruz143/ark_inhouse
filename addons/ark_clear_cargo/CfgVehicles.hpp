class CfgVehicles {
    class ARK_Module;
    class ARK_Clear_Vehicle: ARK_Module {
        scope = 2;
        displayName = "Clear Vehicle Cargo";
        function = "ark_module_clearCargo_clearVehicle";
        class ModuleDescription {
            description = "Clears vehicles of their default cargo";
        };
    };
};