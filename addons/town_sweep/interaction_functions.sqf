ts_interaction_fnc_preinit = {
    ["player.initialized", ts_interaction_fnc_addInteractions] call hull3_event_fnc_addEventHandler;
};

ts_fnc_enableGroupDeploy = {
    ark_deploy_post_factions = [ts_player_side];
    publicVariable "ark_deploy_post_factions";

    ark_deploy_deployEnabled = true;
    publicVariable "ark_deploy_deployEnabled";

    [] call ark_deploy_fnc_activatePostGroupDeploy;
};

ts_interaction_fnc_addInteractions = {
    private _condition = { [] call ark_admin_tools_fnc_isHost && {[_player, _target, []] call ace_common_fnc_canInteractWith} };
    private _action =
        [ "Town Sweep"
        , "Town Sweep"
        , "\x\ark\addons\ark_main\resources\ark_star.paa"
        , {}
        , _condition
        ] call ace_interact_menu_fnc_createAction;
    [player, 1, ["ACE_SelfActions"], _action] call ace_interact_menu_fnc_addActionToObject;
    private _actions =
        [ ["Select Location", "\x\ark\addons\ark_main\resources\ark_star.paa", { call ts_spawn_fnc_selectLocation }]
        , ["Activate Zone", "\x\ark\addons\ark_main\resources\ai_enable.paa", { [0, { [] call ts_spawn_fnc_activateLocation }, []] call CBA_fnc_globalExecute; }]
        , ["Enable Group Deploy", "\x\ark\addons\ark_main\resources\click_enable.paa", { [0, { [] call ts_fnc_enableGroupDeploy }, []] call CBA_fnc_globalExecute; }]
        ];
    {
        _action =
            [ _x select 0
            , _x select 0
            , _x select 1
            , _x select 2
            , _condition
            ] call ace_interact_menu_fnc_createAction;
        [player, 1, ["ACE_SelfActions", "Town Sweep"], _action] call ace_interact_menu_fnc_addActionToObject;
    } foreach _actions;

    _action =
        [ "Difficulty"
        , "Difficulty"
        , "\x\ark\addons\ark_main\resources\ark_star.paa"
        , {}
        , _condition
        ] call ace_interact_menu_fnc_createAction;
    [player, 1, ["ACE_SelfActions", "Town Sweep"], _action] call ace_interact_menu_fnc_addActionToObject;
    private _difficulties =
        [ ["Easy", 2]
        , ["Normal", 3]
        , ["Hard", 4]
        ];
    {
        _action =
            [ _x select 0
            , format ["%1 (%2x)", _x select 0, _x select 1]
            , "\x\ark\addons\ark_main\resources\ark_star.paa"
            , { [0, { ts_spawn_ai_multiplier = _this select 0 }, [_this select 2 select 0]] call CBA_fnc_globalExecute; }
            , _condition
            , {}
            , [_x select 1]
            ] call ace_interact_menu_fnc_createAction;
        [player, 1, ["ACE_SelfActions", "Town Sweep", "Difficulty"], _action] call ace_interact_menu_fnc_addActionToObject;
    } foreach _difficulties;

    _action =
        [ "Town Size"
        , "Town Size (Before activation)"
        , "\x\ark\addons\ark_main\resources\ark_star.paa"
        , {}
        , _condition
        ] call ace_interact_menu_fnc_createAction;
    [player, 1, ["ACE_SelfActions", "Town Sweep"], _action] call ace_interact_menu_fnc_addActionToObject;
    private _sizes =
        [ ["Increase", ts_spawn_location_sizeChange]
        , ["Increase", ts_spawn_location_sizeChange / 2]
        , ["Decrease", -ts_spawn_location_sizeChange]
        , ["Decrease", -ts_spawn_location_sizeChange / 2]
        ];
    {
        _action =
            [ _x select 0
            , format ["%1 (%2m)", _x select 0, _x select 1]
            , "\x\ark\addons\ark_main\resources\ark_star.paa"
            , { [0, { _this call ts_spawn_fnc_changeLocationSize; }, [_this select 2 select 0]] call CBA_fnc_globalExecute; }
            , _condition
            , {}
            , [_x select 1]
            ] call ace_interact_menu_fnc_createAction;
        [player, 1, ["ACE_SelfActions", "Town Sweep", "Town Size"], _action] call ace_interact_menu_fnc_addActionToObject;
    } foreach _sizes;
};
