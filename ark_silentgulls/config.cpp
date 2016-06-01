class CfgPatches {
    class ark_silentgulls {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.60;
        requiredAddons[] = {"A3_Weapons_F_Bootcamp", "A3_Sounds_F"};
        author = "Cyruz";
        authorUrl = "http://www.ark-group.org";
    };
};

class CfgNonAIVehicles {
    class Bird;
        class SeaGull : Bird {
            model = "\A3\Weapons_F\empty.p3d";
            singSound[] = {"A3\Sounds_F\ambient\animals\Seagul_1",0,0,0};
        };
};