params ["_synced"];

[] call IO_fnc_initLoadout;

{
	_x addAction ["<t color=""#20d6d6"">- - 基础 - -</t>", 
	{
		[player, loadout_lizi_base] call CBA_fnc_setLoadout;
		hint "装备已更换!";
	},"",0.03,false,false];
	_x addAction ["<t color=""#20d6d6"">- - 医疗 - -</t>", 
	{
		[player, loadout_lizi_yiliao] call CBA_fnc_setLoadout;
		hint "装备已更换!";
	},"",0.03,false,false];
	_x addAction ["<t color=""#20d6d6"">- - AT - -</t>", 
	{
		[player, loadout_lizi_at] call CBA_fnc_setLoadout;
		hint "装备已更换!";
	},"",0.03,false,false];
	_x addAction ["<t color=""#20d6d6"">- - 尖兵 - -</t>", 
	{
		[player, loadout_lizi_jianb] call CBA_fnc_setLoadout;
		hint "装备已更换!";
	},"",0.03,false,false];
	_x addAction ["<t color=""#20d6d6"">- - 指挥 - -</t>", 
	{
		[player, loadout_lizi_zhihui] call CBA_fnc_setLoadout;
		hint "装备已更换!";
	},"",0.03,false,false];
	_x addAction ["<t color=""#20d6d6"">- - 机枪 - -</t>", 
	{
		[player, loadout_lizi_jiqiang] call CBA_fnc_setLoadout;
		hint "装备已更换!";
	},"",0.03,false,false];
	_x addAction ["<t color=""#20d6d6"">- - 榴弹 - -</t>", 
	{
		[player, loadout_lizi_liudang] call CBA_fnc_setLoadout;
		hint "装备已更换!";
	},"",0.03,false,false];
	_x addAction ["<t color=""#20d6d6"">- - 精射 - -</t>", 
	{
		[player, loadout_lizi_jings_1] call CBA_fnc_setLoadout;
		hint "装备已更换!";
	},"",0.03,false,false];

	if (!redisTrue) exitWith {
		_x addAction ["<t color=""#ff2222"">- - 无法连接(云端缓存) - -</t>", 
		{
			hint "ERROR:无法连接(云端缓存)";
		},"",0.03,false,false];
	};
	_x addAction ["<t color=""#ff9d00"">- - 加载装备(云端缓存) - -</t>", 
	{
		if (!isServer) then {
			_p = player;
			_str = "aa3:playerLoadout:uid" + getPlayerUID _p;
			_dataArr = [_str];
			[[_p, _dataArr],{
				params ["_p", "_dataArr"];
				[_dataArr] remoteExec ["IO_fnc_redisGetMsg", 2];
				_ret = Rre trim ["'", 0];
				_loadout = parseSimpleArray _ret;
				_p setUnitLoadout _loadout;
			}] remoteExec ["call", 2];
		};
	},"",0.03,false,false];
	_x addAction["<t color=""#ff9d00"">- - 保存装备(云端缓存) - -</t>",
	{
		if (!isServer) then {
			_p = player;
			_str = "aa3:playerLoadout:uid" + getPlayerUID _p;
			_loadout = getUnitLoadout [_p, true];
			_loadout = format ["'%1'",_loadout];
			_loadout = [_loadout, '"', "'"] call IO_fnc_stringReplace;
			R_dataArr = [_str, _loadout, str (60*60*4)];
			publicVariable "R_dataArr";
			[R_dataArr] remoteExec ["IO_fnc_redisSendMsg", 2];
		};
	},"",0.03,false,false];
}foreach _synced;