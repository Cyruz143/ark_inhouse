class CfgWeapons {
    class Default;
    class RifleCore;
    class Launcher;

    class Rifle: RifleCore {
        AI_DISPERSION
    };

    class Launcher_Base_F: Launcher {
        AI_DISPERSION
    };

    class GrenadeLauncher: Default {
        AI_DISPERSION
    };

    class Throw: GrenadeLauncher {
        class ThrowMuzzle: GrenadeLauncher {
            AI_DISPERSION
        };
    };
};