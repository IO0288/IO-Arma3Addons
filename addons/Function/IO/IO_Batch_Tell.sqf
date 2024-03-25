/*
	 *IO_Batch_Tell.sqf
	 *对某人说话
	 *[*units, *content] execVM "IO_Batch_Tell.sqf";
 */

params ["_unit", "_content"];

if (isNil "_unit") exitWith {
	["参数_unit错误"] call BIS_fnc_log;
};
if (isNil "_content") exitWith {
	_content = "Hello";
	["参数_content错误"] call BIS_fnc_log;
};
_param = [_unit, _content];


_content = "有人对你说："+_content+"<br/>警惕钓鱼诈骗，请下载反诈APP。";
if (isPlayer _unit) exitWith {
	_content remoteExec ["systemChat", _unit];
	_content remoteExec ["hint", _unit];
	[_unit, "警惕钓鱼诈骗", _content] call BIS_fnc_createLogRecord; 
	_param call BIS_fnc_log;
};
[_param, "参数_unit非玩家"] call BIS_fnc_log;