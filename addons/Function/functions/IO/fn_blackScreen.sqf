/*
	 *IO_Batch_BScreen.sqf
	 *黑屏过渡
	 *[_time1, _time2, _time3] execVM "IO_Batch_BScreen.sqf";
 */

params ["_time1", "_time2", "_time3"];
if (isNil "_time1") then {
	_time1 = 3;
	_time2 = 6;
	_time3 = 3;
};
if (isNil "_time3") then {
	_time3 = _time1;
};
_param = [_time1, _time2, _time3];
if (_time1 > 0) exitWith {
	_param spawn {
		cutText ["一段时间之后.", "BLACK OUT", _this select 0];
		sleep (_this select 1);
		cutText ["一段时间之后...", "BLACK IN", _this select 2];
		_this call BIS_fnc_log;
	};
};
_param call BIS_fnc_log;
