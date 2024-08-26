/*
	 *fn_redisGetMsg
	 *redis读取键
	 *[*_dataArr] call "IO_fnc_redisGetMsg";
	 *Redis使用范例 - 见fn_addRedisLoadout.sqf
 */
params["_dataArr", "_msgTF"]; 
if (isNil "_msgTF") then { _msgTF = false; };
_re = "500";
if (redisTrue && isServer) then {
	_re = "ArmaMapsExt" callExtension ["getMsg", _dataArr];
	if (_re#0 != "") then {
		_str = format ["[Redis]: %1 (云端缓存)读取成功", _dataArr#0];
		_str call BIS_fnc_log;
		Rre = _re#0;
		_res = _re#0 trim ["'", 0];
		_value = parseSimpleArray _res;
		_re = _value;
	}else {
		_str = format ["[Redis]: %1 (云端缓存)读取错误", _dataArr#0];
		_str call BIS_fnc_log;
		_re = "404";
	};
	if (_msgTF) then {
		[str _str] remoteExec ["systemChat", -2];
	};
};
_re;




			


