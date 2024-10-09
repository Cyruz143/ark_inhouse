#include "script_component.hpp"
#include "\userconfig\hull3\log\acre.h"

#define ACRE_SIDES [west, east, resistance, civilian]

hull3_acre_fnc_preInit = {
    call hull3_acre_fnc_addEventHandlers;
    hull3_acre_isInitialized = false;
    //DEBUG("hull3.acre","ACRE functions preInit finished.");
};

hull3_acre_fnc_addEventHandlers = {
    if (hasInterface) then {
        ["player.initialized", hull3_acre_fnc_setSpokenLanguages] call hull3_event_fnc_addEventHandler;
    };
};

hull3_acre_fnc_postInit = {
    call hull3_acre_fnc_setupPresets;
    call hull3_acre_fnc_addLanguages;
    call hull3_acre_fnc_acreInit;
};

hull3_acre_fnc_acreInit = {
    //DEBUG("hull3.acre.init","ACRE player init called.");
    if (!hasInterface) exitWith {
        //DEBUG("hull3.acre.init","Player is an HC, ACRE check ommited.");
    };

    [
        {call acre_api_fnc_isInitialized},
        {
            //DEBUG("hull.acre.init","ACRE initialized.");
            if (!alive player) exitWith {
                //DEBUG("hull.acre.init","Player is dead, setting ACRE spectator to 'true'.");
                true call acre_api_fnc_setSpectator;
            };
            //DEBUG("hull.acre.init","Player is alive, starting ACRE init check.");
            player call hull3_gear_fnc_tryAssignRadios;
            //DEBUG("hull.acre.init",FMT_1("Radios assigned to '%1'.",player));
            hull3_acre_isInitialized = true;
            ["acre.initialized", [player]] call hull3_event_fnc_emitEvent;
            player call hull3_acre_fnc_setRadioChannels;
            //DEBUG("hull.acre.init","Hull3 ACRE init finished.");
        }
    ] call CBA_fnc_waitUntilAndExecute;
};

hull3_acre_fnc_addLanguages = {
    private _languages = ["ACRE", "Babel", "languages"] call hull3_config_fnc_getArray;
    {
        _x call acre_api_fnc_babelAddLanguageType;
        //DEBUG("hull3.acre.babel",FMT_2("Added language with ID '%1' and name '%2'.",_x select 0,_x select 1));
    } forEach _languages;
};

hull3_acre_fnc_setSpokenLanguages = {
    params ["_unit"];

    private _factionLanguages = [FACTION_CONFIG, _unit getVariable ["hull3_faction", DEFAULT_FACTION_NAME], "languages"] call hull3_config_fnc_getBothArray;
    private _unitLanguages = [_unit getVariable ["hull3_init_entries", []], "languages"] call hull3_config_fnc_getEntry;
    private _languages = [];
    PUSH_ALL(_languages,_factionLanguages);
    PUSH_ALL(_languages,_unitLanguages);
    private _spokenLanguages = [];
    {
        if ((floor random 100) + 1 <= _x select 1) then {
            PUSH(_spokenLanguages,_x select 0);
        };
    } forEach _languages;

    if (_spokenLanguages isEqualTo []) then {
        {_spokenLanguages pushBack (_x select 0)} forEach (["ACRE", "Babel", "languages"] call hull3_config_fnc_getArray);
        //WARN("hull3.acre.babel",FMT_1("Undefined langauges in unit template! Assigning all available languages for '%1'.",_unit));
    };

    _spokenLanguages call acre_api_fnc_babelSetSpokenLanguages;
    //DEBUG("hull3.acre.babel",FMT_2("Set spoken languages of unit '%1' to '%2'.",_unit,_spokenLanguages));
};

hull3_acre_fnc_setupPresets = {
    call hull3_acre_fnc_setupSidePresets;
    call hull3_acre_fnc_setupUserPresets;
};

hull3_acre_fnc_setupSidePresets = {
    {
        [_x] call hull3_acre_fnc_setupSideShortRangePreset;
        [_x] call hull3_acre_fnc_setupSideLongRangePreset;
    } forEach ACRE_SIDES;
};

hull3_acre_fnc_setupUserPresets = {
    private _shortRangeRadios = ["ACRE", "ShortRange", "radios"] call hull3_config_fnc_getArray;
    private _longRangeRadios = ["ACRE", "LongRange", "radios"] call hull3_config_fnc_getArray;
    private _radios = [];
    PUSH_ALL(_radios,_shortRangeRadios);
    PUSH_ALL(_radios,_longRangeRadios);
    private _presetName = toLower str side player;
    {
        [_x, _presetName] call acre_api_fnc_setPreset;
    } forEach _radios;
};

hull3_acre_fnc_setupSideShortRangePreset = {
    params ["_side"];

    private _baseFrequency = ["ACRE", "ShortRange", "baseFrequency"] call hull3_config_fnc_getNumber;
    private _channelStep = ["ACRE", "Steps", "channel"] call hull3_config_fnc_getNumber;
    private _sideStep = [_side] call hull3_acre_fnc_getSideStep;
    private _presetName = toLower str _side;
    private _radios = ["ACRE", "ShortRange", "radios"] call hull3_config_fnc_getArray;
    {
        [_x, _baseFrequency, _channelStep, _sideStep, _presetName, {}, []] call hull3_acre_fnc_setRadioPresetFrequencies;
    } forEach _radios;
};

hull3_acre_fnc_setupSideLongRangePreset = {
    params ["_side"];

    private _baseFrequency = ["ACRE", "LongRange", "baseFrequency"] call hull3_config_fnc_getNumber;
    private _channelStep = ["ACRE", "Steps", "channel"] call hull3_config_fnc_getNumber;
    private _sideStep = [_side] call hull3_acre_fnc_getSideStep;
    private _presetName = toLower str _side;
    private _radios = ["ACRE", "LongRange", "radios"] call hull3_config_fnc_getArray;
    private _channelNames = ["ACRE", "LongRange", "channelNames"] call hull3_config_fnc_getArray;
    {
        [_x, _baseFrequency, _channelStep, _sideStep, _presetName, hull3_acre_fnc_setLongRangeRadioFields, [_x, _presetName, _channelNames]] call hull3_acre_fnc_setRadioPresetFrequencies;
    } forEach _radios;
};

hull3_acre_fnc_setRadioPresetFrequencies = {
    params ["_radio","_baseFrequency","_channelStep","_sideStep","_presetName","_fieldFunc","_fieldFuncArgs"];

    private _channelCount = ["ACRE", "Radio", _radio, "channelCount"] call hull3_config_fnc_getNumber;
    [_radio, "default", _presetName] call acre_api_fnc_copyPreset;
    for "_i" from 0 to (_channelCount - 1) do {
        private _frequency = _baseFrequency + _i * _channelStep + _sideStep;
        private _channelIndex = _i + 1;
        [_radio, _presetName, _channelIndex, "frequencyTX", _frequency] call acre_api_fnc_setPresetChannelField;
        //TRACE("hull3.acre.radio.preset",FMT_4("Set 'frequencyTX' field to '%1' of channel '%2' in preset '%3' of radio '%4'.",_frequency,_channelIndex,_presetName,_radio));
        [_radio, _presetName, _channelIndex, "frequencyRX", _frequency] call acre_api_fnc_setPresetChannelField;
        //TRACE("hull3.acre.radio.preset",FMT_4("Set 'frequencyRX' field to '%1' of channel '%2' in preset '%3' of radio '%4'.",_frequency,_channelIndex,_presetName,_radio));
        private _newFieldFuncArgs = +_fieldFuncArgs;
        PUSH(_newFieldFuncArgs,_i);
        _newFieldFuncArgs call _fieldFunc;
    };
};

hull3_acre_fnc_setLongRangeRadioFields = {
    params ["_radio","_presetName","_channelNames","_channelArrayIndex"];

    private _channelNameField = ["ACRE", "Radio", _radio, "channelNameField"] call hull3_config_fnc_getText;
    private _channelName = if (_channelArrayIndex < count _channelNames) then {
        _channelNames select _channelArrayIndex
    } else {
        format ["%1 %2", toLower str _side, _channelArrayIndex + 1]
    };
    private _power = ["ACRE", "Radio", _x, "power"] call hull3_config_fnc_getNumber;
    private _channelIndex = _channelArrayIndex + 1;
    [_radio, _presetName, _channelIndex, _channelNameField, _channelName] call acre_api_fnc_setPresetChannelField;
    //TRACE("hull3.acre.radio.preset",FMT_5("Set '%1' field to '%2' of channel '%3' in preset '%4' of radio '%5'.",_channelNameField,_channelName,_channelIndex,_presetName,_radio));
    [_radio, _presetName, _channelIndex, "power", _power] call acre_api_fnc_setPresetChannelField;
    //TRACE("hull3.acre.radio.preset",FMT_4("Set 'power' field to '%1' of channel '%2' in preset '%3' of radio '%4'.",_power,_channelIndex,_presetName,_radio));
};

hull3_acre_fnc_getSideStep = {
    params ["_side"];

    call {
        if (_side == west) exitWith {["ACRE", "Steps", "west"] call hull3_config_fnc_getNumber};
        if (_side == east) exitWith {["ACRE", "Steps", "east"] call hull3_config_fnc_getNumber};
        if (_side == resistance) exitWith {["ACRE", "Steps", "resistance"] call hull3_config_fnc_getNumber};
        ["ACRE", "Steps", "default"] call hull3_config_fnc_getNumber;
    };
};

hull3_acre_fnc_setRadioChannels = {
    params ["_unit"];

    [
        {(_this #0) getVariable ["hull3_gear_radiosAssigned", false] && {call acre_api_fnc_isInitialized} },
        {
            private _unit = (_this #0);
            private _defaultShortRangeChannel = ["ACRE", "ShortRange", "defaultChannel"] call hull3_config_fnc_getNumber;
            private _shortRangeChannelAssignments = ["ACRE", "ShortRange", "channels"] call hull3_config_fnc_getBothArray;
            private _shortRangeRadios = ["ACRE", "ShortRange", "radios"] call hull3_config_fnc_getArray;
            private _defaultLongRangeChannel = ["ACRE", "LongRange", "defaultChannel"] call hull3_config_fnc_getNumber;
            private _longRangeChannelAssignments = ["ACRE", "LongRange", "channels"] call hull3_config_fnc_getBothArray;
            //TRACE("hull3.acre.radio.assigned",FMT_2("Unit '%1' has '%2' radios assigned, attempting to set channels now.",_unit,call acre_api_fnc_getCurrentRadioList));

            private ["_channelAssignments", "_defaultChannel"];
            {
                if (([_x] call acre_api_fnc_getBaseRadio) in _shortRangeRadios) then {
                    _channelAssignments = _shortRangeChannelAssignments;
                    _defaultChannel = _defaultShortRangeChannel;
                } else {
                    _channelAssignments = _longRangeChannelAssignments;
                    _defaultChannel = _defaultLongRangeChannel;
                };
                private _channel = [_unit, _channelAssignments, _defaultChannel] call hull3_acre_fnc_getRadioChannelFromGroupId;
                [_x, _channel] call acre_api_fnc_setRadioChannel;
            } forEach (call acre_api_fnc_getCurrentRadioList);

            ["acre.channels.set", [_unit]] call hull3_event_fnc_emitEvent;
            _unit globalChat "ACRE2 radios and channels have been assigned.";
        },
        [_unit]
    ] call CBA_fnc_waitUntilAndExecute;
};

hull3_acre_fnc_getRadioChannelFromGroupId = {
    params ["_unit","_channelAssignments","_defaultChannel"];

    //TRACE("hull3.acre.radio.channel",FMT_3("Getting channel for unit '%1' with assingments '%2' and default chanel '%3'.",_unit,_channelAssignments,_defaultChannel));
    private _groupId = groupId group _unit;
    private _channels = _channelAssignments select { _x select 0 == _groupId };
    //TRACE("hull3.acre.radio.channel",FMT_2("Found channels are '%1' for groupId '%2'.",_channels,_groupId));

    call {
        if (count _channels > 0) exitWith { _channels select 0 select 1 };

        private _groupIdArray = toArray _groupId;
        if (count _groupIdArray == 0) exitWith { _defaultChannel };

        // For SLs and FTs we user the first character of the _groupId to find the channel.
        private _firstCharChannels = _channelAssignments select { _x select 0 == toString [_groupIdArray select 0] };
        private _groupIdWithoutFirstChar = toString (_groupIdArray select [1, count _groupIdArray - 1]);
        //TRACE("hull3.acre.radio.channel",FMT_4("_firstCharChannels is '%1', _groupIdWithoutFirstChar is '%2', parsed number is '%3' for groupId '%4'.",_firstCharChannels,_groupIdWithoutFirstChar,parseNumber _groupIdWithoutFirstChar,_groupId));
        // FTs have a number as a second character.
        if (count _firstCharChannels > 0 && {count _groupIdArray >= 2} && {parseNumber _groupIdWithoutFirstChar >= 1}) exitWith { _firstCharChannels select 0 select 1 };
        // SLs have "S" and "L" as second and third characters.
        if (count _firstCharChannels > 0 && {count _groupIdArray == 3} && {_groupIdWithoutFirstChar == "SL"}) exitWith { _firstCharChannels select 0 select 1 };

        // We try to find matching channel assignments by using the first _n characters of the groupId plus the group number, up to 5 characters.
        private _channel = for "_i" from 2 to 5 do {
            private ["_n", "_groupIdFirstNChars", "_nCharsChannels", "_groupIdWithoutFirstNChars"];
            _n = _i;
            _groupIdFirstNChars = toString (_groupIdArray select [0, _n]);
            _nCharsChannels = _channelAssignments select { _x select 0 == _groupIdFirstNChars };
            _groupIdWithoutFirstNChars = toString (_groupIdArray select [_n, count _groupIdArray - 1]);
            //TRACE("hull3.acre.radio.channel",FMT_6("_n is '%1', _groupIdFirstNChars is '%2', _nCharsChannels is '%3', _groupIdWithoutFirstNChars is '%4', parsed number is '%5' for groupId '%6'.",_n,_groupIdFirstNChars,_nCharsChannels,_groupIdWithoutFirstNChars,parseNumber _groupIdWithoutFirstNChars,_groupId));
            if (count _nCharsChannels > 0 && {count _groupIdArray >= _n} && {parseNumber _groupIdWithoutFirstNChars >= 1}) exitWith { _nCharsChannels select 0 select 1 };
        };

        if (isNil {_channel}) then {
            _channel = _defaultChannel;
        };

        _channel;
    };
};

hull3_acre_fnc_adminAssign343 = {
    ["ACRE_PRC343"] call hull3_acre_fnc_adminAssignRadio;
};

hull3_acre_fnc_adminAssign152 = {
    ["ACRE_PRC152"] call hull3_acre_fnc_adminAssignRadio;
};

hull3_acre_fnc_adminAssignRadio = {
    params ["_radio"];

    if (player canAddItemToUniform _radio) then {
        player addItemToUniform _radio;
        systemChat format ["[Hull3] Requested radio '%1' has been added to uniform.", _radio];
        [[player, name player, _radio], {
            params ["_unit", "_name", "_radio"];

            private _message = format ["Player '%1' in unit '%2' has requested radio '%3'!", _name, _unit, _radio];
            //diag_log LOGGING_FORMAT("hull3.acre.admin","WARN",_message);
        }] remoteExec ["bis_fnc_call", 2];
    } else {
        systemChat format ["[Hull3] Requested radio '%1' cannot be added to uniform. Make sure you have enough space!", _radio];
    };
};
