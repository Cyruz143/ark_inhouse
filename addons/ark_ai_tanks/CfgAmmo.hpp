class CfgAmmo {
    class BulletBase;
    class B_30mm_AP: BulletBase {
        ENHANCED_IFV
    };
    
    class Shellbase;
    class Sh_120mm_HE: ShellBase {
        ENHANCED_TANK
    };

    class Sh_120mm_APFSDS: ShellBase {
        ENHANCED_TANK
    };

    class Sh_125mm_HE;
    class Sh_125mm_HEAT: Sh_125mm_HE {
        ENHANCED_TANK
    };
};