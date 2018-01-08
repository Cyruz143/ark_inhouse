class CUP_RPG18_M;
class ARK_RPG22_M : CUP_RPG18_M {
    author = "ARK";
    displayName = "RPG22";
    ammo = "ARK_R_RPG22_AT";
    initSpeed = 320; //115 unsure if breaks zero'ing to increase this
    type = "6 * 256"; //type = "2 * 256" no clue what this does...
    mass = 50;
    descriptionShort = "Range: 0 - 200 m <br/>Type: HEAT <br/>Used in: RPG22";
};

class ACE_PreloadedMissileDummy_RPG22_ARK: ARK_RPG22_M {
    author = "ARK";
    scope = 1;
    scopeArsenal = 0;
    displayName = "Preloaded Missle";
    picture = "\CUP\Weapons\CUP_Weapons_WeaponsCore\ui\blank_icon.paa";
    weaponPoolAvailable = 0;
    mass = 0;
};