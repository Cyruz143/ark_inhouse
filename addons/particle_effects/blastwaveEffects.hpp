#define MACRO_FX \
    intensity = 1; \
    interval = 3; \
    lifeTime = 1; \
    position[] = {0, 0, 0}; \
    qualityLevel = -1; \
    simulation = "particles"

// Adds a refraction effect to explosions, these play everytime for everybody.
class 120mm_HE {
    class CLASS(blastwave_refract) {
        type = QCLASS(blastwave_effect_medium);
        MACRO_FX;
    };
};
class 155mm_Explode {
    class CLASS(blastwave_refract) {
        type = QCLASS(blastwave_effect_large);
        MACRO_FX;
    };
};
class 25mm_Explode {
    class CLASS(blastwave_refract) {
        type = QCLASS(blastwave_effect_small);
        MACRO_FX;
    };
};
class 30mmExplode {
    class CLASS(blastwave_refract) {
        type = QCLASS(blastwave_effect_small);
        MACRO_FX;
    };
};
class 40mm_HE_Explode {
    class CLASS(blastwave_refract) {
        type = QCLASS(blastwave_effect_small);
        MACRO_FX;
    };
};
class 80mm_Explode {
    class CLASS(blastwave_refract) {
        type = QCLASS(blastwave_effect_medium);
        MACRO_FX;
    };
};
class AA_Explode {
    class CLASS(blastwave_refract) {
        type = QCLASS(blastwave_effect_medium);
        MACRO_FX;
    };
};
class AAMissileExplosion {
    class CLASS(blastwave_refract) {
        type = QCLASS(blastwave_effect_medium);
        MACRO_FX;
    };
};
class ArtyShellExplosion {
    class CLASS(blastwave_refract) {
        type = QCLASS(blastwave_effect_large);
        MACRO_FX;
    };
};
class ATMineExplosion {
    class CLASS(blastwave_refract) {
        type = QCLASS(blastwave_effect_medium);
        MACRO_FX;
    };
};
class ATMissileExplosion {
    class CLASS(blastwave_refract) {
        type = QCLASS(blastwave_effect_medium);
        MACRO_FX;
    };
};
class ATRocketExplosion {
    class CLASS(blastwave_refract) {
        type = QCLASS(blastwave_effect_medium);
        MACRO_FX;
    };
};
class BasicAmmoExplosion {
    class CLASS(blastwave_refract) {
        type = QCLASS(blastwave_effect_small);
        MACRO_FX;
    };
};
class BombExplosion {
    class CLASS(blastwave_refract) {
        type = QCLASS(blastwave_effect_very_large);
        MACRO_FX;
    };
};
class BoundingMineExplosion {
    class CLASS(blastwave_refract) {
        type = QCLASS(blastwave_effect_small);
        MACRO_FX;
    };
};
class DeminingExplosiveExplosion {
    class CLASS(blastwave_refract) {
        type = QCLASS(blastwave_effect_small);
        MACRO_FX;
    };
};
class Demo_Charge_Explode {
    class CLASS(blastwave_refract) {
        type = QCLASS(blastwave_effect_large);
        MACRO_FX;
    };
};
class DirectionalMineExplosion {
    class CLASS(blastwave_refract) {
        type = QCLASS(blastwave_effect_small);
        MACRO_FX;
    };
};
class DirectionalMineExplosionBig {
    class CLASS(blastwave_refract) {
        type = QCLASS(blastwave_effect_medium);
        MACRO_FX;
    };
};
class ExploAmmoExplosion {
    class CLASS(blastwave_refract) {
        type = QCLASS(blastwave_effect_small);
        MACRO_FX;
    };
};
class ExplosionEffects {
    class CLASS(blastwave_refract) {
        type = QCLASS(blastwave_effect_small);
        MACRO_FX;
    };
};
class GrenadeExplosion {
    class CLASS(blastwave_refract) {
        type = QCLASS(blastwave_effect_small);
        MACRO_FX;
    };
};
class HeavyBombExplosion {
    class CLASS(blastwave_refract) {
        type = QCLASS(blastwave_effect_very_large);
        MACRO_FX;
    };
};
class HelicopterExplosionEffects {
    class CLASS(blastwave_refract) {
        type = QCLASS(blastwave_effect_large);
        MACRO_FX;
    };
};
class HelicopterExplosionEffects2 {
    class CLASS(blastwave_refract) {
        type = QCLASS(blastwave_effect_large);
        MACRO_FX;
    };
};
class Hellfire_Explode {
    class CLASS(blastwave_refract) {
        type = QCLASS(blastwave_effect_medium);
        MACRO_FX;
    };
};
class HERocketExplosion {
    class CLASS(blastwave_refract) {
        type = QCLASS(blastwave_effect_medium);
        MACRO_FX;
    };
};
class HERoundExplosion {
    class CLASS(blastwave_refract) {
        type = QCLASS(blastwave_effect_large);
        MACRO_FX;
    };
};
class HEShellExplosion {
    class CLASS(blastwave_refract) {
        type = QCLASS(blastwave_effect_medium);
        MACRO_FX;
    };
};
class IEDMineBigExplosion {
    class CLASS(blastwave_refract) {
        type = QCLASS(blastwave_effect_large);
        MACRO_FX;
    };
};
class IEDMineSmallExplosion {
    class CLASS(blastwave_refract) {
        type = QCLASS(blastwave_effect_small);
        MACRO_FX;
    };
};
class M136_Explode {
    class CLASS(blastwave_refract) {
        type = QCLASS(blastwave_effect_medium);
        MACRO_FX;
    };
};
class MineExplosion {
    class CLASS(blastwave_refract) {
        type = QCLASS(blastwave_effect_small);
        MACRO_FX;
    };
};
class MineNondirectionalExplosion {
    class CLASS(blastwave_refract) {
        type = QCLASS(blastwave_effect_medium);
        MACRO_FX;
    };
};
class MineNondirectionalExplosionSmall {
    class CLASS(blastwave_refract) {
        type = QCLASS(blastwave_effect_small);
        MACRO_FX;
    };
};
class MineUnderwaterABExplosion {
    class CLASS(blastwave_refract) {
        type = QCLASS(blastwave_effect_large);
        MACRO_FX;
    };
};
class MineUnderwaterExplosion {
    class CLASS(blastwave_refract) {
        type = QCLASS(blastwave_effect_large);
        MACRO_FX;
    };
};
class MineUnderwaterPDMExplosion {
    class CLASS(blastwave_refract) {
        type = QCLASS(blastwave_effect_large);
        MACRO_FX;
    };
};
class MK82_Explode {
    class CLASS(blastwave_refract) {
        type = QCLASS(blastwave_effect_very_large);
        MACRO_FX;
    };
};
class MLRS_Explode {
    class CLASS(blastwave_refract) {
        type = QCLASS(blastwave_effect_very_large);
        MACRO_FX;
    };
};
class MortarExplosion {
    class CLASS(blastwave_refract) {
        type = QCLASS(blastwave_effect_medium);
        MACRO_FX;
    };
};
class RocketExplosion {
    class CLASS(blastwave_refract) {
        type = QCLASS(blastwave_effect_medium);
        MACRO_FX;
    };
};
class SABOT_Explode {
    class CLASS(blastwave_refract) {
        type = QCLASS(blastwave_effect_small);
        MACRO_FX;
    };
};
// This one isn't a typo. It's actually "Sencondary"
class SencondaryExplosion {
    class CLASS(blastwave_refract) {
        type = QCLASS(blastwave_effect_small);
        MACRO_FX;
    };
};
class VehicleExplosionEffects {
    class CLASS(blastwave_refract) {
        type = QCLASS(blastwave_effect_large);
        MACRO_FX;
    };
};
class VehicleExplosionEffectsBig {
    class CLASS(blastwave_refract) {
        type = QCLASS(blastwave_effect_very_large);
        MACRO_FX;
    };
};
