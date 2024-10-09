re_interaction_fnc_preinit = {
    re_interaction_locationSizeChange = 50;

    ["player.initialized", {
        [] call re_fnc_addBaseFortsToPlank;
        [] call re_interaction_fnc_addInteractions;
    }] call hull3_event_fnc_addEventHandler;
};

re_fnc_enablePreGroupDeploy = {
    ark_deploy_pre_factions  = [re_defender_side];
    publicVariable "ark_deploy_pre_factions";

    ark_deploy_deployEnabled = true;
    publicVariable "ark_deploy_deployEnabled";

    [] call ark_deploy_fnc_activatePreGroupDeploy;
};

re_fnc_enablePostGroupDeploy = {
    ark_deploy_post_factions = [re_attacker_side];
    publicVariable "ark_deploy_post_factions";

    ark_deploy_deployEnabled = true;
    publicVariable "ark_deploy_deployEnabled";

    [] call ark_deploy_fnc_activatePostGroupDeploy;
};

re_interaction_fnc_addInteractions = {
    private _condition = { [] call ark_main_fnc_isHost && {[_player, _target, []] call ace_common_fnc_canInteractWith} };
    private _action =
        [ "Random Engagements"
        , "Random Engagements"
        , "\x\ark\addons\ark_main\resources\ark_star.paa"
        , {}
        , _condition
        ] call ace_interact_menu_fnc_createAction;
    [player, 1, ["ACE_SelfActions"], _action] call ace_interact_menu_fnc_addActionToObject;
    private _actions =
        [ ["Select Random Location", "\x\ark\addons\ark_main\resources\ark_star.paa", { [] call re_interaction_fnc_selectLocation; }]
        , ["Enable Defender Group Deploy", "\x\ark\addons\ark_main\resources\click_enable.paa", { [0, { [] call re_fnc_enablePreGroupDeploy }, []] call CBA_fnc_globalExecute; }]
        , ["Enable Attacker Group Deploy", "\x\ark\addons\ark_main\resources\click_enable.paa", { [0, { [] call re_fnc_enablePostGroupDeploy }, []] call CBA_fnc_globalExecute; }]
        , ["Enable Plank", "\x\ark\addons\ark_main\resources\ark_star.paa", { [0, { [] call re_fnc_enablePlank }, []] call CBA_fnc_globalExecute; }]
        ];
    {
        _action =
            [ _x select 0
            , _x select 0
            , _x select 1
            , _x select 2
            , _condition
            ] call ace_interact_menu_fnc_createAction;
        [player, 1, ["ACE_SelfActions", "Random Engagements"], _action] call ace_interact_menu_fnc_addActionToObject;
    } foreach _actions;

    _action =
        [ "Location Size"
        , "Location Size"
        , "\x\ark\addons\ark_main\resources\ark_star.paa"
        , {}
        , _condition
        ] call ace_interact_menu_fnc_createAction;
    [player, 1, ["ACE_SelfActions", "Random Engagements"], _action] call ace_interact_menu_fnc_addActionToObject;
    private _sizes =
        [ ["Increase", re_interaction_locationSizeChange]
        , ["Increase", re_interaction_locationSizeChange / 2]
        , ["Decrease", -re_interaction_locationSizeChange]
        , ["Decrease", -re_interaction_locationSizeChange / 2]
        ];
    {
        _action =
            [ _x select 0
            , format ["%1 (%2m)", _x select 0, _x select 1]
            , "\x\ark\addons\ark_main\resources\ark_star.paa"
            , { [0, { _this call re_fnc_changeLocationSize; }, [_this select 2 select 0]] call CBA_fnc_globalExecute; }
            , _condition
            , {}
            , [_x select 1]
            ] call ace_interact_menu_fnc_createAction;
        [player, 1, ["ACE_SelfActions", "Random Engagements", "Location Size"], _action] call ace_interact_menu_fnc_addActionToObject;
    } foreach _sizes;
};

re_interaction_fnc_selectLocation = {
    [["\x\ark\addons\ark_main\resources\click.paa", 2.0], ["Click on map to select attack location"]] call CBA_fnc_notify;
    ["re_mapClick", "onMapSingleClick", {
        [0, { _this call re_fnc_moveLocationMarker }, [_pos]] call CBA_fnc_globalExecute;
        ["re_mapClick", "onMapSingleClick"] call BIS_fnc_removeStackedEventHandler;
    }] call BIS_fnc_addStackedEventHandler;
};

re_fnc_enablePlank = {
    [-1, {
        private _unit = player;
        private _gearClass = _unit getVariable "hull3_gear_class";
        if (isNil {_unit getVariable "re_areFortsAssigned"}) then {
            call {
                if (side _unit isEqualTo re_attacker_side && {_gearClass in ["HMGAG"]})exitWith { [] call re_fnc_addTechnicalToPlank; };
                if (side _unit isEqualTo re_attacker_side)                             exitWith {};

                ["mission.safetytimer.ended", {[player] call plank_api_fnc_forceRemoveAllFortifications;}] call hull3_event_fnc_addEventHandler;
                private _fortCount = [0, 0, 0, 3, 0];
                if (_gearClass in ["CO"])                                       then {_fortCount = [1, 0, 0, 2]; };
                if (_gearClass in ["XO"])                                       then {_fortCount = [1, 0, 0, 2]; };
                if (_gearClass in ["SL"])                                       then {_fortCount = [0, 1, 1, 2]; };
                if (_gearClass in ["FTL"])                                      then {_fortCount = [0, 1, 1, 2]; };
                private _fortIndices = player getVariable ["re_plank_fortIndices", []];
                {
                    [_unit, _x, _fortCount select _forEachIndex] call plank_api_fnc_addFortification;
                } foreach _fortIndices;
            };
            _unit setVariable ["re_areFortsAssigned", true, true];
        };
    }, []] call CBA_fnc_globalExecute;
};

re_fnc_addBaseFortsToPlank = {
    private _forts = [
        ["Bunker (Large)",                      "Land_BagBunker_Large_F",               8.5,            180,                60,             ""],
        ["Bunker (Small)",                      "Land_BagBunker_Small_F",               6,              180,                360,            ""],
        ["Wide Sandbag fence (Long)",           "Land_BagFence_Long_F",                 4,              0,                  360,            ""],
        ["Wide Sandbag fence (Short)",          "Land_BagFence_Short_F",                7,              0,                  360,            ""]
    ];
    private _fortIndices = _forts apply { [player, _x] call plank_api_fnc_addNewFortification };
    player setVariable ["re_plank_fortIndices", _fortIndices];
};

re_fnc_addTechnicalToPlank = {
    private _techincalClassnameEntries = getArray (configFile >> "Hull3" >> "Faction" >> re_attacker_faction >> "vehicleClassnames") select { _x select 0 isEqualTo "Technical"};
    private _techincalClassname = _techincalClassnameEntries select 0 select 1;
    private _fortIndex = [player, _techincalClassname, format ["Technical (%1)", _techincalClassname]] call plank_api_fnc_addNewBoundingFortification;
    [player, _fortIndex, 1] call plank_api_fnc_addFortification;
};
