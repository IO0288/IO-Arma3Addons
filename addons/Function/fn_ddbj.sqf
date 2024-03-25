missionNamespace setVariable ["show_enermy", false];

showPlayerOnHUD = {
	addMissionEventHandler ["Draw3D", {
		_size =getResolution#5;
		// _ICON = getMissionPath "\ddbj.jpg";
		_ICON = getMissionPath "\IO_Function\fn_ddbj.jpg";
		_POS="";
		_NAME="";
		_COLOR="";
		{
			_distance =_x distance player;
			_distance =_distance toFixed 0;
			_NAME = "["+name _x+"], 距离:"+_distance+"米";
			if !(lifeState _x == "INCAPACITATED") then {
				_COLOR=[1, 1, 1, 0];
			} else {
				_COLOR=[1, 1, 1, 0.7];
				// _COLOR=[1, 0, 0, 0.7];
				_NAME = _NAME +"已倒地需要帮助";
			};
			_x modelToWorldVisual [0, 0, 2] params ["_xpos", "_ypos", "_zpos"];
			_POS =
			[
				_xpos,
				_ypos,
				_zpos
			];
			drawIcon3D [
				_ICON,
				_COLOR,
				_POS,
				0.6/_size, 0.6/_size, 1,
				_NAME, 2.4, 0.03, "PuristaMedium", "center"
			];
		} forEach allPlayers;

		if (missionNamespace getVariable ["show_enermy", false]) then {
			_unitList = allUnits select {
				side _x ==blufor&&player distance2D _x <200
			};
			{
				_distance =_x distance player;
				_distance =_distance toFixed 0;
				_NAME = "敌人 距离:"+_distance+"米";
				_COLOR=[1, 0, 0, 1];
				_x modelToWorldVisual [0, 0, 2] params ["_xpos", "_ypos", "_zpos"];
				_POS =
				[
					_xpos,
					_ypos,
					_zpos
				];
				drawIcon3D [
					"",
					_COLOR,
					_POS,
					0.6/_size, 0.6/_size, 1,
					_NAME, 2.4, 0.03, "PuristaMedium", "center"
				];
			} forEach _unitList;
		}
	}];
};

[] spawn showPlayerOnHUD;