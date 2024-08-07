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
			//https://community.bistudio.com/wiki/Arma_3:_Functions_Library
			class addArsenal {};//postInit=1;//添加军火库
			class blackScreen {};//黑屏过渡
			class createIntel {};//创建情报
			class createItemIntel {};//创建可拾取情报
			class rating {};//评分控制
			class removeVehicle {};//批量删除传入的单位
			class randomTP {};//批量随机传送单位
			class tell {};//对某人说话
			class randomBomb {};//批量随机创建爆炸
			class setFlag {};//设置旗帜图案
			class redisInit {};//redis初始连接判断
			class redisGet {};//redis读取键
			class redisSet {};//redis设置键
			class addRedisLoadout{};//添加redis装备缓存行为到某物

			class tvLaunch {};//添加TV制导飞弹行为到某物
			class stringReplace {};//字符串替换
			
			// 2408
			class disable2035 {};
			class logistics {};
			class noob_loadout {};
			class NOS {};
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