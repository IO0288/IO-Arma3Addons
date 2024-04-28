#include "script_component.hpp"
#include "../main/script_version.hpp"

class CfgPatches
{
	class bw_balance
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
		url = "https://git.io0288.cn/IO0288/IO-Arma3Addons/src/branch/main/addons/bw-balance";
		versionAr[] = {MAJOR, MINOR, PATCH, BUILD};
	};
};

#include "CfgFactionClasses.hpp"
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
