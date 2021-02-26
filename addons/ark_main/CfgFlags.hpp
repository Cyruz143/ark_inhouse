class FlagCarrier_Asym;
class ARK_Flag: FlagCarrier_Asym {
    author = "ARK";
    displayName = "Flag (ARK)";
    scope = 2;
    scopeCurator = 2;
    editorPreview = "\x\ark\addons\ark_main\resources\flags\ark_flag.jpg";
    class EventHandlers {
        init = "(_this #0) setFlagTexture '\x\ark\addons\ark_main\resources\flags\ark_flag.paa'";
    };
};

class Rhod_Flag: ARK_Flag {
    displayName = "Flag (Rhodesia)";
    editorPreview = "\x\ark\addons\ark_main\resources\flags\rhod_flag.jpg";
    class EventHandlers {
        init = "(_this #0) setFlagTexture '\x\ark\addons\ark_main\resources\flags\rhod_flag.paa'";
    };
};

class CH_Flag: ARK_Flag {
    displayName = "Flag (China)";
    editorPreview = "\x\ark\addons\ark_main\resources\flags\china_flag.jpg";
    class EventHandlers {
        init = "(_this #0) setFlagTexture '\x\ark\addons\ark_main\resources\flags\china_flag.paa'";
    };
};

class UKR_Flag: ARK_Flag {
    displayName = "Flag (Ukraine)";
    editorPreview = "\x\ark\addons\ark_main\resources\flags\ukr_flag.jpg";
    class EventHandlers {
        init = "(_this #0) setFlagTexture '\x\ark\addons\ark_main\resources\flags\ukr_flag.paa'";
    };
};