// Fixes CLAfghan's weird purple sun thingy...
class CfgWorlds {
    class DefaultWorld;
    class CAWorld: DefaultWorld {
        class Grid;
    };
    class Clafghan: CAWorld {
        MaxTide = 1;
        description = "Clafghan";
        horizontObject = "A3\Map_stratis\data\horizont.p3d";
        skyObject = "A3\Map_Stratis\data\obloha.p3d";
        skyTexture = "A3\Map_Stratis\data\sky_semicloudy_sky.paa";
        skyTextureR = "A3\Map_Stratis\data\sky_semicloudy_lco.paa";

        class Grid: Grid {
            offsetX = 0;
            offsetY = 20480;
            class Zoom1 {
                zoomMax = 1e-006;
                format = "XY";
                formatX = "0000";
                formatY = "0000";
                stepX = 10;
                stepY = -10;
            };
            class Zoom2 {
                zoomMax = 0.025;
                format = "XY";
                formatX = "000";
                formatY = "000";
                stepX = 100;
                stepY = -100;
            };
            class Zoom3 {
                zoomMax = 0.5;
                format = "XY";
                formatX = "00";
                formatY = "00";
                stepX = 1000;
                stepY = -1000;
            };
            class Zoom4 {
                zoomMax = 1e+030;
                format = "XY";
                formatX = "0";
                formatY = "0";
                stepX = 10000;
                stepY = -10000;
            };
        };
    };
};