class cfgWeapons {
    class GrenadeLauncher;
    class Throw: GrenadeLauncher {
        muzzles[]+={"SatchelMuzzle","DemoMuzzle"};
        class ThrowMuzzle;
        class SatchelMuzzle: ThrowMuzzle {
            magazines[]= {"SatchelCharge_Remote_Mag_Throwable"};
        };
        class DemoMuzzle: ThrowMuzzle {
            magazines[]= {"DemoCharge_Remote_Mag_Throwable"};
        };
    };
};