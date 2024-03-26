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
			class addArsenal {};//postInit=1;//https://community.bistudio.com/wiki/Arma_3:_Functions_Library
			class blackScreen {};
			class createIntel {};
			class createItemIntel {};
			class rating {};
			class rmVehicle {};
			class randomTP {};
			class tell {};
			class randomBomb {};
			class scp {};
			class tvLaunch {};

			class ddbj {};
		};
	};
};