/*
	 *IO_Batch_CIntel.sqf
	 *创建情报
	 *[_picPath, _title, _content] execVM "IO_Batch_CIntel.sqf";
 */

params ["_picPath", "_title", "_content"];
_param = [_picPath, _title, _content];
[_param, "IO_Batch_CIntel.sqf"] call BIS_fnc_log;
if (isNil "_title") then {
	[player, _picPath, _picPath] call BIS_fnc_createLogRecord;
} else {
	[player, _title, _content] call BIS_fnc_createLogRecord;
};

systemChat "获得新的情报，请使用地图界面情报栏查看";
hint "获得新的情报，请使用地图界面情报栏查看";