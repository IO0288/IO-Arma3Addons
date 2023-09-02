class CfgWeapons {
    class Rifle;
    class Rifle_Base_F: Rifle {
        class WeaponSlotsInfo;
    };
    class Rifle_Short_Base_F: Rifle_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {};
    };
    class Rifle_Long_Base_F: Rifle_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {};
    };

    class BWA3_G28: Rifle_Long_Base_F {
        magazineWell[] += {"CBA_762x51_HK417","CBA_762x51_HK417_L","CBA_762x51_HK417_XL"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class CowsSlot: asdg_OpticRail1913_long {};
        };
    };
    class BWA3_G27: BWA3_G28 {
        class WeaponSlotsInfo: WeaponSlotsInfo {};
    };
    class BWA3_G27_AG40: BWA3_G27 {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 129.8;
        };
    };

    class BWA3_G29: Rifle_Long_Base_F {
        magazineWell[] += {"CBA_338LM_AI"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class CowsSlot: asdg_OpticRail1913_long {};
        };
    };
    class BWA3_G82: Rifle_Long_Base_F {
        magazineWell[] += {"CBA_50BMG_M107"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 327;
            class CowsSlot: asdg_OpticRail1913_long {};
        };
    };

    class BWA3_G36A1: Rifle_Base_F {
        magazineWell[] += {"CBA_556x45_G36","M4A1_556x45","More_Rifle_556x45"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 80;
        };
    };
    class BWA3_G36A3: BWA3_G36A1 {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 84.2;
        };
    };
    class BWA3_G36A1_AG40: BWA3_G36A1 {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 113;
        };
    };
    class BWA3_G36A3_AG40: BWA3_G36A1_AG40 {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 117.2;
        };
    };

    class BWA3_G36KA1: BWA3_G36A1 {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 74.1;
        };
    };
    class BWA3_G36KA0: BWA3_G36KA1 {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 72.1;
        };
    };
    class BWA3_G36KA2: BWA3_G36KA1 {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 72.1;
        };
    };
    class BWA3_G36KA3: BWA3_G36KA1 {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 74.1;
        };
    };
    class BWA3_G36KA4: BWA3_G36KA1 {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 74.6;
        };
    };

    class BWA3_G38: Rifle_Base_F {
        magazineWell[] += {"CBA_556x45_G36","M4A1_556x45","More_Rifle_556x45"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 78.5;
        };
    };
    class BWA3_G38_AG40: BWA3_G38 {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 111.5;
        };
    };
    class BWA3_G38C: BWA3_G38 {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 68.8;
        };
    };
    class BWA3_G38K: BWA3_G38 {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 77;
        };
    };
    class BWA3_G38K_AG40: BWA3_G38K {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 110;
        };
    };

    class BWA3_MG3: Rifle_Long_Base_F {
        magazineWell[] += {"CBA_762x51_LINKS","CBA_762x51_MG3","M240_762x51"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 247.5;
            class CowsSlot: asdg_OpticRail1913 {};
        };
    };

    class BWA3_MG4: Rifle_Long_Base_F {
        magazineWell[] += {"CBA_556x45_MINIMI"};
    };

    class BWA3_MG5: Rifle_Long_Base_F {
        magazineWell[] += {"CBA_762x51_LINKS","M240_762x51"};
    };

    class BWA3_MP7: Rifle_Short_Base_F {
        magazineWell[] += {"CBA_46x30_MP7"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 43.2;
            class CowsSlot: asdg_OpticRail1913 {};
            class MuzzleSlot: asdg_MuzzleSlot_46 {};
        };
    };

    class Pistol_Base_F;
    class BWA3_P12: Pistol_Base_F {
        magazineWell[] += {"CBA_45ACP_USP"};
    };
    class BWA3_P8: Pistol_Base_F {
        magazineWell[] += {"CBA_9x19_USP"};
    };
    class BWA3_P2A1: Pistol_Base_F {
        magazineWell[] += {"CBA_FLARE_265"};
    };

    class Launcher_Base_F;
    class BWA3_CarlGustav: Launcher_Base_F {
        magazineWell[] += {"CBA_Carl_Gustaf"};
    };
    class BWA3_Fliegerfaust: Launcher_Base_F {
        magazineWell[] += {"CBA_FIM"};
    };
    class BWA3_PzF3;
    class BWA3_PzF3_Tandem_Loaded : BWA3_PzF3
    {
        author="$STR_BWA3_Author";
        baseWeapon="BWA3_PzF3_Tandem_Loaded";
        scope=2;
        scopeArsenal=2;
        magazines[]={"CBA_FakeLauncherMagazine"};
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass=30;
        };
    };
    class BWA3_PzF3_Used {
        class WeaponSlotsInfo : WeaponSlotsInfo{
            mass=30;
        };
    };

    class V_PlateCarrier1_rgr;
    class V_PlateCarrier2_rgr: V_PlateCarrier1_rgr {
        class ItemInfo;
    };
    class BWA3_Vest_Fleck: V_PlateCarrier2_rgr {
        class ItemInfo: ItemInfo {
            mass = 90;
        };
    };
    class BWA3_Vest_JPC_Rifleman_Fleck: V_PlateCarrier2_rgr {
        class ItemInfo: ItemInfo {
            mass = 90;
        };
    };

    class UniformItem;
    class Uniform_Base;
    class BWA3_Uniform_tee_Fleck: Uniform_Base {
        class ItemInfo: UniformItem {
            mass = 40;
        };
    };
};
