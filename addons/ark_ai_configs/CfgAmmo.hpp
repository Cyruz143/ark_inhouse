class CfgAmmo {
    class BulletBase;
    class ShellBase;
    class RocketBase;

    class B_19mm_HE: BulletBase {
        ALLOW_INF
    };

    class B_20mm: BulletBase {
        ALLOW_INF
    };

    class B_20mm_AP: BulletBase {
        ALLOW_INF
    };

    class B_25mm: BulletBase {
        ALLOW_INF
    };

    class B_30mm_AP: BulletBase {
        ALLOW_INF
    };

    class B_30mm_APFSDS: B_30mm_AP {
        ALLOW_INF
    };

    class B_40mm_APFSDS: B_30mm_APFSDS {
        ALLOW_INF
    };

    class Sh_120mm_HE: ShellBase {
        ALLOW_INF
    };

    class Sh_120mm_APFSDS: ShellBase {
        ALLOW_INF
    };

    class Sh_125mm_HE;
    class Sh_125mm_HEAT: Sh_125mm_HE {
        ALLOW_INF
    };

    class Sh_155mm_AMOS: ShellBase {
        ALLOW_INF
    };

    class Sh_82mm_AMOS: Sh_155mm_AMOS {
        ALLOW_INF
    };

    class R_80mm_HE: RocketBase {
        ALLOW_INF_COST
    };
};