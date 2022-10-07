class CfgWeapons {
    class NVGoggles;
    class NVGoggles_AI: NVGoggles {
        author = "ARK";
        descriptionShort = "Night Vision Goggles (Hidden)";
        displayName = "NV Goggles (Hidden)";
        model = "\A3\Weapons_F\empty.p3d";
        modelOptics = "\A3\weapons_f\reticle\optics_night";
        picture = "\A3\Weapons_F\Data\UI\gear_nvg_CA.paa";
        scope = 1;
            class ItemInfo {
                hmdType = 0;
                mass = 20;
                modelOff = "\A3\Weapons_F\empty.p3d";
                type = 616;
                uniformModel = "\A3\Weapons_F\empty.p3d";
            };
    };
    class NVGoggles_Thermal: NVGoggles {
        author = "ARK";
        descriptionShort = "Thermal Vision Goggles (Hidden)";
        displayName = "TI Goggles (Hidden)";
        model = "\A3\Weapons_F\empty.p3d";
        modelOptics = "\A3\weapons_f\reticle\optics_night";
        picture = "\A3\Weapons_F\Data\UI\gear_nvg_CA.paa";
        scope = 1;
        thermalMode[]={0,1,2,3,4,5};
        visionMode[]=
        {
            "Normal",
            "NVG",
            "TI"
        };
        class ItemInfo {
            hmdType = 0;
            mass = 20;
            modelOff = "\A3\Weapons_F\empty.p3d";
            type = 616;
            uniformModel = "\A3\Weapons_F\empty.p3d";
        };
    };
};
