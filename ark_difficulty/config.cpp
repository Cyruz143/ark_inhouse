class CfgPatches {
    class ark_difficulty {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.76;
        requiredAddons[] = {"A3_Data_F", "a3data", "A3_Map_Data"};
        author = "ARK, 1tac";
        authorUrl = "http://www.ark-group.org";
    };
};

class CfgSurfaces {
    class Default {
        AIAvoidStance = 2;
    };
};

class CfgAILevelPresets {
    class AILevelLow {
        displayName = "ARK";
        precisionAI = 0.3;
        skillAI = 1;  
    };
};

class CfgAISkill {
    aimingAccuracy[] = {0,0, 1,0.6};
    aimingShake[]    = {0,0, 1,0.6};
    aimingSpeed[]    = {0,0, 1,0.65};
    commanding[]     = {0,0, 1,1};
    courage[]        = {0,0, 1,1};
    endurance[]      = {0,0, 1,1};
    general[]        = {0,0, 1,0.65};
    // apparently breaks rapid firing in single fire mode for players
    //reloadSpeed[]    = {0,0, 1,0.8};
    spotDistance[]   = {0,0, 1,1};
    spotTime[]       = {0,0, 1,1};
};

class CfgDifficultyPresets {
    defaultPreset = "Regular";
        class Recruit {
            description = "Recruit - ARK";
            levelAI = "AILevelLow";
                class Options {
                    autoReport = 0;
                    cameraShake = 1;
                    commands = 0;
                    deathMessages = 0;
                    detectedMines = 0;
                    enemyTags = 0;
                    friendlyTags = 0;
                    groupIndicators = 0;
                    mapContent = 0;
                    multipleSaves = 0;
                    reducedDamage = 0;
                    scoreTable = 0;
                    staminaBar = 0;
                    stanceIndicator = 1;
                    squadRadar = 0;
                    tacticalPing = 0;
                    thirdPersonView = 0;
                    visionAid = 0;
                    vonID = 0;
                    waypoints = 0;
                    weaponCrosshair = 1;
                    weaponInfo = 1;
                };
        };
        class Regular {
            description = "Regular - ARK";
            levelAI = "AILevelLow";
                class Options {
                    autoReport = 0;
                    cameraShake = 1;
                    commands = 0;
                    deathMessages = 0;
                    detectedMines = 0;
                    enemyTags = 0;
                    friendlyTags = 0;
                    groupIndicators = 0;
                    mapContent = 0;
                    multipleSaves = 0;
                    reducedDamage = 0;
                    scoreTable = 0;
                    staminaBar = 0;
                    stanceIndicator = 1;
                    squadRadar = 0;
                    tacticalPing = 0;
                    thirdPersonView = 0;
                    visionAid = 0;
                    vonID = 0;
                    waypoints = 0;
                    weaponCrosshair = 1;
                    weaponInfo = 1;
                };
        };
        class Veteran {
            description = "Veteran - ARK";
            levelAI = "AILevelLow";
                class Options {
                    autoReport = 0;
                    cameraShake = 1;
                    commands = 0;
                    deathMessages = 0;
                    detectedMines = 0;
                    enemyTags = 0;
                    friendlyTags = 0;
                    groupIndicators = 0;
                    mapContent = 0;
                    multipleSaves = 0;
                    reducedDamage = 0;
                    scoreTable = 0;
                    staminaBar = 0;
                    stanceIndicator = 1;
                    squadRadar = 0;
                    tacticalPing = 0;
                    thirdPersonView = 0;
                    visionAid = 0;
                    vonID = 0;
                    waypoints = 0;
                    weaponCrosshair = 1;
                    weaponInfo = 1;
                };
        };
        class Mercenary {
            description = "Mercenary - ARK";
            levelAI = "AILevelLow";
                class Options {
                    autoReport = 0;
                    cameraShake = 1;
                    commands = 0;
                    deathMessages = 0;
                    detectedMines = 0;
                    enemyTags = 0;
                    friendlyTags = 0;
                    groupIndicators = 0;
                    mapContent = 0;
                    multipleSaves = 0;
                    reducedDamage = 0;
                    scoreTable = 0;
                    staminaBar = 0;
                    stanceIndicator = 1;
                    squadRadar = 0;
                    tacticalPing = 0;
                    thirdPersonView = 0;
                    visionAid = 0;
                    vonID = 0;
                    waypoints = 0;
                    weaponCrosshair = 1;
                    weaponInfo = 1;
                };
        };
};