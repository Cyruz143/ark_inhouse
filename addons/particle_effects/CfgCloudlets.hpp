class CfgCloudlets {
    class Default;
    // Blastwave Effects
    class CLASS(blastwave_effect_small): Default {
        angleVar = 1;
        animationName = "";
        animationSpeed[] = {1};
        beforeDestroyScript = "";
        blockAIVisibility = 0;
        circleRadius = 0;
        circleVelocity[] = {0, 0, 0};
        colorVar[] = {0, 0, 0, 0};
        color[] = {
            {0.1, 0.1, 0.1, 1},
            {0.25, 0.25, 0.25, 1},
            {0.5, 0.5, 0.5, 1},
            {0, 0, 0, 1},
            {0, 0, 0, 0.5},
            {0, 0, 0, 0.3}
        };
        interval = 30;
        lifeTime = 0.6;
        lifeTimeVar = 0;
        moveVelocityVar[] = {0.2, 0.5, 0.2};
        moveVelocity[] = {0, 0, 0};
        onTimerScript = "";
        particleFSFrameCount = 1;
        particleFSIndex = 0;
        particleFSLoop = 0;
        particleFSNtieth = 1;
        particleShape = "\A3\data_f\ParticleEffects\Universal\refract";
        particleType = "Billboard";
        positionVar[] = {0.40000001, 0.1, 0.40000001};
        randomDirectionIntensity = 0.2;
        randomDirectionIntensityVar = 0;
        randomDirectionPeriod = 0.2;
        randomDirectionPeriodVar = 0;
        rotationVelocity = 0;
        rotationVelocityVar = 90;
        rubbing = 0.1;
        sizeVar = 0.5;
        size[] = {1, 2, 5, 8, 12, 17};
        timerPeriod = 1;
        volume = 7.9;
        weight = 10;
    };
    class CLASS(blastwave_effect_medium): CLASS(blastwave_effect_small) {
        size[] = {1, 8, 20, 35, 50, 70};
    };
    class CLASS(blastwave_effect_large): CLASS(blastwave_effect_small) {
        size[] = {1, 16, 40, 70, 100, 140};
    };
    class CLASS(blastwave_effect_very_large): CLASS(blastwave_effect_small) {
        lifeTime = 1;
        size[] = {1, 35, 80, 140, 200, 280};
    };

    // Spark Effects
    class CLASS(sparksBurstLow): Default {
        angleVar = 360;
        animationName = "";
        animationSpeed[] = {1000};
        animationSpeedCoef = 1;
        beforeDestroyScript = "";
        blockAIVisibility = 0;
        bounceOnSurface = 0.1;
        bounceOnSurfaceVar = 0.2;
        circleRadius = 0;
        circleVelocity[] = {0, 0, 0};
        color[] = {{1, 0.8, 0.8, -500}, {1, 0.3, 0.1, -500}};
        colorCoef[] = {1, 1, 1, 1};
        colorVar[] = {0.05, 0.05, 0.05, 5};
        emissiveColor[] = {{250, 180, 10, 0}, {0, 0, 0, 0}};
        interval = 0.001;
        lifeTime = 0.015;
        lifeTimeVar = 0.5;
        moveVelocity[] = {"surfNormalX * inSpeed / 250 * 1.33", "surfNormalY * inSpeed / 250 * 1.33", "surfNormalZ * inSpeed / 250"};
        moveVelocityVar[] = {1, 1, 1};
        onTimerScript = "";
        particleFSFrameCount = 2;
        particleFSIndex = 13;
        particleFSLoop = 0;
        particleFSNtieth = 16;
        particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
        particleType = "Billboard";
        position[] = {0, 0, 0};
        positionVar[] = {0.01, 0.01, 0.01};
        randomDirectionIntensity = 0;
        randomDirectionIntensityVar = 2.3;
        randomDirectionPeriod = 0;
        randomDirectionPeriodVar = 0.09;
        rotationVelocity = 1;
        rotationVelocityVar = 0;
        rubbing = 0.15;
        size[] = {0.1, 0.035, 0};
        sizeVar = 0.4;
        timerPeriod = 3;
        volume = 0.01;
        weight = 1000;
    };
    class CLASS(sparksBurstMed): CLASS(sparksBurstLow) {
        color[] = {{1, 0.3, 0.1, -500}, {1, 0.3, 0.1, -500}};
        emissiveColor[] = {{235, 235, 250, 0}, {0, 0, 0, 0}};
    };
    class CLASS(sparksBurst): CLASS(sparksBurstLow) {
        bounceOnSurface = 0.05;
        bounceOnSurfaceVar = 0.1;
        color[] = {{1, 0.3, 0.1, -500}, {1, 0.3, 0.1, -500}};
        emissiveColor[] = {{250, 80, 25, 0}, {0, 0, 0, 0}};
        lifeTimeVar = 1;
        moveVelocity[] = {"surfNormalX * inSpeed / 250 * 0.66", "surfNormalY * inSpeed / 250 * 0.66", "surfNormalZ * inSpeed / 250 * 0.66"};
        moveVelocityVar[] = {0.1, 0.1, 0.1};
        randomDirectionIntensityVar = 0.2;
        randomDirectionPeriodVar = 0.1;
        size[] = {0.075, 0.015, 0};
        sizeVar = 0.5;
    };
    class CLASS(sparksBurst1): CLASS(sparksBurstLow) {
        animationSpeed[] = { 1000};
        bounceOnSurface = 0.2;
        bounceOnSurfaceVar = 0.3;
        color[] = {{1, 0.3, 0.1, -500}, {1, 0.3, 0.1, -500}};
        emissiveColor[] = {{250, 225, 160, 0}, {0, 0, 0, 0}};
        lifeTimeVar = 1;
        moveVelocity[] = {"surfNormalX * inSpeed / 250 * 0.66", "surfNormalY * inSpeed / 250 * 0.66", "surfNormalZ * inSpeed / 250 * 0.66"};
        moveVelocityVar[] = {0.1, 0.1, 0.1};
        randomDirectionIntensity = 0.1;
        randomDirectionIntensityVar = 0.2;
        randomDirectionPeriod = 0.05;
        randomDirectionPeriodVar = 0.1;
        size[] = {0.075, 0.015, 0};
        sizeVar = 0.5;
    };
    class CLASS(sparksBurst2): CLASS(sparksBurstLow) {
        bounceOnSurface = 0.2;
        bounceOnSurfaceVar = 0.1;
        color[] = {{1, 1, 0.9, -500}, {1, 0.3, 0.1, -500}};
        emissiveColor[] = {{252, 255, 128, 0}, {0, 0, 0, 0}};
        lifeTimeVar = 1;
        moveVelocity[] = {"surfNormalX * inSpeed / 250", "surfNormalY * inSpeed / 250", "surfNormalZ * inSpeed / 250"};
        moveVelocityVar[] = {"surfNormalX * inSpeed / 250", "surfNormalY * inSpeed / 250", "surfNormalZ * inSpeed / 250"};
        randomDirectionIntensity = 1;
        randomDirectionIntensityVar = 2;
        randomDirectionPeriod = 0.5;
        randomDirectionPeriodVar = 0.5;
        rotationVelocityVar = 1;
        size[] = {0.175, 0.015, 0};
        sizeVar = 0.5;
    };
    class CLASS(sparkStream): CLASS(sparksBurst) {
        bounceOnSurface = 0.1;
        lifeTime = 0.15;
        lifeTimeVar = 5;
        moveVelocity[] = {1, 5, 1};
    };
    class CLASS(sparksOmni): CLASS(sparksBurst2) {
        bounceOnSurface = 0.1;
        interval = 0.008;
        lifeTime = 0.05;
        moveVelocity[] = {"surfNormalX * inSpeed / 200", "surfNormalY * inSpeed / 200", "surfNormalZ * inSpeed / 200"};
        moveVelocityVar[] = {"surfNormalX * inSpeed / 200", "surfNormalY * inSpeed / 200", "surfNormalZ * inSpeed / 200"};
    };
    class CLASS(sparksOmniSparkle): CLASS(sparksOmni) {
        interval = 0.5;
        moveVelocity[] = {1, 1, 1};
        moveVelocityVar[] = {0.1, -1, 0.1};
        size[] = {0.15, 0.05, 0};
    };
    class CLASS(sparksOmniSparklings): CLASS(sparksBurst1) {
        interval = 0.0003;
        lifeTime = 0.003;
        lifeTimeVar = 1;
        moveVelocity[] = {0.7, 0.7, 0.1};
        moveVelocityVar[] = {2, 2, 0.3};
    };
    class CLASS(sparksDrop): CLASS(sparksBurst) {
        bounceOnSurface = 0.1;
        bounceOnSurfaceVar = 0.2;
        interval = 0.02;
        lifeTime = 0.05;
        lifeTimeVar = 3;
        moveVelocity[] = {0.3, -2, 0.3};
        moveVelocityVar[] = {0.3, 0, 0.3};
    };
    class CLASS(sparksDrop2): CLASS(sparksBurst) {
        bounceOnSurface = 0;
        bounceOnSurfaceVar = 0;
        interval = 100;
        lifeTime = 0.5;
        lifeTimeVar = 1;
        moveVelocity[] = {-0.1, -1, 0.1};
        moveVelocityVar[] = {0.2, 2, 0.2};
    };
};
