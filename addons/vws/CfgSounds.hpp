class CfgSounds {
    class ark_vws_fuel_pressure {
        name = "ark_vws_fuel_pressure";
        sound[] = {QPATHTOF(resources\dws_warning_fuelpressure.wss), 2.5, 1, 1};
        titles[] = {};
    };
    class ark_vws_fuel_low:ark_vws_fuel_pressure {
        name = "ark_vws_fuel_low";
        sound[] = {QPATHTOF(resources\dws_caution_fuelow.wss), 2.5, 1, 1};
    };
    class ark_vws_fuel_critical:ark_vws_fuel_pressure {
        name = "ark_vws_fuel_critical";
        sound[] = {QPATHTOF(resources\dws_warning_fuelcritical.wss), 2.5, 1, 1};
    };
};
