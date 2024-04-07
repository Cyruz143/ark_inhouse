private _action = [
    "claimVehicle",
    "Claim Vehicle",
    "\z\ace\addons\tagging\ui\icons\iconTaggingWhite.paa",
    {
        [_target, (groupId group ace_player)] remoteExec ["ace_tagging_fnc_stencilVehicle", 2];
        playSound3D ["z\ace\addons\tagging\sounds\spray.ogg", ace_player, false, (eyePos ace_player), 5, 1, 15];
    },
    {
        alive _target &&
        {
            private _selectionClan = getText (configOf _target >> "selectionClan");
            if !(_selectionClan in selectionNames _target) exitWith {
                false
            };
        }
    }
] call ace_interact_menu_fnc_createAction;

{
    [_x, 0, ["ACE_MainActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;
} forEach ["Car","Tank"];
