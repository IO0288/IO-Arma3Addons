/*
	 *IO_Batch_setFlag.sqf
	 *设置旗帜
	 *[*unit] execVM "IO_Batch_setFlag.sqf";
 */

params ["_u"];
// params ["_u", "_f"];

if (isNil "_f") then {
	_f = "\ioaa3_def_function\src\flag.jpg";
};

_u setFlagTexture _f;