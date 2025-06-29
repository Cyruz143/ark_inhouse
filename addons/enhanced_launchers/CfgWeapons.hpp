class Mode_SemiAuto;
class gm_SemiAuto;

class CfgWeapons {
    class Launcher_Base_F;
    class gm_launcher_base;
    class Launch_RPG7_F: Launcher_Base_F {
        modes[] = {"Single", "Single_AI"};
        class Single: Mode_SemiAuto {
            NO_AI_FIREMODE;
        };
        class Single_AI: Single {
            aiRateOfFireDispersion = 7;
            aiRateOfFireDistance = 250;
            maxRange = 800;
            maxRangeProbab = 0.4;
            midRange = 500;
            midRangeProbab = 0.9;
            minRange = 5;
            minRangeProbab = 0.56;
            dispersion = DISPERSION;
            showToPlayer=0;
        };
    };
    class launch_RPG32_F: Launcher_Base_F {
        modes[] = {"Single", "Single_AI"};
        class Single: Mode_SemiAuto {
            NO_AI_FIREMODE;
        };
        class Single_AI: Single {
            aiRateOfFire = 7;
            aiRateOfFireDispersion = 3;
            aiRateOfFireDistance = 400;
            maxRange = 800;
            maxRangeProbab = 0.85;
            midRange = 500;
            midRangeProbab = 0.85;
            minRange = 10;
            minRangeProbab = 0.3;
            dispersion = DISPERSION;
            showToPlayer=0;
        };
    };

    class CUP_launch_RPG7V: Launcher_Base_F {
        modes[] = {"Single", "Single_AI"};
        class Single: Mode_SemiAuto {
            NO_AI_FIREMODE;
        };
        class Single_AI: Single {
            aiRateOfFire = 7;
            aiRateOfFireDispersion = 7;
            aiRateOfFireDistance = 250;
            maxRange = 800;
            maxRangeProbab = 0.4;
            midRange = 500;
            midRangeProbab = 0.9;
            minRange = 5;
            minRangeProbab = 0.56;
            dispersion = DISPERSION;
            showToPlayer=0;
        };
    };

    class gm_rpg7_base: gm_launcher_base {
        modes[] = {"Single", "Single_AI"};
        class Single: gm_SemiAuto {
            NO_AI_FIREMODE;
        };
        class Single_AI: Single {
            aiRateOfFire = 7;
            aiRateOfFireDispersion = 3;
            aiRateOfFireDistance = 250;
            maxRange = 800;
            maxRangeProbab = 0.4;
            midRange = 500;
            midRangeProbab = 0.9;
            minRange = 5;
            minRangeProbab = 0.56;
            dispersion = DISPERSION;
            showToPlayer=0;
        };
    };
};
