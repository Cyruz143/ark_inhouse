class RscStandardDisplay;
class RscPictureKeepAspect;
class RscControlsGroup;
class RscDisplayStart: RscStandardDisplay {
    class controls {
        class LoadingStart: RscControlsGroup {
            class controls {
                class Logo: RscPictureKeepAspect {
                    idc = 1200;
                    text = QPATHTOF(data\ark_ca.paa);
                    x = "0.25 * safezoneW";
                    y = "0.3125 * safezoneH";
                    w = "0.5 * safezoneW";
                    h = "0.25 * safezoneH";
                };
            };
        };
    };
};
