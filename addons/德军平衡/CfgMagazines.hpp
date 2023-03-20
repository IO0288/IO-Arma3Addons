class CfgMagazines {
    class CA_Magazine;
    class 150Rnd_762x51_Box;
    class 20Rnd_762x51_Mag;
    class 30Rnd_556x45_Mag;   
    class BWA3_20Rnd_762x51_G28: 20Rnd_762x51_Mag {
        mass = 16.24;
    };

    class BWA3_40Rnd_46x30_MP7: CA_Magazine {
        mass = 8.8;
    };
    class BWA3_20Rnd_46x30_MP7: BWA3_40Rnd_46x30_MP7 {
        mass = 5.5;
    };

    class BWA3_40Rnd_46x30_MP7_SD;
    class BWA3_20Rnd_46x30_MP7_SD: BWA3_40Rnd_46x30_MP7_SD {
        mass = 5.5;
    };

    class BWA3_1200Rnd_762x51: 150Rnd_762x51_Box {
        mass = 341.5;
        scope = 2;
        scopeArsenal = 2;
    };

    class BWA3_10Rnd_127x99_G82: CA_Magazine {
        mass = 28;
    };

    class BWA3_30Rnd_556x45: CA_Magazine {
        mass = 8.8;
    };

    class BWA3_200Rnd_556x45: CA_Magazine {
        mass = 51.65;
    };

    class RPG32_F;
    class BWA3_RGW90_HH: RPG32_F {
        author = "$STR_BWA3_Author";
        displayName = "$STR_BWA3_RGW90MagName";
        displayNameShort = "HH";
        descriptionShort = "$STR_BWA3_RGW90MagDescription";
        model = "\bwa3_rgw90\bwa3_rgw90_hh.p3d";
        modelSpecial = "";
        picture = "\bwa3_rgw90\ui\bwa3_rgw90_gk_x_ca.paa";
        ammo = "BWA3_R_RGW90_HH";
        mass = 0;
        initSpeed = 250;
    };
    class CA_LauncherMagazine;
    class BWA3_CarlGustav_HEAT: CA_LauncherMagazine {
        author = "$STR_BWA3_Author";
        scope = 2;
        displayName = "$STR_BWA3_CarlGustavHEATMagName";
        displayNameShort = "HEAT";
        descriptionShort = "$STR_BWA3_CarlGustavHEATMagDescription";
        model = "\bwa3_carlgustav\bwa3_carlgustav_heat.p3d";
        modelSpecial = "";
        picture = "\bwa3_carlgustav\ui\bwa3_carlgustav_heat_x_ca.paa";
        ammo = "BWA3_R_CarlGustav_HEAT";
        initSpeed = 255;
        type = 512;
        mass = 65;
    };
    class BWA3_CarlGustav_HE: BWA3_CarlGustav_HEAT {
        author = "$STR_BWA3_Author";
        displayName = "$STR_BWA3_CarlGustavHEMagName";
        displayNameShort = "HE";
        descriptionShort = "$STR_BWA3_CarlGustavHEMagDescription";
        model = "\bwa3_carlgustav\bwa3_carlgustav_he.p3d";
        picture = "\bwa3_carlgustav\ui\bwa3_carlgustav_he_x_ca.paa";
        ammo = "BWA3_R_CarlGustav_HE";
        mass = 40;
    };
    class BWA3_CarlGustav_HEDP: BWA3_CarlGustav_HEAT {
        author = "$STR_BWA3_Author";
        displayName = "$STR_BWA3_CarlGustavHEDPMagName";
        displayNameShort = "HEDP";
        descriptionShort = "$STR_BWA3_CarlGustavHEDPMagDescription";
        model = "\bwa3_carlgustav\bwa3_carlgustav_hedp.p3d";
        picture = "\bwa3_carlgustav\ui\bwa3_carlgustav_hedp_x_ca.paa";
        ammo = "BWA3_R_CarlGustav_HEDP";
        mass = 50;
    };
    class BWA3_CarlGustav_Smoke: BWA3_CarlGustav_HEAT {
        author = "$STR_BWA3_Author";
        displayName = "$STR_BWA3_CarlGustavSmokeMagName";
        displayNameShort = "Smoke";
        descriptionShort = "$STR_BWA3_CarlGustavSmokeMagDescription";
        model = "\bwa3_carlgustav\bwa3_carlgustav_smoke.p3d";
        picture = "\bwa3_carlgustav\ui\bwa3_carlgustav_smoke_x_ca.paa";
        ammo = "BWA3_R_CarlGustav_Smoke";
        mass = 20;
    };
    class BWA3_CarlGustav_Illum: BWA3_CarlGustav_HEAT {
        author = "$STR_BWA3_Author";
        displayName = "$STR_BWA3_CarlGustavIllumMagName";
        displayNameShort = "Illum";
        descriptionShort = "$STR_BWA3_CarlGustavIllumMagDescription";
        model = "\bwa3_carlgustav\bwa3_carlgustav_illum.p3d";
        picture = "\bwa3_carlgustav\ui\bwa3_carlgustav_illum_x_ca.paa";
        ammo = "BWA3_R_CarlGustav_Illum";
        mass = 20;
    };
    class RPG32_F;
    class BWA3_PzF3_Tandem: RPG32_F {
        author = "$STR_BWA3_Author";
        displayName = "$STR_BWA3_PzF3MagName";
        displayNameShort = "T";
        descriptionShort = "$STR_BWA3_PzF3MagDescription";
        model = "\bwa3_pzf3\bwa3_pzf3_it.p3d";
        modelSpecial = ""; // Model used when the weapon is loaded. This is typically only used for rocket launchers. No idea how to use this in launcher model.
        picture = "\bwa3_pzf3\ui\bwa3_pzf3_it_x_ca.paa";
        ammo = "BWA3_R_PzF3_Tandem";
        mass = 0;
        initSpeed = 165;
    };
    class BWA3_PzF3_DM32: BWA3_PzF3_Tandem {
        author = "$STR_BWA3_Author";
        displayName = "$STR_BWA3_BunkerfaustMagName";
        displayNameShort = "MP";
        descriptionShort = "$STR_BWA3_BunkerfaustMagDescription";
        model = "\bwa3_pzf3\bwa3_pzf3_dm32.p3d";
        picture = "\bwa3_pzf3\ui\bwa3_pzf3_dm32_x_ca.paa";
        ammo = "BWA3_R_PzF3_DM32";
    };
};
