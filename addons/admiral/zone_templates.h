class ZoneTemplates {
    class Camp {
        infFireteamSize = 4;
        infWaypointAmount = 4;
        techWaypointAmount = 3;
        armourWaypointAmount = 3;
        waypointBehaviours[] = {"AWARE"};
        canSpawnFfvCrew = 0;
        aimingAccuracy = 0.2;
        aimingShake = 0.2;
        aimingSpeed = 0.5;
        spotDistance = 0.65;
        spotTime = 1;
        courage = 1;
        reloadSpeed = 1;
        commanding = 1;
        general = 0.7;
    };

    class Patrol {
        infFireteamSize = 4;
        infWaypointAmount = 4;
        techWaypointAmount = 3;
        armourWaypointAmount = 3;
        waypointBehaviours[] = {"AWARE", "SAFE"};
        canSpawnFfvCrew = 0;
        aimingAccuracy = 0.2;
        aimingShake = 0.2;
        aimingSpeed = 0.5;
        spotDistance = 0.65;
        spotTime = 1;
        courage = 1;
        reloadSpeed = 1;
        commanding = 1;
        general = 0.7;
    };

    class Cqc {
        infFireteamSize = 4;
        aimingAccuracy = 0.2;
        aimingShake = 0.15;
        aimingSpeed = 0.5;
        spotDistance = 0.4;
        spotTime = 1;
        courage = 1;
        reloadSpeed = 1;
        commanding = 1;
        general = 0.7;
    };

    class Vehicles {
        aimingAccuracy = 0.2;
        aimingShake = 0.2;
        aimingSpeed = 0.75;
        spotDistance = 1;
        spotTime = 1;
        courage = 1;
        reloadSpeed = 1;
        commanding = 1;
        general = 0.7;
    };
};
