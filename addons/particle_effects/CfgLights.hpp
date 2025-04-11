class CfgLights {
    class CLASS(bulletExplode) {
        ambient[] = {0, 0, 0, 0};
        blinking = 1;
        color[] = {1, 0.6, 0.4};
        diffuse[] = {1, 0.5, 0.4};
        drawLight = 0;
        intensity = 500;
        position[] = {0, 3.5, 0};
        size = 1;
        class Attenuation {
            constant = 0;
            hardLimitEnd = 1000;
            hardLimitStart = 500;
            linear = 0;
            quadratic = 2.2;
            start = 0;
        };
    };
};
