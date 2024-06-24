/*
	 *fn_redisGetMsg
	 *redis读取键
	 *[*_dataArr] call "IO_fnc_redisGetMsg";
 */
params["_dataArr"]; 

if (redisTrue && isServer) then {
	_re = "ArmaMapsExt" callExtension ["getMsg", _dataArr];
	if (_re#0 != "") then {
		_str = format ["[Redis]: %1 (云端缓存)读取成功", _dataArr#0];
		_str call BIS_fnc_log;
		[str _str] remoteExec ["systemChat", -2];
		Rre = _re#0;
		_res = _re#0 trim ["'", 0];
		_value = parseSimpleArray _res;
		_value;
	}else {
		_str = format ["[Redis]: %1 (云端缓存)读取错误", _dataArr#0];
		_str call BIS_fnc_log;
		[str _str] remoteExec ["systemChat", -2];
		"404";
	};
};

// Redis使用范例 - 见fn_addRedisLoadout.sqf


			


