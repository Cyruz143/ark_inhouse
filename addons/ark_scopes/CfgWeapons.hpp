class CfgWeapons {
    class ItemInfo;
    class InventoryOpticsItem_Base_F;
    class ItemCore;

    class ARK_m145: ItemCore {
        scope = 2;
        inertia = 0.1;
        author = "ARK";
        displayName = "Elcan M145";
        picture = "\RH_acc\inv\ui\m145_ui_ca.paa";
        model = "\RH_acc\RH_m145.p3d";
        descriptionShort = "Elcan M145 Machine Gun Optic<br/>Magnification: 2x";
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
                    CQB_VALUES
                };
                class m145 {
                    opticsID = 2;
                    useModelOptics = 1;
                    SCOPE_VALUES
                    memoryPointCamera = "opticView";
                    visionMode[] = {"Normal"};
                    cameraDir = "";
                };
            };
        };
    };

    class ARK_c79_2d: ItemCore {
        scope = 2;
        inertia = 0.1;
        author = "ARK";
        displayName = "Elcan C79";
        picture = "\RH_acc\inv\ui\c79_ui_ca.paa";
        model = "\RH_acc\RH_c79.p3d";
        descriptionShort = "Elcan C79 Optical sight<br/>Magnification: 2x";
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
                    CQB_VALUES
                };
                class c79 {
                    opticsID = 2;
                    useModelOptics = 1;
                    SCOPE_VALUES
                    memoryPointCamera = "opticView";
                    visionMode[] = {"Normal"};
                    cameraDir = "";
                };
            };
        };
    };

    class ARK_anpvs4: ItemCore {
        scope = 2;
        inertia = 0.1;
        author = "ARK";
        displayName = "AN/PVS4";
        picture = "\RH_acc\inv\ui\anpvs4_ui_ca.paa";
        model = "\RH_acc\RH_anpvs4.p3d";
        descriptionShort = "Night Vision Sight<br/>Magnification: 2x";
        class ItemInfo: InventoryOpticsItem_Base_F {
            mass = 10;
            optics = 1;
            modelOptics = "\RH_acc\RH_anpvs4_optic";
            class OpticsModes {
                class pvs4 {
                    opticsID = 1;
                    useModelOptics = 1;
                    SCOPE_VALUES
                    memoryPointCamera = "eye";
                    visionMode[] = {"NVG"};
                    cameraDir = "";
                };
            };
        };
    };

    class ARK_optic_ACOG: ItemCore {
        author = "ARK";
        dlc = "CUP_Weapons";
        scope = 2;
        inertia = 0.1;
        displayName = "Trijicon ACOG TA31F";
        picture = "\CUP\Weapons\CUP_Weapons_West_Attachments\ACOG_Generic\data\UI\gear_acco_ACOG_ca.paa";
        model = "CUP\Weapons\CUP_Weapons_West_Attachments\ACOG_generic\CUP_acog.p3d";
        descriptionShort = "Advanced Combat Optical Gunsight";
        class ItemInfo: InventoryOpticsItem_Base_F {
            mass = 7;
            optics = 1;
            modelOptics = "CUP\Weapons\CUP_Weapons_West_Attachments\ACOG_Generic\CUP_ACOG_optic.p3d";
            class OpticsModes {
                class ACOG {
                    opticsID = 1;
                    useModelOptics = 1;
                    SCOPE_VALUES
                    memoryPointCamera = "opticView";
                    visionMode[] = {"Normal"};
                    cameraDir = "";
                };
                class Kolimator: ACOG
                {
                    opticsID = 2;
                    useModelOptics = 0;
                    CQB_VALUES
                };
            };
        };
    };

    class ARK_optic_RCO: ItemCore {
        author = "ARK";
        dlc = "CUP_Weapons";
        scope = 2;
        inertia = 0.1;
        displayName = "Trijicon ACOG";
        picture = "\CUP\Weapons\CUP_Weapons_West_Attachments\ACOG_RCO\data\ui\gear_acco_ACOG_RCO_ca.paa";
        model = "\CUP\Weapons\CUP_Weapons_West_Attachments\ACOG_RCO\CUP_acog_2.p3d";
        descriptionShort = "Advanced Combat Optical Gunsight";
        class ItemInfo: InventoryOpticsItem_Base_F {
            mass = 10;
            optics = 1;
            modelOptics = "\CUP\Weapons\CUP_Weapons_West_Attachments\ACOG_RCO\CUP_2Dscope_Acog_4x32.p3d";
            class OpticsModes {
                class ACOG {
                    opticsID = 1;
                    useModelOptics = 1;
                    SCOPE_VALUES
                    memoryPointCamera = "opticView";
                    visionMode[] = {"Normal"};
                    cameraDir = "";
                };
                class Kolimator: ACOG {
                    opticsID = 2;
                    useModelOptics = 0;
                    CQB_VALUES
                };
            };
        };
    };

    class ARK_optic_SUSAT: ItemCore {
        author = "ARK";
        dlc = "CUP_Weapons";
        scope = 2;
        inertia = 0.1;
        displayName = "SUSAT L9A1";
        picture = "\CUP\Weapons\CUP_Weapons_West_Attachments\SUSAT\data\ui\gear_acco_SUSAT_ca.paa";
        model = "\CUP\Weapons\CUP_Weapons_West_Attachments\SUSAT\CUP_SUSAT.p3d";
        descriptionShort = "Medium range weapon optic";
        class ItemInfo: InventoryOpticsItem_Base_F {
            opticType = 1;
            mass = 9;
            RMBhint = "Advanced Rifle Combat Optics";
            optics = 1;
            modelOptics = "\A3\Weapons_F\empty";
            class OpticsModes {
                class SUSAT {
                    opticsID = 2;
                    useModelOptics = 0;
                    SCOPE_VALUES
                    memoryPointCamera = "opticView";
                    visionMode[] = {};
                    cameraDir = "";
                };
                class Kolimator: SUSAT {
                    opticsID = 2;
                    useModelOptics = 0;
                    CQB_VALUES
                };
            };
        };
    };

    class ARK_optic_ELCAN_SpecterDR: ItemCore {
        author = "ARK";
        dlc = "CUP_Weapons";
        scope = 2;
        inertia = 0.1;
        displayName = "Elcan SpecterDR";
        picture = "\CUP\Weapons\CUP_Weapons_West_Attachments\Elcan_SpecterDR\data\ui\gear_acco_specterDR_ca.paa";
        model = "\CUP\Weapons\CUP_Weapons_West_Attachments\Elcan_SpecterDR\CUP_Elcan_SpecterDR.p3d";
        descriptionShort = "Medium-Range scope";
        class ItemInfo: InventoryOpticsItem_Base_F {
            mass = 10;
            optics = 1;
            modelOptics = "\CUP\Weapons\CUP_Weapons_West_Attachments\Elcan_SpecterDR\CUP_SpecterDR_556_optic_4x.p3d";
            class OpticsModes {
                class Specter {
                    opticsID = 1;
                    useModelOptics = 1;
                    SCOPE_VALUES
                    memoryPointCamera = "opticView";
                    visionMode[] = {"Normal"};
                    cameraDir = "";
                };
                class Ironsights: Specter
                {
                    opticsID = 2;
                    useModelOptics = 0;
                    CQB_VALUES
                };
            };
        };
    };

    class ARK_optic_ElcanM145: ItemCore {
        author = "ARK";
        dlc = "CUP_Weapons";
        scope = 2;
        inertia = 0.1;
        displayName = "Elcan M145";
        picture = "\CUP\Weapons\CUP_Weapons_West_Attachments\Elcan_M145\data\UI\gear_acco_m145_ca.paa";
        model = "CUP\Weapons\CUP_Weapons_West_Attachments\Elcan_M145\CUP_M145.p3d";
        descriptionShort = "Medium-Range scope";
        class ItemInfo: InventoryOpticsItem_Base_F {
            mass = 8;
            optics = 1;
            modelOptics = "\CUP\Weapons\CUP_Weapons_West_Attachments\Elcan_M145\CUP_M145_optic.p3d";
            class OpticsModes {
                class M145 {
                    opticsID = 1;
                    useModelOptics = 1;
                    SCOPE_VALUES
                    memoryPointCamera = "opticView";
                    visionMode[] = {"Normal"};
                    cameraDir = "";
                };
            };
        };
    };

    class ARK_optic_PechenegScope: ItemCore {
        author = "ARK";
        dlc = "CUP_Weapons";
        scope = 2;
        inertia = 0.1;
        displayName = "Pecheneg 1P78 Scope";
        picture = "\CUP\Weapons\CUP_Weapons_East_Attachments\Pecheneg_Scope\data\ui\gear_acco_pechenegscope_ca.paa";
        model = "CUP\Weapons\CUP_Weapons_East_Attachments\Pecheneg_Scope\CUP_pkp_scope.p3d";
        descriptionShort = "Medium range Russian optic";
        class ItemInfo: InventoryOpticsItem_Base_F {
            mass = 13;
            optics = 1;
            modelOptics = "CUP\Weapons\CUP_Weapons_East_Attachments\Pecheneg_Scope\CUP_2Dscope_Pecheneg.p3d";
            class OpticsModes {
                class Scope {
                    opticsID = 1;
                    useModelOptics = 1;
                    SCOPE_VALUES
                    memoryPointCamera = "opticsView";
                    visionMode[] = {"Normal"};
                    cameraDir = "";
                };
            };
        };
    };

};