#include "ark_macros.h"

ark_deploy_initVariables = {
    ark_deploy_deployEnabled = false; // module sets this to true
    ark_deploy_deployActive = false;
    ark_deploy_preDeployRequired = false;
    ark_deploy_preDeployActive = false;
    ark_deploy_deployActive = false;
    ark_deploy_pre_factions = [];
    ark_deploy_post_factions = [];
};

ark_deploy_module_init = {
    FUN_ARGS_3(_logic,_units,_activated);

    if !(_activated) exitWith {
        DEBUG {
            [["Logic: %1 was not activated!", _logic], DEBUG_ERROR] call ark_debug_fnc_logToServer;
        };
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
    [["Group deploy is enabled. Pre factions: %1. Post Factions: %2", ark_deploy_pre_factions, ark_deploy_post_factions], DEBUG_INFO] call ark_debug_fnc_logToServer;
};

ark_deploy_fnc_deployGroup = {
    onMapSingleClick ""; // remove map click
    FUN_ARGS_2(_player,_position);
    
    _player setVariable ["ark_deploy_canDeploy", false, true]; // disallows player from deploying again
    DECLARE(_group) = group _player;
    DECLARE(_pos_x) = _position select 0;
    DECLARE(_pos_y) = _position select 1;
    DECLARE(_pos_z) = _position select 2;
    {
        _x setposATL [_pos_x,_pos_y,_pos_z];
        // Co-ordinates are incremented slightly to avoid stacking all the units on top of each other
        INC(_pos_x);
        INC(_pos_y);
    } forEach units _group;
    openMap false; // close map
    hint "Deploy successful";
};

ark_deploy_fnc_assignDeployClick = {
    FUN_ARGS_1(_player);
    
    hint "Click anywhere on the map to deploy";
    openMap true;
    _player onMapSingleClick {
        [_this, _pos] call ark_deploy_fnc_deployGroup;
    };
};

ark_deploy_fnc_activatePreGroupDeploy = {
    [["Assigning (Pre Safety) Group deploy to leaders now"], DEBUG_INFO] call ark_debug_fnc_logToServer;
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
    [["Assigning (Post Safety) Group deploy to leaders now"], DEBUG_INFO] call ark_debug_fnc_logToServer;
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
    FUN_ARGS_1(_player);

    DECLARE(_canDeploy) = _player getVariable ["ark_deploy_canDeploy", false];
    (_canDeploy && ark_deploy_deployActive && ((side _player) in ark_deploy_post_factions));
};

ark_deploy_fnc_canPlayerPreDeploy = {
    FUN_ARGS_1(_player);

    DECLARE(_canDeploy) = _player getVariable ["ark_deploy_canDeploy", false];
    (_canDeploy && ark_deploy_preDeployActive && (side _player in ark_deploy_pre_factions));
};

ark_deploy_fnc_playerIsLeader = {
    FUN_ARGS_1(_unit);
    
    if !([_unit] call ark_deploy_fnc_playerIsValid) exitWith {
        false;
    };

    private _groupLeader = leader group _unit;

    if (_unit == _groupLeader) then {
        DEBUG {
            [["Unit: %1 is a leader", _unit], DEBUG_INFO] call ark_debug_fnc_logToServer;
        };
        true;
    } else {
        DEBUG {
            [["Unit: %1 is NOT a leader", _unit], DEBUG_INFO] call ark_debug_fnc_logToServer;
        };
        false;
    };
};

ark_deploy_fnc_playerIsValid = {
    FUN_ARGS_1(_unit);

    if (!(isPlayer _unit) || !(alive _unit)) then {
        DEBUG {
            [["Unit %1 is either not a player or is not alive", _unit], DEBUG_WARN] call ark_debug_fnc_logToServer;
        };
        false;
    };
    true;
};