ark_main_fnc_isHost = {
    private _adminWhiteList = ["76561197969272205", "76561198001868030", "76561197980517821", "76561197972043388"];
    !isMultiplayer || {serverCommandAvailable "#logout"} || (getPlayerUID player) in _adminWhiteList;
};

ark_main_fnc_isAdmiralEnabled = {
    getNumber (missionConfigFile >> "Admiral" >> "isEnabled") isEqualTo 1;
};

ark_main_fnc_isTownSweep = {
    getNumber(missionConfigFile >> 'TownSweep' >> 'isEnabled') isEqualTo 1;
};
