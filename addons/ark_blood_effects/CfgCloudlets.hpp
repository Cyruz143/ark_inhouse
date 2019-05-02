class CfgCloudlets {
    class Blood;
    class BloodMist: Blood {
        particleShape = "\A3\data_f\ParticleEffects\Universal\Universal_02";
        particleFSNtieth = 8;
        particleFSIndex = 4;
        particleFSFrameCount = 1;
        particleFSLoop = 0;
        lifeTime = 0.4;
        size[] = {"(hit/50 + 0.5)","2*(hit/50 + 0.5)"};
        color[] = {{0.7,0,0,0.15},{0.7,0,0,0.075}};
        randomDirectionPeriod = 0.3;
        randomDirectionIntensity = 0.3;
        weight = 0.127;
    };
};