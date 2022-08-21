class Logic;
class Module_F : Logic {
    class ModuleDescription {};
};

class ARK_Module: Module_F {
    scope = 1;
    displayName = "ARK Module";
    icon = "\x\ark\addons\ark_main\resources\ark_star.paa";
    category = "ARK";
    function = "";
    functionPriority = 1;
    isTriggerActivated = 0;
    isGlobal = 0;
    isDisposable = 1;
    is3DEN = 0;
    vehicleClass = "Modules";
    class ModuleDescription: ModuleDescription {
        description = "ARK Module";
    };
};