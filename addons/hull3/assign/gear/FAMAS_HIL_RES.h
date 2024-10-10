class FAMAS_HIL_RES {
    class Rifleman {
        primaryWeapon = "CUP_Famas_F1";
        primaryWeaponItems[] = {};
        secondaryWeapon = "";
        secondaryWeaponItems[] = {};
        handgunWeapon = "";
        handgunItems[] = {};
        uniformWeapons[] = {};
        vestWeapons[] = {};
        backpackWeapons[] = {};
        uniformMagazines[] = {{"ACE_Chemlight_HiRed", 2}};
        vestMagazines[] = {
            {"CUP_25Rnd_556x45_Famas", 6},
            {"CUP_25Rnd_556x45_Famas_Tracer_Red", 2}
        };
        backpackMagazines[] = {
            {"HandGrenade", 2},
            {"SmokeShell", 2},
            {"CUP_25Rnd_556x45_Famas", 4},
            {"CUP_25Rnd_556x45_Famas_Tracer_Red", 2}
        };
        basicAssignItems[] = {"ItemMap", "ItemCompass", "ItemWatch"};
        assignItems[] = {};
        binocular = "";
        uniformItems[] = {
            {"ACE_Flashlight_KSF1", 1},
            {"ACE_wirecutter", 1},
            {"ACE_EntrenchingTool", 1}
        };
        vestItems[] = {};
        backpackItems[] = {};
        uniformRadios[] = {"ACRE_PRC343"};
        vestRadios[] = {};
        backpackRadios[] = {};
        uniformMedicalItems[] = {
            {"ACE_fieldDressing", 10},
            {"ACE_tourniquet", 2}
        };
        vestMedicalItems[] = {};
        backpackMedicalItems[] = {};
        code = "";
        headGear = "";
        uniform = "";
        goggles = "";
        vest = "";
        backpack = "";
    };

    class Leader : Rifleman {
        handgunWeapon = "CUP_hgun_M9";
        vestMagazines[] = {
            {"CUP_25Rnd_556x45_Famas", 4},
            {"CUP_25Rnd_556x45_Famas_Tracer_Red", 1},
            {"CUP_15Rnd_9x19_M9", 3}
        };
        backpackMagazines[] = {
            {"HandGrenade", 2},
            {"SmokeShell", 1},
            {"CUP_25Rnd_556x45_Famas", 4},
            {"CUP_25Rnd_556x45_Famas_Tracer_Red", 2}
        };
        assignItems[] = {"ItemGPS"};
        binocular = "Binocular";
    };

    class Officer : Leader {
        assignItems[] = {"ItemGPS"};
        binocular = "ACE_VectorDay";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class Crew : Rifleman {
        uniformMagazines[] = {
            {"ACE_Chemlight_HiRed", 2},
            {"SmokeShell", 1}
        };
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        vestMagazines[] = {{"CUP_25Rnd_556x45_Famas", 4}};
        backpackMagazines[] = {};
        assignItems[] = {"ItemGPS", "ACE_NVG_Wide"};
    };

    class CO : Officer {
    };

    class XO : CO {
        backpackRadios[] = {"ACRE_PRC117F"};
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        vestMagazines[] = {
            {"CUP_25Rnd_556x45_Famas", 6},
            {"CUP_25Rnd_556x45_Famas_Tracer_Red", 2},
            {"SmokeShell", 4}
        };
        backpackMagazines[] = {
            {"SmokeShellBlue", 4},
            {"CUP_25Rnd_556x45_Famas", 2}
        };
        assignItems[] = {"ItemGPS"};
        binocular = "Binocular";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        backpackMedicalItems[] = {
            {"ACE_fieldDressing", 30},
            {"ACE_morphine", 30},
            {"ACE_epinephrine", 30},
            {"ACE_bloodIV_500", 24},
            {"ACE_splint", 4}
        };
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
        primaryWeapon = "CUP_lmg_M249_E1";
        vestMagazines[] = {{"CUP_200Rnd_TE4_Red_Tracer_556x45_M249", 2}};
        backpackMagazines[] = {
            {"HandGrenade", 2},
            {"SmokeShell", 1},
            {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249", 6}
        };
    };

    class AAR : Rifleman {
        backpackMagazines[] = {
            {"HandGrenade", 2},
            {"SmokeShell", 1},
            {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249", 4}
        };
        binocular = "Binocular";
    };

    class RAT : Rifleman {
        secondaryWeapon = "CUP_launch_APILAS";
        vestMagazines[] = {
            {"CUP_25Rnd_556x45_Famas", 6},
            {"CUP_25Rnd_556x45_Famas_Tracer_Red", 2}
        };
        backpackMagazines[] = {
            {"HandGrenade", 2},
            {"SmokeShell", 1},
            {"CUP_25Rnd_556x45_Famas", 4}
        };
    };

    class MMGG : Rifleman {
        primaryWeapon = "CUP_lmg_FNMAG";
        primaryWeaponItems[] = {};
        vestMagazines[] = {{"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", 1}};
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", 3}
        };
    };

    class MMGAG : Rifleman {
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_25Rnd_556x45_Famas_Tracer_Red", 2},
            {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", 3}
        };
        binocular = "ACE_VectorDay";
        assignItems[] = {"ItemGPS"};
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class HMGG : Rifleman {
        backpack = "CUP_B_M2_Gun_Bag";
        backpackMagazines[] = {};
        backpackMedicalItems[] = {};
    };

    class HMGAG : HMGG {
        backpack = "CUP_B_M2_MiniTripod_Bag";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        binocular = "ACE_VectorDay";
        assignItems[] = {"ItemGPS"};
    };

    class HMGAC : Rifleman {
    };

    class MATG : RAT {
        secondaryWeapon = "CUP_launch_Mk153Mod0";
        secondaryWeaponItems[] = {"CUP_SMAW_HEAA_M", "CUP_optic_SMAW_Scope"};
        backpackMagazines[] = {
            {"CUP_SMAW_HEAA_M", 2},
            {"CUP_SMAW_HEDP_M", 1},
            {"CUP_SMAW_Spotting", 2}
        };
    };

    class MATAG : Rifleman {
        backpackMagazines[] = {
            {"CUP_SMAW_HEAA_M", 2},
            {"CUP_SMAW_HEDP_M", 1}
        };
        binocular = "ACE_VectorDay";
        assignItems[] = {"ItemGPS"};
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class MATAC : MATAG {
        assignItems[] = {};
        binocular = "Binocular";
        uniformRadios[] = {"ACRE_PRC343"};
    };

    class HATG : MATG {
        secondaryWeapon = "CUP_launch_M47";
        secondaryWeaponItems[] = {"CUP_Dragon_EP1_M"};
        backpackMagazines[] = {{"CUP_Dragon_EP1_M", 1}};
    };

    class HATAG : MATAG {
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"CUP_Dragon_EP1_M", 1}
        };
    };

    class HATAC : HATAG {
        assignItems[] = {};
        binocular = "Binocular";
        uniformRadios[] = {"ACRE_PRC343"};
    };

    class DHATG : Rifleman {
        backpack = "CUP_B_Tow_Gun_Bag";
        backpackMagazines[] = {};
        backpackMedicalItems[] = {};
    };

    class DHATAG : HMGG {
        backpack = "CUP_B_TOW_Tripod_Bag";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        uniformMagazines[] = {
            {"ACE_Chemlight_HiRed", 2},
            {"SmokeShell", 1}
        };
        binocular = "ACE_VectorDay";
        assignItems[] = {"ItemGPS"};
    };

    class DHATAC : Rifleman {
    };

    class SAMG : Rifleman {
        secondaryWeapon = "CUP_launch_FIM92Stinger";
        secondaryWeaponItems[] = {"CUP_Stinger_M"};
        backpackMagazines[] = {{"CUP_Stinger_M", 1}};
    };

    class SAMAG : Rifleman {
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"CUP_Stinger_M", 1}
        };
        uniformMagazines[] = {
            {"ACE_Chemlight_HiRed", 2},
            {"SmokeShell", 1}
        };
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        binocular = "ACE_VectorDay";
        assignItems[] = {"ItemGPS"};
    };

    class SAMAC : SAMAG {
        uniformRadios[] = {"ACRE_PRC343"};
        binocular = "Binocular";
        assignItems[] = {};
    };

    class GMGG : Rifleman {
        backpack = "CUP_B_Mk19_Gun_Bag";
        backpackMagazines[] = {};
        backpackMedicalItems[] = {};
    };

    class GMGAG : HMGG {
        backpack = "CUP_B_Mk19_Tripod_Bag";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        uniformMagazines[] = {
            {"ACE_Chemlight_HiRed", 2},
            {"SmokeShell", 1}
        };
        binocular = "ACE_VectorDay";
        assignItems[] = {"ItemGPS"};
    };

    class GMGAC : Rifleman {
    };

    class MTRG : Rifleman {
        backpack = "CUP_B_M252_Gun_Bag";
        backpackMagazines[] = {};
        backpackMedicalItems[] = {};
    };

    class MTRAG : MTRG {
        backpack = "CUP_B_M252_Bipod_Bag";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        uniformMagazines[] = {
            {"ACE_Chemlight_HiRed", 2},
            {"SmokeShell", 1}
        };
        binocular = "ACE_VectorDay";
        assignItems[] = {"ItemGPS"};
    };

    class MTRAC : Rifleman {
    };

    class ENG : Rifleman {
        backpackMagazines[] = {
            {"DemoCharge_Remote_Mag", 3},
            {"SLAMDirectionalMine_Wire_Mag", 2}
        };
        assignItems[] = {"ItemGPS"};
        vestItems[] = {
            {"ACE_DefusalKit", 1},
            {"ACE_M26_Clacker", 1}
        };
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class ENGA : ENG {
        uniformRadios[] = {"ACRE_PRC343"};
    };

    class SN : Rifleman {
        primaryWeapon = "CUP_srifle_M21_ris";
        handgunWeapon = "CUP_hgun_M9";
        primaryWeaponItems[] = {"CUP_optic_LeupoldMk4", "CUP_bipod_Harris_1A2_L_BLK"};
        vestMagazines[] = {
            {"CUP_20Rnd_762x51_DMR", 4},
            {"CUP_15Rnd_9x19_M9", 3}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_20Rnd_762x51_DMR", 3}
        };
        assignItems[] = {"ItemGPS"};
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class SP : Rifleman {
        binocular = "ACE_VectorDay";
        vestMagazines[] = {
            {"CUP_25Rnd_556x45_Famas", 4},
            {"CUP_25Rnd_556x45_Famas_Tracer_Red", 2}
        };
    };

    class VC : Crew {
        binocular = "ACE_VectorDay";
    };

    class VG : Crew {
    };

    class VD : Crew {
    };

    class P : Crew {
    };

    class PCM : P {
    };

    class Vehicle {
        weapons[] = {
            {"CUP_launch_APILAS", 4}
        };
        magazines[] = {
            {"CUP_25Rnd_556x45_Famas", 20},
            {"CUP_25Rnd_556x45_Famas_Tracer_Red", 10},
            {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249", 10},
            {"ACE_HandFlare_White", 15},
            {"HandGrenade", 5},
            {"SmokeShell", 5}
        };
        items[] = {{"ItemGPS", 1}};
        medicalItems[] = {
            {"ACE_fieldDressing", 50},
            {"ACE_splint", 12}
        };
    };

    class Car : Vehicle {
    };

    class Truck : Vehicle {
        weapons[] = {
            {"CUP_launch_APILAS", 10}
        };
        magazines[] = {
            {"CUP_25Rnd_556x45_Famas", 40},
            {"CUP_25Rnd_556x45_Famas_Tracer_Red", 20},
            {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249", 20},
            {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", 10},
            {"CUP_SMAW_HEAA_M", 5},
            {"CUP_Dragon_EP1_M", 5},
            {"SatchelCharge_Remote_Mag", 5},
            {"ACE_HandFlare_White", 15},
            {"HandGrenade", 10},
            {"SmokeShell", 10}
        };
        items[] = {
            {"ACE_M26_Clacker", 1},
            {"ItemGPS", 1}
        };
        medicalItems[] = {
            {"ACE_fieldDressing", 50},
            {"ACE_splint", 12}
        };
    };

    class Armored : Truck {
        weapons[] = {{"CUP_launch_APILAS", 10}};
        magazines[] = {
            {"CUP_25Rnd_556x45_Famas", 40},
            {"CUP_25Rnd_556x45_Famas_Tracer_Red", 20},
            {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249", 20},
            {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", 10},
            {"CUP_Dragon_EP1_M", 5},
            {"CUP_SMAW_HEAA_M", 5},
            {"SatchelCharge_Remote_Mag", 5},
            {"ACE_HandFlare_White", 15},
            {"HandGrenade", 10},
            {"SmokeShell", 10}
        };
        items[] = {
            {"ACE_M26_Clacker", 1},
            {"ItemGPS", 1}
        };
        medicalItems[] = {
            {"ACE_fieldDressing", 50},
            {"ACE_splint", 12}
        };
    };

};
