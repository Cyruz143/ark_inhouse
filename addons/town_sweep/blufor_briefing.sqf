// BLUFOR Notes

// Situation
player createDiaryRecord ["Diary", ["Situation","
<br/>Clear the marked town(s).
<br/><br/>ENEMY FORCES
<br/>Infantry, technicals and possible armour.
<br/><br/>FRIENDLY FORCES
<br/>Infantry and MMG only.
"]];

// Mission
player createDiaryRecord ["Diary", ["Mission","
<br/>Clear the marked town(s).
"]];

// Execution
player createDiaryRecord ["Diary", ["Execution","
<br/>MOVEMENT PLAN
<br/>Use group deploy to get to the towns.
"]];

// Administration
player createDiaryRecord ["Diary", ["Administration","
<br/>For hosts (all variables and functions are server only):
<br/><br/>Number of players. Can change the value before activating a town to affect the number of enemies. (Default: number of players at mission start)
<br/>ts_spawn_playerCount
<br/><br/>This value multiplied by ts_spawn_playerCount gives the rough number of enemies spawned. CQC and Patrol included. (Default: 2)
<br/>ts_spawn_ai_multiplier
<br/><br/>A technical group is spawned per given number of players. (Default: 10)
<br/>ts_spawn_ai_technicalsPerPlayers
<br/><br/>An armour group is spawned per given number of players. (Default: 30)
<br/>ts_spawn_ai_armourPerPlayers
<br/><br/>Select random town. Will be inactive.
<br/>[] call ts_spawn_fnc_selectRandomLocation
<br/><br/>Activate currently selected town.
<br/>[] call ts_spawn_fnc_activateLocation
<br/><br/>Enable group deploy.
<br/>[] call ts_fnc_enableGroupDeploy
<br/><br/>Array of spawned foritications.
<br/>ts_spawn_placedFortifications
<br/><br/>
"]];

// Credits
player createDiaryRecord ["Diary", ["Credits", "
<br/>Made by Ark
"]];
