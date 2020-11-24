// GM 1.2 is breaking hitpoints in this, update the config once GM has loaded
class CfgVehicles {
    class Plane;
    class Plane_Base_F: Plane {
        class HitPoints {
            class HitHull {
                armor = 1;
                material = 50;
                name = "telo";
                visual = "trup";
                passThrough = 1;
            };
            delete HitAvionics;
            delete HitEngine;
            delete HitFuel;
        };
    };
};