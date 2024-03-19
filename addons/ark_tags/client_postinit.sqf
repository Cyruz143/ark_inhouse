private _action = [
    "claimVehicle",
    "Claim Vehicle",
    "\z\ace\addons\tagging\ui\icons\iconTaggingWhite.paa",
    {[_target, (groupId group ace_player)] remoteExec ["ace_tagging_fnc_stencilVehicle", -2]},
    {alive _target}
] call ace_interact_menu_fnc_createAction;

{
    [_x, 0, ["ACE_MainActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;
} forEach ["Car","Tank"];
