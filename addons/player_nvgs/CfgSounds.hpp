class CfgSounds {
    class ark_nvg_on {
        name = "ark_nvg_on";
        sound[] = {QPATHTOF(snd\ark_nvg_on.ogg), 0.75, 1, 1};
        titles[] = {};
    };

    class ark_nvg_off: ark_nvg_on {
        name = "ark_nvg_off";
        sound[] = {QPATHTOF(snd\ark_nvg_off.ogg), 0.75, 1, 1};
    };
};
