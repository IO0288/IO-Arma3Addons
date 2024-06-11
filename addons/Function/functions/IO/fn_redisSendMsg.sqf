/*
	 *fn_redisSendMsg
	 *redis设置键
	 *[_dataArr] call "IO_fnc_redisSendMsg";
 */
params["_dataArr"];

if (redisTrue && isServer) then {
	private _re = "ArmaMapsExt" callExtension ["sendMsg",dataArr];
	if (_re#0 == "success") then {
		private _str = format ["[Redis]: %1 (云端缓存)装备保存成功", dataArr#0];
		_str call BIS_fnc_log;
		systemChat _str;
		"200";
	}else {
		private _str = format ["[Redis]: %1 (云端缓存)装备保存出现错误", dataArr#0];
		_str call BIS_fnc_log;
		systemChat _str;
		"404";
	};
};