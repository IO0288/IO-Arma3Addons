/*
	 *IO_Batch_RmVehicle.sqf
	 *批量删除传入的单位
	 *[(units east)] execVM "IO_Batch_RmVehicle.sqf";
 */

params ["_arr"];

_arrN = (count _arr) - 1;

if (_arrN > -1) then {
	for "_i" from 0 to _arrN do{
		_p = _arr select _i;
		if (!isPlayer _p) then {
			deleteVehicle _p;
		};
	};
};
