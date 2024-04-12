/*
	 *IO_Batch_AArsenal.sqf
	 *赋予军火库
	 *[*units, *content] execVM "IO_Batch_AArsenal.sqf";
 */

params ["_units", "_content"];
_param = [_units, _content];

if (!isNil "_units") exitWith {
	if (isNil "_content") then {
		_content == true;
	};
	if (!_content) exitWith {
		{
			_x addAction ["ACE军火库(有限)", {
				[player, player, false] call ace_arsenal_fnc_openBox;
			}, nil, 2];
			_x addAction ["保存装备（重生后加载）", {
				[player, [missionNameSpace, "VirtualInventory"]] call BIS_fnc_saveInventory;
			}, nil, 2];
			_x addAction ["加载装备", {
				[player, [missionNameSpace, "VirtualInventory"]] call BIS_fnc_loadInventory;
			}, nil, 2];
		} forEach _units;
	};
	{
		_x addAction ["军火库", {
			['Open', [true]] call BIS_fnc_arsenal;
		}, nil, 2];
		_x addAction ["ACE军火库", {
			[player, player, true] call ace_arsenal_fnc_openBox;
		}, nil, 2];
		_x addAction ["保存装备（重生后加载）", {
			[player, [missionNameSpace, "VirtualInventory"]] call BIS_fnc_saveInventory;
		}, nil, 2];
		_x addAction ["加载装备", {
			[player, [missionNameSpace, "VirtualInventory"]] call BIS_fnc_loadInventory;
		}, nil, 2];
	} forEach _units;
};

[_param, "参数_units错误"] call BIS_fnc_log;