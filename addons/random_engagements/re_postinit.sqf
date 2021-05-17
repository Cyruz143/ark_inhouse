if (getNumber(missionConfigFile >> "RandomEngagements" >> "isEnabled") isEqualTo 0) exitWith {};

if (hasInterface) then {
    private _attackerImg = getText (configFile >> "CfgWeapons" >> (uniform (units west #0)) >> "picture");
    private _defenderImg = getText (configFile >> "CfgWeapons" >> (uniform (units east #0)) >> "picture");
    private _briefingText = format ["BLUFOR: %1<br/><img image='%3' /><br/><br/>OPFOR: %2<br/><img image='%4' />",re_attacker_factionName,re_defender_factionName,_attackerImg,_defenderImg];
    player createDiaryRecord ["Diary", ["Random Engagements", _briefingText]];
};