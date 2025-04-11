// Spark Effects from Metal, these only play on particles high settings.
class ImpactMetal {
    class LightExp {
        intensity = 1;
        interval = 1;
        lifeTime = 1;
        position[] = {0,0,0};
        simulation = "light";
        type = QCLASS(bulletExplode);
    };
    class CLASS(startSparksBurstLow) {
        intensity = 1;
        interval = 0.1;
        lifeTime = 0.4;
        position[] = {0,0,0};
        qualityLevel = 2;
        randomDirectionIntensityVar = 1;
        randomDirectionPeriodVar = 1;
        simulation = "particles";
        type = QCLASS(sparksBurstLow);
    };
    class CLASS(startSparksBurstMed) {
        intensity = 1;
        interval = 0.1;
        lifeTime = 0.6;
        position[] = {0,0,0};
        qualityLevel = 2;
        randomDirectionIntensityVar = 1;
        randomDirectionPeriodVar = 1;
        simulation = "particles";
        type = QCLASS(sparksBurstMed);
    };
    class CLASS(startSparksOmni) {
        intensity = 1;
        interval = 10;
        lifeTime = 1;
        position[] = {0,0,0};
        qualityLevel = 2;
        randomDirectionIntensityVar = 2;
        randomDirectionPeriodVar = 0.5;
        simulation = "particles";
        type = QCLASS(sparksOmni);
    };
    class CLASS(startSparksDrop) {
        intensity = 1;
        interval = 11;
        lifeTime = 1.5;
        position[] = {0,0,0};
        qualityLevel = 2;
        simulation = "particles";
        type = QCLASS(sparksDrop);
    };
    class CLASS(startSparksDrop2) {
        intensity = 1;
        interval = 1;
        lifeTime = 1;
        position[] = {0,0,0};
        qualityLevel = 2;
        simulation = "particles";
        type = QCLASS(sparksDrop2);
    };
};

// Increases the visual effect of hitting something slightly, follow the same particle settings as vanilla does.
class ImpactConcrete {
    class ImpactDust {
        intensity = 2;
        interval = 1;
        lifeTime = 3;
        position[] = {0, 0, 0};
        simulation = "particles";
        type = "ImpactDustConcrete";
    };
    class ImpactDust2 {
        intensity = 2;
        interval = 1;
        lifeTime = 3;
        position[] = {0, 0, 0};
        simulation = "particles";
        type = "ImpactDustConcrete2";
    };
};

class ImpactEffectsSmall {
    class ImpactDust1 {
        intensity = 2;
        interval = 1;
        lifeTime = 3;
        position[] = {0, 0, 0};
        qualityLevel = 2;
        simulation = "particles";
        type = "ImpactDust2";
    };
    class ImpactDust1Med {
        intensity = 2;
        interval = 1;
        lifeTime = 3;
        position[] = {0, 0, 0};
        qualityLevel = 1;
        simulation = "particles";
        type = "ImpactDust2";
    };
    class ImpactDust1Low {
        intensity = 2;
        interval = 1;
        lifeTime = 3;
        position[] = {0, 0, 0};
        qualityLevel = 0;
        simulation = "particles";
        type = "ImpactDust2Low";
    };
    class ImpactDustWater1 {
        intensity = 2;
        interval = 1;
        lifeTime = 3;
        position[] = {0, 0, 0};
        simulation = "particles";
        type = "ImpactDustWater2";
    };
    class ImpactConcrete {
        intensity = 2;
        interval = 1;
        lifeTime = 3;
        position[] = {0, 0, 0};
        qualityLevel = 2;
        simulation = "particles";
        type = "ImpactConcrete";
    };
    class ImpactConcreteMed {
        intensity = 2;
        interval = 1;
        lifeTime = 3;
        position[] = {0, 0, 0};
        qualityLevel = 1;
        simulation = "particles";
        type = "ImpactConcrete";
    };
    class ImpactEffectsSmall06 {
        intensity = 2;
        interval = 1;
        lifeTime = 3;
        position[] = {0, 0, 0};
        simulation = "particles";
        type = "ImpactSandSmoke2";
    };
};

class ImpactPlaster {
    class ImpactDust1 {
        intensity = 2;
        interval = 1;
        lifeTime = 3;
        position[] = {0, 0, 0};
        qualityLevel = 2;
        simulation = "particles";
        type = "ImpactDustPlaster";
    };
    class ImpactDust1Med {
        intensity = 2;
        interval = 1;
        lifeTime = 3;
        position[] = {0, 0, 0};
        qualityLevel = 1;
        simulation = "particles";
        type = "ImpactDustPlaster";
    };
    class ImpactDust1Low {
        intensity = 2;
        interval = 1;
        lifeTime = 3;
        position[] = {0, 0, 0};
        qualityLevel = 0;
        simulation = "particles";
        type = "ImpactDustPlasterLow";
    };
    class ImpactConcreteWall01 {
        intensity = 2;
        interval = 1;
        lifeTime = 3;
        position[] = {0, 0, 0};
        qualityLevel = 2;
        simulation = "particles";
        type = "ImpactConcreteWall1";
    };
    class ImpactConcreteWall02 {
        intensity = 2;
        interval = 1;
        lifeTime = 3;
        position[] = {0, 0, 0};
        qualityLevel = 2;
        simulation = "particles";
        type = "ImpactConcreteWall2";
    };
    class ImpactConcreteWall02Med {
        intensity = 2;
        interval = 1;
        lifeTime = 3;
        position[] = {0, 0, 0};
        qualityLevel = 1;
        simulation = "particles";
        type = "ImpactConcreteWall2";
    };
    class ImpactConcreteWall03 {
        intensity = 2;
        interval = 1;
        lifeTime = 3;
        position[] = {0, 0, 0};
        qualityLevel = 2;
        simulation = "particles";
        type = "ImpactConcreteWall3";
    };
    class ImpactConcreteWall03Med {
        intensity = 2;
        interval = 1;
        lifeTime = 3;
        position[] = {0, 0, 0};
        qualityLevel = 1;
        simulation = "particles";
        type = "ImpactConcreteWall3";
    };
};
