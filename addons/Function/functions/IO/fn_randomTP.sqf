/*
	 *IO_Batch_RTP.sqf
	 *批量随机传送传入的单位
	 *[*units, *rtp_mb, rtp_x, rtp_y, true] execVM "IO_Batch_RTP.sqf";
// todo 或许可以加入判断目的地是否是海洋？
// todo 玩家开关?
 */

params ["_arr", "_mb", "_x", "_y", "_isplayer"];
_param = [_arr, _mb, _x, _y];
hint format["%1 %2 %3 %4 %5", _arr, _mb, _x, _y, count _param];
_rtp_x = 1000;
_rtp_y = 1000;
_rtp_isplayer = true;

if (count _param > 2) then {
	_rtp_x = _x;
	_rtp_y = _y;
};
if (count _param > 4) then {
	_rtp_isplayer = _isplayer;
};
if (count _param > 1) then {
	_arrN = (count _arr) - 1;
	_rtp_mb = getPos _mb;

	if (_arrN > -1) then {
		for "_i" from 0 to _arrN do{
			_p = _arr select _i;
			if ((isPlayer _p)&&(_rtp_isplayer)) then {
				_pos = [((_rtp_mb select 0) + (floor random [-_rtp_x, 0, _rtp_x])), ((_rtp_mb select 1) + (floor random [-_rtp_y, 0, _rtp_y])), 0];
				_p setPos _pos;

				while { ((ATLToASL (getPos _p)) select 2) < -0.5 } do {
					_pos = _mb getPos [_x * sqrt random 1, random 360];
					_p setPos _pos;
					sleep 1;
				};
			} else {
				_pos = [((_rtp_mb select 0) + (floor random [-_rtp_x, 0, _rtp_x])), ((_rtp_mb select 1) + (floor random [-_rtp_y, 0, _rtp_y])), 0];
				_p setPos _pos;
				while { ((ATLToASL (getPos _p)) select 2) < -0.5 } do {
					_pos = _mb getPos [_x * sqrt random 1, random 360];
					_p setPos _pos;
					sleep 1;
				};
			};
		};
	};
};
