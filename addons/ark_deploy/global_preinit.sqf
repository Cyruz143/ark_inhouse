ark_deploy_fnc_initVariables = {
    ark_deploy_deployEnabled = false; // module sets this to true
    ark_deploy_deployActive = false;
    ark_deploy_preDeployRequired = false;
    ark_deploy_preDeployActive = false;
    ark_deploy_deployActive = false;
    ark_deploy_pre_factions = [];
    ark_deploy_post_factions = [];
};

ark_deploy_module_init = {
    params ["_logic","_units","_activated"];

    if !(_activated) exitWith {
        diag_log "[ARK] (Deploy) - Module not activated";
    };
    ark_deploy_pre_factions = _logic getVariable "Pre_Safety";
    ark_deploy_post_factions = _logic getVariable "Post_Safety";
    ark_deploy_pre_factions = call compile ark_deploy_pre_factions;
    ark_deploy_post_factions = call compile ark_deploy_post_factions;
    if (count ark_deploy_pre_factions > 0) then {
        ark_deploy_preDeployRequired = true;
    };
    ark_deploy_deployEnabled = true;
    publicVariable "ark_deploy_deployEnabled";
    publicVariable "ark_deploy_deployActive";
    publicVariable "ark_deploy_preDeployActive";
    publicVariable "ark_deploy_preDeployRequired";
    publicVariable "ark_deploy_pre_factions";
    publicVariable "ark_deploy_post_factions";
};

ark_deploy_fnc_deployGroup = {
    onMapSingleClick "";
    params ["_player", "_position"];
    
    _player setVariable ["ark_deploy_canDeploy", false, true];
    private _group = group _player;
    private _pos_x = _position select 0;
    private _pos_y = _position select 1;
    private _pos_z = _position select 2;
    {
        _x setposATL [_pos_x,_pos_y,_pos_z];
        _pos_x = (_pos_x + 1);
        _pos_y = (_pos_y + 1);
    } forEach units _group;
    openMap false;
    hint "Deploy successful";
};

ark_deploy_fnc_assignDeployClick = {
    params ["_player"];
    
    hint "Click anywhere on the map to deploy";
    openMap true;
    _player onMapSingleClick {
        [_this, _pos] call ark_deploy_fnc_deployGroup;
    };
};

ark_deploy_fnc_activatePreGroupDeploy = {
    hint "Activating (Pre Safety) Group Deploy now";
    ark_deploy_preDeployActive = true;
    publicVariable "ark_deploy_preDeployActive";
    {
        if (([_x] call ark_deploy_fnc_playerIsLeader) && (side _x in ark_deploy_pre_factions)) then {
            _x setVariable ["ark_deploy_canDeploy", true, true];
        };
    } forEach allUnits;
};

ark_deploy_fnc_activatePostGroupDeploy = {
    hint "Activating (Post Safety) Group Deploy now";
    ark_deploy_deployActive = true;
    publicVariable "ark_deploy_deployActive";
    {
        if (([_x] call ark_deploy_fnc_playerIsLeader) && (side _x in ark_deploy_post_factions)) then {
            _x setVariable ["ark_deploy_canDeploy", true, true];
        };
    } forEach allUnits;
};

ark_deploy_fnc_canPlayerPostDeploy = {
    params ["_player"];

    private _canDeploy = _player getVariable ["ark_deploy_canDeploy", false];
    (_canDeploy && ark_deploy_deployActive && ((side _player) in ark_deploy_post_factions));
};

ark_deploy_fnc_canPlayerPreDeploy = {
    params ["_player"];

    private _canDeploy = _player getVariable ["ark_deploy_canDeploy", false];
    (_canDeploy && ark_deploy_preDeployActive && (side _player in ark_deploy_pre_factions));
};

ark_deploy_fnc_playerIsLeader = {
    params ["_unit"];
    
    if !([_unit] call ark_deploy_fnc_playerIsValid) exitWith {
        false;
    };

    private _groupLeader = leader group _unit;

    if (_unit == _groupLeader) then {
        true;
    } else {
        false;
    };
};

ark_deploy_fnc_playerIsValid = {
    params ["_unit"];

    if (!(isPlayer _unit) || !(alive _unit)) then {
        false;
    };
    true;
};

[] call ark_deploy_fnc_initVariables;