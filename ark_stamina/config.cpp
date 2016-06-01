class CfgPatches {
    class ark_stamina {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.60;
        requiredAddons[] = {"ace_movement"};
        author = "ARK";
        authorUrl = "http://www.ark-group.org";
    };
};

class CfgMovesFatigue {
    aimPrecisionSpeedCoef = 20;  //default 5
    staminaCooldown = 5;         //default 10
    staminaDuration = 90;        //default 60
    staminaRestoration = 90;     //default 30
    terrainDrainSprint = -0.6;   //default -1
    terrainDrainRun = -1.4;      //default -1
};

class CfgInventoryGlobalVariable {
    maxSoldierLoad = 1400;     //default 1000, ACE 1200
};