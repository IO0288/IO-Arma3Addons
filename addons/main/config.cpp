#include "script_version.hpp"
class CfgPatches
{
	class io_main
	{
		name = "Main - IO0288";
		units[] = {};
		weapons[] = {};
		requiredVersion = 2.10;// 所需Arma3版本
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
			{"IO0288"};
		url = "https://git.io0288.cn/IO0288/IO-Arma3Addons";
		versionAr[] = {MAJOR, MINOR, PATCH, BUILD};
	};
};