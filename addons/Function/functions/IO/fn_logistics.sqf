// functions\IO_fnc_logistics.sqf
params ["_cargoBox"];

_cargoBox setVariable ["ace_repair_canRepair", 1, true];
_cargoBox setVariable ["ace_medical_isMedicalVehicle", true, true];
[_cargoBox, 1200] call ace_rearm_fnc_makeSource;
[_cargoBox, 1200] call ace_refuel_fnc_makeSource;
[_cargoBox, 100] call ace_cargo_fnc_setSpace;
