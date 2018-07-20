class CfgAmmo {
    class Shellbase;
    class Sh_125mm_HE;
    class Sh_120mm_HE: ShellBase {
        cost = 100;
    };

    class Sh_120mm_APFSDS: ShellBase {
        cost = 100;
    };

    class Sh_125mm_HEAT: Sh_125mm_HE {
        cost = 100;
    };
};