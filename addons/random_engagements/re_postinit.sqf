if (getNumber(missionConfigFile >> "RandomEngagements" >> "isEnabled") isEqualTo 0) exitWith {};

if (hasInterface) then {
    private _briefingText = format ["<br/>BLUFOR: %1<br/>OPFOR: %2",re_attacker_factionName,re_defender_factionName];
    player createDiaryRecord ["Diary", ["Random Engagements", _briefingText]];.
};