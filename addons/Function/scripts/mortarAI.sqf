//////////////////////////////////////////////////////////////////
// Function file for Armed Assault 2
// Created by: kylania
// 
// Based on code from SNKMAN
// http://forums.bistudio.com/showpost.php?p=1623731&postcount=4
//////////////////////////////////////////////////////////////////
//  Examples: 
//
//  Called from a trigger, Civilians - Present - Once to set 1 bomber out of preset Civs, attacking WEST, 70% chance of attack and 50m range.
//  nul = [thislist select floor(random count thislist), WEST, 7, 50] execVM "hkRandom.sqf";
//
//  Called from a unit's init, 100% chance to attack EAST units within 100m with a warning and shout.
//  nul = [this, EAST, 10, 100, true, true] execVM "hkRandom.sqf";[this, WEST, 10, 150, false, true] execVM "hkRandom.sqf";
//[this, Independent, 10, 100, false, true] execVM "hkRandom.sqf";this setUnitPos "Down"; 
//
//  Default, attacking WEST targets 30% of the time within 20m warning the group but not yelling out a shout.
//  nul = [this] execVM "hkRandom.sqf";
//[this,pao, WEST, 10, 3000, false, true] execVM "mortarAI2.sqf";
//[this,WEST, 10, 3000, true] execVM "mortarAI.sqf";
//////////////////////////////////////////////////////////////////

// [this, podnos, WEST, 10, 3000, true] execVM "mortarAI.sqf";
// [FO单位 迫击炮单位 目标 概率*10% 距离 是否提示]
// [this, east_pjp_1, WEST, 10, 300, false] execVM "script\O_mortarAI.sqf";

_unit = _this select 0;  // Bomber unit, set randomly by trigger.
_unit2 = _this select 1;  // Bomber unit, set randomly by trigger.
_side = if (count _this > 2) then {_this select 2} else {west};  // Side to attack, default West.
_prob = if (count _this > 3) then {_this select 3} else {10};  // Probilitiy of attack once a target is found, Number 1 - 10, higher = more chance.  Default 3 (30% chance or so);
_range = if (count _this > 4) then {_this select 4} else {3000};  // Range to look for targets in, default 20m.
_warn = if (count _this > 5) then {_this select 5} else {false};  // Option to warn the attacked group, all group members will target the bomber, AI won't shoot civs though.  Default true.
_demo = if (count _this > 6) then {_this select 6} else {false};  
// Option to make the bomber say a sound (declared below) before attacking.  Default false.

// Defaults.
_looking = true;
_target = objNull;

// Set to true to see status messages from the bomber.
//_demo = true; 
_anno = _warn;
//_demo = false; 

if (isServer) then {
	_unit allowFleeing 0;
	//_unit SetBehaviour "COMBAT";
	sleep 1;

	// Init the target array.
	if (isNil "TargetArray") then {TargetArray = [];};
	// Start hunting.
	while {_looking} do {
	if (alive _unit ) then{
		_targets = _unit nearTargets _range;  // Check targets within range.

		if (count TargetArray > 0) then {_targets = _targets - TargetArray;};

		// We have targets in range...
		if (count _targets > 0) then
		{
			_count = 0;
			while { (_count < count _targets) } do
			{
				_selectTarget = (_targets select _count);
				// Make sure we know about the target and that they match the side we want to attack.
				if ( (_unit knowsAbout (_selectTarget select 4) > 0) && (_selectTarget select 2 == _side) ) then
				{
					TargetArray = TargetArray + [_selectTarget select 4];  // Grab the target unit objects
				};
			_count = _count + 1;
			};
		};

		// If we have valid target objects...
		if (count TargetArray > 0) then {
			// Lets see if we're ready to die...
			_chance = round(random 9) + 1;
			//_chance = round(random 0) + 1;
			
			// Demo text.
			//if (_demo) then {_txt = format["Probability: %1, Roll: %2",_prob, _chance]; titleText[_txt, "PLAIN"];};
			//if (_demo) then {_txt = format["警告！炮弹来袭！！！"]; titleText[_txt, "PLAIN"];};
			// if (_demo) then {};
			if (_demo or _anno) then {
				// {_txt = format["警告！炮弹即将来袭！！！"]; titleText[_txt, "PLAIN"];} remoteExec ["bis_fnc_call"];
				{_txt = format["！"]; titleText[_txt, "PLAIN"];} remoteExec ["bis_fnc_call"];
				};
			//if (true) then {_txt = format["警告！炮弹来袭！！！"]; titleText[_txt, "PLAIN"];};
			// If the bomber is ready to die, stop looking and pick one of the random targets found...
			if (_chance <= _prob) then {
				if (_demo) then {hint format["火炮打击目标: %1", TargetArray];};
				_looking = false;
				_target = TargetArray select floor(random count TargetArray);
			} else {
				// The bomber is NOT ready to die, so do nothing.
				if (_demo) then {hintSilent "火炮准备未完成，目标重新搜索 ";};
			};
		
		} else {
			// No targets found so do nothing.
			if (_demo) then { hintSilent "观测员搜索中";};
		};

		// Wait a while and clear any targets previously found.
		sleep (random 0);
		TargetArray = [];
		}else { if (isServer) then {
		_looking = false;exit;
		};
		};
	};
	
	if (!alive _unit) exitWith{ true };
	if (!alive _unit2) exitWith{ true };

	if (_demo) then {hint format["火炮打击目标： %1!", _target];};

	// Shout or warn per options
	//if (_shout) then {_unit say [_sound,50]};
	if (_warn) then {units (group _target) commandTarget _unit};

	_sum = 5;//13 missile Fir
	_index = 0;

	_unit2 setVehicleAmmo 1;
	if ((_demo or _anno) and alive _unit2) then {
		[_unit, format ["这里是前观，请求打击坐标%1,高爆弹，?连发，等待回应。", getPosASL _target ]] remoteExec ["globalChat"];
		sleep (random 10);
		[_unit2, format ["炮兵收到，打击坐标%1,炮弹射出！", getPosASL _target ]] remoteExec ["globalChat"];
	};
	while{_sum > _index} do {
		if(alive _unit2) then {
			// _unit2 doArtilleryFire [[(getPos _Target select 0)+((random 5)*5)-((random 5)*5),(getPos _Target select 1)+((random 5)*5)-((random 5)*5),(getPos _Target select 2)+(random 0) ], "8Rnd_82mm_Mo_shells", 1];
			_unit2 doArtilleryFire [[(getPos _Target select 0)+((random 5)*5)-((random 5)*5),(getPos _Target select 1)+((random 5)*5)-((random 5)*5),(getPos _Target select 2)+(random 0) ], "rhs_mag_3vo18_10", 5];
			_index=_index+1;
			sleep 2;
		}else{
		hintSilent "迫击炮被毁！无法发射";
		exit;
		};
		sleep 1;
	};
	waitUntil { unitReady _unit2; };
	[_unit2, "炮弹已弹出，完毕"] remoteExec ["globalChat"];
	// hintSilent "火力任务已经完成"; 
	_unit forgetTarget _Target;

	sleep 120; 

	[_unit,_unit2, _side, _prob, _range, _warn] execVM "script\O_mortarAI.sqf";
	// [this, podnos, WEST, 10, 260, true] execVM "functions\IO\O_mortarAI.sqf";
	// hintSilent "新的任务开始";
	hintSilent "新的任务开始";
};
exit;
