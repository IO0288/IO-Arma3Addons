#include "script_version.hpp"
class CfgPatches
{
	class BC_Magazine_Del
	{
		name = "BC_Magazine_Del - IO0288";
		units[] = {};
		weapons[] = {};
		requiredVersion = 2.10;// 所需Arma3版本
		requiredAddons[] = {"BoBcats_ammo"};
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
    class SMAO_Thermobaric_Explosion : ExploAmmoFlash
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
    class SMAO_Thermobaric_Cloud : SMAO_Thermobaric_Explosion
    {
        animationspeed[]={1};
        color[]={{0.96, 0.54, 0.92, 1}, {0.96, 0.54, 0.92, 0.9}, {0.96, 0.54, 0.92, 0.8}, {0.96, 0.54, 0.92, 0.4}, {0.96, 0.54, 0.92, 0}};
        particlefsframecount=8;
        particlefsindex=12;
        size[]={4, 6, 8, 4, 0};
        volume=8;
        weight=8;
    };
    class SMAO_Thermobaric_Smoke : SMAO_Thermobaric_Cloud
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
    class Explosion2 : Explosion
    {
    };
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
class CfgAmmo{};
class CfgMagazines{};
