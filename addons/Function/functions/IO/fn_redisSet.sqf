/*
	 *fn_redisSendMsg
	 *redis设置键
	 *[_dataArr] call "IO_fnc_redisSendMsg";
	 *Redis使用范例 - 见fn_addRedisLoadout.sqf
 */
params["_dataArr"];

if (redisTrue && isServer) then {
	_re = "ArmaMapsExt" callExtension ["sendMsg", _dataArr];
	if (_re#0 == "success") then {
		_str = format ["[Redis]: %1 (云端缓存)保存成功", _dataArr#0];
		_str call BIS_fnc_log;
		[str _str] remoteExec ["systemChat", -2];
		"200";
	}else {
		_str = format ["[Redis]: %1 (云端缓存)保存错误", _dataArr#0];
		_str call BIS_fnc_log;
		[str _str] remoteExec ["systemChat", -2];
		"404";
	};
};

// Redis使用范例 - 见fn_addRedisLoadout.sqf