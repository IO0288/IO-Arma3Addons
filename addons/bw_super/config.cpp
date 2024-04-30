#include "script_component.hpp"
#include "../main/script_version.hpp"

class CfgPatches
{
	class bw_super
	{
		name = "Weapons Super - BWMod";
		units[] = {};
		weapons[] = {};
		requiredVersion = 2.04;
		requiredAddons[] =
			{
				"bw_balance"
			};
		author = "IO0288";
		authors[] =
			{	
				"IO0288"
			};
		url = "https://git.io0288.cn/IO0288/IO-Arma3Addons/src/branch/main/addons/bw-balance";
		versionAr[] = {MAJOR, MINOR, PATCH, BUILD};
	};
};

#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgMagazineWells.hpp"