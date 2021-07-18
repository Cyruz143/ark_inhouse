if (getNumber(missionConfigFile >> "RandomEngagements" >> "isEnabled") isEqualTo 0) exitWith {};

if (hasInterface) then {
    private _briefingText = format ["<font color='#004c99'>BLUFOR:</font> %1<br/><img image='%3' width='256' height='256' /><br/><br/><font color='#7f0000'>OPFOR:</font> %2<br/><img image='%4' width='256' height='256' />",re_attacker_factionName,re_defender_factionName,west call re_fnc_getUniformPath,east call re_fnc_getUniformPath];
    player createDiaryRecord ["Diary", ["Random Engagements", _briefingText]];
    ["mission.safetytimer.ended", {call re_fnc_aoWarning}] call hull3_event_fnc_addEventHandler;
};
