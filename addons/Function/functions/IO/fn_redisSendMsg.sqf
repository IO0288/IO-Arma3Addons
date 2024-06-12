/*
	 *fn_redisSendMsg
	 *redis设置键
	 *[_dataArr] call "IO_fnc_redisSendMsg";
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

// Redis使用范例
// ammo_atm addAction ["保存装备(云端缓存)", {
// 	if (!isServer) then {
// 		_p = player;
// 		_str = "aa3:playerLoadout:uid" + getPlayerUID _p;
// 		//! 原始字符处理，关于字符串在redis内的存储
// 		_loadout = getUnitLoadout [_p, true];
// 		_loadout = format ["'%1'",_loadout];
// 		_loadout = [_loadout, '"', "'"] call IO_fnc_stringReplace;
// 		RDataArr = [_str, _loadout, str (60*60*4)];
// 		publicVariable "RDataArr";
// 		[RDataArr] remoteExec ["IO_fnc_redisSendMsg", 2];
// 	};
// }, nil, 2];
// ammo_atm addAction ["加载装备(云端缓存)", {
// 	if (!isServer) then {
// 		_p = player;
// 		_str = "aa3:playerLoadout:uid" + getPlayerUID _p;
// 		RDataArr = [_str];
// 		publicVariable "RDataArr";
// 		[[_p],{
// 			params ["_p"];
// 			[RDataArr] remoteExec ["IO_fnc_redisGetMsg", 2];
// 			_ret = Rre trim ["'", 0];
// 			_loadout = parseSimpleArray _ret;
// 			_p setUnitLoadout _loadout;
// 		}] remoteExec ["call", 2];
// 	};
// }, nil, 2];