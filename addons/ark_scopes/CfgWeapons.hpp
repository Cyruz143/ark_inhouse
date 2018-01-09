class CfgWeapons {
    class ItemInfo;
    class InventoryOpticsItem_Base_F;
    class ItemCore;
    class ARK_m145: ItemCore {
        scope = 2;
        author = "ARK";
        displayName = "Elcan M145 (2x)";
        picture = "\RH_acc\inv\ui\m145_ui_ca.paa";
        model = "\RH_acc\RH_m145.p3d";
        descriptionShort = "Elcan M145 Machine Gun Optic<br/>Magnification: 2x";
        weaponInfoType = "RscWeaponZeroing";
        class ItemInfo: InventoryOpticsItem_Base_F {
            opticType = 1;
            mass = 4;
            RMBhint = "m145";
            optics = 1;
            modelOptics = "\RH_acc\RH_m145_2d";
            class OpticsModes {
                class m145cqb {
                    opticsID = 1;
                    useModelOptics = 0;
                    opticsPPEffects[] = {""};
                    opticsFlare = 0;
                    opticsDisablePeripherialVision = 0;
                    opticsZoomMin = 0.375;
                    opticsZoomMax = 1;
                    opticsZoomInit = 0.75;
                    memoryPointCamera = "eye";
                    visionMode[] = {};
                    distanceZoomMin = 100;
                    distanceZoomMax = 100;
                };
                class m145 {
                    opticsID = 2;
                    useModelOptics = 1;
                    opticsPPEffects[] = {"OpticsCHAbera5","OpticsBlur5"};
                    opticsFlare = 0;
                    opticsDisablePeripherialVision = 0;
                    opticsZoomMin = 0.75;
                    opticsZoomMax = 1.25;
                    opticsZoomInit = 0.75;
                    memoryPointCamera = "opticView";
                    visionMode[] = {"Normal"};
                    distanceZoomMin = 300;
                    distanceZoomMax = 300;
                };
            };
        };
        inertia = 0.1;
    };

    class ARK_c79_2d: ItemCore {
        scope = 2;
        author = "ARK";
        displayName = "Elcan C79 2D (2x)";
        picture = "\RH_acc\inv\ui\c79_ui_ca.paa";
        model = "\RH_acc\RH_c79.p3d";
        descriptionShort = "Elcan C79 Optical sight<br/>Magnification: 2x";
        weaponInfoType = "RscWeaponZeroing";
        class ItemInfo: InventoryOpticsItem_Base_F {
            opticType = 1;
            mass = 4;
            RMBhint = "c79";
            optics = 1;
            modelOptics = "\RH_acc\RH_c79_2d";
            class OpticsModes {
                class c79cqb {
                    opticsID = 1;
                    useModelOptics = 0;
                    opticsPPEffects[] = {""};
                    opticsFlare = 0;
                    opticsDisablePeripherialVision = 0;
                    opticsZoomMin = 0.375;
                    opticsZoomMax = 1;
                    opticsZoomInit = 0.75;
                    memoryPointCamera = "eye";
                    visionMode[] = {};
                    distanceZoomMin = 100;
                    distanceZoomMax = 100;
                    distanceZoomMax = 100;
                };
                class c79 {
                    opticsID = 2;
                    useModelOptics = 1;
                    opticsPPEffects[] = {"OpticsCHAbera5","OpticsBlur5"};
                    opticsFlare = 0;
                    opticsDisablePeripherialVision = 0;
                    opticsZoomMin = 0.75;
                    opticsZoomMax = 1.25;
                    opticsZoomInit = 0.75;
                    discreteDistance[] = {200,300,400,500,600,700,800};
                    discreteDistanceInitIndex = 0;
                    memoryPointCamera = "opticView";
                    visionMode[] = {"Normal"};
                    distanceZoomMin = 200;
                    distanceZoomMax = 800;
                };
            };
        };
        inertia = 0.1;
    };

    class ARK_anpvs4: ItemCore {
        scope = 2;
        author = "ARK";
        displayName = "AN/PVS4 (2x)";
        picture = "\RH_acc\inv\ui\anpvs4_ui_ca.paa";
        model = "\RH_acc\RH_anpvs4.p3d";
        descriptionShort = "Night Vision Sight<br/>Magnification: 2x";
        class ItemInfo: InventoryOpticsItem_Base_F {
            mass = 10;
            optics = 1;
            modelOptics = "\RH_acc\RH_anpvs4_optic";
            class OpticsModes {
                class pvs4cqb {
                    opticsID = 1;
                    useModelOptics = 0;
                    opticsPPEffects[] = {""};
                    opticsFlare = 0;
                    opticsDisablePeripherialVision = 0;
                    opticsZoomMin = 0.375;
                    opticsZoomMax = 1;
                    opticsZoomInit = 0.75;
                    memoryPointCamera = "eye";
                    visionMode[] = {};
                    distanceZoomMin = 100;
                    distanceZoomMax = 100;
                    distanceZoomMax = 100;
                };
                class pvs4scope {
                    opticsID = 1;
                    useModelOptics = 1;
                    opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
                    opticsZoomMin = 0.75;
                    opticsZoomMax = 1.25;
                    opticsZoomInit = 0.75;
                    memoryPointCamera = "eye";
                    visionMode[] = {"NVG"};
                    opticsFlare = 1;
                    opticsDisablePeripherialVision = 1;
                    distanceZoomMin = 300;
                    distanceZoomMax = 300;
                    cameraDir = "";
                };
            };
        };
        inertia = 0.1;
    };
};