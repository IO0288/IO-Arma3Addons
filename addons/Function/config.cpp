#include "script_version.hpp"
class CfgPatches
{
	class IO_Function
	{
		name = "Function - IO0288";
		units[] = {};
		weapons[] = {};
		requiredVersion = 2.10;// 所需Arma3版本
		requiredAddons[] = {"A3_Data_F"};
		author = "IO0288";
		url = "https://git.io0288.cn/IO0288/IO-Arma3Addons";
		versionAr[] = {MAJOR, MINOR, PATCH, BUILD};
	};
};

class CfgFunctions
{
	class IO
	{
		class Batch
		{
			file = "\IO_Function";			
			class addArsenal { postInit=1; };
			class blackScreen { postInit=1; };
			class createIntel { postInit=1; };
			class createItemIntel { postInit=1; };
			class rating { postInit=1; };
			class rmVehicle { postInit=1; };
			class randomTP { postInit=1; };
			class tell { postInit=1; };
			class randomBomb { postInit=1; };
			class scp { postInit=1; };

			class ddbj { postInit=1; };
		};
	};
};