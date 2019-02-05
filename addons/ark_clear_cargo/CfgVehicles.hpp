class CfgVehicles {
    class ARK_Module;
    class ARK_Clear_Vehicle: ARK_Module {
        scope = 2;
        displayName = "Inhouse - Clear Vehicle Cargo";
        function = "ark_clear_cargo_module_clearVehicle";
        class ModuleDescription {
            description = "Clears vehicles of their default cargo";
        };
    };
};