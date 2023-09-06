#include "script_version.hpp"
class CfgPatches
{
	class BC_Magazine_Del
	{
		name = "BC_Magazine_Del - IO0288";
		units[] = {};
		weapons[] = {};
		requiredVersion = 2.10;// 所需Arma3版本
		requiredAddons[] = {"BoBcats_ammo", "BoBcats_weapon_patch"};
		author = "IO0288";
		authors[] =
			{"IO0288"};
		url = "https://git.io0288.cn/IO0288/IO-Arma3Addons";
		versionAr[] = {MAJOR, MINOR, PATCH, BUILD};
	};
};
class DefaultEventHandlers;
class CfgCloudlets
{
    class Default;
    class ExploAmmoFlash;
    class SMAO_Thermobaric_Explosion
    {
        animationspeed[]={0, 0, 2, 1, 2};
        color[]={{1, 1, 1, 0}, {1, 1, 0, 0}, {1, 1, 1, -2}, {1, 1, 1, -2}, {1, 1, 1, 0}};
        interval=0.32;
        lifetime=0.32;
        lifetimevar=0.04;
        positionvar[]={0, 0.1, 0};
        rotationvelocity=0;
        rotationvelocityvar=1;
        rubbing=0.1;
        size[]={0, 0, 10, 11, 12};
        volume=10;
        weight=10;
    };
    class SMAO_Thermobaric_Cloud
    {
        animationspeed[]={1};
        color[]={{0.96, 0.54, 0.92, 1}, {0.96, 0.54, 0.92, 0.9}, {0.96, 0.54, 0.92, 0.8}, {0.96, 0.54, 0.92, 0.4}, {0.96, 0.54, 0.92, 0}};
        particlefsframecount=8;
        particlefsindex=12;
        size[]={4, 6, 8, 4, 0};
        volume=8;
        weight=8;
    };
    class SMAO_Thermobaric_Smoke
    {
        animationspeed[]={0, 2.8, 1.9, 1.2, 1.05, 0.7, 0.35, 0.175};
        color[]={{1, 1, 1, 0}, {1, 1, 1, 0.4}, {0.95, 0.95, 0.95, 0.8}, {0.9, 0.9, 0.9, 0.6}, {0.85, 0.85, 0.85, 0.3}, {0.8, 0.8, 0.8, 0.15}, {0.7, 0.7, 0.7, 0.075}, {0.6, 0.6, 0.6, 0}};
        interval=0.96;
        lifetime=0.96;
        lifetimevar=0.02;
        particlefsframecount=48;
        particlefsindex=7;
        particlefsloop=1;
        particlefsntieth=16;
        size[]={0, 0, 9, 10, 11, 12, 13, 14};
        volume=14;
    };
};
class SMAO_IncinerateShell
{
    class SmokeShellWhite
    {
        simulation="particles";
        type="SmokeShellWhite";
        position[]={0, 0, 0};
        intensity=1;
        interval=1;
    };
    class Fire1
    {
        simulation="particles";
        type="IncinerateFire";
        position[]={0, 0, 0};
        intensity=1;
        interval=1;
    };
    class LightBig1
    {
        simulation="light";
        type="ObjectDestructionLight";
        position="destructionEffect1";
        intensity=1;
        interval=1;
        lifeTime=60;
        enabled="distToWater";
    };
};
class SMAO_Fire_Explosion
{
    class SmokeShellWhite
    {
        simulation="particles";
        type="SmokeShellWhite";
        position[]={0, 0, 0};
        intensity=1;
        interval=1;
    };
    class Fire1
    {
        simulation="particles";
        type="IncinerateFire";
        position[]={0, 0, 0};
        size[]={6, 6, 6, 5, 5, 4, 2};
        intensity=1;
        interval=1;
        damageType="Fire";
        coreIntensity=1.5;
        coreDistance=6;
        damageTime=0.1;
    };
    class LightBig1
    {
        simulation="light";
        type="ObjectDestructionLight";
        position="destructionEffect1";
        intensity=1;
        interval=1;
        lifeTime=60;
        enabled="distToWater";
    };
};
class SMAO_Thermobaric_Explosion
{
    class Cloud
    {
        intensity=8;
        interval=0.4;
        lifetime=0.4;
        position[]={0, 0, 0};
        simulation="particles";
        type="SMAO_Thermobaric_Cloud";
    };
    class Explosion
    {
        intensity=12;
        interval=0.4;
        lifetime=0.4;
        position[]={0, 0, 0};
        simulation="particles";
        type="SMAO_Thermobaric_Explosion";
    };
    class Explosion2
{};
    class Smoke
    {
        intensity=14;
        interval=0.96;
        lifetime=0.96;
        position[]={0, 0, 0};
        simulation="particles";
        type="SMAO_Thermobaric_Smoke";
    };
    class Light
    {
        intensity=0.001;
        interval=1;
        lifetime=0.2;
        position[]={0, 0, 0};
        simulation="light";
        type="ExploLight";
    };
};
class SMAO_Thermobaric_Crater_Small
{
    class DustCircle
    {
        intensity=1;
        interval=1;
        lifetime=0.3;
        position[]={0, 0, 0};
        simulation="particles";
        type="CircleDustSmall";
    };
};
class CfgAmmo
{
    class BC_40mm_Mercury_HEDP{};
    class BC_40mm_Mercury_HEDP_penetrator{};
    class smao_40mm_TB{};
    class smao_40mm_TS{};
    class smao_40mm_Incinerate{};
    class BC_762x35_BLK_EPR{};
    class BC_762x35_SS{};
    class BC_762x35_BLK_MEA{};
    class BC_ammo_556x45_DSG_MEA_Ball{};
    class BC_ammo_762x51_DSG_MEA_Ball{};
    class BC_12Gauge_Pellets_Submunition{};
    class BC_12Gauge_Pellets_Submunition_Deploy{};
    class BC_12Gauge_Pellets{};
    class SIX12_12Gauge_Pellets_Submunition_No0_Buck{};
    class SIX12_12Gauge_Pellets_Submunition_No0_Buck_Deploy{};
    class SIX12_12Gauge_Pellets_Submunition_No1_Buck{};
    class SIX12_12Gauge_Pellets_Submunition_No1_Buck_Deploy{};
    class SIX12_12Gauge_Pellets_Submunition_No2_Buck{};
    class SIX12_12Gauge_Pellets_Submunition_No2_Buck_Deploy{};
    class SIX12_12Gauge_Pellets_Submunition_No3_Buck{};
    class SIX12_12Gauge_Pellets_Submunition_No3_Buck_Deploy{};
    class SIX12_12Gauge_Pellets_Submunition_No4_Buck{};
    class SIX12_12Gauge_Pellets_Submunition_No4_Buck_Deploy{};
    class SIX12_12Gauge_Pellets_Submunition_No7_Bird{};
    class SIX12_12Gauge_Pellets_Submunition_No7_Bird_Deploy{};
    class BC_12Gauge_Slug{};
    class bc_ammo_12g_FRAG{};
};
class CfgMagazines
{
    class BC_40mm_Mercury_HEDP{};
    class smao_mag_40mm_TB{};
    class smao_mag_40mm_TS{};
    class smao_mag_40mm_Incinerate{};
    class BC_30Rnd_762x35_SS{};
    class BC_30Rnd_762x35_BLK_FMJ{};
    class BC_30Rnd_762x35_MIX{};
    class BC_30Rnd_762x35_BLK_MEA{};
    class BC_30Rnd_556_MEA_Stanag{};
    class BC_20Rnd_762_MEA_Stanag{};
    class Nothing_mag{};
    class bc_30rnd_762x39_bz_mag{};
    class bc_75rnd_762x39_bz_mag{};
    class bc_30rnd_762x39_110gr_ap_mag{};
    class bc_75rnd_762x39_110gr_ap_mag{};
    class SIX12_6Rnd_12Gauge_Pellets_No0_Buck{};
    class SIX12_6Rnd_12Gauge_Pellets_No1_Buck{};
    class SIX12_6Rnd_12Gauge_Pellets_No2_Buck{};
    class SIX12_6Rnd_12Gauge_Pellets_No3_Buck{};
    class SIX12_6Rnd_12Gauge_Pellets_No4_Buck{};
    class SIX12_6Rnd_12Gauge_Pellets_No7_Bird{};
    class SIX12_6Rnd_12Gauge_Pellets_FRAG{};
};

class CfgMagazineWells
{
    class STANAG_556x45
    {
        BC_Magazines[]={};
        BI_Magazines[]={};
    };
    class M249_556x45
    {
        BI_Magazines[]={};
        BC_Magazines[]={};
    };
    class CBA_556x45_MINIMI
    {
        BI_Magazines[]={};
        BC_Magazines[]={};
    };
    class UGL_40x36
    {
        BC_Magazines[]={};
    };
    class AK_762x39
    {
        BC_Magazines[]={};
    };
    class CBA_762x39_AK
    {
        BC_Magazines[]={};
    };
    class CBA_762x39_RPK
    {
        BC_Magazines[]={};
    };
    class BC_12g_6rnds
    {
        BC_Mags[]={};
        UAS_12g_6rnds_Mags[]={};
    };
    class CBA_300BLK_STANAG
    {
        BC_Mags[]={};
    };
};
