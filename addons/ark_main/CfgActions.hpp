class Man;
class CAManBase: Man {
    class ACE_SelfActions {
        class ARK_Interaction {
            displayName = "ARK";
            condition = "true";
            statement = "";
            icon = "\x\ark\addons\ark_main\resources\ark_star.paa";
            exceptions[] = {"isNotSwimming", "isNotInside", "isNotSitting", "isNotOnLadder", "isNotRefueling"};
            class Host_Actions {
                displayName = "Host Menu";
                condition = "((call ark_main_fnc_isHost) || { (isServer && hasInterface) })";
            };
        };
    };
};