#include "script_component.hpp"

[QGVAR(stencilServer), {
    _this call ace_tagging_fnc_stencilVehicle;
}] call CBA_fnc_addEventHandler;

if (hasInterface) then {
    private _action = [
        "claimVehicle",
        "Claim Vehicle",
        "\z\ace\addons\tagging\ui\icons\iconTaggingWhite.paa",
        {
            private _groupID = groupId (group ace_player);
            [QGVAR(stencilServer), [_target, _groupID]] call CBA_fnc_serverEvent;
            playSound3D ["z\ace\addons\tagging\sounds\spray.ogg", ace_player, false, (eyePos ace_player), 5, 1, 15];
        },
        {alive _target && { ((getText (configOf _target >> "selectionClan")) in selectionNames _target) }}
    ] call ace_interact_menu_fnc_createAction;

    {
        [_x, 0, ["ACE_MainActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;
    } forEach ["Car","Tank"];
};
