class CfgPatches {
    class ark_difficulty {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.70;
        requiredAddons[] = {"A3_Data_F"};
        author = "ARK";
        authorUrl = "http://www.ark-group.org";
    };
};

class CfgAISkill {
    aimingAccuracy[] = {0,0,1,1};
    aimingShake[]    = {0,0,1,1};
    aimingSpeed[]    = {0,0.5,1,1};
    commanding[]     = {0,0,1,1};
    courage[]        = {0,0,1,1};
    endurance[]      = {0,0,1,1};
    general[]        = {0,0,1,1};
    reloadSpeed[]    = {0,0,1,1};
    spotDistance[]   = {0,0,1,1};
    spotTime[]       = {0,0,1,1};
};

class CfgAILevelPresets {
    class AILevelLow {
        displayName = "ARK";
        precisionAI = 0.3;
        skillAI = 1;  
    };
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