#include "script_version.hpp"
class CfgPatches
{
	class IO_Main
	{
		name = "Main - IO0288";
		units[] = {};
		weapons[] = {};
		requiredVersion = 2.10;// 所需Arma3版本
		requiredAddons[] = {"A3_Data_F"};
		author = "IO0288";
		authors[] =
			{"IO0288"};
		url = "https://git.io0288.cn/IO0288/IO-Arma3Addons";
		versionAr[] = {MAJOR, MINOR, PATCH, BUILD};
	};
};
class CfgFactionClasses{
    class CIV_F;
    class CIV_ODST : CIV_F{
        displayName = "ODST后勤仓库";
        flag = "\ioaa3_def_src\src\flag.jpg";
        icon = "\ioaa3_def_src\src\odst_2.paa";
        priority = 1;
    };
	class BLU_F;
	class BLU_ODST : BLU_F{
        displayName = "ODST后勤仓库";
        flag = "\ioaa3_def_src\src\flag.jpg";
        icon = "\ioaa3_def_src\src\odst_2.paa";
        priority = 1;
    };
	class OPF_F;
	class OPF_ODST : OPF_F{
        displayName = "ODST后勤仓库";
        flag = "\ioaa3_def_src\src\flag.jpg";
        icon = "\ioaa3_def_src\src\odst_2.paa";
        priority = 1;
    };
};
