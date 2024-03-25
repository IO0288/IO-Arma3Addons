/*
	 *IO_Batch_tvLaunch.sqf
	 *TV制导飞弹
	 *[*units, *content] execVM "IO_Batch_tvLaunch.sqf";
 */

params ["_p","_t"];
createDialog "TVGuidedMissile";
if (isNil "_p") then {
	_p = [east,independent,civilian];
	_t = 180;
};
[_p,_t] call destiny_fnc_TVGuidedMissile;

_param = [_p, _t];
[_param, "参数_unit非玩家"] call BIS_fnc_log;