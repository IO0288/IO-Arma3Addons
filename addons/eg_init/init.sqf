// From HIG_droneAlt.pbo
[] spawn{
	egnum = 0;
	while {true} do {
		egnum = egnum + 1
		_myUAV = getConnectedUAV player;
		if (_myUAV !=objNull) then
		{
			
			while {alive _myUAV} do  
			{  
			  _pos = getPosATL _myUAV ; 
			  _h= _pos#2; 
			  if (_h>80) then {_myUAV setCaptive true}; 
			  if (_h<80) then {_myUAV setCaptive false};
			  sleep 2;
			};
		};
		sleep 5;
	};
}