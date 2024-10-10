class FAL_LDF {
    class Rifleman {
        primaryWeapon = "CUP_arifle_FNFAL5061";
        primaryWeaponItems[] = {"CUP_acc_Flashlight"};
        secondaryWeapon = "";
        secondaryWeaponItems[] = {};
        handgunWeapon = "";
        handgunItems[] = {};
        uniformWeapons[] = {};
        vestWeapons[] = {};
        backpackWeapons[] = {};
        uniformMagazines[] = {
            {"HandGrenade", 1},
            {"ACE_Chemlight_HiRed", 2},
            {"SmokeShell", 1}
        };
        vestMagazines[] = {
            {"CUP_20Rnd_762x51_FNFAL_M", 6},
            {"CUP_20Rnd_TE1_Green_Tracer_762x51_FNFAL_M", 2}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_20Rnd_762x51_FNFAL_M", 4},
            {"CUP_20Rnd_TE1_Green_Tracer_762x51_FNFAL_M", 2}
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
        primaryWeapon = "CUP_arifle_FNFAL5061";
        handgunWeapon = "CUP_hgun_Browning_HP";
        vestMagazines[] = {
            {"CUP_20Rnd_762x51_FNFAL_M", 4},
            {"CUP_20Rnd_TE1_Green_Tracer_762x51_FNFAL_M", 2},
            {"CUP_13Rnd_9x19_Browning_HP", 3}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_20Rnd_762x51_FNFAL_M", 6},
            {"CUP_20Rnd_TE1_Green_Tracer_762x51_FNFAL_M", 2}
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
        primaryWeapon = "CUP_arifle_FNFAL";
        primaryWeaponItems[] = {};
        uniformMagazines[] = {
            {"ACE_Chemlight_HiRed", 2},
            {"SmokeShell", 1}
        };
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        vestMagazines[] = {{"CUP_20Rnd_762x51_FNFAL_M", 4}};
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
        primaryWeapon = "CUP_arifle_FNFAL5062";
        vestMagazines[] = {
            {"CUP_20Rnd_762x51_FNFAL_M", 6},
            {"CUP_20Rnd_TE1_Green_Tracer_762x51_FNFAL_M", 2},
            {"SmokeShell", 4}
        };
        backpackMagazines[] = {
            {"SmokeShellBlue", 4},
            {"CUP_20Rnd_762x51_FNFAL_M", 2}
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
        primaryWeapon = "CUP_arifle_FNFAL5060";
        primaryWeaponItems[] = {"CUP_bipod_FNFAL", "CUP_acc_Flashlight"};
        vestMagazines[] = {{"CUP_30Rnd_TE1_Green_Tracer_762x51_FNFAL_M", 2}};
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_30Rnd_TE1_Green_Tracer_762x51_FNFAL_M", 6}
        };
    };

    class AAR : Rifleman {
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_30Rnd_TE1_Green_Tracer_762x51_FNFAL_M", 4}
        };
        binocular = "Binocular";
    };

    class RAT : Rifleman {
        primaryWeapon = "CUP_arifle_FNFAL5062";
        secondaryWeapon = "CUP_launch_APILAS";
        vestMagazines[] = {
            {"CUP_20Rnd_762x51_FNFAL_M", 6},
            {"CUP_20Rnd_TE1_Green_Tracer_762x51_FNFAL_M", 2}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_20Rnd_762x51_FNFAL_M", 4}
        };
    };

    class MMGG : Rifleman {
        primaryWeapon = "CUP_lmg_M60E4_norail";
        primaryWeaponItems[] = {"CUP_optic_PechenegScope"};
        vestMagazines[] = {{"CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M", 1}};
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M", 3}
        };
    };

    class MMGAG : Rifleman {
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_20Rnd_TE1_Green_Tracer_762x51_FNFAL_M", 2},
            {"CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M", 3}
        };
        binocular = "ACE_VectorDay";
        assignItems[] = {"ItemGPS"};
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class HMGG : Rifleman {
        primaryWeapon = "CUP_arifle_FNFAL5062";
        backpack = "CUP_B_DShkM_Gun_Bag";
        backpackMagazines[] = {};
        backpackMedicalItems[] = {};
    };

    class HMGAG : HMGG {
        backpack = "CUP_B_DShkM_TripodLow_Bag";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        binocular = "ACE_VectorDay";
        assignItems[] = {"ItemGPS"};
    };

    class HMGAC : Rifleman {
    };

    class MATG : RAT {
        primaryWeapon = "CUP_arifle_FNFAL5062";
        secondaryWeapon = "CUP_launch_Mk153Mod0";
        secondaryWeaponItems[] = {"CUP_optic_SMAW_Scope", "CUP_SMAW_HEAA_M", "CUP_SMAW_Spotting"};
        backpackMagazines[] = {
            {"CUP_SMAW_HEAA_M", 2},
            {"CUP_SMAW_HEDP_M", 1},
            {"CUP_SMAW_Spotting", 2}
        };
    };

    class MATAG : Rifleman {
        backpackMagazines[] = {
            {"CUP_SMAW_HEAA_M", 2},
            {"CUP_SMAW_HEDP_M", 1},
            {"CUP_SMAW_Spotting", 2}
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
        primaryWeapon = "CUP_arifle_FNFAL5062";
        secondaryWeapon = "CUP_launch_Metis";
        secondaryWeaponItems[] = {"CUP_AT13_M"};
        backpackMagazines[] = {{"CUP_AT13_M", 1}};
    };

    class HATAG : MATAG {
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"CUP_AT13_M", 1}
        };
    };

    class HATAC : HATAG {
    };

    class DHATG : Rifleman {
        primaryWeapon = "CUP_arifle_FNFAL5062";
        backpack = "CUP_B_Metis_Gun_Bag";
        backpackMagazines[] = {};
        backpackMedicalItems[] = {};
    };

    class DHATAG : HMGG {
        backpack = "CUP_B_Metis_Tripod_Bag";
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
        primaryWeapon = "CUP_arifle_FNFAL5062";
        secondaryWeapon = "CUP_launch_9K32Strela_Loaded";
        secondaryWeaponItems[] = {"CUP_Strela_2_M"};
        backpackMagazines[] = {{"CUP_Strela_2_M", 1}};
    };

    class SAMAG : Rifleman {
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"CUP_20Rnd_TE1_Green_Tracer_762x51_FNFAL_M", 2},
            {"CUP_Strela_2_M", 1}
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
        primaryWeapon = "CUP_arifle_FNFAL5062";
        backpack = "CUP_B_AGS30_Gun_Bag";
        backpackMagazines[] = {};
        backpackMedicalItems[] = {};
    };

    class GMGAG : HMGG {
        backpack = "CUP_B_AGS30_Tripod_Bag";
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
        primaryWeapon = "CUP_arifle_FNFAL5062";
        backpack = "CUP_B_Podnos_Gun_Bag";
        backpackMagazines[] = {};
        backpackMedicalItems[] = {};
    };

    class MTRAG : MTRG {
        backpack = "CUP_B_Podnos_Bipod_Bag";
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
        primaryWeapon = "CUP_arifle_FNFAL5062";
        vestMagazines[] = {
            {"CUP_20Rnd_762x51_FNFAL_M", 6},
            {"CUP_20Rnd_TE1_Green_Tracer_762x51_FNFAL_M", 2}
        };
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
        primaryWeapon = "CUP_arifle_FNFAL5060_railed";
        handgunWeapon = "CUP_hgun_Browning_HP";
        primaryWeaponItems[] = {"CUP_optic_LeupoldMk4"};
        vestMagazines[] = {
            {"CUP_20Rnd_762x51_FNFAL_M", 4},
            {"CUP_13Rnd_9x19_Browning_HP", 3}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_20Rnd_762x51_FNFAL_M", 3}
        };
        assignItems[] = {"ItemGPS"};
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class SP : Rifleman {
        binocular = "ACE_VectorDay";
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
            {"CUP_launch_APILAS", 2}
        };
        magazines[] = {
            {"CUP_20Rnd_762x51_FNFAL_M", 20},
            {"CUP_20Rnd_TE1_Green_Tracer_762x51_FNFAL_M", 10},
            {"CUP_30Rnd_TE1_Green_Tracer_762x51_FNFAL_M", 10},
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
            {"CUP_launch_APILAS", 4}
        };
        magazines[] = {
            {"CUP_20Rnd_762x51_FNFAL_M", 40},
            {"CUP_20Rnd_TE1_Green_Tracer_762x51_FNFAL_M", 20},
            {"CUP_30Rnd_TE1_Green_Tracer_762x51_FNFAL_M", 20},
            {"CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M", 10},
            {"CUP_SMAW_HEAA_M", 5},
            {"CUP_AT13_M", 5},
            {"SatchelCharge_Remote_Mag", 5},
            {"ACE_HandFlare_White", 25},
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
        weapons[] = {{"CUP_launch_APILAS", 4}};
        magazines[] = {
            {"CUP_20Rnd_762x51_FNFAL_M", 40},
            {"CUP_20Rnd_TE1_Green_Tracer_762x51_FNFAL_M", 20},
            {"CUP_30Rnd_TE1_Green_Tracer_762x51_FNFAL_M", 20},
            {"CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M", 10},
            {"CUP_SMAW_HEAA_M", 5},
            {"SatchelCharge_Remote_Mag", 5},
            {"ACE_HandFlare_White", 25},
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
