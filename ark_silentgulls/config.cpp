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
            acceleration = 7;
            afMax = 30;
            airFriction0[] = {40,20,60};
            airFriction1[] = {1500,700,100};
            airFriction2[] = {25,12,2.5};
            animated = 0;
            avgHeight = 10;
            canBeShot = 0;
            flySound[] = {"",0.0316228,1,1};
            htMax = 1800;
            htMin = 60;
            maxHeight = 50;
            maxSpeed = 20;
            mFact = 1;
            mfMax = 0;
            minHeight = 5;
            minSpeed = -0.5;
            model = "\A3\Weapons_F\empty.p3d";
            moves = "CfgMovesBird";
            reversed = 0;
            scope = 2;
            simulation = "SeaGull";
            singSound[] = {"A3\Sounds_F\ambient\animals\Seagul_1",0,0,0};
            straightDistance = 50;
            tBody = 37;
            turning = 1;
        };
};