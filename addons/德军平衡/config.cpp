#include "script_component.hpp"

class CfgPatches
{
	class wb_bw_main
	{
		name = "Weapons Balance - BWMod";
		units[] = {};
		weapons[] = {};
		requiredVersion = 2.04;
		requiredAddons[] =
			{
				"bwa3_loadorder",
				"bwa3_comp_ace",
				"rhsusf_c_weapons",
				"bwa3_rgw90",
				"bwa3_pzf3",
				"bwa3_carlgustav"
			};
		author = "IO0288";
		authors[] =
			{
				"johnb43",
				"kus",
				"IO0288"};
		url = "https://git.io0288.cn/IO0288/IO-Arma3Addons/src/branch/master/%E5%BE%B7%E5%86%9B%E5%B9%B3%E8%A1%A1";
		version = "1.0.0.7";
		versionStr = "1.0.0.7";
		versionAr[] = {1, 0, 0, 7};
	};
};

#include "CfgAcc.hpp"
#include "CfgMagazines.hpp"
#include "CfgMagazineWells.hpp"
#include "CfgWeapons.hpp"

class BettIR_Config
{
	class CompatibleAttachments
	{
		class bwa3_acc_varioray_irlaser_black
		{
			offset[] = {0.15000001, 0.22, 0.25};
		};
		class bwa3_acc_varioray_irlaser
		{
			offset[] = {0.15000001, 0.22, 0.25};
		};
		class bwa3_acc_llm01_irlaser
		{
			offset[] = {0.15000001, 0.22, 0.25};
		};
		class bwa3_acc_llm01_irlaser_green
		{
			offset[] = {0.15000001, 0.22, 0.25};
		};
		class bwa3_acc_llm01_irlaser_tan
		{
			offset[] = {0.15000001, 0.22, 0.25};
		};
	};
};
