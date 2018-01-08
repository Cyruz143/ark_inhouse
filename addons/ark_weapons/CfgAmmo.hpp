class CUP_R_RPG18_AT;
class ARK_R_RPG22_AT : CUP_R_RPG18_AT {
            hit = 450;
            indirectHit = 25;
            indirectHitRange = 3;
            cost = 200;
            initTime = 0.001;
            thrust = 0;
            thrustTime = 0;
            maxSpeed = 320;
            sideAirFriction = 0.01;
            airfriction = 0;
            timeToLive = 6;
            fuseDistance = 5;
            visibleFire = 24;
            audibleFire = 16;
            initSpeed = 320;
            class CamShakeExplode
            {
                power = "(55 * 0.2)";
                duration = "((round (55^0.5))*0.2 max 0.2)";
                frequency = 20;
                distance = "((5 + 55^0.5)*8)";
            };
            class CamShakeHit
            {
                power = 110;
                duration = "((round (110^0.25))*0.2 max 0.2)";
                frequency = 20;
                distance = 1;
            };
            class CamShakeFire
            {
                power = "(20^0.25)";
                duration = "((round (20^0.5))*0.2 max 0.2)";
                frequency = 20;
                distance = "((20^0.5)*8)";
            };
            class CamShakePlayerFire
            {
                power = 1;
                duration = 0.1;
                frequency = 20;
                distance = 1;
            };
};