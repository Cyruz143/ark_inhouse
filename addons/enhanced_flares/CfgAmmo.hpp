class CfgAmmo {
    class FlareCore;
    class FlareBase: FlareCore {};

    class F_40mm_White: FlareBase {
        intensity = 500000; // vanilla: 10000
        timeToLive = 40; // vanilla: 25
        coefGravity = 0.25; // vanilla: undefined (would be 1)
        // Makes the ammo fall the ground slower
    };

    class Flare_82mm_AMOS_White: FlareCore {
        intensity = 150000; // vanilla: 10000
    };
};
