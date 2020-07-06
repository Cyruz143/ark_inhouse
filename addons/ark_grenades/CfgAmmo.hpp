class cfgAmmo {
    class GrenadeCore;
    class SatchelCharge_Remote_Ammo_Thrown: GrenadeCore {
        hit = 3000;
        indirectHit = 3000;
        indirectHitRange = 5;
        model = "\A3\Weapons_F\Explosives\satchel";
        defaultMagazine = "SatchelCharge_Remote_Mag_Throwable";
        soundHit1[] = {"A3\Sounds_F\arsenal\explosives\bombs\Explosion_satchel_01", 3.16228, 1, 1500};
        soundHit2[] = {"A3\Sounds_F\arsenal\explosives\bombs\Explosion_satchel_02", 3.16228, 1, 1500};
        multiSoundHit[] = {"soundHit1", 0.5, "soundHit2", 0.5};
        soundDeactivation[] = {"", 0, 0, 0};
        ExplosionEffects = "MineNondirectionalExplosion";
        CraterEffects = "MineNondirectionalCrater";
        SoundSetExplosion[] = {"ClaymoreMine_Exp_SoundSet", "ClaymoreMine_Tail_SoundSet", "Explosion_Debris_SoundSet"};
        timeToLive = 8;
        fuseDistance = 0;
        explosionTime = 7;
        deflectionSlowDown = 0.2;
        explosionType = "bomb";
        ace_damageType = "explosive";
        ace_explosives_magazine = "SatchelCharge_Remote_Mag_Throwable";
        ace_explosives_Explosive = "SatchelCharge_Remote_Ammo_Scripted";
        ace_frag_skip = 1;
        class CamShakeExplode {
            power = 30;
            duration = 2;
            frequency = 20;
            distance = 350;
        };
    };
};