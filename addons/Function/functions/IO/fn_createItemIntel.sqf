/*
	 *IO_Batch_CItemIntel.sqf
	 *创建可拾取情报
	 *[*_unit, [_picPath, _title, _content], _side, _zeus] execVM "IO_Batch_CItemIntel.sqf";
 */

params ["_unit", "_intel", "_side", "_zeus"];
// _intel = [图片，标题，内容]
if (isNil "_unit") exitWith {
	[_param, "错误的参数_unit，输入内容少于1"] call BIS_fnc_log;
};
if (isNil "_intel") then {
	[_param, "错误的参数_intel，使用默认"] call BIS_fnc_log;
	_intel = ["a3\structures_f_epc\Items\Documents\Data\document_secret_01_co.paa", "标题", "内容"];
};
if (isNil "_side") then {
	_side = nato;
};
if (isNil "_zeus") then {
	_zeus = zeus1_0;
};
_picPath = _intel select 0;
if (isNil "_intel select 0") then {
	_picPath = "a3\structures_f_epc\Items\Documents\Data\document_secret_01_co.paa";
};
_title = _intel select 1;
_content = _intel select 2;
_param = [_unit, [_picPath, _title, _content], _side, _zeus];
_param call BIS_fnc_log;

[_unit] call BIS_fnc_initIntelObject;

if (isServer) then {
	// 图片
	_unit setVariable [
		"RscAttributeDiaryRecord_texture",
		// "a3\structures_f_epc\Items\Documents\Data\document_secret_01_co.paa", // 图片路径
		_picPath, // 图片路径
		true
	];

	// 日志标题和描述
	[
		_unit,
		"RscAttributeDiaryRecord",
		[_title, _content]// 格式为[标题，说明]的数组
	] call BIS_fnc_setServerVariable;

	// 共享日志条目（遵循BIS_fnc_MP目标规则）
	_unit setVariable ["recipients", _side, true];

	// 可以与情报交互的阵营
	_unit setVariable ["RscAttributeOwners", [_side], true];

	// 向Zeus注册intel对象作为管理者可编辑（_zeus是管理者模块）
	_zeus addCuratorEditableObjects [[_unit], true];

	// 添加Zeus脚本化事件
	[_zeus, "IntelObjectFound", {
		hint "Intel found"
	}] call BIS_fnc_addScriptedEventHandler;

	// 添加一个脚本化事件，当找到英特尔时，该事件通过hint通知所有客户端
	[
		_unit,
		"IntelObjectFound",
		{
			params ["", "_foundBy"];
			private _msg = format ["有一份由 %1 分享的新情报", name _foundBy];
			_msg remoteExec ["hint", 0];
		}
	] call BIS_fnc_addScriptedEventHandler;
};