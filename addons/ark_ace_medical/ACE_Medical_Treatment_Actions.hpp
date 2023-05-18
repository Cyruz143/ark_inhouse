class ace_medical_treatment_actions {
    class BasicBandage {
        treatmentTime = "ark_ace_medical_fnc_getBandageTime";
    };
    class PatDown: BasicBandage {
        callbackSuccess = "ark_ace_medical_fnc_putOutFire";
    };

    class ApplyTourniquet: BasicBandage {
        sounds[] = {{"x\ark\addons\ark_ace_medical\data\tourniquet.ogg",5,1,50}};
    };
    class Splint: BasicBandage {
        sounds[] = {{"x\ark\addons\ark_ace_medical\data\splint.ogg",5,1,50}};
    };
    class Diagnose: BasicBandage {
        sounds[] = {{"x\ark\addons\ark_ace_medical\data\diag.ogg",5,1,50}};
    };
};