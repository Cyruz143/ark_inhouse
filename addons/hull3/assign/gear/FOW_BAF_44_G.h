class FOW_BAF_44_G {
    class Rifleman {
        primaryWeapon = "fow_w_leeenfield_no4mk1";
        secondaryWeapon = "";
        secondaryWeaponItems[] = {};
        handgunWeapon = "";
        handgunItems[] = {};
        uniformWeapons[] = {};
        vestWeapons[] = {};
        backpackWeapons[] = {};
        uniformMagazines[] = {{"SmokeShell", 1}};
        vestMagazines[] = {{"fow_10Rnd_303", 8}};
        backpackMagazines[] = {
            {"fow_e_no36mk1", 2},
            {"SmokeShell", 1},
            {"fow_10Rnd_303", 6}
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
        uniformRadios[] = {};
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
        primaryWeapon = "fow_w_sten_mk5";
        handgunWeapon = "fow_w_webley";
        vestMagazines[] = {
            {"fow_32Rnd_9x19_sten", 8},
            {"fow_6Rnd_455", 3}
        };
        backpackMagazines[] = {
            {"fow_e_no36mk1", 2},
            {"SmokeShell", 1},
            {"fow_32Rnd_9x19_sten", 6}
        };
        assignItems[] = {};
        uniformRadios[] = {"ACRE_PRC343"};
        binocular = "Binocular";
    };

    class Officer : Leader {
        assignItems[] = {};
        binocular = "binocular";
        uniformRadios[] = {"ACRE_PRC343"};
    };

    class Crew : Rifleman {
        primaryWeapon = "";
        handgunWeapon = "fow_w_webley";
        uniformMagazines[] = {{"SmokeShell", 1}};
        uniformRadios[] = {"ACRE_PRC343"};
        vestMagazines[] = {{"fow_6Rnd_455", 4}};
        backpackMagazines[] = {};
        assignItems[] = {};
    };

    class CO : Officer {
    };

    class XO : Officer {
        backpackRadios[] = {"ACRE_PRC152"};
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        primaryWeapon = "fow_w_leeenfield_no4mk1";
        vestMagazines[] = {
            {"fow_10Rnd_303", 8},
            {"SmokeShell", 4}
        };
        backpackMagazines[] = {
            {"SmokeShellBlue", 4},
            {"fow_10Rnd_303", 2}
        };
        assignItems[] = {};
        binocular = "Binocular";
        uniformRadios[] = {"ACRE_PRC343"};
        backpackMedicalItems[] = {
            {"ACE_fieldDressing", 30},
            {"ACE_morphine", 30},
            {"ACE_epinephrine", 30},
            {"ACE_bloodIV_500", 24},
            {"ACE_splint", 4}
        };
    };

    class FTL : Leader {
        primaryWeapon = "fow_w_sten_mk5";
				        uniformRadios[] = {};
        vestMagazines[] = {
            {"fow_32Rnd_9x19_sten", 8},
            {"fow_6Rnd_455", 3}
        };
        backpackMagazines[] = {
            {"fow_e_no36mk1", 2},
            {"SmokeShell", 1},
            {"fow_32Rnd_9x19_sten", 6}
        };
    };

    class AR : Rifleman {
        primaryWeapon = "fow_w_bren";
        handgunWeapon = "fow_w_webley";
        vestMagazines[] = {
            {"fow_30Rnd_303_bren", 4},
            {"fow_6Rnd_455", 4}
        };
        backpackMagazines[] = {
            {"fow_e_no36mk1", 2},
            {"SmokeShell", 1},
            {"fow_30Rnd_303_bren", 4}
        };
    };

    class AAR : Rifleman {
        backpackMagazines[] = {
            {"fow_e_no36mk1", 2},
            {"SmokeShell", 1},
            {"fow_30Rnd_303_bren", 6},
            {"fow_1Rnd_m9a1", 2}
        };
        binocular = "Binocular";
    };

    class RAT : Rifleman {
        primaryWeapon = "fow_w_leeenfield_no4mk1";
        vestMagazines[] = {{"fow_10Rnd_303", 8}};
        backpackMagazines[] = {
            {"fow_e_no36mk1", 2},
            {"SmokeShell", 1},
            {"fow_10Rnd_303", 6},
            {"fow_e_no73", 2}
        };
    };

    class MMGG : AR {
    };

    class MMGAG : AAR {
        uniformRadios[] = {"ACRE_PRC343"};
    };

    class HMGG : Rifleman {
        primaryWeapon = "fow_w_leeenfield_no4mk1";
        vestMagazines[] = {{"fow_10Rnd_303", 8}};
        backpack = "fow_b_uk_vickers_weapon";
        backpackMagazines[] = {};
        backpackMedicalItems[] = {};
    };

    class HMGAG : MMGAG {
        primaryWeapon = "fow_w_sten_mk5";
        vestMagazines[] = {{"fow_32Rnd_9x19_sten", 8}};
        backpack = "fow_b_uk_vickers_support";
        backpackMagazines[] = {};
        uniformRadios[] = {"ACRE_PRC343"};
        binocular = "binocular";
        assignItems[] = {};
    };

    class HMGAC : HMGG {
        backpack = "fow_b_uk_vickers_weapon";
    };

    class MATG : RAT {
        primaryWeapon = "fow_w_piat";
        vestMagazines[] = {{"fow_6Rnd_455", 6}};
        handgunWeapon = "fow_w_webley";
        backpackMagazines[] = {
            {"fow_1Rnd_piat_HE", 1},
            {"fow_1Rnd_piat_HEAT", 2}
        };
    };

    class MATAG : Rifleman {
        primaryWeapon = "fow_w_sten_mk5";
        vestMagazines[] = {{"fow_32Rnd_9x19_sten", 8}};
        backpackMagazines[] = {
            {"fow_e_no36mk1", 1},
            {"fow_32Rnd_9x19_sten", 2},
            {"fow_1Rnd_piat_HEAT", 3}
        };
        uniformMagazines[] = {{"SmokeShell", 1}};
        binocular = "binocular";
        assignItems[] = {};
        uniformRadios[] = {"ACRE_PRC343"};
    };

    class MATAC : MATAG {
        primaryWeapon = "fow_w_leeenfield_no4mk1";
        vestMagazines[] = {{"fow_10Rnd_303", 8}};
        assignItems[] = {};
    };

    class HATG : Rifleman {
    };

    class HATAG : Rifleman {
    };

    class HATAC : Rifleman {
    };

    class DHATG : Rifleman {
    };

    class DHATAG : HMGG {
    };

    class DHATAC : Rifleman {
    };

    class SAMG : Rifleman {
    };

    class SAMAG : Rifleman {
    };

    class SAMAC : Rifleman {
    };

    class GMGG : Rifleman {
    };

    class GMGAG : HMGG {
    };

    class GMGAC : Rifleman {
    };

    class MTRG : Rifleman {
    };

    class MTRAG : Rifleman {
    };

    class MTRAC : Rifleman {
    };

    class ENG : Rifleman {
        primaryWeapon = "fow_w_sten_mk5";
        vestMagazines[] = {{"fow_32Rnd_9x19_sten", 8}};
        backpackMagazines[] = {
            {"DemoCharge_Remote_Mag", 5}
        };
        assignItems[] = {};
        vestItems[] = {
            {"ACE_DefusalKit", 1},
            {"ACE_M26_Clacker", 1}
        };
        uniformRadios[] = {"ACRE_PRC343"};
    };

    class ENGA : ENG {
        primaryWeapon = "fow_w_leeenfield_no4mk1";
        vestMagazines[] = {{"fow_10Rnd_303", 8}};
        uniformRadios[] = {};
    };

    class SN : Rifleman {
        uniformRadios[] = {"ACRE_PRC343"};
    };

    class SP : Rifleman {
        binocular = "Binocular";
    };

    class VC : Crew {
        binocular = "binocular";
        primaryWeapon = "fow_w_sten_mk5";
        vestMagazines[] = {
            {"fow_32Rnd_9x19_sten", 4},
            {"fow_6Rnd_455", 3}
        };
    };

    class VG : Crew {
    };

    class VD : Crew {
    };

    class P : Crew {
        backpackMedicalItems[] = {};
    };

    class PCM : P {
    };

    class Vehicle {
        weapons[] = {
            {"fow_w_leeenfield_no4mk1", 1},
            {"fow_w_piat", 1},
            {"fow_w_sten_mk5", 1}
        };
        magazines[] = {
            {"fow_30Rnd_303_bren", 50},
            {"fow_10Rnd_303", 50},
            {"fow_32Rnd_9x19_sten", 50},
            {"fow_6Rnd_455", 15},
            {"fow_1Rnd_piat_HE", 15},
            {"fow_1Rnd_piat_HEAT", 5},
            {"SatchelCharge_Remote_Mag", 5},
            {"ACE_HandFlare_White", 10},
            {"fow_e_no36mk1", 10},
            {"SmokeShell", 10},
            {"fow_e_no73", 25}
        };
        items[] = {{"ACE_M26_Clacker", 1}};
        radios[] = {
            {"ACRE_PRC343", 1},
            {"ACRE_PRC152", 1}
        };
        medicalItems[] = {{"ACE_fieldDressing", 100}};
    };

    class Car : Vehicle {
    };

    class Truck : Vehicle {
    };

    class Armored : Truck {
    };

};
