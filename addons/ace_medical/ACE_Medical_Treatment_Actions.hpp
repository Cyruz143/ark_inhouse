class ace_medical_treatment_actions {
    class BasicBandage {
        treatmentTime = QUOTE(FUNC(getBandageTime));
    };
    class PatDown: BasicBandage {
        callbackSuccess = QUOTE(FUNC(putOutFire));
    };

    class ApplyTourniquet: BasicBandage {
        sounds[] = {{QPATHTOF(data\tourniquet.ogg), 5, 1, 50}};
    };
    class Splint: BasicBandage {
        sounds[] = {{QPATHTOF(data\splint.ogg), 5, 1, 50}};
    };
    class Diagnose: BasicBandage {
        sounds[] = {{QPATHTOF(data\diag.ogg), 5, 1, 50}};
    };
};
