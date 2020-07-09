class CfgAmmo {
    class Grenade;
    class SatchelCharge_Remote_Ammo_Thrown: Grenade {
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
        whistleDist = 10;
        SoundSetExplosion[] = {"ClaymoreMine_Exp_SoundSet", "ClaymoreMine_Tail_SoundSet", "Explosion_Debris_SoundSet"};
        timeToLive = 8;
        fuseDistance = 0;
        explosionTime = 7;
        deflectionSlowDown = 0.1;
        explosionType = "bomb";
        ace_damageType = "explosive";
        ace_explosives_magazine = "SatchelCharge_Remote_Mag_Throwable";
        ace_explosives_Explosive = "SatchelCharge_Remote_Ammo_Scripted";
        ace_frag_skip = 1;
        ace_grenades_pullPinSound[] = {"A3\Sounds_F_Orange\arsenal\explosives\Handling\ExplosiveSatchel_TouchOff_01.wss",2,1,50};
        ace_advanced_throwing_torqueMagnitude = "(5 + random 20) * selectRandom [1, -1]";
        class CamShakeExplode {
            power = 20;
            duration = 2;
            frequency = 20;
            distance = 250;
        };
    };
};