/*
	 *IO_Batch_CItemIntel.sqf
	 *创建可拾取情报
	 *[*_unit, [_picPath, _title, _content], _side, _zeus] execVM "IO_Batch_CItemIntel.sqf";
 */

params ["_unit", "_intel", "_side", "_zeus"];
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
	_unit setVariable [
		"RscAttributeDiaryRecord_texture",
		_picPath,
		true
	];

	[
		_unit,
		"RscAttributeDiaryRecord",
		[_title, _content]
	] call BIS_fnc_setServerVariable;

	_unit setVariable ["recipients", _side, true];

	_unit setVariable ["RscAttributeOwners", [_side], true];

	_zeus addCuratorEditableObjects [[_unit], true];

	[_zeus, "IntelObjectFound", {
		hint "Intel found"
	}] call BIS_fnc_addScriptedEventHandler;

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