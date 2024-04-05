/*
	 *IO_Batch_tvLaunch.sqf
	 *TV制导飞弹
	 *[*unit] execVM "IO_Batch_tvLaunch.sqf";
 */

params ["_u"];

_u addAction ["发射TV制导巡航飞弹", {
	params [ "_target", "_caller", "_actionId", "_arguments" ];
	[[east, independent, civilian], 180] call TVC_fnc_tvLaunch;
	_target removeAction _actionID;
}, nil, 2];