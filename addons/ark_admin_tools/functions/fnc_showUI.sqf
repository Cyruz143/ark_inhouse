ark_admin_tools_fnc_showUI = {
    params ["_shown"];

    showChat _shown;
    showHUD _shown;
    missionNamespace setVariable ["diwako_dui_main_toggled_off", !_shown];
    player setVariable ["acre_sys_core_isDisabled", !_shown, true];
};