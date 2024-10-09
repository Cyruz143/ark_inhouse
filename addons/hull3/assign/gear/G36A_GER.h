class G36A_GER {
    class Rifleman {
        primaryWeapon = "CUP_arifle_G36A";
        primaryWeaponItems[] = {"CUP_acc_Flashlight"};
        secondaryWeapon = "";
        secondaryWeaponItems[] = {};
        handgunWeapon = "";
        handgunItems[] = {};
        uniformWeapons[] = {};
        vestWeapons[] = {};
        backpackWeapons[] = {};
        uniformMagazines[] = {
            {"gm_handgrenade_frag_dm51a1", 1},
            {"ACE_Chemlight_HiRed", 2},
            {"gm_smokeshell_wht_dm25", 1}
        };
        vestMagazines[] = {
            {"CUP_30Rnd_556x45_G36", 6},
            {"CUP_30Rnd_TE1_Red_Tracer_556x45_G36", 2}
        };
        backpackMagazines[] = {
            {"gm_handgrenade_frag_dm51a1", 1},
            {"gm_smokeshell_wht_dm25", 1},
            {"CUP_30Rnd_556x45_G36", 4},
            {"CUP_30Rnd_TE1_Red_Tracer_556x45_G36", 2}
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
        handgunWeapon = "gm_p1_blk";
        vestMagazines[] = {
            {"CUP_30Rnd_556x45_G36", 6},
            {"gm_smokeshell_red_dm23", 4},
            {"gm_smokeshell_wht_dm25", 4},
            {"CUP_30Rnd_TE1_Red_Tracer_556x45_G36", 2},
            {"gm_8Rnd_9x19mm_B_DM11_p1_blk", 3}
        };
        backpackMagazines[] = {
            {"gm_handgrenade_frag_dm51a1", 1},
            {"gm_smokeshell_wht_dm25", 1},
            {"CUP_30Rnd_556x45_G36", 4},
            {"CUP_30Rnd_TE1_Red_Tracer_556x45_G36", 2}
        };
        binocular = "Binocular";
    };

    class Officer : Leader {
        binocular = "ACE_VectorDay";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class Crew : Rifleman {
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
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
        backpackMagazines[] = {
            {"gm_smokeshell_grn_dm21", 4},
            {"gm_smokeshell_wht_dm25", 4}
        };
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
        primaryWeapon = "CUP_lmg_MG3";
        primaryWeaponItems[] = {};
        vestMagazines[] = {{"CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", 2}};
        backpackMagazines[] = {{"CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", 4}};
    };

    class AAR : Rifleman {
        primaryWeaponItems[] = {"CUP_acc_Flashlight", "CUP_Bipod_G36"};
        backpackMagazines[] = {
            {"gm_handgrenade_frag_dm51a1", 1},
            {"gm_smokeshell_wht_dm25", 1},
            {"CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", 4}
        };
        binocular = "Binocular";
    };

    class RAT : Rifleman {
        secondaryWeapon = "CUP_launch_HCPF3";
        vestMagazines[] = {
            {"CUP_30Rnd_556x45_G36", 6},
            {"CUP_30Rnd_TE1_Red_Tracer_556x45_G36", 2}
        };
        backpackMagazines[] = {
            {"gm_handgrenade_frag_dm51a1", 1},
            {"gm_smokeshell_wht_dm25", 1},
            {"CUP_30Rnd_556x45_G36", 4},
            {"CUP_30Rnd_TE1_Red_Tracer_556x45_G36", 2}
        };
    };

    class MMGG : Rifleman {
        primaryWeapon = "CUP_lmg_MG3";
        primaryWeaponItems[] = {};
        vestMagazines[] = {{"CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", 1}};
        backpackMagazines[] = {
            {"gm_handgrenade_frag_dm51a1", 1},
            {"gm_smokeshell_wht_dm25", 1},
            {"CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", 2}
        };
    };

    class MMGAG : Rifleman {
        backpackMagazines[] = {
            {"gm_handgrenade_frag_dm51a1", 1},
            {"gm_smokeshell_wht_dm25", 1},
            {"CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", 2}
        };
        binocular = "ACE_VectorDay";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class HMGG : Rifleman {
        backpack = "CUP_B_M2_Gun_Bag";
        backpackMagazines[] = {};
    };

    class HMGAG : MMGAG {
        backpack = "CUP_B_M2_MiniTripod_Bag";
        backpackMagazines[] = {};
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        binocular = "ACE_VectorDay";
    };

    class HMGAC : Rifleman {
    };

    class MATG : RAT {
        secondaryWeapon = "CUP_launch_PzF3";
        backpackMagazines[] = {};
        backpackItems[] = {
            {"CUP_launch_PzF3", 1},
            {"CUP_launch_BF3", 1}
        };
    };

    class MATAG : Rifleman {
        secondaryWeapon = "CUP_launch_PzF3";
        backpackMagazines[] = {};
        backpackItems[] = {
            {"CUP_launch_PzF3", 1},
            {"CUP_launch_BF3", 1}
        };
        binocular = "ACE_VectorDay";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class MATAC : MATAG {
        secondaryWeapon = "CUP_launch_PzF3";
        backpackMagazines[] = {};
        backpackItems[] = {
            {"CUP_launch_PzF3", 1},
            {"CUP_launch_BF3", 1}
        };
        assignItems[] = {};
        binocular = "Binocular";
        uniformRadios[] = {"ACRE_PRC343"};
    };

    class HATG : MATG {
        secondaryWeapon = "";
        backpackItems[] = {};
        backpackMagazines[] = {};
    };

    class HATAG : MATAG {
        secondaryWeapon = "";
        backpackItems[] = {};
        backpackMagazines[] = {};
    };

    class HATAC : HATAG {
        secondaryWeapon = "";
        backpackItems[] = {};
        assignItems[] = {};
        binocular = "Binocular";
        uniformRadios[] = {"ACRE_PRC343"};
    };

    class DHATG : Rifleman {
        backpack = "CUP_B_Tow_Gun_Bag";
        backpackMagazines[] = {};
        backpackMedicalItems[] = {};
    };

    class DHATAG : MMGAG {
        backpack = "CUP_B_TOW_Tripod_Bag";
        backpackMagazines[] = {};
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        binocular = "ACE_VectorDay";
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
            {"gm_handgrenade_frag_dm51a1", 1},
            {"CUP_Stinger_M", 1}
        };
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        binocular = "ACE_VectorDay";
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

    class GMGAG : MMGAG {
        backpack = "CUP_B_Mk19_Tripod_Bag";
        backpackMagazines[] = {};
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        binocular = "ACE_VectorDay";
    };

    class GMGAC : Rifleman {
    };

    class MTRG : Rifleman {
        backpack = "CUP_B_M252_Gun_Bag";
        backpackMagazines[] = {};
        backpackMedicalItems[] = {};
    };

    class MTRAG : MMGAG {
        backpack = "CUP_B_M252_Bipod_Bag";
        backpackMagazines[] = {};
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        binocular = "ACE_VectorDay";
    };

    class MTRAC : Rifleman {
    };

    class ENG : Rifleman {
        backpackMagazines[] = {
            {"DemoCharge_Remote_Mag", 3},
            {"SLAMDirectionalMine_Wire_Mag", 2}
        };
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
        primaryWeapon = "CUP_arifle_G3A3_modern_ris_black";
        handgunWeapon = "gm_p1_blk";
        primaryWeaponItems[] = {"CUP_optic_LeupoldMk4", "CUP_bipod_G3SG1", "CUP_acc_Flashlight"};
        vestMagazines[] = {
            {"CUP_20Rnd_762x51_G3", 4},
            {"gm_8Rnd_9x19mm_B_DM11_p1_blk", 3}
        };
        backpackMagazines[] = {
            {"gm_handgrenade_frag_dm51a1", 1},
            {"gm_smokeshell_wht_dm25", 1},
            {"CUP_20Rnd_762x51_G3", 3}
        };
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
        primaryWeapon = "gm_mp2a1_blk";
        primaryWeaponItems[] = {};
        vestMagazines[] = {{"gm_32Rnd_9x19mm_B_DM51_mp2_blk", 4}};
        backpackMagazines[] = {};
    };

    class PCM : P {
    };

    class Vehicle {
        weapons[] = {{"CUP_launch_HCPF3", 4}};
        magazines[] = {
            {"CUP_30Rnd_556x45_G36", 20},
            {"CUP_30Rnd_TE1_Red_Tracer_556x45_G36", 10},
            {"CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", 10},
            {"ACE_HandFlare_White", 5},
            {"gm_handgrenade_frag_dm51a1", 5},
            {"gm_smokeshell_wht_dm25", 5},
            {"gm_smokeshell_red_dm23", 5}
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
        weapons[] = {
            {"CUP_launch_HCPF3", 10},
            {"CUP_launch_PzF3", 5}
        };
        magazines[] = {
            {"CUP_30Rnd_556x45_G36", 40},
            {"CUP_30Rnd_TE1_Red_Tracer_556x45_G36", 20},
            {"CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", 30},
            {"SatchelCharge_Remote_Mag", 5},
            {"ACE_HandFlare_White", 10},
            {"gm_handgrenade_frag_dm51a1", 10},
            {"gm_smokeshell_wht_dm25", 10},
            {"gm_smokeshell_red_dm23", 10}
        };
        items[] = {{"ACE_M26_Clacker", 1}};
        medicalItems[] = {
            {"ACE_fieldDressing", 50},
            {"ACE_splint", 12}
        };
    };

    class Armored : Truck {
        weapons[] = {
            {"CUP_launch_HCPF3", 10},
            {"CUP_launch_PzF3", 5}
        };
        magazines[] = {
            {"CUP_30Rnd_556x45_G36", 40},
            {"CUP_30Rnd_TE1_Red_Tracer_556x45_G36", 20},
            {"CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", 30},
            {"SatchelCharge_Remote_Mag", 5},
            {"ACE_HandFlare_White", 10},
            {"gm_handgrenade_frag_dm51a1", 10},
            {"gm_smokeshell_wht_dm25", 10},
            {"gm_smokeshell_red_dm23", 10}
        };
        items[] = {{"ACE_M26_Clacker", 1}};
        medicalItems[] = {
            {"ACE_fieldDressing", 50},
            {"ACE_splint", 12}
        };
    };

};
