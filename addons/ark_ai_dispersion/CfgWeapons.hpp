class CfgWeapons {
    class Default;
    class RifleCore;
    class Launcher;

    class GrenadeLauncher: Default {
        aiDispersionCoefX = 15;
        aiDispersionCoefY = 16;
    };

    class Throw: GrenadeLauncher
    {
        class ThrowMuzzle: GrenadeLauncher
        {
            aiDispersionCoefX = 15;
            aiDispersionCoefY = 16;
        };
    };

    class Rifle: RifleCore
    {
        aiDispersionCoefX = 15;
        aiDispersionCoefY = 16;
    };

    class Launcher_Base_F: Launcher {
        aiDispersionCoefX = 15;
        aiDispersionCoefY = 16;
    };
};