/*
	 *fn_redisInitLoadout
	 *redis装备缓存初始化
	 *[*units] call "IO_fnc_redisInitLoadout";
 */

params ["_units"];
_param = [_units];

if (!isNil "_units") exitWith {
	{
		_x addAction ["保存装备(云端缓存)", {
			if (!isServer) then {
				_p = player;
				_str = "aa3:playerLoadout:uid" + getPlayerUID _p;
				//! 原始字符处理，关于字符串在redis内的存储
				_loadout = getUnitLoadout [_p, true];
				_loadout = format ["'%1'",_loadout];
				_loadout = [_loadout, '"', "'"] call IO_fnc_stringReplace;
				RDataArr = [_str, _loadout, str (60*60*4)];
				[[RDataArr],{
					params ["_dataArr"];
					[_dataArr] remoteExec ["IO_fnc_redisSendMsg", 2];
				}] remoteExec ["call", 2];
			};
		}, nil, 2];
		_x addAction ["加载装备(云端缓存)", {
			if (!isServer) then {
				_p = player;
				_str = "aa3:playerLoadout:uid" + getPlayerUID _p;
				RDataArr = [_str];
				publicVariable "RDataArr";
				[[_p, RDataArr],{
					params ["_p", "_dataArr"];
					_res = [_dataArr] call IO_fnc_redisGetMsg;
					_p setUnitLoadout _res;
				}] remoteExec ["call", 2];
			};
		}, nil, 2];
	} forEach _units;
};

[_param, "参数_units错误"] call BIS_fnc_log;


// Redis使用范例
// _x addAction ["保存装备(云端缓存)", {
// 	if (!isServer) then {
// 		_p = player;
// 		_str = "aa3:playerLoadout:uid" + getPlayerUID _p;
// 		//! 原始字符处理，关于字符串在redis内的存储
// 		_loadout = getUnitLoadout [_p, true];
// 		_loadout = format ["'%1'",_loadout];
// 		_loadout = [_loadout, '"', "'"] call IO_fnc_stringReplace;
// 		R_dataArr = [_str, _loadout, str (60*60*4)];
// 		publicVariable "R_dataArr";
// 		[R_dataArr] remoteExec ["IO_fnc_redisSendMsg", 2];
// 	};
// }, nil, 2];
// _x addAction ["加载装备(云端缓存)", {
// 	if (!isServer) then {
// 		_p = player;
// 		_str = "aa3:playerLoadout:uid" + getPlayerUID _p;
// 		R_dataArr = [_str];
// 		publicVariable "R_dataArr";
// 		[[_p],{
// 			params ["_p"];
// 			[R_dataArr] remoteExec ["IO_fnc_redisGetMsg", 2];
// 			_ret = Rre trim ["'", 0];
// 			_loadout = parseSimpleArray _ret;
// 			_p setUnitLoadout _loadout;
// 		}] remoteExec ["call", 2];
// 	};
// }, nil, 2];

			


