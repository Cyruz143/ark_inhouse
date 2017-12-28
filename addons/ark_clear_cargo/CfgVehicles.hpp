class Logic;
class Module_F: Logic {
    class ModuleDescription {};
};

class ARK_Module;
class ARK_Clear_Vehicle: ARK_Module {
    scope = 2;
    condition = "";
    displayName = "Clear Vehicle Cargo";
    function = "ark_module_clear_vehicle";
    class ModuleDescription {
        description = "Clears vehicles of their default cargo";
    };
};