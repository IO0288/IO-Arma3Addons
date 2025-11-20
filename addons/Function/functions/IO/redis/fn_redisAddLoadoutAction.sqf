/*
	 *fn_redisAddLoadoutAction
	 *添加redis装备缓存行为到某物
	 *[*unit] call "IO_fnc_redisAddLoadoutAction";
 */

params ["_unit"];
_param = [_unit];

if (!isNil "_unit") exitWith {
	if (!redisTrue) then {
		_unit addAction ["<t color=""#ff2222"">- - 无法连接(云端缓存) - -</t>", 
			{
				hint "ERROR:无法连接(云端缓存)";
			},"",0.03,false,false];
	} else {
		_unit addAction ["<t color=""#ff9d00"">- - 加载装备(云端缓存) - -</t>", 
			{
				if (!isServer) then {
					_player = player;
					_key = "aa3:playerLoadout:uid" + getPlayerUID _player;
					_dataArr = [_key];
					[[_player, _dataArr],{
						params ["_player", "_dataArr"];
						[_dataArr] remoteExec ["IO_fnc_redisGetMsg", 2];
						_ret = Rre trim ["'", 0];
						_loadout = parseSimpleArray _ret;
						_player setUnitLoadout _loadout;
					}] remoteExec ["call", 2];
				};
			},"",0.03,false,false];
		_unit addAction["<t color=""#ff9d00"">- - 保存装备(云端缓存) - -</t>",
			{
				if (!isServer) then {
					_player = player;
					_key = "aa3:playerLoadout:uid" + getPlayerUID _player;
					_loadout = getUnitLoadout [_player, true];
					_loadout = format ["'%1'",_loadout];
					_loadout = [_loadout, '"', "'"] call IO_fnc_keyingReplace;
					R_dataArr = [_key, _loadout, str (60*60*4)];
					publicVariable "R_dataArr";
					[R_dataArr] remoteExec ["IO_fnc_redisSendMsg", 2];
				};
			},"",0.03,false,false];
	};
};

[_param, "参数_units错误"] call BIS_fnc_log;
