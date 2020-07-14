class CfgAmmo {
    class BulletBase;
    class ShellBase;

    //Vanilla Classes
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

    //CUP Classes
    class CUP_B_19mm_HE: BulletBase {
        ALLOW_INF
    };

    class CUP_B_20mm_AP_Tracer_Red: BulletBase {
        ALLOW_INF
    };

    class CUP_B_20mm_APHE_Tracer_Red: BulletBase {
        ALLOW_INF
    };

    class CUP_B_20mm_API_Tracer_Red: BulletBase {
        ALLOW_INF
    };

    class CUP_B_23mm_AA;
    class CUP_B_23mm_AP: CUP_B_23mm_AA {
        ALLOW_INF
    };

    class CUP_B_23mm_APHE_No_Tracer: BulletBase {
        ALLOW_INF
    };

    class CUP_B_23mm_APHE_Green_Tracer: BulletBase {
        ALLOW_INF
    };

    class CUP_B_25mm_APFSDS_White_Tracer: BulletBase {
        ALLOW_INF
    };

    class CUP_Sh_120_HE: ShellBase {
        ALLOW_INF
    };

    class CUP_Sh_120_SABOT: ShellBase {
        ALLOW_INF
    };

    class Sh_120mm_HE_Tracer_Red;
    class CUP_Sh_120mm_HESH_Tracer_Red: Sh_120mm_HE_Tracer_Red {
        ALLOW_INF
    };
};