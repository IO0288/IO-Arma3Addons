/*
	 *fn_addRedisLoadout
	 *添加redis装备缓存行为到某物
	 *[*unit] call "IO_fnc_addRedisLoadout";
 */

params ["_unit"];
_param = [_unit];

if (!isNil "_unit") exitWith {
	_unit addAction ["保存装备(云端缓存)", {
		if (!isServer) then {
			_p = player;
			_k = "aa3:playerLoadout:uid" + getPlayerUID _p;
			_loadout = getUnitLoadout [_p, true];
			_v = format ["'%1'",_loadout];
			_v = [_v, '"', "'"] call IO_fnc_stringReplace;
			_dataArr = [_k, _v, str (60*60*4)];
			[[_dataArr],{
				params ["_dataArr"];
				[_dataArr] call IO_fnc_redisSet;
			}] remoteExec ["call", 2];
		};
	}, nil, 2];
	_unit addAction ["加载装备(云端缓存)", {
		if (!isServer) then {
			_p = player;
			_k = "aa3:playerLoadout:uid" + getPlayerUID _p;
			_dataArr = [_k];
			[[_p, _dataArr],{
				params ["_p", "_dataArr"];
				_res = [_dataArr] call IO_fnc_redisGet;
				_p setUnitLoadout _res;
			}] remoteExec ["call", 2];
		};
	}, nil, 2];
};

[_param, "参数_units错误"] call BIS_fnc_log;
