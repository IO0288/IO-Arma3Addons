#include "script_version.hpp"
class CfgPatches
{
	class io_main
	{
		name = "Main - IO0288";
		units[] = {};
		weapons[] = {};
		requiredVersion = 2.10;
		requiredAddons[] = {"Extended_EventHandlers"};
		author = "IO0288";
		authors[] = {"IO0288"};
		url = "https://git.io0288.cn/IO0288/IO-Arma3Addons";
		versionAr[] = {MAJOR, MINOR, PATCH, BUILD};
	};
};

class Extended_PostInit_EventHandlers
{
	IO_eg_init_Post_Init = "IO_eg_init_Post_Init_Var = [] execVM ""\IO_eg_init\init.sqf""";
};