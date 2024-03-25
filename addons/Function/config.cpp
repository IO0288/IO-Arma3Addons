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
		tag = "IO";
		class addArsenal
		{
			file = "\IO_Function\IO\IO_Batch_AArsenal.sqf";
		};
		class blackScreen
		{
			file = "\IO_Function\IO\IO_Batch_BScreen.sqf";
		};
		class createItemIntel
		{
			file = "\IO_Function\IO\IO_Batch_CIIntel.sqf";
		};
		class createIntel
		{
			file = "\IO_Function\IO\IO_Batch_CIntel.sqf";
		};
		class rating
		{
			file = "\IO_Function\IO\IO_Batch_Rating.sqf";
		};
		class rmVehicle
		{
			file = "\IO_Function\IO\IO_Batch_RmVehicle.sqf";
		};
		class randomTP
		{
			file = "\IO_Function\IO\IO_Batch_RTP.sqf";
		};
		class tell
		{
			file = "\IO_Function\IO\IO_Batch_Tell.sqf";
		};
		class rbomb
		{
			file = "\IO_Function\IO\IO_Batch_RBomb.sqf";
		};
		class scp
		{
			file = "\IO_Function\IO\IO_Batch_SCP.sqf";
		};

		class ddbj
		{
			file="\IO_Function\IO\ddbj.sqf";
		};
	};
};