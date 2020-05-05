class CfgMovesBasic {
    class DefaultDie;
    class ManActions {
        acre_radio_helmet = "acre_radio_helmet";
        acre_radio_vest = "acre_radio_vest";
    };
    class Actions {
        class Default;
        class NoActions: ManActions {
            acre_radio_helmet[] = {"acre_radio_helmet","Gesture"};
            acre_radio_vest[] = {"acre_radio_vest","Gesture"};
        };
    };
};

class CfgGesturesMale {
    skeletonName = "OFP2_ManSkeleton";
    class ManActions{};
    class Actions {
        class NoActions {
            turnSpeed = 0;
            upDegree = 0;
            limitFast = 1;
            useFastMove = 0;
            stance = "ManStanceUndefined";
        };
    };
    class Default;
    class States {
        class acre_radio_base: Default {
            canPullTrigger = 1;
            connectAs = "";
            connectFrom[] = {};
            connectTo[] = {};
            disableWeapons = 0;
            disableWeaponsLong = 0;
            enableBinocular = 1;
            enableMissile = 1;
            enableOptics = 0;
            equivalentTo = "";
            forceAim = 0;
            headBobMode = 1;
            headBobStrength = 0.001;
            interpolateFrom[] = {};
            interpolateTo[] = {};
            interpolateWith[] = {};
            interpolationRestart = 0;
            interpolationSpeed = 6;
            limitGunMovement = 0;
            looped = 0;
            mask = "acre_UpperBody";
            minPlayTime = 0.5;
            preload = 0;
            ragdoll = 0;
            relSpeedMax = 1;
            relSpeedMin = 1;
            showHandGun = 0;
            showItemInHand = 0;
            showItemInRightHand = 0;
            showWeaponAim = 1;
            soundEdge[] = {0.5,1};
            soundEnabled = 1;
            soundOverride = "";
            speed = -2;
            static = 0;
            terminal = 0;
            Walkcycles = 1;
            leftHandIKBeg = 0;
            leftHandIKCurve[] = {0};
            leftHandIKEnd = 0;
            rightHandIKBeg = 1;
            rightHandIKCurve[] = {1};
            rightHandIKEnd = 1;
        };
        class acre_radio_helmet: acre_radio_base {
            file = "a3\anims_f_epa\data\anim\sdr\cts\custom\a_in\acts_listeningtoradioloop.rtm";
            minPlayTime = 2;
            speed = 0.3;
            mask = "acre_UpperBodyNoRArm";
            weaponLowered = 0;
            canReload = 0;
            preload = 1;
        };
        class acre_radio_vest: acre_radio_base {
            file = "a3\anims_f_bootcamp\data\anim\sdr\cts\acts_kore_talkingoverradio_loop.rtm";
            speed = 0.3;
            mask = "acre_UpperBodyNoRArm";
            weaponLowered = 0;
            canReload = 0;
            preload = 1;
        };
    };
    class BlendAnims {
        acre_UpperBody[] = {"Weapon",0,"Pelvis",0,"Spine",0,"Spine1",0,"Spine2",0,"Spine3",1,"Camera",0,"launcher",0,"neck",1,"neck1",1,"head",0,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"RightShoulder",1,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"LeftUpLeg",0,"LeftUpLegRoll",0,"LeftLeg",0,"LeftLegRoll",0,"LeftFoot",0,"LeftToeBase",0,"RightUpLeg",0,"RightUpLegRoll",0,"RightLeg",0,"RightLegRoll",0,"RightFoot",0,"RightToeBase",0,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHankka3ing",1,"LeftHankka3ing1",1,"LeftHankka3ing2",1,"LeftHankka3ing3",1,"LeftHandThumb",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHankka3ing",1,"RightHankka3ing1",1,"RightHankka3ing2",1,"RightHankka3ing3",1,"RightHandThumb",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1};
        acre_UpperBodyNoRArm[] = {"Weapon",0,"Pelvis",0,"Spine",0,"Spine1",0,"Spine2",1,"Spine3",1,"Camera",0,"launcher",0,"weapon",0,"launcher",0,"neck",1,"neck1",0,"head",0,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"RightShoulder",0,"RightArm",0,"RightArmRoll",0,"RightForeArm",0,"RightForeArmRoll",0,"RightHand",0,"LeftUpLeg",0,"LeftUpLegRoll",0,"LeftLeg",0,"LeftLegRoll",0,"LeftFoot",0,"LeftToeBase",0,"RightUpLeg",0,"RightUpLegRoll",0,"RightLeg",0,"RightLegRoll",0,"RightFoot",0,"RightToeBase",0,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHankka3ing",1,"LeftHankka3ing1",1,"LeftHankka3ing2",1,"LeftHankka3ing3",1,"LeftHandThumb",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightHandIndex1",0,"RightHandIndex2",0,"RightHandIndex3",0,"RightHandMiddle1",0,"RightHandMiddle2",0,"RightHandMiddle3",0,"RightHandPinky1",0,"RightHandPinky2",0,"RightHandPinky3",0,"RightHankka3ing",0,"RightHankka3ing1",0,"RightHankka3ing2",0,"RightHankka3ing3",0,"RightHandThumb",0,"RightHandThumb1",0,"RightHandThumb2",0,"RightHandThumb3",0};
        none[] = {"Weapon",0,"Pelvis",0,"Spine",0,"Spine0",0,"Spine2",0,"Spine3",0,"Camera",0,"launcher",0,"neck",0,"neck0",0,"head",0,"LeftShoulder",0,"LeftArm",0,"LeftArmRoll",0,"LeftForeArm",0,"LeftForeArmRoll",0,"LeftHand",0,"RightShoulder",0,"RightArm",0,"RightArmRoll",0,"RightForeArm",0,"RightForeArmRoll",0,"RightHand",0,"LeftUpLeg",0,"LeftUpLegRoll",0,"LeftLeg",0,"LeftLegRoll",0,"LeftFoot",0,"LeftToeBase",0,"RightUpLeg",0,"RightUpLegRoll",0,"RightLeg",0,"RightLegRoll",0,"RightFoot",0,"RightToeBase",0,"LeftHandIndex0",0,"LeftHandIndex2",0,"LeftHandIndex3",0,"LeftHandMiddle0",0,"LeftHandMiddle2",0,"LeftHandMiddle3",0,"LeftHandPinky0",0,"LeftHandPinky2",0,"LeftHandPinky3",0,"LeftHankka3ing",0,"LeftHankka3ing0",0,"LeftHankka3ing2",0,"LeftHankka3ing3",0,"LeftHandThumb",0,"LeftHandThumb0",0,"LeftHandThumb2",0,"LeftHandThumb3",0,"RightHandIndex0",0,"RightHandIndex2",0,"RightHandIndex3",0,"RightHandMiddle0",0,"RightHandMiddle2",0,"RightHandMiddle3",0,"RightHandPinky0",0,"RightHandPinky2",0,"RightHandPinky3",0,"RightHankka3ing",0,"RightHankka3ing0",0,"RightHankka3ing2",0,"RightHankka3ing3",0,"RightHandThumb",0,"RightHandThumb0",0,"RightHandThumb2",0,"RightHandThumb3",0};
    };
    class Interpolations{};
    transitionsInterpolated[] = {};
    transitionsSimple[] = {};
    transitionsDisabled[] = {};
};