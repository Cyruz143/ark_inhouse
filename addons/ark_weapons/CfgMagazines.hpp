class CfgMagazines {
    class CUP_RPG18_M;
    class ARK_RPG22_M: CUP_RPG18_M {
        author = "ARK";
        displayName = "RPG22";
        ammo = "ARK_R_RPG22_AT";
        initSpeed = 115;
        type = "2 * 256";
        mass = 50;
        descriptionShort = "Range: 0 - 200 m <br/>Type: HEAT <br/>Used in: RPG22";
    };

    class ACE_PreloadedMissileDummy_RPG22_ARK: ARK_RPG22_M {
        author = "ARK";
        scope = 1;
        scopeArsenal = 0;
        displayName = "Preloaded Missle";
        picture = "\CUP\Weapons\CUP_Weapons_WeaponsCore\ui\blank_icon.paa";
        weaponPoolAvailable = 0;
        mass = 0;
    };

    class CUP_M72A6_M;
    class ARK_M72E9_M: CUP_M72A6_M {
        author = "ARK";
        displayName = "M72E9 Rocket";
        ammo = "ARK_R_M72E9_AT";
        initspeed = 150;
        mass = 50;
        descriptionshort = "Type: Anti-Tank Grenade<br />Rounds: 1<br />Used in: M72E9";
    };

    class ACE_PreloadedMissileDummy_M72E9_ARK: ARK_M72E9_M {
        author = "ARK";
        scope = 1;
        scopeArsenal = 0;
        displayName = "Preloaded Missle";
        picture = "\CUP\Weapons\CUP_Weapons_WeaponsCore\ui\blank_icon.paa";
        weaponPoolAvailable = 0;
        mass = 0;
    };

    class CA_Magazine;
    class 30Rnd_556x45_Stanag : CA_Magazine {
        displayname = "5.56mm 30Rnd Mag";
        displaynameshort = "5.56mm";
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };

    class 30Rnd_556x45_Stanag_Tracer_Red: 30Rnd_556x45_Stanag {
        displayname = "5.56mm 30Rnd Tracer Mag";
        displaynameshort = "5.56mm";
    };

    class 30Rnd_556x45_Stanag_Tracer_Green: 30Rnd_556x45_Stanag {
        displayname = "5.56mm 30Rnd Tracer Mag";
        displaynameshort = "5.56mm";
    };

    class 30Rnd_556x45_Stanag_Tracer_Yellow: 30Rnd_556x45_Stanag {
        displayname = "5.56mm 30Rnd Tracer Mag";
        displaynameshort = "5.56mm";
    };

    class 20Rnd_556x45_UW_mag: 30Rnd_556x45_Stanag {
        displayname = "5.56mm 20Rnd MEA Mag";
        displaynameshort = "5.56mm MEA";
    };

    class 30Rnd_65x39_caseless_mag : CA_Magazine {
        displayname = "6.5mm 30Rnd Mag";
        displaynameshort = "6.5mm";
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };

    class 30Rnd_65x39_caseless_mag_Tracer : 30Rnd_65x39_caseless_mag {
        displayname = "6.5mm 30Rnd Tracer Mag";
        displaynameshort = "6.5mm Tracer";
    };

    class 30Rnd_65x39_caseless_green : 30Rnd_65x39_caseless_mag {
        displayname = "6.5mm 30Rnd Mag";
        displaynameshort = "6.5mm";
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };

    class 30Rnd_65x39_caseless_green_Tracer : 30Rnd_65x39_caseless_green {
        displayname = "6.5mm 30Rnd Tracer Magazine";
        displaynameshort = "6.5mm Tracer";
    };

    class 100Rnd_65x39_caseless_mag : CA_Magazine {
        displayname = "6.5mm 100Rnd Mag";
        displaynameshort = "6.5mm";
        tracersEvery = 5;
        lastRoundsTracer = 3;
    };

    class 100Rnd_65x39_caseless_mag_Tracer : 100Rnd_65x39_caseless_mag {
        displayname = "6.5mm 100Rnd Tracer Mag";
        displaynameshort = "6.5mm Tracer";
    };

    class 200Rnd_65x39_cased_Box : 100Rnd_65x39_caseless_mag {
        displayname = "6.5mm 200Rnd Box";
        displaynameshort = "6.5mm";
        tracersEvery = 5;
        lastRoundsTracer = 3;
    };
    class 200Rnd_65x39_cased_Box_Tracer: 200Rnd_65x39_cased_Box {
        displayname = "6.5mm 200Rnd Tracer Box";
        displaynameshort = "6.5mm Tracer";
    };

    class 20Rnd_762x51_Mag: CA_Magazine {
        displayname = "7.62mm 20Rnd Mag";
        displaynameshort = "7.62mm";
    };

    class 150Rnd_762x51_Box : CA_Magazine {
        displayname = "7.62mm 150Rnd Box";
        tracersEvery = 5;
        lastRoundsTracer = 3;
    };

    class 150Rnd_762x51_Box_Tracer : 150Rnd_762x51_Box {
        displayname = "7.62mm 150Rnd Tracer Box";
    };

    class 7Rnd_408_Mag: CA_Magazine {
        displayname = ".408 7Rnd Mag";
    };

    class 5Rnd_127x108_Mag: CA_Magazine {
        displayname = "12.7mm 5Rnd Mag";
    };

    class 30Rnd_9x21_Mag : CA_Magazine {
        displayname = "9mm 30Rnd Mag";
        displaynameshort = "9mm";
        lastRoundsTracer = 0;
    };

    class 16Rnd_9x21_Mag: 30Rnd_9x21_Mag {
        displayname = "9mm 17Rnd Mag";
        displaynameshort = "9mm";
        count = 17;
    };

    class 30Rnd_45ACP_Mag_SMG_01 : 30Rnd_9x21_Mag {
        displayname = ".45 25Rnd Mag";
        displaynameshort = ".45";
        picture = "\A3\weapons_f\data\ui\M_30Rnd_9x21_CA.paa";
        count = 25;
        tracersEvery = 0;
        lastRoundsTracer = 0;
    };

    class 9Rnd_45ACP_Mag : 30Rnd_45ACP_Mag_SMG_01 {
        displayname = ".45 8Rnd Mag";
        displaynameshort = ".45";
        count = 8;
    };

    class 30Rnd_45ACP_Mag_SMG_01_Tracer_Green: 30Rnd_45ACP_Mag_SMG_01 {
        displayname = ".45 25Rnd Tracer Mag";
    };
};