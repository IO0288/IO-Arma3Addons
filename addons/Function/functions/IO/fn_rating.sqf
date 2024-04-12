/*
	 *IO_Batch_Rating.sqf
	 *评分控制
	 *[units, _num] execVM "IO_Batch_Rating.sqf";
 */

params ["_units", "_num"];
_arr = [];
if (isNil "_units") exitWith {
	{
		_name = name _x;
		_rating = rating _x;
		_arr = flatten [_arr, [_name, _rating]];
	}forEach playableUnits;
	[_arr, "IO_fnc_Rating"] call BIS_fnc_log;
	_arr;
};
_units addRating _num;
[rating _units, "IO_fnc_Rating"] call BIS_fnc_log;
rating _units;