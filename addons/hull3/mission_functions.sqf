#include "script_component.hpp"
#include "\userconfig\hull3\log\mission.h"

#define DEFAULT_TIME_OF_DAY [12, 0]

hull3_mission_fnc_preInit = {
    hull3_mission_isJip = false;
    [] call hull3_mission_fnc_addEventHandlers;
    DEBUG("hull3.mission: Mission functions preInit finished.");
};

hull3_mission_fnc_addEventHandlers = {
    ["player.initialized", hull3_mission_fnc_clientInit] call hull3_event_fnc_addEventHandler;
};

hull3_mission_fnc_init = {
    [] call hull3_mission_fnc_evaluateParams;
    hull3_mission_safetyTimerAbort = false;
};

hull3_mission_fnc_serverInit = {
    [] call hull3_mission_fnc_addServerEHs;
    [] call hull3_mission_fnc_readMissionParamValues;
    [] call hull3_mission_fnc_setEnviroment;
    [] spawn hull3_mission_fnc_serverSafetyTimerLoop;
    DEBUG("hull3.mission: Server init finished.");
};

hull3_mission_fnc_clientInit = {
    hull3_mission_safetyTimerActionIds = [-1, -1, -1];
    hull3_mission_isJip = SLX_XEH_MACHINE #1;
    if (hull3_mission_isJip) then {
        [] call hull3_mission_fnc_getJipSync;
    };
    DEBUG("hull3.mission: Client init finished.");
};

hull3_mission_fnc_evaluateParams = {
    if (!isNil {paramsArray}) then {
        {
            private ["_name", "_code"];
            _name = configName ((missionConfigFile >> "Params") select _forEachIndex);
            _code = getText (missionConfigFile >> "Params" >> _name >> "code");
            call compile format [_code, _x];
        } forEach paramsArray;
        TRACE_1("hull3.mission.params: ParamsArray '%1' have been evaluated.",paramsArray));
    };
};

hull3_mission_fnc_readMissionParamValues = {
    if (!isNil {hull3_mission_date}) then {
        hull3_mission_date = (["MissionParams", "date"] call hull3_config_fnc_getArray) select hull3_mission_date;
        TRACE_1("hull3.mission.params: Mission param 'hull3_mission_date' was set to '%1'.",hull3_mission_date));
    };
    if (!isNil {hull3_mission_timeOfDay}) then {
        hull3_mission_timeOfDay = (["MissionParams", "time"] call hull3_config_fnc_getArray) select hull3_mission_timeOfDay;
        TRACE_1("hull3.mission.params: Mission param 'hull3_mission_timeOfDay' was set to '%1'.",hull3_mission_timeOfDay));
    };
    if (!isNil {hull3_mission_fog}) then {
        hull3_mission_fog = (["MissionParams", "fog"] call hull3_config_fnc_getArray) select hull3_mission_fog;
        TRACE_1("hull3.mission.params: Mission param 'hull3_mission_fog' was set to '%1'.",hull3_mission_fog));
    };
    if (!isNil {hull3_mission_weather}) then {
        hull3_mission_weather = (["MissionParams", "weather"] call hull3_config_fnc_getArray) select hull3_mission_weather;
        TRACE_1("hull3.mission.params: Mission param 'hull3_mission_weather' was set to '%1'.",hull3_mission_weather));
    };
};

hull3_mission_fnc_getDateTime = {
    if (isNil {hull3_mission_date}) then {
        hull3_mission_date = [2035, 6, 12];
        TRACE_1("hull3.mission.datetime: Mission param 'hull3_mission_date' was not set, using default '%1'.",hull3_mission_date));
    };
    if (isNil {hull3_mission_timeOfDay}) then {
        hull3_mission_timeOfDay = DEFAULT_TIME_OF_DAY;
        TRACE_1("hull3.mission.datetime: Mission param 'hull3_mission_timeOfDay' was not set, using default '%1'.",hull3_mission_timeOfDay));
    };

    [hull3_mission_date #0, hull3_mission_date #1, hull3_mission_date #2, hull3_mission_timeOfDay #0, hull3_mission_timeOfDay #1];
};

hull3_mission_fnc_getTimeOfDay = {
    private _paramIdx = "true" configClasses (missionConfigFile >> "Params") findIf { configName _x == "Hull3_TimeOfDay" };
    if (_paramIdx == -1) exitWith { DEFAULT_TIME_OF_DAY; };

    (["MissionParams", "time"] call hull3_config_fnc_getArray) select (paramsArray select _paramIdx);
};

hull3_mission_fnc_getFog = {
    if (isNil {hull3_mission_fog}) then {
        hull3_mission_fog = [0, 0, 0];
        TRACE_1("hull3.mission.fog: Mission param 'hull3_mission_fog' was not set, using default '%1'.",hull3_mission_fog));
    };

    hull3_mission_fog;
};

hull3_mission_fnc_getWeather = {
    if (isNil {hull3_mission_weather}) then {
        hull3_mission_weather = [0, 0, 0, 0, 0, 0, 0, 0];
        TRACE_1("hull3.mission.weather: Mission param 'hull3_mission_weather' was not set, using default '%1'.",hull3_mission_weather));
    };
    if (hull3_mission_weather #0 == -1 && {isServer}) then {
        private _weathers = ["MissionParams", "weather"] call hull3_config_fnc_getArray;
        hull3_mission_weather = _weathers select ((floor random ((count _weathers) - 1)) + 1);
        TRACE_1("hull3.mission.weather: Random weather was selected. Generated random weather '%1' for server.",hull3_mission_weather));
    } else {
        if (!isDedicated && !isServer) then {
            hull3_mission_weather = [0, 0, 0, 0, 0, 0, 0, 0];
            TRACE_1("hull3.mission.weather: Random weather was selected. Using default weather '%1' for client.",hull3_mission_weather));
        };
    };

    hull3_mission_weather;
};

hull3_mission_fnc_setWeather = {
    params ["_time","_weather"];

    [(_weather #0)] call BIS_fnc_setOvercast;
    _time setRain (_weather #1);
    [_time, (_weather #2)] remoteExec ["setRainbow", 0, true];
    _time setLightnings (_weather #3);
    setWind [(_weather #4), (_weather #4), true];
    [_time, (_weather #5)] remoteExec ["setGusts", 0, true];
    [_time, (_weather #6)] remoteExec ["setWaves", 0, true];
    private _snow = _weather #7;

    if (!isNil "_snow" && {_snow isEqualTo 1}) then {
        private _snowData = ["MissionParams", "snow"] call hull3_config_fnc_getArray;
        _snowData set [15, (_snowData #15) isEqualTo "true"];
        _snowData set [16, (_snowData #16) isEqualTo "true"];
        _snowData call BIS_fnc_setRain;
        DEBUG_2("hull3.mission.weather: Snow weather set to '%1' with snowData set to '%2'.",_snow,_snowData));
    };
};

hull3_mission_fnc_setEnviroment = {
    [([] call hull3_mission_fnc_getDateTime),true] call BIS_fnc_setDate;
    [0, [] call hull3_mission_fnc_getWeather] call hull3_mission_fnc_setWeather;
    ([] call hull3_mission_fnc_getFog) remoteExec ["bis_fnc_setFog",0];
    DEBUG_3("hull3.mission.weather: Environment was set. Date to '%1', fog to '%2' and weather to '%3'.",[] call hull3_mission_fnc_getDateTime,[] call hull3_mission_fnc_getFog,[] call hull3_mission_fnc_getWeather));
};

hull3_mission_fnc_addPlayerEHs = {
    if (hull3_mission_isJip) then {
        "hull3_mission_jipPacket" addPublicVariableEventHandler {
            (_this #1) call hull3_mission_fnc_receiveJipSync;
        };
    };
    "hull3_mission_safetyTimer" addPublicVariableEventHandler {
        (_this #1) call hull3_mission_fnc_handleSafetyTimeChange;
    };
    DEBUG("hull3.mission.ehs: Player event handlers were added.");
};

hull3_mission_fnc_addServerEHs = {
    if (isDedicated) then {
        "hull3_mission_jipPacket" addPublicVariableEventHandler {
            (_this #1) call hull3_mission_fnc_sendJipSync;
        };
    };
    "hull3_mission_safetyTimerAbort" addPublicVariableEventHandler {
        [_this #1] spawn hull3_mission_fnc_serverSafetyTimerCountDown;
    };
    DEBUG("hull3.mission.ehs: Server event handlers were added.");
};

hull3_mission_fnc_serverSafetyTimerLoop = {
    if (!isNil {hull3_mission_safetyTimerEnd} && {hull3_mission_safetyTimerEnd > 0}) then {
        hull3_mission_safetyTimer = [false, -1];
        DEBUG_1("hull3.mission.safetytimer: Safety timer has been initialized with value '%1'.",hull3_mission_safetyTimer));
        while {(hull3_mission_safetyTimer #1) < hull3_mission_safetyTimerEnd && {!hull3_mission_safetyTimerAbort}} do {
            hull3_mission_safetyTimer set [1, (hull3_mission_safetyTimer #1) + 1];
            publicVariable "hull3_mission_safetyTimer";
            DEBUG_1("hull3.mission.safetytimer: Safety timer has been published to clients with value '%1'.",hull3_mission_safetyTimer));
            if (!isDedicated) then {
                hull3_mission_safetyTimer call hull3_mission_fnc_handleSafetyTimeChange;
            };
            sleep 60;
        };
        if (!hull3_mission_safetyTimerAbort) then {
            [true] spawn hull3_mission_fnc_serverSafetyTimerCountDown;
        };
    };
};

hull3_mission_fnc_serverSafetyTimerCountDown = {
    params ["_isAborted"];

    if (_isAborted) then {
        private _countDownLength = [0, 10] select (isMultiplayer);
        hull3_mission_safetyTimer = [true, _countDownLength];
        DEBUG_1("hull3.mission.safetytimer: Safety timer has been aborted. Starting countdown from '%1' seconds.",hull3_mission_safetyTimer #1));
        for "_i" from _countDownLength to 0 step -1 do {
            hull3_mission_safetyTimer set [1, _i];
            publicVariable "hull3_mission_safetyTimer";
            TRACE_1("hull3.mission.safetytimer: Safety timer has been published to clients with countdown time at '%1' seconds.",hull3_mission_safetyTimer #1));
            if (!isDedicated) then {
                hull3_mission_safetyTimer call hull3_mission_fnc_handleSafetyTimeChange;
            };
            sleep 1;
        };
        ["mission.safetytimer.ended", []] call hull3_event_fnc_emitEvent;
    };
};

hull3_mission_fnc_clientSafetyTimerLoop = {
    if (!isNil {hull3_mission_safetyTimerEnd} && {hull3_mission_safetyTimerEnd > 0}) then {
        [] call hull3_mission_fnc_addHostSafetyTimerStopAction;
        [player] call hull3_unit_fnc_addFiredEHs;

        DEBUG("hull3.mission.safetytimer: Starting safety timer loop.");
        [{
            params ["_args", "_id"];
            {[ACE_player, _x, true, false] call ace_safemode_fnc_setWeaponSafety} forEach (weapons player);

            if ([] call hull3_mission_fnc_hasSafetyTimerEnded) then {
                [_this #1] call CBA_fnc_removePerFrameHandler;
                ["ace_firedPlayer", (player getVariable "hull3_eh_fired")] call CBA_fnc_removeEventHandler;
                {[ACE_player, _x, false, false] call ace_safemode_fnc_setWeaponSafety} forEach (weapons player);
                DEBUG("hull3.mission.safetytimer: Safety timer has ended. Removed fired EH.");
            };
        } ] call CBA_fnc_addPerFrameHandler;
    };
};

hull3_mission_fnc_handleSafetyTimeChange = {
    params ["_isCountDown","_timeValue"];

    DEBUG_1("hull3.mission.safetytimer: Safety timer has been changed. Received value '%1'.",AS_ARRAY_2(_isCountDown,_timeValue)));
    private _message = "Game is not live. Waiting for host to start it. (%1 minutes)";
    if (_isCountDown) then {
        call {
            if (_timeValue == 0) exitWith {
                _message = "Game is live!";
                if (!isServer) then {
                    ["mission.safetytimer.ended", []] call hull3_event_fnc_emitEvent;
                };
            };
            if (_timeValue <= 5) exitWith {_message = "Game will be live in %1 seconds!";};
            _message = "";
        };
    };
    if (_message != "") then {
        systemChat format ["[Hull3] " + _message, _timeValue];
    };
};

hull3_mission_fnc_hasSafetyTimerEnded = {
    !isNil {hull3_mission_safetyTimer} && {hull3_mission_safetyTimer #0} && {hull3_mission_safetyTimer #1 <= 0};
};

hull3_mission_fnc_endSafetyTimer = {
    hull3_mission_safetyTimerAbort = true;
    if (isServer) then {
        [true] spawn hull3_mission_fnc_serverSafetyTimerCountDown;
    } else {
        publicVariable "hull3_mission_safetyTimerAbort";
    };
};

hull3_mission_fnc_addHostSafetyTimerStopAction = {
    _isAceInteractAvailable = [configFile, "ARK", "Inhouse", "isEnabled"] call hull3_config_fnc_getCustomBool;
    if (!_isAceInteractAvailable) then {
        if (serverCommandAvailable "#kick" || {!isMultiplayer}) then {
            private _actionId = player addAction ['<t color="#428CE0">Disable weapon safety</t>', ADDON_PATH(mission_host_safetytimer_stop.sqf), ["activated"], 3, false, false, "", "driver _target == _this && {!(hull3_mission_safetyTimer #0)} && {(hull3_mission_safetyTimer #1) < hull3_mission_safetyTimerEnd}"];
            hull3_mission_safetyTimerActionIds set [0, _actionId];
            DEBUG("hull.mission.safetytimer: Added safety timer abort action to player.");
        };
    } else {
        DEBUG("hull.mission.safetytimer: Safety timer abort action not added to player, using ACE Self Interaction instead.");
    };
};

hull3_mission_fnc_addSafetyTimerConfirmActions = {
    private _actionId = player addAction ['<t color="#00FF00">Confirm weapon safety disabling</t>', ADDON_PATH(mission_host_safetytimer_stop.sqf), ["confirm"], 3, false, false, "", "driver _target == _this && {!(hull3_mission_safetyTimer #0)} && {(hull3_mission_safetyTimer #1) < hull3_mission_safetyTimerEnd}"];
    hull3_mission_safetyTimerActionIds set [1, _actionId];
    _actionId = player addAction ['<t color="#FF0000">Cancel weapon safety disabling</t>', ADDON_PATH(mission_host_safetytimer_stop.sqf), ["cancel"], 3, false, false, "", "driver _target == _this && {!(hull3_mission_safetyTimer #0)} && {(hull3_mission_safetyTimer #1) < hull3_mission_safetyTimerEnd}"];
    hull3_mission_safetyTimerActionIds set [2, _actionId];
};

hull3_mission_fnc_removeSafetyTimerActions = {
    {
        if (_x != -1) then {
            player removeAction _x;
            hull3_mission_safetyTimerActionIds set [_forEachIndex, -1];
        };
    } forEach hull3_mission_safetyTimerActionIds;
};

hull3_mission_fnc_getJipSync = {
    if (hull3_mission_isJip) then {
        hull3_mission_jipPacket = [player];
        DEBUG_2("hull3.mission.jip: Sending JIP state request for server from client '%1' with time '%2'.",player,time));
        publicVariableServer "hull3_mission_jipPacket";
    };
};

hull3_mission_fnc_sendJipSync = {
    params ["_client"];

    hull3_mission_jipPacket = [hull3_mission_safetyTimer];
    PUSH(hull3_mission_jipPacket,hull3_mission_safetyTimerAbort);
    private _customArguments = ["mission_jip_sending", [_client]] call hull3_common_fnc_getEventFileResult;
    PUSH(hull3_mission_jipPacket,_customArguments);
    DEBUG_2("hull3.mission.jip: Sending JIP sync for client '%1' with packet '%2'.",_client,hull3_mission_jipPacket));
    (owner _client) publicVariableClient "hull3_mission_jipPacket";
};

hull3_mission_fnc_receiveJipSync = {
    params ["_safetyTimer","_safetyTimerAbort","_customArguments"];

    DEBUG_2("hull3.mission.jip: Received JIP sync '%1' from server for client '%2'.",owner player,_this));
    hull3_mission_safetyTimer = _safetyTimer;
    hull3_mission_safetyTimerAbort = _safetyTimerAbort;
    ["mission.jip.received", _customArguments] call hull3_event_fnc_emitEvent;
};
