class CfgPatches {
    class ark_player_nvgs {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.66;
        requiredAddons[] = {"CBA_MAIN"};
        author = "ARK";
        authorUrl = "http://www.ark-group.org";
    };
};

class Extended_PostInit_EventHandlers {
    class ark_player_nvgs {
        clientInit = "[] call compile preProcessFileLineNumbers 'x\ark\addons\ark_player_nvgs\nvg_postinit.sqf';";
    };
};

class CfgSounds {
    sounds[] = {ark_nvg_on,ark_nvg_off};
    class ark_nvg_on {
        name = "ark_nvg_on";
        sound[] = {"x\ark\addons\ark_player_nvgs\snd\ark_nvg_on.ogg", 0.75, 1, 1};
        titles[] = {};
    };
    class ark_nvg_off {
        name = "ark_nvg_off";
        sound[] = {"x\ark\addons\ark_player_nvgs\snd\ark_nvg_off.ogg", 0.75, 1, 1};
        titles[] = {};
    };
};