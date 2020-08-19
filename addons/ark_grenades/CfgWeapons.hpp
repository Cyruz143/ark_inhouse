class cfgWeapons {
    class GrenadeLauncher;
    class Throw: GrenadeLauncher {
        muzzles[]+={"SatchelMuzzle","ChargeMuzzle"};
        class ThrowMuzzle;
        class SatchelMuzzle: ThrowMuzzle {
            minRange = 5;
            minRangeProbab = 0.2;
            midRange = 10;
            midRangeProbab = 0.9;
            maxRange = 15;
            maxRangeProbab = 0.03;
            magazines[]= {"SatchelCharge_Remote_Mag_Throwable"};
        };
        class ChargeMuzzle: ThrowMuzzle {
            minRange = 5;
            minRangeProbab = 0.2;
            midRange = 10;
            midRangeProbab = 0.9;
            maxRange = 15;
            maxRangeProbab = 0.03;
            magazines[]= {"DemoCharge_Remote_Mag_Throwable"};
        };
    };
};