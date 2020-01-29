class CfgLights {
    class Goko_bulletexplo {
        diffuse[] = {1,0.6,0.4};
        color[] = {1,0.6,0.4};
        ambient[] = {0,0,0,0};
        size = 1;
        intensity = 5000;
        drawLight = 0;
        blinking = 1;
        class Attenuation {
            start = 0;
            constant = 0;
            linear = 0;
            quadratic = 2.2;
            hardLimitStart = 500;
            hardLimitEnd = 1000;
        };
        position[] = {0,3.5,0};
    };
    class Goko_bulletexplo2 {
        diffuse[] = {1,0.5,0.4};
        color[] = {1,0.6,0.4};
        ambient[] = {0,0,0,0};
        size = 1;
        intensity = 500;
        drawLight = 0;
        blinking = 1;
        class Attenuation {
            start = 0;
            constant = 0;
            linear = 0;
            quadratic = 2.2;
            hardLimitStart = 500;
            hardLimitEnd = 1000;
        };
        position[] = {0,3.5,0};
    };
};