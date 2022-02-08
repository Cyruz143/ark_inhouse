class CfgVehicles {
    class Land;
    class Man: Land {
        sensitivityEar = 1.0;
    };
    class CAManBase: Man {
        sensitivity = 4;
        sensitivityEar = 0.75;
    };
    class SoldierWB : CAManBase {
        fsmFormation = "ARK_Formation";
        sensitivity = 5;
        sensitivityEar = 1.0;
    };
    class SoldierEB : CAManBase {
        fsmFormation = "ARK_Formation";
        sensitivity = 5;
        sensitivityEar = 1.0;
    };
    class SoldierGB : CAManBase {
        fsmFormation = "ARK_Formation";
        sensitivity = 5;
        sensitivityEar = 1.0;
    };
};
