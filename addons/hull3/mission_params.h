class MissionParams {
    // Date YYYY-MM-DD
    date[] = {
        {2035, 6, 1}, // New Moon
        {2035, 6, 12} // Full Moon
    };

    // Time HH24:mm
    time[] = {
        {4, 50}, // Dawn
        {5, 50}, // Early Morning
        {9, 0}, // Morning
        {12, 0}, // Noon
        {15, 0}, // Afternoon
        {17, 50}, // Evening
        {18, 50}, // Dusk
        {0, 0} // Night
    };

    // Fog Strength, Decay, Base
    fog[] = {
        {0, 0, 0}, // Light
        {0.2, 0, 0}, // Medium
        {0.4, 0, 0} // Heavy
    };

    // Overcast, Rain, Rainbow, Lightnings, Wind Strength, Wind Gusts, Waves, Snow
    weather[] = {
        {-1},                                                          // Random

        {0,       0,       0,    0,       0.5,   0,       0,    0},    // Clear (Calm)
        {0,       0,       0,    0,       2.5,   0.5,  0.25,    0},    // Clear (Light Winds)
        {0,       0,       0,    0,       10,    1,    0.50,    0},    // Clear (Stong Winds)

        {0.48,    0,       0,    0,       0.5,   0,       0,    0},    // Overcast (Calm)
        {0.48,    0,       0,    0,       2.5,   0.5,  0.25,    0},    // Overcast (Light Winds)
        {0.48,    0,       0,    0,       10,    1,    0.50,    0},    // Overcast (Strong Winds)

        {1,       0.33,    0.25, 0.25,    2.5,   0.5,  0.25,    0},    // Rain (Light Winds)
        {1,       0.66,    0.5,  0.50,    10,    1,    0.50,    0},    // Rain (Strong Winds)
        {1,       1,       1,    1,       20,    1,       1,    0},    // Storm

        {1,       0.33,    0,    0.25,    2.5,   0.5,  0.25,    1},    // Snow (Light Winds)
        {1,       0.66,    0,    0.50,    10,    1,    0.50,    1},    // Snow (Strong Winds)
        {1,       1,       0,    1,       20,    1,       1,    1}     // Snow Storm
    };

    // See https://community.bistudio.com/wiki/setRain for details
    snow[] = {
        "a3\data_f\snowflake4_ca.paa", // rainDropTexture
        4, // texDropCount
        0.01, // minRainDensity
        25, // effectRadius
        0.05, // windCoef
        2.5, // dropSpeed
        0.5, // rndSpeed
        0.5, // rndDir
        0.07, // dropWidth
        0.07, // dropHeight
        {
            1,  // R
            1,  // G
            1,  // B
            0.5 // A
        },
        0.0, // lumSunFront
        0.2, // lumSunBack
        0.5, // refractCoef
        0.5, // refractSaturation
        1, // snow
        0 // dropColorStrong
    };
};