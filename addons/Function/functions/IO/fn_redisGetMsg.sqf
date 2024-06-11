/*
	 *fn_redisGetMsg
	 *redis读取键
	 *[_dataArr] call "IO_fnc_redisGetMsg";
 */
// params["_dataArr", "_p"];
params["_dataArr"];

if (redisTrue && isServer) then {
	private _re = "ArmaMapsExt" callExtension ["getMsg",dataArr];
	if (_re#0 != "") then {
		private _str = format ["[Redis]: %1 (云端缓存)装备读取成功", dataArr#0];
		_str call BIS_fnc_log;
		systemChat _str;
		Rre = _re#0;
		private _ret = _re#0 trim ["'", 0];
		private _loadout = parseSimpleArray _ret;
		// _p setUnitLoadout _loadout;
		// "200";
		_loadout;
	}else {
		private _str = format ["[Redis]: %1 (云端缓存)装备读取出现错误", dataArr#0];
		_str call BIS_fnc_log;
		systemChat _str;
		"404";
	};
};


			


