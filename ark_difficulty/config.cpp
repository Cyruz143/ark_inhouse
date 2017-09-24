class CfgPatches {
    class ark_difficulty {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.76;
        requiredAddons[] = {"A3_Data_F", "a3data", "A3_Map_Data"};
        author = "ARK";
        authorUrl = "http://www.ark-group.org";
    };
};

// Old values, borrowing 1tacs for testing
/*class CfgAISkill {
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
        precisionAI = 0.2;
        skillAI = 1;  
    };
};*/

// Disable AI prone stance on all(?) surfaces
class CfgSurfaces {
    class Default {
        AIAvoidStance = 2;
    };
};

// Global Coefficent.
class CfgAILevelPresets {
    class AILevelLow {
        displayName = "ARK";
        precisionAI = 0.345;
        skillAI = 1;  
    };
};


// Further Modifiers
// ACE3 AI skills
// https://community.bistudio.com/wiki/CfgAISkill

class CfgAISkill {
    aimingAccuracy[] = {0,0, 1,0.8};  // {0,0,1,1};   v1.26 defaults
    aimingShake[]    = {0,0, 1,0.6};  // {0,0,1,1};
    aimingSpeed[]    = {0,0, 1,0.7};  // {0,0.5,1,1};
    commanding[]     = {0,0, 1,0.8};  // {0,0,1,1};
    courage[]        = {0,0, 1,0.7};  // {0,0,1,1};
    endurance[]      = {0,0, 1,0.7};  // {0,0,1,1};
    general[]        = {0,0, 1,0.9};  // {0,0,1,1};
    // apparently breaks rapid firing in single fire mode for players
    //reloadSpeed[]    = {0,0, 1,0.8};  // {0,0,1,1};
    spotDistance[]   = {0,0, 1,0.9};  // {0,0.2,1,0.4};
    spotTime[]       = {0,0, 1,0.7};  // {0,0,1,0.7};
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