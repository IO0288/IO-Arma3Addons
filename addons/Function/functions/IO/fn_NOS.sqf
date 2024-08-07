// functions\IO_fnc_logistics.sqf
params ["_cargoBox"];

_cargoBox addAction ["NOS", { 
	params ["_target", "_caller", "_actionId", "_arguments"]; 
	_vehicle = _target; 
	_vel = velocity _vehicle;  
	_dir = getDir _vehicle;  
	_additionalSpeed = 30; 
	_vehicle setVelocity [  
	(_vel select 0) + (sin _dir * _additionalSpeed),  
	(_vel select 1) + (cos _dir * _additionalSpeed),  
	(_vel select 2) + 10 
	]; 
}, nil, 2];