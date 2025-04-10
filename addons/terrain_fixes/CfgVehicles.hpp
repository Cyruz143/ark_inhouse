// House - Fixes Fallujah's buildings destruction pop up
class CfgVehicles {
    class Building;
    class NonStrategic: Building {
        class DestructionEffects;
    };
    class HouseBase: NonStrategic {};
    class House: HouseBase {
        class DestructionEffects: DestructionEffects {
            class Smoke1 {
                simulation = "particles";
                type = "HouseDestructionSmoke3";
                position = "destructionEffect1";
                qualityLevel = 2;
                intensity = 0.15;
                interval = 1;
                lifeTime = 0.05;
            };
            class Smoke2: Smoke1 {
                type = "HouseDestructionSmoke4";
                lifeTime = 0.035;
            };
            class Smoke3: Smoke1 {
                type = "HouseDestrSmokeLong";
                lifeTime = 0.035;
            };
        };
    };
};
