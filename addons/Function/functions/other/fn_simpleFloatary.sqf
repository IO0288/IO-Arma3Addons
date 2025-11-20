/*
	 *IO_Batch_simpleFloatary.sqf
	 *simpleFloatary
	 *简单浮动, AA2.16新增函数支持, 大型直升机支持漂浮，小船可装载
	 *[] execVM "IO_Batch_simpleFloatary.sqf";
 */

SLT_fnc_RE_Server = {
	params["_arguments", "_code"];
	_varName = ("SLT"+str (round random 10000));

	TempCode = compile ("if (!isServer) exitWith {};
	_this call "+str _code+"; "+(_varName+" = nil;"));
	TempArgs = _arguments;

	call compile (_varName +" = [TempArgs, TempCode];
	publicVariable '"+_varName+"';

	[[], {
		("+_varName+" select 0) spawn ("+_varName+" select 1);
	}] remoteExec ['spawn', 2];
	");
};

with uiNamespace do {
	SLTScriptDisplayName = "Simple Floatary";
};

SLT_fnc_enableScript = {
	[[], {
		if (isMultiplayer) then {
			waitUntil {
				sleep 0.1;
				getClientState isEqualTo "BRIEFING READ"
			};
		};
		if !(isNil "isFloataryAllowedServer") exitWith {};
		isFloataryAllowedServer = true;

		FLRYLeakiness = 0.1;

		comment "any helicopter bigger than this will float";
		comment "任何比这大的直升机都会浮起来";
		FLRYFloatLowerSizeThreshold = 24;

		comment "any aircraft bigger than this will float";
		comment "任何比这大的飞机都会浮起来";
		FLRYFloatUpperSizeThreshold = 24.75;

		comment "any ship smaller than this can be carried";
		comment "任何比这小的船都可以运载";
		FLRYShipSizeThreshold = 10;

		FLRYAllWatercraftCarrierClassNames = [
			"O_Heli_Transport_04_covered_F",
			"I_Heli_Transport_02_F",
			"B_Heli_Transport_03_F",
			"B_Heli_Transport_03_unarmed_F",
			"B_T_VTOL_01_infantry_F",
			"B_T_VTOL_01_vehicle_F",
			"C_IDAP_Heli_Transport_02_F",
			"O_T_VTOL_02_infantry_F",
			"O_T_VTOL_02_vehicle_F"
		];

		FLRYAllAircraftOffsets = [
			["O_Heli_Transport_04_covered_F", [0, 0.75, -0.75]],
			["I_Heli_Transport_02_F", [0, 0.75, -0.75]],
			["B_Heli_Transport_03_F", [0, 0.75, -0.75]],
			["B_Heli_Transport_03_unarmed_F", [0, 0.75, -0.75]],
			["B_T_VTOL_01_infantry_F", [0, 0.75, -2.65]],
			["B_T_VTOL_01_vehicle_F", [0, 0.75, -2.65]],
			["O_T_VTOL_02_infantry_F", [0, 0.5, -0.75]],
			["O_T_VTOL_02_vehicle_F", [0, 0.5, -0.75]]
		];

		publicVariable "FLRYFloatLowerSizeThreshold";
		publicVariable "FLRYFloatUpperSizeThreshold";
		publicVariable "FLRYShipSizeThreshold";
		publicVariable "FLRYAllWatercraftCarrierClassNames";
		publicVariable "FLRYAllAircraftOffsets";

		FLRY_fnc_getIsValidAircraft = {
			params ["_entity"];
			if !(_entity isKindOf "Air") exitWith {
				false
			};
			private _size = sizeOf typeOf _entity;
			if (_size < FLRYFloatLowerSizeThreshold) exitWith {
				false
			};
			if (_entity isKindOf "Plane" && !(_size >= FLRYFloatUpperSizeThreshold)) exitWith {
				false
			};
			true
		};

		publicVariable "FLRY_fnc_getIsValidAircraft";

		FLRY_fnc_getIsValidShip = {
			params ["_ship", ["_isPlane", false]];
			if !(_ship isKindOf "Ship") exitWith {
				false
			};
			private _size = sizeOf typeOf _ship;
			if (_isPlane && ((sizeOf typeOf _ship) < 15)) exitWith {
				true
			};
			if (_size > FLRYShipSizeThreshold) exitWith {
				false
			};
			true
		};

		publicVariable "FLRY_fnc_getIsValidShip";

		comment "Set leakiness when created";
		FLRYCreatedEvent = addMissionEventHandler ["EntityCreated", {
			params ["_entity"];

			if !([_entity] call FLRY_fnc_getIsValidAircraft) exitWith {};

			[_entity, FLRYLeakiness] remoteExec ["setWaterLeakiness", owner _entity];
			[_entity] remoteExec ["FLRY_fnc_addLoadShipActionToHelicopters", 0];
		}];

		comment "Set leakiness on existing vehicles";
		{
			if !([_x] call FLRY_fnc_getIsValidAircraft) then {
				continue
			};
			[_x, FLRYLeakiness] remoteExec ["setWaterLeakiness", owner _x];
		} forEach vehicles;
	}] remoteExec ["Spawn", 2];

	[[], {
		if (!hasInterface) exitWith {};
		if (isMultiplayer) then {
			waitUntil {
				sleep 0.1;
				getClientState isEqualTo "BRIEFING READ"
			};
		};
		if !(isNil "isFloataryAllowed") exitWith {};
		isFloataryAllowed = true;

		waitUntil {
			!isNil "FLRYFloatLowerSizeThreshold"
		};
		waitUntil {
			!isNil "FLRYFloatUpperSizeThreshold"
		};
		waitUntil {
			!isNil "FLRYAllWatercraftCarrierClassNames"
		};
		waitUntil {
			!isNil "FLRYShipSizeThreshold"
		};
		waitUntil {
			!isNil "FLRY_fnc_getIsValidAircraft"
		};
		waitUntil {
			!isNil "FLRY_fnc_getIsValidShip"
		};
		waitUntil {
			!isNil "FLRYAllAircraftOffsets"
		};

		FLRY_fnc_getAircraftOffset = {
			params["_aircraft"];

			private _offset = [0, 0, 0];
			{
				if (typeOf _aircraft isEqualTo (_x select 0)) exitWith {
					_offset = _x select 1;
				};
			} forEach FLRYAllAircraftOffsets;
			_offset
		};

		FLRY_fnc_getAttachedBoat = {
			params["_vehicle"];

			private _boat = objNull;
			private _isPlane = _vehicle isKindOf "Plane";
			{
				if ([_x, _isPlane] call FLRY_fnc_getIsValidShip) exitWith {
					_boat = _x;
				};
			} forEach attachedObjects _vehicle;
			_boat
		};

		FLRY_fnc_attachWatercraft = {
			params["_watercraft", "_aircraft"];

			private _isPlane = _aircraft isKindOf "Plane";
			if !([_watercraft, _isPlane] call FLRY_fnc_getIsValidShip) exitWith {
				false
			};
			if !([_aircraft] call FLRY_fnc_getIsValidAircraft) exitWith {
				false
			};
			private _offset = [_aircraft] call FLRY_fnc_getAircraftOffset;
			_watercraft attachTo [_aircraft, _offset];
			playSound3D ["A3\sounds_f\structures\doors\servodoors\ServoDoorsSqueak_1.wss", _aircraft, false, getPosASL _aircraft, 5, 1, 100];
			true
		};

		FLRY_fnc_detachWatercraft = {
			params["_aircraft"];

			if !([_aircraft] call FLRY_fnc_getIsValidAircraft) exitWith {
				false
			};
			private _watercraft = [_aircraft] call FLRY_fnc_getAttachedBoat;
			private _distance = [15, 10] select (_aircraft isKindOf "Plane");
			private _newPos = (_aircraft getPos [_distance, (getDir _aircraft)+180]);
			_newPos set [2, (getPosASL _aircraft) select 2];
			detach _watercraft;
			_watercraft setPosASL _newPos;
			_watercraft setDir (getDir _aircraft + 180);
			playSound3D ["A3\sounds_f\structures\doors\servodoors\ServoDoorsSqueak_3.wss", _aircraft, false, getPosASL _aircraft, 5, 1, 100];
			true
		};

		FLRY_fnc_getIsBehindAircraft = {
			params["_location", "_aircraft"];

			private _relDir = _aircraft getRelDir _location;

			if (_relDir < 160 || _relDir > 200) exitWith {
				false
			};
			true
		};

		FLRY_fnc_addLoadShipActionToHelicopters = {
			params ["_vehicle"];

			if !(typeOf _vehicle in FLRYAllWatercraftCarrierClassNames) exitWith {};

			private _picPath = "\A3\boat_F\Boat_Transport_01\data\UI\map_Boat_Transport_01_CA.paa";

			[
				_vehicle,
				"<a color='#ffffff' font='RobotoCondensed' shadow='1' size='1.1'>Load Watercraft<img image='"+_picPath+"'/></a>",
				"a3\ui_f\data\igui\cfg\holdactions\holdaction_loaddevice_ca.paa",
				"a3\ui_f\data\igui\cfg\holdactions\holdaction_loaddevice_ca.paa",
				"_this distance _target < 25 && ([_target] call FLRY_fnc_getAttachedBoat isEqualTo objNull) && ([vehicle _this, _target isKindOf 'Plane'] call FLRY_fnc_getIsValidShip) && (driver vehicle _this isEqualTo _this) && ([getPosASL vehicle _this, _target] call FLRY_fnc_getIsBehindAircraft)",
				"_caller distance _target < 25",
				{},
				{},
				{
					[vehicle _caller, _target] call FLRY_fnc_attachWatercraft;
				},
				{},
				[],
				3,
				0,
				false,
				false
			] call BIS_fnc_holdActionAdd;

			[
				_vehicle,
				"<a color='#ffffff' font='RobotoCondensed' shadow='1' size='1.1'>Unload Watercraft<img image='"+_picPath+"'/></a>",
				"a3\ui_f\data\igui\cfg\holdactions\holdaction_unloaddevice_ca.paa",
				"a3\ui_f\data\igui\cfg\holdactions\holdaction_unloaddevice_ca.paa",
				"_this distance _target < 25 && !([_target] call FLRY_fnc_getAttachedBoat isEqualTo objNull) && ((driver _target isEqualTo _this) || ((driver ([_target] call FLRY_fnc_getAttachedBoat)) isEqualTo _this))",
				"_caller distance _target < 25",
				{},
				{},
				{
					[_target] call FLRY_fnc_detachWatercraft;
				},
				{},
				[],
				3,
				0,
				false,
				false
			] call BIS_fnc_holdActionAdd;
		};

		comment "add actions to existing vehicles locally";
		{
			if !([_x] call FLRY_fnc_getIsValidAircraft) then {
				continue
			};
			[_x] call FLRY_fnc_addLoadShipActionToHelicopters;
		} forEach vehicles;
	}] remoteExec ["Spawn", 0, "JIP_ID_Floatary"];
};

SLT_fnc_disableScript = {
	removeMissionEventHandler ['EntityCreated', FLRYCreatedEvent];
	[[], {}] remoteExec ['Spawn', 0, 'JIP_ID_Floatary'];
	FLRYCreatedEvent = nil;

	{
		{
			removeAllActions _x;
		} forEach vehicles;
		isFloataryAllowedServer = nil;
		isFloataryAllowed = nil;
	} remoteExec ['BIS_fnc_call', 0];
};

SLT_fnc_init = {
	params[["_useToggleOptions", true]];

	with uiNamespace do {
		createDialog "RscDisplayEmpty";
		private _display = findDisplay -1;
		{
			_x ctrlShow false;
		} forEach allControls _display;

		private _ctrlHeader = _display ctrlCreate ["RscStructuredText", -1];
		_ctrlHeader ctrlSetPosition [0.396875 * safeZoneW + safeZoneX, 0.445 * safeZoneH + safeZoneY, 0.20625 * safeZoneW, 0.022 * safeZoneH];
		_ctrlHeader ctrlSetBackgroundColor [0, 0.7, 1, 0.66];
		_ctrlHeader ctrlSetStructuredText parseText ("<t size='0.85' font='PuristaMedium'>"+toUpper SLTScriptDisplayName+"</t>");
		_ctrlHeader ctrlCommit 0;

		private _ctrlBorder = _display ctrlCreate ["RscPicture", -1];
		_ctrlBorder ctrlSetPosition [0.396875 * safeZoneW + safeZoneX, 0.467 * safeZoneH + safeZoneY, 0.20625 * safeZoneW, 0.077 * safeZoneH];
		_ctrlBorder ctrlSetText "#(rgb, 1, 1, 1)color(1, 1, 1, 1)";
		_ctrlBorder ctrlSetTextColor [0, 0, 0, 0.5];
		_ctrlBorder ctrlCommit 0;

		private _ctrlBackground = _display ctrlCreate ["RscPicture", -1];
		_ctrlBackground ctrlSetPosition [0.402031 * safeZoneW + safeZoneX, 0.478 * safeZoneH + safeZoneY, 0.195937 * safeZoneW, 0.055 * safeZoneH];
		_ctrlBackground ctrlSetText "#(rgb, 1, 1, 1)color(1, 1, 1, 1)";
		_ctrlBackground ctrlSetTextColor [0.1, 0.1, 0.1, 0.75];
		_ctrlBackground ctrlCommit 0;

		SLTEnableButton = _display ctrlCreate ["RscButtonMenu", -1];
		SLTEnableButton ctrlSetPosition [0.407187 * safeZoneW + safeZoneX, 0.489 * safeZoneH + safeZoneY, 0.0928125 * safeZoneW, 0.033 * safeZoneH];
		SLTEnableButton ctrlSetText "ENABLE";
		SLTEnableButton ctrlCommit 0;
		SLTEnableButton ctrlAddEventHandler ["ButtonClick", {
			[[], missionNamespace getVariable "SLT_fnc_enableScript"] call (missionNamespace getVariable "SLT_fnc_RE_Server");
			closeDialog 0;
		}];

		SLTDisableButton = _display ctrlCreate ["RscButtonMenu", -1];
		SLTDisableButton ctrlSetPosition [0.5 * safeZoneW + safeZoneX, 0.489 * safeZoneH + safeZoneY, 0.0928125 * safeZoneW, 0.033 * safeZoneH];
		SLTDisableButton ctrlSetText "DISABLE";
		SLTDisableButton ctrlCommit 0;
		SLTDisableButton ctrlAddEventHandler ["ButtonClick", {
			[[], missionNamespace getVariable "SLT_fnc_disableScript"] call (missionNamespace getVariable "SLT_fnc_RE_Server");
			closeDialog 0;
		}];

		if (!_useToggleOptions) then {
			SLTEnableButton ctrlSetText "ARE YOU SURE?";
			SLTEnableButton ctrlSetTooltip "This script cannot be disabled!";
			SLTEnableButton ctrlCommit 0;

			SLTDisableButton ctrlSetText "CANCEL";
			SLTDisableButton ctrlCommit 0;
		};
	};
	deleteVehicle this;
};

if (time < 1) then {
	[] spawn SLT_fnc_enableScript;
} else {
	[true] call SLT_fnc_init;
};
