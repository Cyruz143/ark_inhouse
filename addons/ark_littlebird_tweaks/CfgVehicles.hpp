class CfgVehicles {
    class Helicopter_Base_H;
    class CUP_AH6_BASE: Helicopter_Base_H {
        // Reduce speed a bit, at high speed handling isn't very nimble
        maxSpeed = 220; //282

        liftForceCoef = 1.4; //1.5
        bodyFrictionCoef = 0.25; //0.4
        cyclicAsideForceCoef = 0.5; //0.35
        cyclicForwardForceCoef = 0.5; //0.35
        backRotorForceCoef = 0.8; //0.5
    };
};