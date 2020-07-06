class cfgWeapons {
    class GrenadeLauncher;
    class Throw: GrenadeLauncher {
        muzzles[]+={"SatchelMuzzle"};
        class ThrowMuzzle;
        class SatchelMuzzle: ThrowMuzzle {
            minRange = 5;
            minRangeProbab = 0.2;
            midRange = 10;
            midRangeProbab = 0.9;
            maxRange = 15;
            maxRangeProbab = 0.03;
            sound[]= {"",1,1,25}; // todo
            magazines[]= {"SatchelCharge_Remote_Mag_Throwable"};
        };
    };
};