class CfgCloudlets {
    class Blood;
    class BloodMist: Blood {
        particleShape = "\A3\data_f\ParticleEffects\Universal\Universal_02";
        particleFSNtieth = 8;
        particleFSIndex = 4;
        particleFSFrameCount = 1;
        particleFSLoop = 0;
        lifeTime = 0.8;
        size[] = {"((hit factor [3,100])/50 + 0.5)", "2*((hit factor [3,100])/50 + 0.5)"};
        color[] = {{0.7,0,0,0.2},{0.7,0,0,0.1}};
        randomDirectionPeriod = 0.3;
        randomDirectionIntensity = 0.3;
        weight = 0.127;
    };
};