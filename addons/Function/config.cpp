#include "../main/script_version.hpp"
class CfgPatches
{
	class IOAA3_Function
	{
		name = "IOAA3_Function - IO0288";
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
			file = "\ioaa3_def_function\functions\IO";			
			class addArsenal {};//postInit=1;//https://community.bistudio.com/wiki/Arma_3:_Functions_Library
			class blackScreen {};
			class createIntel {};
			class createItemIntel {};
			class rating {};
			class rmVehicle {};
			class randomTP {};
			class tell {};
			class randomBomb {};

			class tvLaunch {};
		};
		class Other
		{
			file = "\ioaa3_def_function\functions";			
			class ddbj {};
			
			class simpleCivilianPresence {};
			class simpleFloatary {};
			class simpleSpotSystem {};
			
			class teamMapIcons {};
			class teamMapIntel {};
			class teamNameTags {};
		};
	};
};