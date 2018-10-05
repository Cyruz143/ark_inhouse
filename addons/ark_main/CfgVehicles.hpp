class CfgVehicles {
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
        isDisposable = 0;
        vehicleClass = "Modules";
        class ModuleDescription: ModuleDescription {
            description = "ARK Module";
        };
    };

    class FlagCarrier_Asym;
    class ARK_Flag: FlagCarrier_Asym {
        author = "ARK";
        displayName = "ARK Flag"
        scope = 2;
        scopeCurator = 2;
        editorPreview = "\x\ark\addons\ark_main\resources\ark_flag.jpg"
        class EventHandlers {
            init = "(_this #0) setFlagTexture '\x\ark\addons\ark_main\resources\ark_flag.paa'";
        };
    };
};