#include "script_version.hpp"
class CfgPatches
{
	class BC_Magazine_Del
	{
		name = "BC_Magazine_Del - IO0288";
		units[] = {};
		weapons[] = {};
		requiredVersion = 2.10;// 所需Arma3版本
		requiredAddons[] = {"BoBcats_weapon_patch"};
		author = "IO0288";
		authors[] =
			{"IO0288"};
		url = "https://git.io0288.cn/IO0288/IO-Arma3Addons";
		versionAr[] = {MAJOR, MINOR, PATCH, BUILD};
	};
};
class Default;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class Noob_Auto : Mode_SemiAuto
{
    showToPlayer=0;
    displayName="Noob";
    textureType="burst";
    recoil="recoil_auto_primary_3outof10";
    recoilProne="recoil_auto_primary_prone_3outof10";
    aiDispersionCoefY=2.4;
    aiDispersionCoefX=1.9;
    soundBurst=0;
    multiplier=2;
    reloadTime=1;
    burst=0;
    autofire=0;
    dispersion=0.4;
    aiRateOfFire=1;
    aiRateOfFireDistance=10;
    minRange=0;
    minRangeProbab=0.01;
    midRange=1;
    midRangeProbab=0.01;
    maxRange=2;
    maxRangeProbab=0.01;
    soundContinuous="false";
    sounds[]={"StandardSound"};
    class StandardSound
    {
        begin1[]={"A3\Sounds_F\weapons\HMG\HMG_grenade", 1, 1, 300};
        soundBegin[]={"begin1", 1};
    };
    useAction="false";
    useActionTitle="";
    artillerydispersion=0.4;
};
class SlotInfo;
class CowsSlot;
class ItemCore;
class PointerSlot;
class asdg_FrontSideRail;
class asdg_OpticRail1913;
class asdg_OpticRail1913_short;
class asdg_UnderSlot;
class asdg_MuzzleSlot;
class asdg_MuzzleSlot_556;
class rhs_western_rifle_scopes_slot_short : asdg_OpticRail1913_short
{
};
class asdg_OpticRail1913_long : asdg_OpticRail1913
{
};
class rhs_western_rifle_scopes_slot_long : asdg_OpticRail1913_long
{
};
class rhs_western_rifle_laser_slot_top : asdg_FrontSideRail
{
    class compatibleItems;
};
class RscInGameUI
{
    class RHS_Gripod1;
    class RHS_Gripod_GL : RHS_Gripod1
    {
        idd=3025;
    };
    class RHS_Gripod_SIX12 : RHS_Gripod1
    {
        idd=3026;
    };
};
class CfgRecoils
{
    class recoil_default;
    class recoil_ar15 : recoil_default
    {
        muzzleOuter[]={0.1, 0.6, 0.2, 0.2};
        kickBack[]={0.01, 0.03};
        temporary=0.01;
    };
    class recoil_iar : recoil_default
    {
        muzzleOuter[]={0.1, 0.4, 0.3, 0.2};
        kickBack[]={0.01, 0.03};
        temporary=0.005;
    };
    class recoil_saw : recoil_default
    {
        muzzleOuter[]={0.1, 0.3, 0.2, 0.2};
        kickBack[]={0.01, 0.03};
        temporary=0.005;
    };
    class recoil_shotgun_ugl
    {
        kickBack[]={0.01323, 0.0275625};
        muzzleInner[]={0, 0, 0, 0.1378125, 0.1378125};
        muzzleOuter[]={0.1378125, 0.55125004, 0.55125004, 0.020671874};
        permanent=0.2;
        temporary=0.01;
    };
    class rhs_recoil_m249 : recoil_default
    {
        muzzleOuter[]={0.1, 0.3, 0.2, 0.2};
        kickBack[]={0.01, 0.03};
        temporary=0.005;
    };
    class rhs_recoil_m240 : recoil_default
    {
        muzzleOuter[]={0.5, 1, 0.7, 0.3};
        muzzleInner[]={0, 0, 0.15, 0.15};
        kickBack[]={0.02, 0.08};
        permanent="0.1*0.4";
        temporary=0.005;
    };
    class rhs_recoil_m4 : recoil_default
    {
        muzzleOuter[]={0.1, 0.6, 0.2, 0.2};
        kickBack[]={0.01, 0.03};
        temporary=0.01;
    };
    class rhs_recoil_mk18 : recoil_default
    {
        muzzleOuter[]={0.1, 0.6, 0.2, 0.2};
        kickBack[]={0.01, 0.03};
        temporary=0.01;
    };
    class rhs_recoil_m27 : recoil_default
    {
        muzzleOuter[]={0.1, 0.4, 0.3, 0.2};
        kickBack[]={0.01, 0.03};
        temporary=0.005;
    };
    class rhs_recoil_mk18145 : recoil_default
    {
        muzzleOuter[]={0.1, 0.6, 0.2, 0.2};
        kickBack[]={0.01, 0.03};
        temporary=0.01;
    };
    class recoil_SIX12 : recoil_default
    {
        muzzleOuter[]={1, 3, 0.6, 0.6};
        kickBack[]={0.08, 0.1};
        temporary=0.02;
    };
};
class CfgMagazineWells
{
    class STANAG_556x45
    {
        BC_Magazines[]={"rhs_mag_30Rnd_556x45_M855A1_Dim_Stanag", "rhs_mag_30Rnd_556x45_Mk318_Dim_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Dim_Stanag", "rhs_mag_30Rnd_556x45_XM996_Stanag", "rhs_mag_30Rnd_556x45_M995_AP_Stanag", "rhs_mag_30Rnd_556x45_M995_AP_Dim_Stanag", "rhs_mag_100Rnd_556x45_M855A1_Stanag_Tracer_Red_cmag", "rhsusf_100Rnd_556x45_M855A1_Dim_cmag", "rhsusf_100Rnd_556x45_XM996_Dim_cmag", "rhsusf_100Rnd_556x45_M995_AP_cmag", "rhsusf_100Rnd_556x45_M995_AP_Dim_cmag", "rhs_mag_50Rnd_556x45_M855A1_Stanag", "rhs_mag_50Rnd_556x45_M856A1_Stanag", "rhs_mag_50Rnd_556x45_Mk262_Stanag", "rhs_mag_50Rnd_556x45_Mk318_Stanag", "rhs_mag_60Rnd_556x45_M855A1_Stanag", "rhs_mag_60Rnd_556x45_M856A1_Stanag", "rhs_mag_60Rnd_556x45_Mk262_Stanag", "rhs_mag_60Rnd_556x45_Mk318_Stanag", "rhs_mag_60Rnd_556x45_M995_Stanag", "rhs_mag_60Rnd_556x45_XM996_Stanag"};
        BI_Magazines_L[]={"150Rnd_556x45_Drum_Mag_F", "150Rnd_556x45_Drum_Mag_Tracer_F", "150Rnd_556x45_Drum_Sand_Mag_F", "150Rnd_556x45_Drum_Sand_Mag_Tracer_F", "150Rnd_556x45_Drum_Green_Mag_F", "150Rnd_556x45_Drum_Green_Mag_Tracer_F"};
    };
    class M249_556x45
    {
        BI_Magazines[]={"200Rnd_556x45_Box_F", "200Rnd_556x45_Box_Red_F", "200Rnd_556x45_Box_Tracer_F", "200Rnd_556x45_Box_Tracer_Red_F"};
        BC_Magazines[]={"rhsusf_100Rnd_556x45_T_soft_pouch", "rhsusf_200Rnd_556x45_T_soft_pouch", "rhsusf_200rnd_556x45_T_box", "rhsusf_100Rnd_556x45_M855A1_Dim_soft_pouch", "rhsusf_200Rnd_556x45_M855A1_Dim_soft_pouch", "rhsusf_100Rnd_556x45_XM996_Dim_soft_pouch", "rhsusf_200Rnd_556x45_XM996_Dim_soft_pouch", "rhsusf_100Rnd_556x45_M995_AP_soft_pouch", "rhsusf_200Rnd_556x45_M995_AP_soft_pouch", "rhsusf_100Rnd_556x45_M995_AP_Dim_soft_pouch", "rhsusf_200Rnd_556x45_M995_AP_Dim_soft_pouch"};
    };
    class CBA_556x45_MINIMI
    {
        BI_Magazines[]={"200Rnd_556x45_Box_F", "200Rnd_556x45_Box_Red_F", "200Rnd_556x45_Box_Tracer_F", "200Rnd_556x45_Box_Tracer_Red_F"};
        BC_Magazines[]={"rhsusf_100Rnd_556x45_T_soft_pouch", "rhsusf_200Rnd_556x45_T_soft_pouch", "rhsusf_200rnd_556x45_T_box", "rhsusf_100Rnd_556x45_M855A1_Dim_soft_pouch", "rhsusf_200Rnd_556x45_M855A1_Dim_soft_pouch", "rhsusf_100Rnd_556x45_XM996_Dim_soft_pouch", "rhsusf_200Rnd_556x45_XM996_Dim_soft_pouch", "rhsusf_100Rnd_556x45_M995_AP_soft_pouch", "rhsusf_200Rnd_556x45_M995_AP_soft_pouch", "rhsusf_100Rnd_556x45_M995_AP_Dim_soft_pouch", "rhsusf_200Rnd_556x45_M995_AP_Dim_soft_pouch"};
    };
    class UGL_40x36
    {
        BC_Magazines[]={"smao_mag_40mm_TB", "smao_mag_40mm_Incinerate"};
    };
    class AK_762x39
    {
        BC_Magazines[]={};
    };
    class CBA_762x39_AK
    {
        BC_Magazines[]={"Type81_30Rnd_762x39_b", "Type81_30Rnd_762x39_t"};
    };
    class CBA_762x39_RPK
    {
        BC_Magazines[]={"Type81LMG_75Rnd_762x39_m", "Type81LMG_75Rnd_762x39_t"};
    };
    class BC_12g_6rnds
    {
        BC_Mags[]={"SIX12_6Rnd_12Gauge_Pellets_No0_Buck", "SIX12_6Rnd_12Gauge_Pellets_No1_Buck", "SIX12_6Rnd_12Gauge_Pellets_No2_Buck", "SIX12_6Rnd_12Gauge_Pellets_No3_Buck", "SIX12_6Rnd_12Gauge_Pellets_No4_Buck", "SIX12_6Rnd_12Gauge_Pellets_No7_Bird", "6Rnd_12Gauge_Pellets", "6Rnd_12Gauge_Slug", "SIX12_6Rnd_12Gauge_Pellets_FRAG"};
        UAS_12g_6rnds_Mags[]={"UAS_BASE_12G_AP20_6Rnd", "UAS_BASE_12_Blondeau_6Rnd", "UAS_BASE_12_Brenneke_ATS_6Rnd", "UAS_BASE_12_Brenneke_MBP_6Rnd", "UAS_BASE_12_Brenneke_Topas_6Rnd", "UAS_BASE_12_Cyclone_Slug_6Rnd", "UAS_BASE_12_DSG_XMP_6Rnd", "UAS_BASE_12_Dixie_TriBall_000000_6Rnd", "UAS_BASE_12_FRAG12_6Rnd", "UAS_BASE_12_FRAG12AP_6Rnd", "UAS_BASE_12_FRAG12FA_6Rnd", "UAS_BASE_12G_FIER_MSFA_6Rnd", "UAS_BASE_12G_FIER_PAL_6Rnd", "UAS_BASE_12G_FIER_PAR_6Rnd", "UAS_BASE_12G_FIER_PPA_6Rnd", "UAS_BASE_12_Nobel_Sport_Point4_6Rnd", "UAS_BASE_12_Remington_Flechette_6Rnd", "UAS_BASE_12_Seismic_Slug_6Rnd", "UAS_BASE_12_Tacnition_AntiDrone_DU_6Rnd", "UAS_BASE_12_WolfHill_UltraBuck_0000_6Rnd", "UAS_BASE_12G_Federal_BlackCloud_BBShot_6Rnd", "UAS_BASE_12G_Hevi_Shot_TBuck_6Rnd", "UAS_BASE_12G_Nobel_Sport_00_6Rnd", "UAS_BASE_12G_Nobel_Sport_NO1_6Rnd", "UAS_BASE_12G_Nobel_Sport_NO4_6Rnd", "UAS_BASE_12G_Remington_Express_000_6Rnd", "UAS_BASE_12G_Remington_Express_0_6Rnd", "UAS_BASE_12G_UAS_Winchester_Q1544_00_6Rnd", "UAS_BASE_12_QB8_6Rnd", "UAS_BASE_12_QBSlug_6Rnd", "UAS_BASE_12_FlareWhite_6Rnd", "UAS_BASE_12_FlareRed_6Rnd", "UAS_BASE_12_FlareBlue_6Rnd", "UAS_BASE_12_FlareGreen_6Rnd", "UAS_BASE_12_FlareYellow_6Rnd", "UAS_BASE_12_FlarePurple_6Rnd", "UAS_BASE_12_FlarePink_6Rnd", "UAS_BASE_12_FlareIndigo_6Rnd", "UAS_BASE_12_DragonsBreath_6Rnd", "UAS_BASE_12_SuperDragon_6Rnd", "UAS_BASE_12_CFCarbide_6Rnd", "UAS_BASE_12_Spetstekhnika_6Rnd", "UAS_BASE_12_Ubiytsa_6Rnd", "UAS_BASE_12_Dumbbell_6Rnd", "UAS_BASE_12_RIP_6Rnd", "UAS_BASE_12_Poleva3_6Rnd", "UAS_BASE_12_Poleva6u_6Rnd", "UAS_BASE_12_BrennekeKO_6Rnd", "UAS_BASE_12_Lightfield_Alpha_6Rnd", "UAS_BASE_12_Truball_6Rnd", "UAS_BASE_12_Brenneke_Classic_Magnum_6Rnd", "UAS_BASE_12_Tallman_DU_6Rnd", "UAS_BASE_12_Tallman_Steel_6Rnd", "UAS_BASE_12_WarWolf_Hydra_6Rnd", "UAS_BASE_12_WarWolf_SuperKing_6Rnd", "UAS_BASE_12_WarWolf_HellFire_6Rnd", "UAS_BASE_12_FRAG12_EFP_6Rnd", "UAS_BASE_12_WarWolf_HESH_6Rnd", "UAS_BASE_12_Lightfield_Home_Defender_6Rnd", "UAS_BASE_12_SellierBellot_Rubber_Buckshot_6Rnd", "UAS_BASE_12_Fiocchi_Exacta_6Rnd", "UAS_BASE_12_Fiocchi_LE_6Rnd", "UAS_BASE_12_XREP_G1_6Rnd", "UAS_BASE_12_XREP_G2_6Rnd", "UAS_BASE_12_T1020_6Rnd", "UAS_BASE_12_T1030_6Rnd", "UAS_BASE_12_HEMI_6Rnd", "UAS_BASE_12_Federal_FlightControl_6Rnd", "UAS_BASE_12_Tesar1_6Rnd", "UAS_BASE_12_Tesar2_6Rnd", "UAS_BASE_12_M1030_6Rnd", "UAS_BASE_12_DBD09_6Rnd", "UAS_BASE_12_Fei_6Rnd", "UAS_BASE_12_BlindSide_6Rnd", "UAS_BASE_12_OATH_TSR_6Rnd", "UAS_BASE_12_MK_Ballistics_CloseRange_6Rnd", "UAS_BASE_12_MK_Ballistics_Standard_6Rnd", "UAS_BASE_12_THV_6Rnd", "UAS_BASE_12_PolyShok_IRP_6Rnd", "UAS_BASE_12_M1012_6Rnd", "UAS_BASE_12_XM1116_6Rnd", "UAS_BASE_12_TAKHO_Elefant_Steel_6Rnd", "UAS_BASE_12_Federal_Target_6Rnd", "UAS_BASE_12F_GP27_Buckshot_6Rnd", "UAS_BASE_12F_GP9_Buckshot_6Rnd", "UAS_BASE_12F_GPR18_6Rnd", "UAS_BASE_12F_GPS_6Rnd", "UAS_BASE_12F_MPS_6Rnd", "UAS_BASE_12F_RubS_6Rnd", "UAS_BASE_12F_SR_6Rnd", "UAS_BASE_12_AAI_QSPR_6Rnd", "UAS_BASE_12_AAI_QSPR_DU_6Rnd", "UAS_BASE_12_AAI_Silent_6Rnd", "UAS_BASE_12LL_Ferret_6Rnd", "UAS_BASE_12_Buckingham_6Rnd", "UAS_BASE_12_EMPI_R12HP_6Rnd", "UAS_BASE_12_Napalm_6Rnd", "UAS_BASE_12_Anthrax_6Rnd", "UAS_BASE_12_OCMuzzleBlast_6Rnd", "UAS_BASE_12_CSMuzzleBlast_6Rnd", "UAS_BASE_12_CNMuzzleBlast_6Rnd", "UAS_BASE_12_HPM12_6Rnd"};
    };
    class CBA_300BLK_STANAG
    {
        BC_Mags[]={};
    };
};
class CfgWeapons
{
    class ItemCore;
    class InventoryItem_Base_F;
    class InventoryMuzzleItem_Base_F;
    class InventoryOpticsItem_Base_F;
    class InventoryFlashLightItem_Base_F;
    class UGL_F;
    class acc_pointer_IR;
    class rhsusf_acc_grip1;
    class rhsusf_acc_grip_gl : rhsusf_acc_grip1
    {
        scope=2;
        author="RobinDX";
        model="\BoBcats_weapon_patch\m203.p3d";
        picture="\BoBcats_weapon_patch\m203.paa";
        displayName="UGL module";
        descriptionShort="UGL";
        weaponInfoType="RHS_Gripod_GL";
        class ItemInfo
        {
            deployedPivot="bipod";
            hasBipod=1;
            mass=25;
            type=302;
        };
        inertia=0.15;
        type=131072;
        rhs_grip_type="rhs_grip_gl_change";
    };
    class rhsusf_acc_grip_six12 : rhsusf_acc_grip1
    {
        scope=2;
        author="RobinDX";
        model="\BoBcats_weapon_patch\six12.p3d";
        picture="\BoBcats_weapon_patch\six12.paa";
        displayName="SIX12 module";
        descriptionShort="SIX12";
        weaponInfoType="RHS_Gripod_SIX12";
        class ItemInfo
        {
            deployedPivot="bipod";
            hasBipod=1;
            mass=30;
            type=302;
        };
        inertia=0.12;
        type=131072;
        rhs_grip_type="rhs_grip_six12_change";
    };
    class optic_AMS_base : ItemCore
    {
        class ItemInfo : InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class AMS
                {
                    visionMode[]={};
                };
            };
        };
    };
    class optic_DMS : ItemCore
    {
        class ItemInfo : InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class Snip
                {
                    visionMode[]={};
                };
            };
        };
    };
    class optic_LRPS : ItemCore
    {
        class ItemInfo : InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class Snip
                {
                    visionMode[]={};
                };
            };
        };
    };
    class Rifle;
    class Rifle_Base_F : Rifle
    {
        class WeaponSlotsInfo;
        class GunParticles
        {
            class FirstEffect
            {
                effectName="RifleAssaultCloud";
                positionName="Usti hlavne";
                directionName="Konec hlavne";
            };
        };
    };
    class arifle_MX_Base_F : Rifle_Base_F
    {
    };
    class rhs_weap_m4_Base : arifle_MX_Base_F
    {
        class GunParticles : GunParticles
        {
            class ThridEffect
            {
                effectName="ShotUnderwater";
                positionName="usti hlavne";
                directionName="konec hlavne";
            };
        };
        canShootInWater=1;
    };
    class GrenadeLauncher;
    class NGL : GrenadeLauncher
    {
        magazines[]={};
        magazineWell[]={};
        displayName="Noob GL";
        modes[]={"Noob_Auto"};
        enableAttack=0;
        class Noob_Auto : Noob_Auto
        {
        };
    };
    class bc_vhs2;
    class bc_vhs2_bcsewpn : bc_vhs2
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_vhs2_grip_bcsewpn : bc_vhs2_bcsewpn
    {
    };
    class bc_vhs2_grip3_bcsewpn : bc_vhs2_bcsewpn
    {
    };
    class bc_vhs2_gl;
    class bc_vhs2_gl_bcsewpn : bc_vhs2_gl
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_vhs2_six12;
    class bc_vhs2_six12_bcsewpn : bc_vhs2_six12
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_mk16_std;
    class bc_mk16_std_bcsewpn : bc_mk16_std
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "camo1"};
        hiddenSelectionsTextures[]={"", "\BC_SCAR\tex\SCAR_L_CO.paa"};
    };
    class bc_mk16_std_grip_bcsewpn : bc_mk16_std_bcsewpn
    {
    };
    class bc_mk16_std_grip2_bcsewpn : bc_mk16_std_bcsewpn
    {
    };
    class bc_mk16_std_grip3_bcsewpn : bc_mk16_std_bcsewpn
    {
    };
    class bc_mk16_std_six12;
    class bc_mk16_std_six12_bcsewpn : bc_mk16_std_six12
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "camo1"};
        hiddenSelectionsTextures[]={"", "\BC_SCAR\tex\SCAR_L_CO.paa"};
    };
    class bc_mk16_std_blk;
    class bc_mk16_std_blk_bcsewpn : bc_mk16_std_blk
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "camo1"};
        hiddenSelectionsTextures[]={"", "\BC_SCAR\tex\SCAR_L_blk_CO.paa"};
    };
    class bc_mk16_std_blk_grip_bcsewpn : bc_mk16_std_blk_bcsewpn
    {
    };
    class bc_mk16_std_blk_grip2_bcsewpn : bc_mk16_std_blk_bcsewpn
    {
    };
    class bc_mk16_std_blk_grip3_bcsewpn : bc_mk16_std_blk_bcsewpn
    {
    };
    class bc_mk16_std_six12_blk;
    class bc_mk16_std_six12_blk_bcsewpn : bc_mk16_std_six12_blk
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "camo1"};
        hiddenSelectionsTextures[]={"", "\BC_SCAR\tex\SCAR_L_blk_CO.paa"};
    };
    class bc_mk16_std_khk;
    class bc_mk16_std_khk_bcsewpn : bc_mk16_std_khk
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "camo1"};
        hiddenSelectionsTextures[]={"", "\BC_SCAR\tex\SCAR_L_khk_CO.paa"};
    };
    class bc_mk16_std_khk_grip_bcsewpn : bc_mk16_std_khk_bcsewpn
    {
    };
    class bc_mk16_std_khk_grip2_bcsewpn : bc_mk16_std_khk_bcsewpn
    {
    };
    class bc_mk16_std_khk_grip3_bcsewpn : bc_mk16_std_khk_bcsewpn
    {
    };
    class bc_mk16_std_six12_khk;
    class bc_mk16_std_six12_khk_bcsewpn : bc_mk16_std_six12_khk
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "camo1"};
        hiddenSelectionsTextures[]={"", "\BC_SCAR\tex\SCAR_L_khk_CO.paa"};
    };
    class bc_mk16_cqc;
    class bc_mk16_cqc_bcsewpn : bc_mk16_cqc
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "camo1"};
        hiddenSelectionsTextures[]={"", "\BC_SCAR\tex\SCAR_L_CO.paa"};
    };
    class bc_mk16_cqc_grip_bcsewpn : bc_mk16_cqc_bcsewpn
    {
    };
    class bc_mk16_cqc_grip2_bcsewpn : bc_mk16_cqc_bcsewpn
    {
    };
    class bc_mk16_cqc_grip3_bcsewpn : bc_mk16_cqc_bcsewpn
    {
    };
    class bc_mk16_cqc_six12;
    class bc_mk16_cqc_six12_bcsewpn : bc_mk16_cqc_six12
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "camo1"};
        hiddenSelectionsTextures[]={"", "\BC_SCAR\tex\SCAR_L_CO.paa"};
    };
    class bc_mk16_cqc_blk;
    class bc_mk16_cqc_blk_bcsewpn : bc_mk16_cqc_blk
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "camo1"};
        hiddenSelectionsTextures[]={"", "\BC_SCAR\tex\SCAR_L_blk_CO.paa"};
    };
    class bc_mk16_cqc_blk_grip_bcsewpn : bc_mk16_cqc_blk_bcsewpn
    {
    };
    class bc_mk16_cqc_blk_grip2_bcsewpn : bc_mk16_cqc_blk_bcsewpn
    {
    };
    class bc_mk16_cqc_blk_grip3_bcsewpn : bc_mk16_cqc_blk_bcsewpn
    {
    };
    class bc_mk16_cqc_six12_blk;
    class bc_mk16_cqc_six12_blk_bcsewpn : bc_mk16_cqc_six12_blk
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "camo1"};
        hiddenSelectionsTextures[]={"", "\BC_SCAR\tex\SCAR_L_blk_CO.paa"};
    };
    class bc_mk16_cqc_khk;
    class bc_mk16_cqc_khk_bcsewpn : bc_mk16_cqc_khk
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "camo1"};
        hiddenSelectionsTextures[]={"", "\BC_SCAR\tex\SCAR_L_khk_CO.paa"};
    };
    class bc_mk16_cqc_khk_grip_bcsewpn : bc_mk16_cqc_khk_bcsewpn
    {
    };
    class bc_mk16_cqc_khk_grip2_bcsewpn : bc_mk16_cqc_khk_bcsewpn
    {
    };
    class bc_mk16_cqc_khk_grip3_bcsewpn : bc_mk16_cqc_khk_bcsewpn
    {
    };
    class bc_mk16_cqc_six12_khk;
    class bc_mk16_cqc_six12_khk_bcsewpn : bc_mk16_cqc_six12_khk
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "camo1"};
        hiddenSelectionsTextures[]={"", "\BC_SCAR\tex\SCAR_L_khk_CO.paa"};
    };
    class bc_mk16_std_gl;
    class bc_mk16_std_gl_bcsewpn : bc_mk16_std_gl
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "camo1", "camo2"};
        hiddenSelectionsTextures[]={"", "\BC_SCAR\tex\SCAR_L_CO.paa", "\BC_SCAR\tex\EGLM_CO.paa"};
    };
    class bc_mk16_std_gl_blk;
    class bc_mk16_std_gl_blk_bcsewpn : bc_mk16_std_gl_blk
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "camo1", "camo2"};
        hiddenSelectionsTextures[]={"", "\BC_SCAR\tex\SCAR_L_blk_CO.paa", "\BC_SCAR\tex\EGLM_blk_CO.paa"};
    };
    class bc_mk16_std_gl_khk;
    class bc_mk16_std_gl_khk_bcsewpn : bc_mk16_std_gl_khk
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "camo1", "camo2"};
        hiddenSelectionsTextures[]={"", "\BC_SCAR\tex\SCAR_L_khk_CO.paa", "\BC_SCAR\tex\EGLM_khk_CO.paa"};
    };
    class bc_mk16_cqc_gl;
    class bc_mk16_cqc_gl_bcsewpn : bc_mk16_cqc_gl
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "camo1", "camo2"};
        hiddenSelectionsTextures[]={"", "\BC_SCAR\tex\SCAR_L_CO.paa", "\BC_SCAR\tex\EGLM_CO.paa"};
    };
    class bc_mk16_cqc_gl_blk;
    class bc_mk16_cqc_gl_blk_bcsewpn : bc_mk16_cqc_gl_blk
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "camo1", "camo2"};
        hiddenSelectionsTextures[]={"", "\BC_SCAR\tex\SCAR_L_blk_CO.paa", "\BC_SCAR\tex\EGLM_blk_CO.paa"};
    };
    class bc_mk16_cqc_gl_khk;
    class bc_mk16_cqc_gl_khk_bcsewpn : bc_mk16_cqc_gl_khk
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "camo1", "camo2"};
        hiddenSelectionsTextures[]={"", "\BC_SCAR\tex\SCAR_L_khk_CO.paa", "\BC_SCAR\tex\EGLM_khk_CO.paa"};
    };
    class bc_mk16_cqc_mass;
    class bc_mk16_cqc_mass_bcsewpn : bc_mk16_cqc_mass
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_mk16_cqc_mass_blk;
    class bc_mk16_cqc_mass_blk_bcsewpn : bc_mk16_cqc_mass_blk
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_mk16_cqc_mass_khk;
    class bc_mk16_cqc_mass_khk_bcsewpn : bc_mk16_cqc_mass_khk
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_mk17_std;
    class bc_mk17_std_bcsewpn : bc_mk17_std
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "camo1"};
        hiddenSelectionsTextures[]={"", "\BC_SCAR\tex\SCAR_H_CO.paa"};
    };
    class bc_mk17_std_grip_bcsewpn : bc_mk17_std_bcsewpn
    {
    };
    class bc_mk17_std_grip2_bcsewpn : bc_mk17_std_bcsewpn
    {
    };
    class bc_mk17_std_grip3_bcsewpn : bc_mk17_std_bcsewpn
    {
    };
    class bc_mk17_std_blk;
    class bc_mk17_std_blk_bcsewpn : bc_mk17_std_blk
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "camo1"};
        hiddenSelectionsTextures[]={"", "\BC_SCAR\tex\SCAR_H_blk_CO.paa"};
    };
    class bc_mk17_std_blk_grip_bcsewpn : bc_mk17_std_blk_bcsewpn
    {
    };
    class bc_mk17_std_blk_grip2_bcsewpn : bc_mk17_std_blk_bcsewpn
    {
    };
    class bc_mk17_std_blk_grip3_bcsewpn : bc_mk17_std_blk_bcsewpn
    {
    };
    class bc_mk17_std_khk;
    class bc_mk17_std_khk_bcsewpn : bc_mk17_std_khk
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "camo1"};
        hiddenSelectionsTextures[]={"", "\BC_SCAR\tex\SCAR_H_khk_CO.paa"};
    };
    class bc_mk17_std_khk_grip_bcsewpn : bc_mk17_std_khk_bcsewpn
    {
    };
    class bc_mk17_std_khk_grip2_bcsewpn : bc_mk17_std_khk_bcsewpn
    {
    };
    class bc_mk17_std_khk_grip3_bcsewpn : bc_mk17_std_khk_bcsewpn
    {
    };
    class bc_mk17_std_gl;
    class bc_mk17_std_gl_bcsewpn : bc_mk17_std_gl
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "camo1", "camo2"};
        hiddenSelectionsTextures[]={"", "\BC_SCAR\tex\SCAR_H_CO.paa", "\BC_SCAR\tex\EGLM_CO.paa"};
    };
    class bc_mk17_std_gl_blk;
    class bc_mk17_std_gl_blk_bcsewpn : bc_mk17_std_gl_blk
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "camo1", "camo2"};
        hiddenSelectionsTextures[]={"", "\BC_SCAR\tex\SCAR_H_blk_CO.paa", "\BC_SCAR\tex\EGLM_blk_CO.paa"};
    };
    class bc_mk17_std_gl_khk;
    class bc_mk17_std_gl_khk_bcsewpn : bc_mk17_std_gl_khk
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "camo1", "camo2"};
        hiddenSelectionsTextures[]={"", "\BC_SCAR\tex\SCAR_H_khk_CO.paa", "\BC_SCAR\tex\EGLM_khk_CO.paa"};
    };
    class bc_mk17_std_six12;
    class bc_mk17_std_six12_bcsewpn : bc_mk17_std_six12
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "camo1", "camo2"};
        hiddenSelectionsTextures[]={"", "\BC_SCAR\tex\SCAR_H_CO.paa", "\BC_SCAR\tex\EGLM_CO.paa"};
    };
    class bc_mk17_std_six12_blk;
    class bc_mk17_std_six12_blk_bcsewpn : bc_mk17_std_six12_blk
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "camo1", "camo2"};
        hiddenSelectionsTextures[]={"", "\BC_SCAR\tex\SCAR_H_blk_CO.paa", "\BC_SCAR\tex\EGLM_blk_CO.paa"};
    };
    class bc_mk17_std_six12_khk;
    class bc_mk17_std_six12_khk_bcsewpn : bc_mk17_std_six12_khk
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "camo1", "camo2"};
        hiddenSelectionsTextures[]={"", "\BC_SCAR\tex\SCAR_H_khk_CO.paa", "\BC_SCAR\tex\EGLM_khk_CO.paa"};
    };
    class bc_mk17_cqc;
    class bc_mk17_cqc_bcsewpn : bc_mk17_cqc
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "camo1"};
        hiddenSelectionsTextures[]={"", "\BC_SCAR\tex\SCAR_H_CO.paa"};
    };
    class bc_mk17_cqc_grip_bcsewpn : bc_mk17_cqc_bcsewpn
    {
    };
    class bc_mk17_cqc_grip2_bcsewpn : bc_mk17_cqc_bcsewpn
    {
    };
    class bc_mk17_cqc_grip3_bcsewpn : bc_mk17_cqc_bcsewpn
    {
    };
    class bc_mk17_cqc_blk;
    class bc_mk17_cqc_blk_bcsewpn : bc_mk17_cqc_blk
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "camo1"};
        hiddenSelectionsTextures[]={"", "\BC_SCAR\tex\SCAR_H_blk_CO.paa"};
    };
    class bc_mk17_cqc_blk_grip_bcsewpn : bc_mk17_cqc_blk_bcsewpn
    {
    };
    class bc_mk17_cqc_blk_grip2_bcsewpn : bc_mk17_cqc_blk_bcsewpn
    {
    };
    class bc_mk17_cqc_blk_grip3_bcsewpn : bc_mk17_cqc_blk_bcsewpn
    {
    };
    class bc_mk17_cqc_khk;
    class bc_mk17_cqc_khk_bcsewpn : bc_mk17_cqc_khk
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "camo1"};
        hiddenSelectionsTextures[]={"", "\BC_SCAR\tex\SCAR_H_khk_CO.paa"};
    };
    class bc_mk17_cqc_khk_grip_bcsewpn : bc_mk17_cqc_khk_bcsewpn
    {
    };
    class bc_mk17_cqc_khk_grip2_bcsewpn : bc_mk17_cqc_khk_bcsewpn
    {
    };
    class bc_mk17_cqc_khk_grip3_bcsewpn : bc_mk17_cqc_khk_bcsewpn
    {
    };
    class bc_mk17_cqc_gl;
    class bc_mk17_cqc_gl_bcsewpn : bc_mk17_cqc_gl
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "camo1", "camo2"};
        hiddenSelectionsTextures[]={"", "\BC_SCAR\tex\SCAR_H_CO.paa", "\BC_SCAR\tex\EGLM_CO.paa"};
    };
    class bc_mk17_cqc_gl_blk;
    class bc_mk17_cqc_gl_blk_bcsewpn : bc_mk17_cqc_gl_blk
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "camo1", "camo2"};
        hiddenSelectionsTextures[]={"", "\BC_SCAR\tex\SCAR_H_blk_CO.paa", "\BC_SCAR\tex\EGLM_blk_CO.paa"};
    };
    class bc_mk17_cqc_gl_khk;
    class bc_mk17_cqc_gl_khk_bcsewpn : bc_mk17_cqc_gl_khk
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "camo1", "camo2"};
        hiddenSelectionsTextures[]={"", "\BC_SCAR\tex\SCAR_H_khk_CO.paa", "\BC_SCAR\tex\EGLM_khk_CO.paa"};
    };
    class bc_mk17_cqc_six;
    class bc_mk17_cqc_six_bcsewpn : bc_mk17_cqc_six
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "camo1", "camo2"};
        hiddenSelectionsTextures[]={"", "\BC_SCAR\tex\SCAR_H_CO.paa", "\BC_SCAR\tex\EGLM_CO.paa"};
    };
    class bc_mk17_cqc_six12_blk;
    class bc_mk17_cqc_six12_blk_bcsewpn : bc_mk17_cqc_six12_blk
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "camo1", "camo2"};
        hiddenSelectionsTextures[]={"", "\BC_SCAR\tex\SCAR_H_blk_CO.paa", "\BC_SCAR\tex\EGLM_blk_CO.paa"};
    };
    class bc_mk17_cqc_six12_khk;
    class bc_mk17_cqc_six12_khk_bcsewpn : bc_mk17_cqc_six12_khk
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "camo1", "camo2"};
        hiddenSelectionsTextures[]={"", "\BC_SCAR\tex\SCAR_H_khk_CO.paa", "\BC_SCAR\tex\EGLM_khk_CO.paa"};
    };
    class bc_mk17_cqc_mass;
    class bc_mk17_cqc_mass_bcsewpn : bc_mk17_cqc_mass
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_mk17_cqc_mass_blk;
    class bc_mk17_cqc_mass_blk_bcsewpn : bc_mk17_cqc_mass_blk
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_mk17_cqc_mass_khk;
    class bc_mk17_cqc_mass_khk_bcsewpn : bc_mk17_cqc_mass_khk
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_mk17_ak;
    class bc_mk17_ak_bcsewpn : bc_mk17_ak
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "camo1"};
        hiddenSelectionsTextures[]={"", "\BC_SCAR\tex\SCAR_H_CO.paa"};
    };
    class bc_mk17_ak_grip_bcsewpn : bc_mk17_ak_bcsewpn
    {
    };
    class bc_mk17_ak_grip2_bcsewpn : bc_mk17_ak_bcsewpn
    {
    };
    class bc_mk17_ak_grip3_bcsewpn : bc_mk17_ak_bcsewpn
    {
    };
    class bc_mk17_ak_blk;
    class bc_mk17_ak_blk_bcsewpn : bc_mk17_ak_blk
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "camo1"};
        hiddenSelectionsTextures[]={"", "\BC_SCAR\tex\SCAR_H_blk_CO.paa"};
    };
    class bc_mk17_ak_blk_grip_bcsewpn : bc_mk17_ak_blk_bcsewpn
    {
    };
    class bc_mk17_ak_blk_grip2_bcsewpn : bc_mk17_ak_blk_bcsewpn
    {
    };
    class bc_mk17_ak_blk_grip3_bcsewpn : bc_mk17_ak_blk_bcsewpn
    {
    };
    class bc_mk17_ak_khk;
    class bc_mk17_ak_khk_bcsewpn : bc_mk17_ak_khk
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "camo1"};
        hiddenSelectionsTextures[]={"", "\BC_SCAR\tex\SCAR_H_khk_CO.paa"};
    };
    class bc_mk17_ak_khk_grip_bcsewpn : bc_mk17_ak_khk_bcsewpn
    {
    };
    class bc_mk17_ak_khk_grip2_bcsewpn : bc_mk17_ak_khk_bcsewpn
    {
    };
    class bc_mk17_ak_khk_grip3_bcsewpn : bc_mk17_ak_khk_bcsewpn
    {
    };
    class bc_mk17_ak_gl;
    class bc_mk17_ak_gl_bcsewpn : bc_mk17_ak_gl
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "camo1", "camo2"};
        hiddenSelectionsTextures[]={"", "\BC_SCAR\tex\SCAR_H_CO.paa", "\BC_SCAR\tex\EGLM_CO.paa"};
    };
    class bc_mk17_ak_gl_blk;
    class bc_mk17_ak_gl_blk_bcsewpn : bc_mk17_ak_gl_blk
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "camo1", "camo2"};
        hiddenSelectionsTextures[]={"", "\BC_SCAR\tex\SCAR_H_blk_CO.paa", "\BC_SCAR\tex\EGLM_blk_CO.paa"};
    };
    class bc_mk17_ak_gl_khk;
    class bc_mk17_ak_gl_khk_bcsewpn : bc_mk17_ak_gl_khk
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "camo1", "camo2"};
        hiddenSelectionsTextures[]={"", "\BC_SCAR\tex\SCAR_H_khk_CO.paa", "\BC_SCAR\tex\EGLM_khk_CO.paa"};
    };
    class bc_mk17_ak_six12;
    class bc_mk17_ak_six12_bcsewpn : bc_mk17_ak_six12
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "camo1", "camo2"};
        hiddenSelectionsTextures[]={"", "\BC_SCAR\tex\SCAR_H_CO.paa", "\BC_SCAR\tex\EGLM_CO.paa"};
    };
    class bc_mk17_ak_six12_blk;
    class bc_mk17_ak_six12_blk_bcsewpn : bc_mk17_ak_six12_blk
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "camo1", "camo2"};
        hiddenSelectionsTextures[]={"", "\BC_SCAR\tex\SCAR_H_blk_CO.paa", "\BC_SCAR\tex\EGLM_blk_CO.paa"};
    };
    class bc_mk17_ak_six_khk;
    class bc_mk17_ak_six_khk_bcsewpn : bc_mk17_ak_six_khk
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "camo1", "camo2"};
        hiddenSelectionsTextures[]={"", "\BC_SCAR\tex\SCAR_H_khk_CO.paa", "\BC_SCAR\tex\EGLM_khk_CO.paa"};
    };
    class bc_ak_alpha_545;
    class bc_ak_alpha_545_bcsewpn : bc_ak_alpha_545
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_ak_alpha_545_grip1_bcsewpn : bc_ak_alpha_545_bcsewpn
    {
    };
    class bc_ak_alpha_545_grip2_bcsewpn : bc_ak_alpha_545_bcsewpn
    {
    };
    class bc_ak_alpha_545_grip3_bcsewpn : bc_ak_alpha_545_bcsewpn
    {
    };
    class bc_ak_alpha_545_gl;
    class bc_ak_alpha_545_gl_bcsewpn : bc_ak_alpha_545_gl
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_ak_alpha_545_six12;
    class bc_ak_alpha_545_six12_bcsewpn : bc_ak_alpha_545_six12
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_ak_alpha_545_blk;
    class bc_ak_alpha_545_blk_bcsewpn : bc_ak_alpha_545_blk
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_ak_alpha_545_blk_grip1_bcsewpn : bc_ak_alpha_545_blk_bcsewpn
    {
    };
    class bc_ak_alpha_545_blk_grip2_bcsewpn : bc_ak_alpha_545_blk_bcsewpn
    {
    };
    class bc_ak_alpha_545_blk_grip3_bcsewpn : bc_ak_alpha_545_blk_bcsewpn
    {
    };
    class bc_ak_alpha_545_blk_gl;
    class bc_ak_alpha_545_blk_gl_bcsewpn : bc_ak_alpha_545_blk_gl
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_ak_alpha_545_blk_six12;
    class bc_ak_alpha_545_blk_six12_bcsewpn : bc_ak_alpha_545_blk_six12
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_ak_alpha_556;
    class bc_ak_alpha_556_bcsewpn : bc_ak_alpha_556
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_ak_alpha_556_grip1_bcsewpn : bc_ak_alpha_556_bcsewpn
    {
    };
    class bc_ak_alpha_556_grip2_bcsewpn : bc_ak_alpha_556_bcsewpn
    {
    };
    class bc_ak_alpha_556_grip3_bcsewpn : bc_ak_alpha_556_bcsewpn
    {
    };
    class bc_ak_alpha_556_gl;
    class bc_ak_alpha_556_gl_bcsewpn : bc_ak_alpha_556_gl
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_ak_alpha_556_six12;
    class bc_ak_alpha_556_six12_bcsewpn : bc_ak_alpha_556_six12
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_ak_alpha_556_blk;
    class bc_ak_alpha_556_blk_bcsewpn : bc_ak_alpha_556_blk
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_ak_alpha_556_blk_grip1_bcsewpn : bc_ak_alpha_556_blk_bcsewpn
    {
    };
    class bc_ak_alpha_556_blk_grip2_bcsewpn : bc_ak_alpha_556_blk_bcsewpn
    {
    };
    class bc_ak_alpha_556_blk_grip3_bcsewpn : bc_ak_alpha_556_blk_bcsewpn
    {
    };
    class bc_ak_alpha_556_blk_gl;
    class bc_ak_alpha_556_blk_gl_bcsewpn : bc_ak_alpha_556_blk_gl
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_ak_alpha_556_blk_six12;
    class bc_ak_alpha_556_blk_six12_bcsewpn : bc_ak_alpha_556_blk_six12
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_ak_alpha_762;
    class bc_ak_alpha_762_bcsewpn : bc_ak_alpha_762
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_ak_alpha_762_grip1_bcsewpn : bc_ak_alpha_762_bcsewpn
    {
    };
    class bc_ak_alpha_762_grip2_bcsewpn : bc_ak_alpha_762_bcsewpn
    {
    };
    class bc_ak_alpha_762_grip3_bcsewpn : bc_ak_alpha_762_bcsewpn
    {
    };
    class bc_ak_alpha_762_gl;
    class bc_ak_alpha_762_gl_bcsewpn : bc_ak_alpha_762_gl
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_ak_alpha_762_six12;
    class bc_ak_alpha_762_six12_bcsewpn : bc_ak_alpha_762_six12
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_ak_alpha_762_blk;
    class bc_ak_alpha_762_blk_bcsewpn : bc_ak_alpha_762_blk
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_ak_alpha_762_blk_grip1_bcsewpn : bc_ak_alpha_762_blk_bcsewpn
    {
    };
    class bc_ak_alpha_762_blk_grip2_bcsewpn : bc_ak_alpha_762_blk_bcsewpn
    {
    };
    class bc_ak_alpha_762_blk_grip3_bcsewpn : bc_ak_alpha_762_blk_bcsewpn
    {
    };
    class bc_ak_alpha_762_blk_gl;
    class bc_ak_alpha_762_blk_gl_bcsewpn : bc_ak_alpha_762_blk_gl
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_ak_alpha_762_blk_six12;
    class bc_ak_alpha_762_blk_six12_bcsewpn : bc_ak_alpha_762_blk_six12
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_arx160;
    class bc_arx160_bcsewpn : bc_arx160
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_arx160_grip_bcsewpn : bc_arx160_bcsewpn
    {
    };
    class bc_arx160_grip2_bcsewpn : bc_arx160_bcsewpn
    {
    };
    class bc_arx160_grip3_bcsewpn : bc_arx160_bcsewpn
    {
    };
    class bc_arx160_tan;
    class bc_arx160_tan_bcsewpn : bc_arx160_tan
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_arx160_tan_grip_bcsewpn : bc_arx160_tan_bcsewpn
    {
    };
    class bc_arx160_tan_grip2_bcsewpn : bc_arx160_tan_bcsewpn
    {
    };
    class bc_arx160_tan_grip3_bcsewpn : bc_arx160_tan_bcsewpn
    {
    };
    class bc_arx160_gl;
    class bc_arx160_gl_bcsewpn : bc_arx160_gl
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_arx160_tan_gl;
    class bc_arx160_tan_gl_bcsewpn : bc_arx160_tan_gl
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_shrike;
    class bc_shrike_bcsewpn : bc_shrike
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_shrike_grip_bcsewpn : bc_shrike_bcsewpn
    {
    };
    class bc_shrike_grip3_bcsewpn : bc_shrike_bcsewpn
    {
    };
    class bc_shrike_mag;
    class bc_shrike_mag_bcsewpn : bc_shrike_mag
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_shrike_mag_grip_bcsewpn : bc_shrike_mag_bcsewpn
    {
    };
    class bc_shrike_mag_grip3_bcsewpn : bc_shrike_mag_bcsewpn
    {
    };
    class bc_shrike_gl;
    class bc_shrike_gl_bcsewpn : bc_shrike_gl
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_shrike_mag_gl;
    class bc_shrike_mag_gl_bcsewpn : bc_shrike_mag_gl
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_shrike_six12;
    class bc_shrike_six12_bcsewpn : bc_shrike_six12
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_shrike_mag_six12;
    class bc_shrike_mag_six12_bcsewpn : bc_shrike_mag_six12
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_aug_a3;
    class bc_aug_a3_bcsewpn : bc_aug_a3
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_aug_a3_grip_bcsewpn : bc_aug_a3_bcsewpn
    {
    };
    class bc_aug_a3_grip3_bcsewpn : bc_aug_a3_bcsewpn
    {
    };
    class bc_aug_a3_black;
    class bc_aug_a3_black_bcsewpn : bc_aug_a3_black
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_aug_a3_black_grip_bcsewpn : bc_aug_a3_black_bcsewpn
    {
    };
    class bc_aug_a3_black_grip3_bcsewpn : bc_aug_a3_black_bcsewpn
    {
    };
    class bc_aug_a3_blue;
    class bc_aug_a3_blue_bcsewpn : bc_aug_a3_blue
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_aug_a3_blue_grip_bcsewpn : bc_aug_a3_blue_bcsewpn
    {
    };
    class bc_aug_a3_blue_grip3_bcsewpn : bc_aug_a3_blue_bcsewpn
    {
    };
    class bc_aug_a3_sand;
    class bc_aug_a3_sand_bcsewpn : bc_aug_a3_sand
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_aug_a3_sand_grip_bcsewpn : bc_aug_a3_sand_bcsewpn
    {
    };
    class bc_aug_a3_sand_grip3_bcsewpn : bc_aug_a3_sand_bcsewpn
    {
    };
    class bc_aug_a3_m203;
    class bc_aug_a3_m203_bcsewpn : bc_aug_a3_m203
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_aug_a3_m203_black_bcsewpn : bc_aug_a3_m203_bcsewpn
    {
    };
    class bc_aug_a3_m203_blue_bcsewpn : bc_aug_a3_m203_bcsewpn
    {
    };
    class bc_aug_a3_m203_sand_bcsewpn : bc_aug_a3_m203_bcsewpn
    {
    };
    class bc_aug_a3_six12;
    class bc_aug_a3_six12_bcsewpn : bc_aug_a3_six12
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_aug_a3_six12_black_bcsewpn : bc_aug_a3_six12_bcsewpn
    {
    };
    class bc_aug_a3_six12_blue_bcsewpn : bc_aug_a3_six12_bcsewpn
    {
    };
    class bc_aug_a3_six12_sand_bcsewpn : bc_aug_a3_six12_bcsewpn
    {
    };
    class bc_xcr_l;
    class bc_xcr_l_bcsewpn : bc_xcr_l
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_xcr_l_grip_bcsewpn : bc_xcr_l_bcsewpn
    {
    };
    class bc_xcr_l_grip2_bcsewpn : bc_xcr_l_bcsewpn
    {
    };
    class bc_xcr_l_grip3_bcsewpn : bc_xcr_l_bcsewpn
    {
    };
    class bc_xcr_l_gl;
    class bc_xcr_l_gl_bcsewpn : bc_xcr_l_gl
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_xcr_l_six12;
    class bc_xcr_l_six12_bcsewpn : bc_xcr_l_six12
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_galil_ace_21;
    class bc_galil_ace_21_bcsewpn : bc_galil_ace_21
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_galil_ace_21_grip_bcsewpn : bc_galil_ace_21_bcsewpn
    {
    };
    class bc_galil_ace_21_grip2_bcsewpn : bc_galil_ace_21_bcsewpn
    {
    };
    class bc_galil_ace_21_grip3_bcsewpn : bc_galil_ace_21_bcsewpn
    {
    };
    class bc_galil_ace_22;
    class bc_galil_ace_22_bcsewpn : bc_galil_ace_22
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_galil_ace_22_grip_bcsewpn : bc_galil_ace_22_bcsewpn
    {
    };
    class bc_galil_ace_22_grip2_bcsewpn : bc_galil_ace_22_bcsewpn
    {
    };
    class bc_galil_ace_22_grip3_bcsewpn : bc_galil_ace_22_bcsewpn
    {
    };
    class bc_galil_ace_23;
    class bc_galil_ace_23_bcsewpn : bc_galil_ace_23
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_galil_ace_23_grip_bcsewpn : bc_galil_ace_23_bcsewpn
    {
    };
    class bc_galil_ace_23_grip2_bcsewpn : bc_galil_ace_23_bcsewpn
    {
    };
    class bc_galil_ace_23_grip3_bcsewpn : bc_galil_ace_23_bcsewpn
    {
    };
    class bc_galil_ace_31;
    class bc_galil_ace_31_bcsewpn : bc_galil_ace_31
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_galil_ace_31_grip_bcsewpn : bc_galil_ace_31_bcsewpn
    {
    };
    class bc_galil_ace_31_grip2_bcsewpn : bc_galil_ace_31_bcsewpn
    {
    };
    class bc_galil_ace_31_grip3_bcsewpn : bc_galil_ace_31_bcsewpn
    {
    };
    class bc_galil_ace_32;
    class bc_galil_ace_32_bcsewpn : bc_galil_ace_32
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_galil_ace_32_grip_bcsewpn : bc_galil_ace_32_bcsewpn
    {
    };
    class bc_galil_ace_32_grip2_bcsewpn : bc_galil_ace_32_bcsewpn
    {
    };
    class bc_galil_ace_32_grip3_bcsewpn : bc_galil_ace_32_bcsewpn
    {
    };
    class bc_galil_ace_41;
    class bc_galil_ace_41_bcsewpn : bc_galil_ace_41
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_galil_ace_41_grip_bcsewpn : bc_galil_ace_41_bcsewpn
    {
    };
    class bc_galil_ace_41_grip2_bcsewpn : bc_galil_ace_41_bcsewpn
    {
    };
    class bc_galil_ace_41_grip3_bcsewpn : bc_galil_ace_41_bcsewpn
    {
    };
    class bc_galil_ace_42;
    class bc_galil_ace_42_bcsewpn : bc_galil_ace_42
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_galil_ace_42_grip_bcsewpn : bc_galil_ace_42_bcsewpn
    {
    };
    class bc_galil_ace_42_grip2_bcsewpn : bc_galil_ace_42_bcsewpn
    {
    };
    class bc_galil_ace_42_grip3_bcsewpn : bc_galil_ace_42_bcsewpn
    {
    };
    class bc_galil_ace_52;
    class bc_galil_ace_52_bcsewpn : bc_galil_ace_52
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_galil_ace_52_grip_bcsewpn : bc_galil_ace_52_bcsewpn
    {
    };
    class bc_galil_ace_52_grip2_bcsewpn : bc_galil_ace_52_bcsewpn
    {
    };
    class bc_galil_ace_52_grip3_bcsewpn : bc_galil_ace_52_bcsewpn
    {
    };
    class bc_galil_ace_53;
    class bc_galil_ace_53_bcsewpn : bc_galil_ace_53
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_galil_ace_53_grip_bcsewpn : bc_galil_ace_53_bcsewpn
    {
    };
    class bc_galil_ace_53_grip2_bcsewpn : bc_galil_ace_53_bcsewpn
    {
    };
    class bc_galil_ace_53_grip3_bcsewpn : bc_galil_ace_53_bcsewpn
    {
    };
    class bc_galil_ace_21_gl;
    class bc_galil_ace_21_gl_bcsewpn : bc_galil_ace_21_gl
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_galil_ace_22_gl;
    class bc_galil_ace_22_gl_bcsewpn : bc_galil_ace_22_gl
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_galil_ace_23_gl;
    class bc_galil_ace_23_gl_bcsewpn : bc_galil_ace_23_gl
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_galil_ace_31_gl;
    class bc_galil_ace_31_gl_bcsewpn : bc_galil_ace_31_gl
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_galil_ace_32_gl;
    class bc_galil_ace_32_gl_bcsewpn : bc_galil_ace_32_gl
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_galil_ace_41_gl;
    class bc_galil_ace_41_gl_bcsewpn : bc_galil_ace_41_gl
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_galil_ace_42_gl;
    class bc_galil_ace_42_gl_bcsewpn : bc_galil_ace_42_gl
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_galil_ace_52_gl;
    class bc_galil_ace_52_gl_bcsewpn : bc_galil_ace_52_gl
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_galil_ace_21_six12;
    class bc_galil_ace_21_six12_bcsewpn : bc_galil_ace_21_six12
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_galil_ace_22_six12;
    class bc_galil_ace_22_six12_bcsewpn : bc_galil_ace_22_six12
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_galil_ace_23_six12;
    class bc_galil_ace_23_six12_bcsewpn : bc_galil_ace_23_six12
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_galil_ace_31_six12;
    class bc_galil_ace_31_six12_bcsewpn : bc_galil_ace_31_six12
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_galil_ace_32_six12;
    class bc_galil_ace_32_six12_bcsewpn : bc_galil_ace_32_six12
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_galil_ace_41_six12;
    class bc_galil_ace_41_six12_bcsewpn : bc_galil_ace_41_six12
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_galil_ace_42_six12;
    class bc_galil_ace_42_six12_bcsewpn : bc_galil_ace_42_six12
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_galil_ace_52_six12;
    class bc_galil_ace_52_six12_bcsewpn : bc_galil_ace_52_six12
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_g36v;
    class bc_g36v_bcsewpn : bc_g36v
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_g36v_grip_bcsewpn : bc_g36v_bcsewpn
    {
    };
    class bc_g36v_grip2_bcsewpn : bc_g36v_bcsewpn
    {
    };
    class bc_g36v_grip3_bcsewpn : bc_g36v_bcsewpn
    {
    };
    class bc_g36kv;
    class bc_g36kv_bcsewpn : bc_g36kv
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_g36kv_grip_bcsewpn : bc_g36kv_bcsewpn
    {
    };
    class BC_G36KV_grip2_bcsewpn : bc_g36kv_bcsewpn
    {
    };
    class BC_G36KV_grip3_bcsewpn : bc_g36kv_bcsewpn
    {
    };
    class BC_G36CV;
    class BC_G36CV_bcsewpn : BC_G36CV
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class BC_G36CV_grip_bcsewpn : BC_G36CV_bcsewpn
    {
    };
    class BC_G36CV_grip2_bcsewpn : BC_G36CV_bcsewpn
    {
    };
    class BC_G36CV_grip3_bcsewpn : BC_G36CV_bcsewpn
    {
    };
    class BC_G36VAG36;
    class BC_G36VAG36_bcsewpn : BC_G36VAG36
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class BC_ACR_MID;
    class BC_ACR_MID_bcsewpn : BC_ACR_MID
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class BC_ACR_MID_grip_bcsewpn : BC_ACR_MID_bcsewpn
    {
    };
    class BC_ACR_MID_grip2_bcsewpn : BC_ACR_MID_bcsewpn
    {
    };
    class BC_ACR_MID_grip3_bcsewpn : BC_ACR_MID_bcsewpn
    {
    };
    class BC_ACR_MID_BLK;
    class BC_ACR_MID_BLK_bcsewpn : BC_ACR_MID_BLK
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class BC_ACR_MID_BLK_grip_bcsewpn : BC_ACR_MID_bcsewpn
    {
    };
    class BC_ACR_MID_blk_grip2_bcsewpn : BC_ACR_MID_bcsewpn
    {
    };
    class BC_ACR_MID_blk_grip3_bcsewpn : BC_ACR_MID_bcsewpn
    {
    };
    class BC_ACR_MID_GREEN;
    class BC_ACR_MID_GREEN_bcsewpn : BC_ACR_MID_GREEN
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class BC_ACR_MID_GREEN_grip_bcsewpn : BC_ACR_MID_bcsewpn
    {
    };
    class BC_ACR_MID_GREEN_grip2_bcsewpn : BC_ACR_MID_bcsewpn
    {
    };
    class BC_ACR_MID_GREEN_grip3_bcsewpn : BC_ACR_MID_bcsewpn
    {
    };
    class BC_ACR_MID_GL;
    class BC_ACR_MID_GL_bcsewpn : BC_ACR_MID_GL
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class BC_ACR_MID_GL_blk;
    class BC_ACR_MID_GL_blk_bcsewpn : BC_ACR_MID_GL_blk
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class BC_ACR_MID_GL_green;
    class BC_ACR_MID_GL_green_bcsewpn : BC_ACR_MID_GL_green
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class BC_ACR_CQB;
    class BC_ACR_CQB_bcsewpn : BC_ACR_CQB
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class BC_ACR_CQB_grip_bcsewpn : BC_ACR_CQB_bcsewpn
    {
    };
    class BC_ACR_CQB_grip2_bcsewpn : BC_ACR_CQB_bcsewpn
    {
    };
    class BC_ACR_CQB_grip3_bcsewpn : BC_ACR_CQB_bcsewpn
    {
    };
    class BC_ACR_CQB_BLK;
    class BC_ACR_CQB_BLK_bcsewpn : BC_ACR_CQB_BLK
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class BC_ACR_CQB_BLK_grip_bcsewpn : BC_ACR_CQB_bcsewpn
    {
    };
    class BC_ACR_CQB_blk_grip2_bcsewpn : BC_ACR_CQB_bcsewpn
    {
    };
    class BC_ACR_CQB_blk_grip3_bcsewpn : BC_ACR_CQB_bcsewpn
    {
    };
    class BC_ACR_CQB_GREEN;
    class BC_ACR_CQB_GREEN_bcsewpn : BC_ACR_CQB_GREEN
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class BC_ACR_CQB_GREEN_grip_bcsewpn : BC_ACR_CQB_bcsewpn
    {
    };
    class BC_ACR_CQB_GREEN_grip2_bcsewpn : BC_ACR_CQB_bcsewpn
    {
    };
    class BC_ACR_CQB_GREEN_grip3_bcsewpn : BC_ACR_CQB_bcsewpn
    {
    };
    class BC_gilboa;
    class BC_gilboa_bcsewpn : BC_gilboa
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class BC_gilboa_grip_bcsewpn : BC_gilboa_bcsewpn
    {
    };
    class BC_gilboa_grip2_bcsewpn : BC_gilboa_bcsewpn
    {
    };
    class BC_gilboa_grip3_bcsewpn : BC_gilboa_bcsewpn
    {
    };
    class BC_FAMAS;
    class BC_FAMAS_bcsewpn : BC_FAMAS
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class BC_FAMAS_TAN;
    class BC_FAMAS_TAN_bcsewpn : BC_FAMAS_TAN
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class BC_FAMAS_GL;
    class BC_FAMAS_GL_bcsewpn : BC_FAMAS_GL
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class BC_FAMAS_GL_TAN;
    class BC_FAMAS_GL_TAN_bcsewpn : BC_FAMAS_GL_TAN
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class BC_FAMAS_SIX12;
    class BC_FAMAS_SIX12_bcsewpn : BC_FAMAS_SIX12
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class BC_FAMAS_SIX12_TAN;
    class BC_FAMAS_SIX12_TAN_bcsewpn : BC_FAMAS_SIX12_TAN
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_apc223;
    class bc_apc223_bcsewpn : bc_apc223
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_apc223_grip1_bcsewpn : bc_apc223_bcsewpn
    {
    };
    class bc_apc223_grip2_bcsewpn : bc_apc223_bcsewpn
    {
    };
    class bc_apc223_grip3_bcsewpn : bc_apc223_bcsewpn
    {
    };
    class bc_apc223_gl;
    class bc_apc223_gl_bcsewpn : bc_apc223_gl
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_apc223_six12;
    class bc_apc223_six12_bcsewpn : bc_apc223_six12
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class BC_PDR;
    class BC_PDR_bcsewpn : BC_PDR
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_kac_pdw;
    class bc_kac_pdw_bcsewpn : bc_kac_pdw
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_kac_pdw_grip1_bcsewpn : bc_kac_pdw_bcsewpn
    {
    };
    class bc_kac_pdw_grip2_bcsewpn : bc_kac_pdw_bcsewpn
    {
    };
    class bc_kac_pdw_grip3_bcsewpn : bc_kac_pdw_bcsewpn
    {
    };
    class bc_kac_pdw_8;
    class bc_kac_pdw_8_bcsewpn : bc_kac_pdw_8
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_kac_pdw_8_grip1_bcsewpn : bc_kac_pdw_8_bcsewpn
    {
    };
    class bc_kac_pdw_8_grip2_bcsewpn : bc_kac_pdw_8_bcsewpn
    {
    };
    class bc_kac_pdw_8_grip3_bcsewpn : bc_kac_pdw_8_bcsewpn
    {
    };
    class BC_honeybadger;
    class BC_honeybadger_bcsewpn : BC_honeybadger
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class BC_honeybadger_grip_bcsewpn : BC_honeybadger_bcsewpn
    {
    };
    class BC_honeybadger_grip2_bcsewpn : BC_honeybadger_bcsewpn
    {
    };
    class BC_honeybadger_grip3_bcsewpn : BC_honeybadger_bcsewpn
    {
    };
    class bc_rpk74;
    class bc_rpk74_bcsewpn : bc_rpk74
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_rpk;
    class bc_rpk_bcsewpn : bc_rpk
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class BC_MK12;
    class BC_MK12_bcsewpn : BC_MK12
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class BC_MK12_grip_bcsewpn : BC_MK12_bcsewpn
    {
    };
    class BC_MK12_grip2_bcsewpn : BC_MK12_bcsewpn
    {
    };
    class BC_MK12_grip3_bcsewpn : BC_MK12_bcsewpn
    {
    };
    class BC_HK433_145;
    class BC_HK433_145_bcsewpn : BC_HK433_145
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class BC_HK433_145_grip_bcsewpn : BC_HK433_145_bcsewpn
    {
    };
    class BC_HK433_145_grip2_bcsewpn : BC_HK433_145_bcsewpn
    {
    };
    class BC_HK433_145_grip3_bcsewpn : BC_HK433_145_bcsewpn
    {
    };
    class BC_HK433_145_GL;
    class BC_HK433_145_GL_bcsewpn : BC_HK433_145_GL
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class BC_HK433_145_SIX12;
    class BC_HK433_145_SIX12_bcsewpn : BC_HK433_145_SIX12
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_ukm;
    class bc_ukm_bcsewpn : bc_ukm
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class bc_ukm_n;
    class bc_ukm_n_bcsewpn : bc_ukm_n
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class BC_U100_MK5;
    class BC_U100_MK5_bcsewpn : BC_U100_MK5
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class BC_U100_MK5_grip_bcsewpn : BC_U100_MK5_bcsewpn
    {
    };
    class BC_U100_MK5_grip2_bcsewpn : BC_U100_MK5_bcsewpn
    {
    };
    class BC_U100_MK5_grip3_bcsewpn : BC_U100_MK5_bcsewpn
    {
    };
    class QBZ191;
    class QBZ191_bcsewpn : QBZ191
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class QBZ191_grip_bcsewpn : QBZ191_bcsewpn
    {
    };
    class QBZ191_grip2_bcsewpn : QBZ191_bcsewpn
    {
    };
    class QBZ191_grip3_bcsewpn : QBZ191_bcsewpn
    {
    };
    class QBZ192;
    class QBZ192_bcsewpn : QBZ192
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class QBZ192_grip_bcsewpn : QBZ192_bcsewpn
    {
    };
    class QBZ192_grip2_bcsewpn : QBZ192_bcsewpn
    {
    };
    class QBZ192_grip3_bcsewpn : QBZ192_bcsewpn
    {
    };
    class QBU191;
    class QBU191_bcsewpn : QBU191
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class QBU191_grip_bcsewpn : QBU191_bcsewpn
    {
    };
    class QBU191_grip2_bcsewpn : QBU191_bcsewpn
    {
    };
    class QBU191_grip3_bcsewpn : QBU191_bcsewpn
    {
    };
    class QBZ191GL;
    class QBZ191GL_bcsewpn : QBZ191GL
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class BC_Type81;
    class BC_Type81_bcsewpn : BC_Type81
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class BC_Type81_1;
    class BC_Type81_1_bcsewpn : BC_Type81_1
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class BC_Type81_LMG;
    class BC_Type81_LMG_bcsewpn : BC_Type81_LMG
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class BC_USAS12;
    class BC_USAS12_bcsewpn : BC_USAS12
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class BC_MDR556_BLK;
    class BC_MDR556_BLK_bcsewpn : BC_MDR556_BLK
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "MDR_body"};
        hiddenSelectionsTextures[]={"", "\BC_MDR\tex\mdr_std_co.paa"};
    };
    class BC_MDR556_BLK_grip_bcsewpn : BC_MDR556_BLK_bcsewpn
    {
    };
    class BC_MDR556_BLK_grip2_bcsewpn : BC_MDR556_BLK_bcsewpn
    {
    };
    class BC_MDR556_BLK_grip3_bcsewpn : BC_MDR556_BLK_bcsewpn
    {
    };
    class BC_MDR556_TAN;
    class BC_MDR556_TAN_bcsewpn : BC_MDR556_TAN
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "MDR_body"};
        hiddenSelectionsTextures[]={"", "\BC_MDR\tex\mdr_std_tan_co.paa"};
    };
    class BC_MDR556_TAN_grip_bcsewpn : BC_MDR556_TAN_bcsewpn
    {
    };
    class BC_MDR556_TAN_grip2_bcsewpn : BC_MDR556_TAN_bcsewpn
    {
    };
    class BC_MDR556_TAN_grip3_bcsewpn : BC_MDR556_TAN_bcsewpn
    {
    };
    class BC_MDR556_CAMO;
    class BC_MDR556_CAMO_bcsewpn : BC_MDR556_CAMO
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "MDR_body"};
        hiddenSelectionsTextures[]={"", "\BC_MDR\tex\mdr_std_camo_co.paa"};
    };
    class BC_MDR556_CAMO_grip_bcsewpn : BC_MDR556_CAMO_bcsewpn
    {
    };
    class BC_MDR556_CAMO_grip2_bcsewpn : BC_MDR556_CAMO_bcsewpn
    {
    };
    class BC_MDR556_CAMO_grip3_bcsewpn : BC_MDR556_CAMO_bcsewpn
    {
    };
    class BC_MDR556_DE;
    class BC_MDR556_DE_bcsewpn : BC_MDR556_DE
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "MDR_body"};
        hiddenSelectionsTextures[]={"", "\BC_MDR\tex\mdr_std_de_co.paa"};
    };
    class BC_MDR556_DE_grip_bcsewpn : BC_MDR556_DE_bcsewpn
    {
    };
    class BC_MDR556_DE_grip2_bcsewpn : BC_MDR556_DE_bcsewpn
    {
    };
    class BC_MDR556_DE_grip3_bcsewpn : BC_MDR556_DE_bcsewpn
    {
    };
    class BC_MDR556_AOR1;
    class BC_MDR556_AOR1_bcsewpn : BC_MDR556_AOR1
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "MDR_body"};
        hiddenSelectionsTextures[]={"", "\BC_MDR\tex\mdr_std_aor1_co.paa"};
    };
    class BC_MDR556_AOR1_grip_bcsewpn : BC_MDR556_AOR1_bcsewpn
    {
    };
    class BC_MDR556_AOR1_grip2_bcsewpn : BC_MDR556_AOR1_bcsewpn
    {
    };
    class BC_MDR556_AOR1_grip3_bcsewpn : BC_MDR556_AOR1_bcsewpn
    {
    };
    class BC_MDR556_UCP;
    class BC_MDR556_UCP_bcsewpn : BC_MDR556_UCP
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "MDR_body"};
        hiddenSelectionsTextures[]={"", "\BC_MDR\tex\mdr_std_aor1_co.paa"};
    };
    class BC_MDR556_UCP_grip_bcsewpn : BC_MDR556_UCP_bcsewpn
    {
    };
    class BC_MDR556_UCP_grip2_bcsewpn : BC_MDR556_UCP_bcsewpn
    {
    };
    class BC_MDR556_UCP_grip3_bcsewpn : BC_MDR556_UCP_bcsewpn
    {
    };
    class BC_MDR308_BLK;
    class BC_MDR308_BLK_bcsewpn : BC_MDR308_BLK
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "MDR_body"};
        hiddenSelectionsTextures[]={"", "\BC_MDR\tex\mdr_std_co.paa"};
    };
    class BC_MDR308_BLK_grip_bcsewpn : BC_MDR308_BLK_bcsewpn
    {
    };
    class BC_MDR308_BLK_grip2_bcsewpn : BC_MDR308_BLK_bcsewpn
    {
    };
    class BC_MDR308_BLK_grip3_bcsewpn : BC_MDR308_BLK_bcsewpn
    {
    };
    class BC_MDR308_TAN;
    class BC_MDR308_TAN_bcsewpn : BC_MDR308_TAN
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "MDR_body"};
        hiddenSelectionsTextures[]={"", "\BC_MDR\tex\mdr_std_tan_co.paa"};
    };
    class BC_MDR308_TAN_grip_bcsewpn : BC_MDR308_TAN_bcsewpn
    {
    };
    class BC_MDR308_TAN_grip2_bcsewpn : BC_MDR308_TAN_bcsewpn
    {
    };
    class BC_MDR308_TAN_grip3_bcsewpn : BC_MDR308_TAN_bcsewpn
    {
    };
    class BC_MDR308_CAMO;
    class BC_MDR308_CAMO_bcsewpn : BC_MDR308_CAMO
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "MDR_body"};
        hiddenSelectionsTextures[]={"", "\BC_MDR\tex\mdr_std_camo_co.paa"};
    };
    class BC_MDR308_CAMO_grip_bcsewpn : BC_MDR308_CAMO_bcsewpn
    {
    };
    class BC_MDR308_CAMO_grip2_bcsewpn : BC_MDR308_CAMO_bcsewpn
    {
    };
    class BC_MDR308_CAMO_grip3_bcsewpn : BC_MDR308_CAMO_bcsewpn
    {
    };
    class BC_MDR308_DE;
    class BC_MDR308_DE_bcsewpn : BC_MDR308_DE
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "MDR_body"};
        hiddenSelectionsTextures[]={"", "\BC_MDR\tex\mdr_std_de_co.paa"};
    };
    class BC_MDR308_DE_grip_bcsewpn : BC_MDR308_DE_bcsewpn
    {
    };
    class BC_MDR308_DE_grip2_bcsewpn : BC_MDR308_DE_bcsewpn
    {
    };
    class BC_MDR308_DE_grip3_bcsewpn : BC_MDR308_DE_bcsewpn
    {
    };
    class BC_MDR308_AOR1;
    class BC_MDR308_AOR1_bcsewpn : BC_MDR308_AOR1
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "MDR_body"};
        hiddenSelectionsTextures[]={"", "\BC_MDR\tex\mdr_std_aor1_co.paa"};
    };
    class BC_MDR308_AOR1_grip_bcsewpn : BC_MDR308_AOR1_bcsewpn
    {
    };
    class BC_MDR308_AOR1_grip2_bcsewpn : BC_MDR308_AOR1_bcsewpn
    {
    };
    class BC_MDR308_AOR1_grip3_bcsewpn : BC_MDR308_AOR1_bcsewpn
    {
    };
    class BC_MDR308_UCP;
    class BC_MDR308_UCP_bcsewpn : BC_MDR308_UCP
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "MDR_body"};
        hiddenSelectionsTextures[]={"", "\BC_MDR\tex\mdr_std_aor1_co.paa"};
    };
    class BC_MDR308_UCP_grip_bcsewpn : BC_MDR308_UCP_bcsewpn
    {
    };
    class BC_MDR308_UCP_grip2_bcsewpn : BC_MDR308_UCP_bcsewpn
    {
    };
    class BC_MDR308_UCP_grip3_bcsewpn : BC_MDR308_UCP_bcsewpn
    {
    };
    class BC_MDR556DMR_BLK;
    class BC_MDR556DMR_BLK_bcsewpn : BC_MDR556DMR_BLK
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "MDR_body"};
        hiddenSelectionsTextures[]={"", "\BC_MDR\tex\mdr_DMR_co.paa"};
    };
    class BC_MDR556DMR_BLK_grip_bcsewpn : BC_MDR556DMR_BLK_bcsewpn
    {
    };
    class BC_MDR556DMR_BLK_grip2_bcsewpn : BC_MDR556DMR_BLK_bcsewpn
    {
    };
    class BC_MDR556DMR_BLK_grip3_bcsewpn : BC_MDR556DMR_BLK_bcsewpn
    {
    };
    class BC_MDR556DMR_TAN;
    class BC_MDR556DMR_TAN_bcsewpn : BC_MDR556DMR_TAN
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "MDR_body"};
        hiddenSelectionsTextures[]={"", "\BC_MDR\tex\mdr_DMR_tan_co.paa"};
    };
    class BC_MDR556DMR_TAN_grip_bcsewpn : BC_MDR556DMR_TAN_bcsewpn
    {
    };
    class BC_MDR556DMR_TAN_grip2_bcsewpn : BC_MDR556DMR_TAN_bcsewpn
    {
    };
    class BC_MDR556DMR_TAN_grip3_bcsewpn : BC_MDR556DMR_TAN_bcsewpn
    {
    };
    class BC_MDR556DMR_CAMO;
    class BC_MDR556DMR_CAMO_bcsewpn : BC_MDR556DMR_CAMO
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "MDR_body"};
        hiddenSelectionsTextures[]={"", "\BC_MDR\tex\mdr_DMR_camo_co.paa"};
    };
    class BC_MDR556DMR_CAMO_grip_bcsewpn : BC_MDR556DMR_CAMO_bcsewpn
    {
    };
    class BC_MDR556DMR_CAMO_grip2_bcsewpn : BC_MDR556DMR_CAMO_bcsewpn
    {
    };
    class BC_MDR556DMR_CAMO_grip3_bcsewpn : BC_MDR556DMR_CAMO_bcsewpn
    {
    };
    class BC_MDR556DMR_DE;
    class BC_MDR556DMR_DE_bcsewpn : BC_MDR556DMR_DE
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "MDR_body"};
        hiddenSelectionsTextures[]={"", "\BC_MDR\tex\mdr_DMR_de_co.paa"};
    };
    class BC_MDR556DMR_DE_grip_bcsewpn : BC_MDR556DMR_DE_bcsewpn
    {
    };
    class BC_MDR556DMR_DE_grip2_bcsewpn : BC_MDR556DMR_DE_bcsewpn
    {
    };
    class BC_MDR556DMR_DE_grip3_bcsewpn : BC_MDR556DMR_DE_bcsewpn
    {
    };
    class BC_MDR556DMR_AOR1;
    class BC_MDR556DMR_AOR1_bcsewpn : BC_MDR556DMR_AOR1
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "MDR_body"};
        hiddenSelectionsTextures[]={"", "\BC_MDR\tex\mdr_DMR_aor1_co.paa"};
    };
    class BC_MDR556DMR_AOR1_grip_bcsewpn : BC_MDR556DMR_AOR1_bcsewpn
    {
    };
    class BC_MDR556DMR_AOR1_grip2_bcsewpn : BC_MDR556DMR_AOR1_bcsewpn
    {
    };
    class BC_MDR556DMR_AOR1_grip3_bcsewpn : BC_MDR556DMR_AOR1_bcsewpn
    {
    };
    class BC_MDR556DMR_UCP;
    class BC_MDR556DMR_UCP_bcsewpn : BC_MDR556DMR_UCP
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "MDR_body"};
        hiddenSelectionsTextures[]={"", "\BC_MDR\tex\mdr_DMR_aor1_co.paa"};
    };
    class BC_MDR556DMR_UCP_grip_bcsewpn : BC_MDR556DMR_UCP_bcsewpn
    {
    };
    class BC_MDR556DMR_UCP_grip2_bcsewpn : BC_MDR556DMR_UCP_bcsewpn
    {
    };
    class BC_MDR556DMR_UCP_grip3_bcsewpn : BC_MDR556DMR_UCP_bcsewpn
    {
    };
    class BC_MDR308DMR_BLK;
    class BC_MDR308DMR_BLK_bcsewpn : BC_MDR308DMR_BLK
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "MDR_body"};
        hiddenSelectionsTextures[]={"", "\BC_MDR\tex\mdr_DMR_co.paa"};
    };
    class BC_MDR308DMR_BLK_grip_bcsewpn : BC_MDR308DMR_BLK_bcsewpn
    {
    };
    class BC_MDR308DMR_BLK_grip2_bcsewpn : BC_MDR308DMR_BLK_bcsewpn
    {
    };
    class BC_MDR308DMR_BLK_grip3_bcsewpn : BC_MDR308DMR_BLK_bcsewpn
    {
    };
    class BC_MDR308DMR_TAN;
    class BC_MDR308DMR_TAN_bcsewpn : BC_MDR308DMR_TAN
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "MDR_body"};
        hiddenSelectionsTextures[]={"", "\BC_MDR\tex\mdr_DMR_tan_co.paa"};
    };
    class BC_MDR308DMR_TAN_grip_bcsewpn : BC_MDR308DMR_TAN_bcsewpn
    {
    };
    class BC_MDR308DMR_TAN_grip2_bcsewpn : BC_MDR308DMR_TAN_bcsewpn
    {
    };
    class BC_MDR308DMR_TAN_grip3_bcsewpn : BC_MDR308DMR_TAN_bcsewpn
    {
    };
    class BC_MDR308DMR_CAMO;
    class BC_MDR308DMR_CAMO_bcsewpn : BC_MDR308DMR_CAMO
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "MDR_body"};
        hiddenSelectionsTextures[]={"", "\BC_MDR\tex\mdr_DMR_camo_co.paa"};
    };
    class BC_MDR308DMR_CAMO_grip_bcsewpn : BC_MDR308DMR_CAMO_bcsewpn
    {
    };
    class BC_MDR308DMR_CAMO_grip2_bcsewpn : BC_MDR308DMR_CAMO_bcsewpn
    {
    };
    class BC_MDR308DMR_CAMO_grip3_bcsewpn : BC_MDR308DMR_CAMO_bcsewpn
    {
    };
    class BC_MDR308DMR_DE;
    class BC_MDR308DMR_DE_bcsewpn : BC_MDR308DMR_DE
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "MDR_body"};
        hiddenSelectionsTextures[]={"", "\BC_MDR\tex\mdr_DMR_de_co.paa"};
    };
    class BC_MDR308DMR_DE_grip_bcsewpn : BC_MDR308DMR_DE_bcsewpn
    {
    };
    class BC_MDR308DMR_DE_grip2_bcsewpn : BC_MDR308DMR_DE_bcsewpn
    {
    };
    class BC_MDR308DMR_DE_grip3_bcsewpn : BC_MDR308DMR_DE_bcsewpn
    {
    };
    class BC_MDR308DMR_AOR1;
    class BC_MDR308DMR_AOR1_bcsewpn : BC_MDR308DMR_AOR1
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "MDR_body"};
        hiddenSelectionsTextures[]={"", "\BC_MDR\tex\mdr_DMR_aor1_co.paa"};
    };
    class BC_MDR308DMR_AOR1_grip_bcsewpn : BC_MDR308DMR_AOR1_bcsewpn
    {
    };
    class BC_MDR308DMR_AOR1_grip2_bcsewpn : BC_MDR308DMR_AOR1_bcsewpn
    {
    };
    class BC_MDR308DMR_AOR1_grip3_bcsewpn : BC_MDR308DMR_AOR1_bcsewpn
    {
    };
    class BC_MDR308DMR_UCP;
    class BC_MDR308DMR_UCP_bcsewpn : BC_MDR308DMR_UCP
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "MDR_body"};
        hiddenSelectionsTextures[]={"", "\BC_MDR\tex\mdr_DMR_aor1_co.paa"};
    };
    class BC_MDR308DMR_UCP_grip_bcsewpn : BC_MDR308DMR_UCP_bcsewpn
    {
    };
    class BC_MDR308DMR_UCP_grip2_bcsewpn : BC_MDR308DMR_UCP_bcsewpn
    {
    };
    class BC_MDR308DMR_UCP_grip3_bcsewpn : BC_MDR308DMR_UCP_bcsewpn
    {
    };
    class BC_MDR556SW_BLK;
    class BC_MDR556SW_BLK_bcsewpn : BC_MDR556SW_BLK
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "MDR_body", "VFG"};
        hiddenSelectionsTextures[]={"", "\BC_MDR\tex\mdr_SW_co.paa", "\BC_MDR\tex\vfg_blk_co.paa"};
    };
    class BC_MDR556SW_TAN;
    class BC_MDR556SW_TAN_bcsewpn : BC_MDR556SW_TAN
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "MDR_body", "VFG"};
        hiddenSelectionsTextures[]={"", "\BC_MDR\tex\mdr_SW_tan_co.paa", "\BC_MDR\tex\vfg_tan_co.paa"};
    };
    class BC_MDR556SW_CAMO;
    class BC_MDR556SW_CAMO_bcsewpn : BC_MDR556SW_CAMO
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "MDR_body", "VFG"};
        hiddenSelectionsTextures[]={"", "\BC_MDR\tex\mdr_SW_camo_co.paa", "\BC_MDR\tex\vfg_camo_co.paa"};
    };
    class BC_MDR556SW_DE;
    class BC_MDR556SW_DE_bcsewpn : BC_MDR556SW_DE
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "MDR_body", "VFG"};
        hiddenSelectionsTextures[]={"", "\BC_MDR\tex\mdr_SW_de_co.paa", "\BC_MDR\tex\vfg_tan_co.paa"};
    };
    class BC_MDR556SW_AOR1;
    class BC_MDR556SW_AOR1_bcsewpn : BC_MDR556SW_AOR1
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "MDR_body", "VFG"};
        hiddenSelectionsTextures[]={"", "\BC_MDR\tex\mdr_SW_aor1_co.paa", "\BC_MDR\tex\vfg_tan_co.paa"};
    };
    class BC_MDR556SW_UCP;
    class BC_MDR556SW_UCP_bcsewpn : BC_MDR556SW_UCP
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "MDR_body", "VFG"};
        hiddenSelectionsTextures[]={"", "\BC_MDR\tex\mdr_SW_aor1_co.paa", "\BC_MDR\tex\vfg_blk_co.paa"};
    };
    class BC_MDR308SW_BLK;
    class BC_MDR308SW_BLK_bcsewpn : BC_MDR308SW_BLK
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "MDR_body", "VFG"};
        hiddenSelectionsTextures[]={"", "\BC_MDR\tex\mdr_SW_co.paa", "\BC_MDR\tex\vfg_blk_co.paa"};
    };
    class BC_MDR308SW_TAN;
    class BC_MDR308SW_TAN_bcsewpn : BC_MDR308SW_TAN
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "MDR_body", "VFG"};
        hiddenSelectionsTextures[]={"", "\BC_MDR\tex\mdr_SW_tan_co.paa", "\BC_MDR\tex\vfg_tan_co.paa"};
    };
    class BC_MDR308SW_CAMO;
    class BC_MDR308SW_CAMO_bcsewpn : BC_MDR308SW_CAMO
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "MDR_body", "VFG"};
        hiddenSelectionsTextures[]={"", "\BC_MDR\tex\mdr_SW_camo_co.paa", "\BC_MDR\tex\vfg_camo_co.paa"};
    };
    class BC_MDR308SW_DE;
    class BC_MDR308SW_DE_bcsewpn : BC_MDR308SW_DE
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "MDR_body", "VFG"};
        hiddenSelectionsTextures[]={"", "\BC_MDR\tex\mdr_SW_de_co.paa", "\BC_MDR\tex\vfg_tan_co.paa"};
    };
    class BC_MDR308SW_AOR1;
    class BC_MDR308SW_AOR1_bcsewpn : BC_MDR308SW_AOR1
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "MDR_body", "VFG"};
        hiddenSelectionsTextures[]={"", "\BC_MDR\tex\mdr_SW_aor1_co.paa", "\BC_MDR\tex\vfg_tan_co.paa"};
    };
    class BC_MDR308SW_UCP;
    class BC_MDR308SW_UCP_bcsewpn : BC_MDR308SW_UCP
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "MDR_body", "VFG"};
        hiddenSelectionsTextures[]={"", "\BC_MDR\tex\mdr_SW_aor1_co.paa", "\BC_MDR\tex\vfg_blk_co.paa"};
    };
    class BC_MDR556_BLK_SIX12;
    class BC_MDR556_BLK_SIX12_bcsewpn : BC_MDR556_BLK_SIX12
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "MDR_body"};
        hiddenSelectionsTextures[]={"", "\BC_MDR\tex\mdr_std_co.paa"};
    };
    class BC_MDR556_TAN_SIX12;
    class BC_MDR556_TAN_SIX12_bcsewpn : BC_MDR556_TAN_SIX12
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "MDR_body"};
        hiddenSelectionsTextures[]={"", "\BC_MDR\tex\mdr_std_tan_co.paa"};
    };
    class BC_MDR556_CAMO_SIX12;
    class BC_MDR556_CAMO_SIX12_bcsewpn : BC_MDR556_CAMO_SIX12
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "MDR_body"};
        hiddenSelectionsTextures[]={"", "\BC_MDR\tex\mdr_std_camo_co.paa"};
    };
    class BC_MDR556_DE_SIX12;
    class BC_MDR556_DE_SIX12_bcsewpn : BC_MDR556_DE_SIX12
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "MDR_body"};
        hiddenSelectionsTextures[]={"", "\BC_MDR\tex\mdr_std_de_co.paa"};
    };
    class BC_MDR556_AOR1_SIX12;
    class BC_MDR556_AOR1_SIX12_bcsewpn : BC_MDR556_AOR1_SIX12
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "MDR_body"};
        hiddenSelectionsTextures[]={"", "\BC_MDR\tex\mdr_std_aor1_co.paa"};
    };
    class BC_MDR556_UCP_SIX12;
    class BC_MDR556_UCP_SIX12_bcsewpn : BC_MDR556_UCP_SIX12
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "MDR_body"};
        hiddenSelectionsTextures[]={"", "\BC_MDR\tex\mdr_std_aor1_co.paa"};
    };
    class BC_MDR308_BLK_SIX12;
    class BC_MDR308_BLK_SIX12_bcsewpn : BC_MDR308_BLK_SIX12
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "MDR_body"};
        hiddenSelectionsTextures[]={"", "\BC_MDR\tex\mdr_std_co.paa"};
    };
    class BC_MDR308_TAN_SIX12;
    class BC_MDR308_TAN_SIX12_bcsewpn : BC_MDR308_TAN_SIX12
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "MDR_body"};
        hiddenSelectionsTextures[]={"", "\BC_MDR\tex\mdr_std_tan_co.paa"};
    };
    class BC_MDR308_CAMO_SIX12;
    class BC_MDR308_CAMO_SIX12_bcsewpn : BC_MDR308_CAMO_SIX12
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "MDR_body"};
        hiddenSelectionsTextures[]={"", "\BC_MDR\tex\mdr_std_camo_co.paa"};
    };
    class BC_MDR308_DE_SIX12;
    class BC_MDR308_DE_SIX12_bcsewpn : BC_MDR308_DE_SIX12
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "MDR_body"};
        hiddenSelectionsTextures[]={"", "\BC_MDR\tex\mdr_std_de_co.paa"};
    };
    class BC_MDR308_AOR1_SIX12;
    class BC_MDR308_AOR1_SIX12_bcsewpn : BC_MDR308_AOR1_SIX12
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "MDR_body"};
        hiddenSelectionsTextures[]={"", "\BC_MDR\tex\mdr_std_aor1_co.paa"};
    };
    class BC_MDR308_UCP_SIX12;
    class BC_MDR308_UCP_SIX12_bcsewpn : BC_MDR308_UCP_SIX12
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "MDR_body"};
        hiddenSelectionsTextures[]={"", "\BC_MDR\tex\mdr_std_aor1_co.paa"};
    };
    class BC_MDR556_BLK_GL;
    class BC_MDR556_BLK_GL_bcsewpn : BC_MDR556_BLK_GL
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "MDR_body", "EGLM"};
        hiddenSelectionsTextures[]={"", "\BC_MDR\tex\mdr_std_co.paa", "\BC_MDR\tex\EGLM_blk_CO.paa"};
    };
    class BC_MDR556_TAN_GL;
    class BC_MDR556_TAN_GL_bcsewpn : BC_MDR556_TAN_GL
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "MDR_body", "EGLM"};
        hiddenSelectionsTextures[]={"", "\BC_MDR\tex\mdr_std_tan_co.paa", "\BC_MDR\tex\EGLM_CO.paa"};
    };
    class BC_MDR556_CAMO_GL;
    class BC_MDR556_CAMO_GL_bcsewpn : BC_MDR556_CAMO_GL
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "MDR_body", "EGLM"};
        hiddenSelectionsTextures[]={"", "\BC_MDR\tex\mdr_std_camo_co.paa", "\BC_MDR\tex\EGLM_WOOD_CO.paa"};
    };
    class BC_MDR556_DE_GL;
    class BC_MDR556_DE_GL_bcsewpn : BC_MDR556_DE_GL
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "MDR_body", "EGLM"};
        hiddenSelectionsTextures[]={"", "\BC_MDR\tex\mdr_std_de_co.paa", "\BC_MDR\tex\EGLM_CO.paa"};
    };
    class BC_MDR556_AOR1_GL;
    class BC_MDR556_AOR1_GL_bcsewpn : BC_MDR556_AOR1_GL
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "MDR_body", "EGLM"};
        hiddenSelectionsTextures[]={"", "\BC_MDR\tex\mdr_std_aor1_co.paa", "\BC_MDR\tex\EGLM_CO.paa"};
    };
    class BC_MDR556_UCP_GL;
    class BC_MDR556_UCP_GL_bcsewpn : BC_MDR556_UCP_GL
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "MDR_body", "EGLM"};
        hiddenSelectionsTextures[]={"", "\BC_MDR\tex\mdr_std_aor1_co.paa", "\BC_MDR\tex\EGLM_khk_CO.paa"};
    };
    class BC_MDR308_BLK_GL;
    class BC_MDR308_BLK_GL_bcsewpn : BC_MDR308_BLK_GL
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "MDR_body", "EGLM"};
        hiddenSelectionsTextures[]={"", "\BC_MDR\tex\mdr_std_co.paa", "\BC_MDR\tex\EGLM_blk_CO.paa"};
    };
    class BC_MDR308_TAN_GL;
    class BC_MDR308_TAN_GL_bcsewpn : BC_MDR308_TAN_GL
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "MDR_body", "EGLM"};
        hiddenSelectionsTextures[]={"", "\BC_MDR\tex\mdr_std_tan_co.paa", "\BC_MDR\tex\EGLM_CO.paa"};
    };
    class BC_MDR308_CAMO_GL;
    class BC_MDR308_CAMO_GL_bcsewpn : BC_MDR308_CAMO_GL
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "MDR_body", "EGLM"};
        hiddenSelectionsTextures[]={"", "\BC_MDR\tex\mdr_std_camo_co.paa", "\BC_MDR\tex\EGLM_WOOD_CO.paa"};
    };
    class BC_MDR308_DE_GL;
    class BC_MDR308_DE_GL_bcsewpn : BC_MDR308_DE_GL
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "MDR_body", "EGLM"};
        hiddenSelectionsTextures[]={"", "\BC_MDR\tex\mdr_std_de_co.paa", "\BC_MDR\tex\EGLM_CO.paa"};
    };
    class BC_MDR308_AOR1_GL;
    class BC_MDR308_AOR1_GL_bcsewpn : BC_MDR308_AOR1_GL
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "MDR_body", "EGLM"};
        hiddenSelectionsTextures[]={"", "\BC_MDR\tex\mdr_std_aor1_co.paa", "\BC_MDR\tex\EGLM_CO.paa"};
    };
    class BC_MDR308_UCP_GL;
    class BC_MDR308_UCP_GL_bcsewpn : BC_MDR308_UCP_GL
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh", "MDR_body", "EGLM"};
        hiddenSelectionsTextures[]={"", "\BC_MDR\tex\mdr_std_aor1_co.paa", "\BC_MDR\tex\EGLM_khk_CO.paa"};
    };
    class BC_MAYLUK_545;
    class BC_MAYLUK_545_bcsewpn : BC_MAYLUK_545
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class BC_MAYLUK_545_grip_bcsewpn : BC_MAYLUK_545_bcsewpn
    {
    };
    class BC_MAYLUK_545_grip2_bcsewpn : BC_MAYLUK_545_bcsewpn
    {
    };
    class BC_MAYLUK_545_grip3_bcsewpn : BC_MAYLUK_545_bcsewpn
    {
    };
    class BC_MAYLUK_545_GL;
    class BC_MAYLUK_545_GL_bcsewpn : BC_MAYLUK_545_GL
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class BC_MAYLUK_545_SIX12;
    class BC_MAYLUK_545_SIX12_bcsewpn : BC_MAYLUK_545_SIX12
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class BC_MAYLUK_762;
    class BC_MAYLUK_762_bcsewpn : BC_MAYLUK_762
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class BC_MAYLUK_762_grip_bcsewpn : BC_MAYLUK_762_bcsewpn
    {
    };
    class BC_MAYLUK_762_grip2_bcsewpn : BC_MAYLUK_762_bcsewpn
    {
    };
    class BC_MAYLUK_762_grip3_bcsewpn : BC_MAYLUK_762_bcsewpn
    {
    };
    class BC_MAYLUK_762_GL;
    class BC_MAYLUK_762_GL_bcsewpn : BC_MAYLUK_762_GL
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
    class BC_MAYLUK_762_SIX12;
    class BC_MAYLUK_762_SIX12_bcsewpn : BC_MAYLUK_762_SIX12
    {
        enableAttack=0;
        type=4;
        scope=1;
        scopeArsenal=0;
        handAnim[]={};
        modes[]={"Noob_Auto"};
        class Noob_Auto : Noob_Auto
        {
        };
        muzzles[]={"this", "NGL"};
        class NGL : NGL
        {
        };
        _generalMacro="";
        baseWeapon="";
        hiddenSelections[]={"zasleh"};
        hiddenSelectionsTextures[]={""};
    };
};
class cfgMods
{
    author="RobinDX";
    timepacked="1653580342";
};
