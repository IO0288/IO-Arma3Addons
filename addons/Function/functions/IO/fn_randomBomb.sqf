/*
	 *IO_Batch_RBomb.sqf
	 *批量随机创建爆炸
	 *[*rbomb_mb, rbomb_n, rbomb_s, rbomb_x, rbomb_y] execVM "IO_Batch_rbomb.sqf";
 */

params ["_mb", "_n", "_s", "_x", "_y"];
_param = [_mb, _n, _s, _x, _y];
// * _arr = allUnits inAreaArray loop1_area_end/thisList// 触发器适用
hint format["%1 %2 %3 %4 %5 %6", _mb, _n, _s, _x, _y, count _param];
_rbomb_n = 3;
_rbomb_s = 3;
_rbomb_x = 200;
_rbomb_y = 200;
if (count _param > 1) then {
	_rbomb_n = _n;
};
if (count _param > 2) then {
	_rbomb_s = _s;
};
if (count _param > 3) then {
	_rbomb_x = _x;
};
if (count _param > 4) then {
	_rbomb_y = _y;
};

if (count _param > 0) then {
	// 传入参数大于0时运行
	_rbomb_mb = getPos _mb;

	if (_rbomb_n > 0) then {
		for "_i" from 0 to _rbomb_n do {
			_pos = [((_rbomb_mb select 0) + (floor random [-_rbomb_x, 0, _rbomb_x])), ((_rbomb_mb select 1) + (floor random [-_rbomb_y, 0, _rbomb_y])), (_rbomb_mb select 2)];
			"Bo_Mk82" createVehicle _pos;
			// sleep _rbomb_s;
		};
	};
};
[_param, "fnc_RBomb"] call BIS_fnc_log;