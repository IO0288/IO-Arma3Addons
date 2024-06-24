/*
	 *fn_redisInit
	 *redis初始连接判断
	 *[*_dataArr] call "IO_fnc_redisInit";
 */
params["_dataArr"]; 

if (isServer) then {
	_re = "ArmaMapsExt" callExtension ["connectRedis",["io0288.cn","6379"]];
	if (_re#0 == "success") then {
		"[Redis]: Connect Success" call BIS_fnc_log;
		redisTrue = true;
	} else {
		"[Redis]: Connect Fail" call BIS_fnc_log;
		redisTrue = false;
	};
};

redisTrue;
// Redis使用范例 - 见fn_addRedisLoadout.sqf


			


