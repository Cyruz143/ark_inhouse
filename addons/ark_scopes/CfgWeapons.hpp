class CfgWeapons {
    class ItemInfo;
    class InventoryOpticsItem_Base_F;
    class ItemCore;
    class ARK_optic_ElcanM145: ItemCore {
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
                    memoryPointCamera = "eye";
                    visionMode[] = {};
                    distanceZoomMin = 100;
                    distanceZoomMax = 100;
                    SCOPE_CQB_VALUES
                };
                class m145 {
                    opticsID = 2;
                    useModelOptics = 1;
                    opticsPPEffects[] = {"OpticsCHAbera5","OpticsBlur5"};
                    opticsFlare = 0;
                    opticsDisablePeripherialVision = 0;
                    memoryPointCamera = "opticView";
                    visionMode[] = {"Normal"};
                    distanceZoomMin = 300;
                    distanceZoomMax = 300;
                    SCOPE_ZOOM_VALUES
                };
            };
        };
        inertia = 0.1;
    };
};