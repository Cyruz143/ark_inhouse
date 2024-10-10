class C7_DNK {
    class Rifleman {
        primaryWeapon = "gm_c7a1_oli";
        primaryWeaponItems[] = {"gm_c79a1_oli"};
        secondaryWeapon = "";
        secondaryWeaponItems[] = {};
        handgunWeapon = "";
        handgunItems[] = {};
        uniformWeapons[] = {};
        vestWeapons[] = {};
        backpackWeapons[] = {};
        uniformMagazines[] = {
            {"ACE_Chemlight_HiRed", 2},
            {"SmokeShell", 1}
        };
        vestMagazines[] = {
            {"CUP_30Rnd_556x45_Stanag", 6},
            {"CUP_30Rnd_556x45_Stanag_Tracer_Red", 2}
        };
        backpackMagazines[] = {
            {"HandGrenade", 2},
            {"SmokeShell", 1},
            {"CUP_30Rnd_556x45_Stanag", 4},
            {"CUP_30Rnd_556x45_Stanag_Tracer_Red", 2}
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
        handgunWeapon = "CUP_hgun_Browning_HP";
        vestMagazines[] = {
            {"CUP_30Rnd_556x45_Stanag", 6},
            {"CUP_30Rnd_556x45_Stanag_Tracer_Red", 2},
            {"CUP_13Rnd_9x19_Browning_HP", 3}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_30Rnd_556x45_Stanag", 4},
            {"CUP_30Rnd_556x45_Stanag_Tracer_Red", 2}
        };
        assignItems[] = {};
        binocular = "gm_ferod16_oli";
    };

    class Officer : Leader {
        assignItems[] = {};
        binocular = "gm_ferod16_oli";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class Crew : Rifleman {
        primaryWeapon = "gm_mp5a3_blk";
        primaryWeaponItems[] = {};
        uniformMagazines[] = {
            {"ACE_Chemlight_HiRed", 2},
            {"SmokeShell", 1}
        };
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        vestMagazines[] = {{"gm_30Rnd_9x19mm_B_DM51_mp5a3_blk", 4}};
        backpackMagazines[] = {};
        assignItems[] = {};
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
            {"CUP_30Rnd_556x45_Stanag", 6},
            {"CUP_30Rnd_556x45_Stanag_Tracer_Red", 2},
            {"SmokeShell", 4}
        };
        backpackMagazines[] = {
            {"SmokeShellBlue", 4},
            {"CUP_30Rnd_556x45_Stanag", 2}
        };
        assignItems[] = {};
        binocular = "gm_ferod16_oli";
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
        primaryWeapon = "CUP_lmg_MG3";
        primaryWeaponItems[] = {};
        vestMagazines[] = {{"CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", 1}};
        backpackMagazines[] = {{"CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", 4}};
    };

    class AAR : Rifleman {
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", 4}
        };
        binocular = "gm_ferod16_oli";
    };

    class RAT : Rifleman {
        secondaryWeapon = "CUP_launch_M136";
        vestMagazines[] = {
            {"CUP_30Rnd_556x45_Stanag", 6},
            {"CUP_30Rnd_556x45_Stanag_Tracer_Red", 2}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_30Rnd_556x45_Stanag", 4},
            {"CUP_30Rnd_556x45_Stanag_Tracer_Red", 2}
        };
    };

    class MMGG : Rifleman {
        primaryWeapon = "CUP_lmg_MG3";
        primaryWeaponItems[] = {};
        vestMagazines[] = {{"CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", 1}};
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", 4}
        };
    };

    class MMGAG : Rifleman {
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", 4}
        };
        binocular = "gm_ferod16_oli";
        assignItems[] = {};
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
        binocular = "gm_ferod16_oli";
        assignItems[] = {};
    };

    class HMGAC : Rifleman {
    };

    class MATG : RAT {
        secondaryWeapon = "gm_pzf84_oli";
        secondaryWeaponItems[] = {"gm_feroz2x17_pzf84_blk", "gm_1Rnd_84x245mm_heat_t_DM22_carlgustaf"};
        backpackMagazines[] = {
            {"gm_1Rnd_84x245mm_heat_t_DM22_carlgustaf", 2},
            {"gm_1Rnd_84x245mm_heat_t_DM32_carlgustaf", 1}
        };
    };

    class MATAG : Rifleman {
        backpackMagazines[] = {
            {"gm_1Rnd_84x245mm_heat_t_DM22_carlgustaf", 2},
            {"gm_1Rnd_84x245mm_heat_t_DM32_carlgustaf", 1}
        };
        binocular = "gm_ferod16_oli";
        assignItems[] = {};
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class MATAC : MATAG {
        assignItems[] = {};
        binocular = "gm_ferod16_oli";
        uniformRadios[] = {"ACRE_PRC343"};
    };

    class HATG : MATG {
        secondaryWeapon = "";
        secondaryWeaponItems[] = {};
        backpackMagazines[] = {};
        backpack = "gm_milan_launcher_weaponBag";
    };

    class HATAG : MATAG {
        backpackMagazines[] = {{"HandGrenade", 1}};
    };

    class HATAC : HATAG {
        assignItems[] = {};
        binocular = "gm_ferod16_oli";
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
        binocular = "gm_ferod16_oli";
        assignItems[] = {};
    };

    class DHATAC : Rifleman {
    };

    class SAMG : Rifleman {
        secondaryWeapon = "gm_fim43_oli";
        secondaryWeaponItems[] = {"gm_1Rnd_70mm_he_m585_fim43"};
        backpackMagazines[] = {{"gm_1Rnd_70mm_he_m585_fim43", 1}};
    };

    class SAMAG : Rifleman {
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"gm_1Rnd_70mm_he_m585_fim43", 1}
        };
        uniformMagazines[] = {
            {"ACE_Chemlight_HiRed", 2},
            {"SmokeShell", 1}
        };
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        binocular = "gm_ferod16_oli";
        assignItems[] = {};
    };

    class SAMAC : SAMAG {
        uniformRadios[] = {"ACRE_PRC343"};
        binocular = "gm_ferod16_oli";
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
        binocular = "gm_ferod16_oli";
        assignItems[] = {};
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
        binocular = "gm_ferod16_oli";
        assignItems[] = {};
    };

    class MTRAC : Rifleman {
    };

    class ENG : Rifleman {
        vestMagazines[] = {
            {"CUP_30Rnd_556x45_Stanag", 6},
            {"CUP_30Rnd_556x45_Stanag_Tracer_Red", 2}
        };
        backpackMagazines[] = {
            {"DemoCharge_Remote_Mag", 3},
            {"SLAMDirectionalMine_Wire_Mag", 2}
        };
        assignItems[] = {};
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
        primaryWeapon = "gm_g3a3_oli";
        handgunWeapon = "CUP_hgun_Browning_HP";
        primaryWeaponItems[] = {"gm_feroz24_blk"};
        vestMagazines[] = {
            {"gm_20Rnd_762x51mm_B_DM111_g3_blk", 4},
            {"CUP_13Rnd_9x19_Browning_HP", 3}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"gm_20Rnd_762x51mm_B_DM111_g3_blk", 3}
        };
        assignItems[] = {};
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class SP : Rifleman {
        binocular = "gm_ferod16_oli";
    };

    class VC : Crew {
        binocular = "gm_ferod16_oli";
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
        weapons[] = {{"CUP_launch_M136", 4}};
        magazines[] = {
            {"CUP_30Rnd_556x45_Stanag", 20},
            {"CUP_30Rnd_556x45_Stanag_Tracer_Red", 10},
            {"CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", 10},
            {"ACE_HandFlare_White", 15},
            {"HandGrenade", 5},
            {"SmokeShell", 5}
        };
        items[] = {};
        medicalItems[] = {
            {"ACE_fieldDressing", 50},
            {"ACE_splint", 12}
        };
    };

    class Car : Vehicle {
    };

    class Truck : Vehicle {
        weapons[] = {{"CUP_launch_M136", 10}};
        magazines[] = {
            {"CUP_30Rnd_556x45_Stanag", 40},
            {"CUP_30Rnd_556x45_Stanag_Tracer_Red", 20},
            {"CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", 30},
            {"SatchelCharge_Remote_Mag", 5},
            {"ACE_HandFlare_White", 15},
            {"gm_1Rnd_84x245mm_heat_t_DM22_carlgustaf", 5},
            {"HandGrenade", 10},
            {"SmokeShell", 10}
        };
        items[] = {
            {"ACE_M26_Clacker", 1}
        };
        medicalItems[] = {
            {"ACE_fieldDressing", 50},
            {"ACE_splint", 12}
        };
    };

    class Armored : Truck {
        weapons[] = {{"CUP_launch_M136", 10}};
        magazines[] = {
            {"CUP_30Rnd_556x45_Stanag", 40},
            {"CUP_30Rnd_556x45_Stanag_Tracer_Red", 20},
            {"CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", 30},
            {"gm_1Rnd_84x245mm_heat_t_DM22_carlgustaf", 5},
            {"SatchelCharge_Remote_Mag", 5},
            {"ACE_HandFlare_White", 15},
            {"HandGrenade", 10},
            {"SmokeShell", 10}
        };
        items[] = {
            {"ACE_M26_Clacker", 1}
        };
        medicalItems[] = {
            {"ACE_fieldDressing", 50},
            {"ACE_splint", 12}
        };
    };

};
