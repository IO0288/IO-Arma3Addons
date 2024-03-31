/*
	 *IO_Batch_tvLaunch.sqf
	 *TV制导飞弹
	 *[*unit] execVM "IO_Batch_tvLaunch.sqf";
 */

params ["_u"];

_u addAction ["发射TV制导巡航飞弹", {[[east,independent,civilian],180] call TVC_fnc_tvLaunch;removeAllAction this;}, nil, 2];
