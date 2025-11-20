params ["_synced"];

call IO_fnc_initLoadout;

{
	[[_x],false] call IO_fnc_addArsenal;
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
	_x addAction ["<t color=""#20d6d6"">- -  AT  - -</t>", 
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

	_x call IO_fnc_redisAddLoadoutAction;
	
}forEach _synced;
