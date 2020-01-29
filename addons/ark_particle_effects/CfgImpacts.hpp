class ImpactMetal {
    class LightExp {
        position[] = {0,0,0};
        simulation = "light";
        type = "Goko_bulletexplo2";
        intensity = 1;
        interval = 1;
        lifeTime = 1;
    };
    class Starter_SparksBurstLow {
        simulation = "particles";
        type = "gokoFX_Starter_SparksBurstLOW";
        position[] = {0,0,0};
        intensity = 1;
        interval = 0.1;
        lifeTime = 0.4;
        randomDirectionPeriodVar = 1;
        randomDirectionIntensityVar = 1;
    };
    class Starter_SparksBurstMed {
        simulation = "particles";
        type = "gokoFX_Starter_SparksBurstMed";
        position[] = {0,0,0};
        intensity = 1;
        interval = 0.1;
        lifeTime = 0.6;
        randomDirectionPeriodVar = 1;
        randomDirectionIntensityVar = 1;
        quality = 1;
    };
    class SparksOmni {
        simulation = "particles";
        type = "gokoFX_Starter_SparksOmni";
        position[] = {0,0,0};
        intensity = 1;
        interval = 10;
        randomDirectionPeriodVar = 0.5;
        randomDirectionIntensityVar = 2;
        qualityLevel = 2;
        lifeTime = 1;
    };
    class SparksDrop2 {
        simulation = "particles";
        type = "gokoFX_Starter_SparksDrop2";
        position[] = {0,0,0};
        intensity = 1;
        interval = 1;
        lifeTime = 1;
        qualityLevel = 2;
    };
    class SparksDrop {
        simulation = "particles";
        type = "gokoFX_Starter_SparksDrop";
        position[] = {0,0,0};
        intensity = 1;
        interval = 11;
        lifeTime = 1.5;
        qualityLevel = 2;
    };
};