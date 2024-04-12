class CfgPatches
{
	class greenmag_vme
	{
		name="GreenMag (VME)";
		author="izan";
		units[]={};
		weapons[]={};
		requiredversion="0.1";
		requiredaddons[]={};
	};
};

class CfgMagazines
{
	class CA_Magazine;
	class VME_QBZ95_1_30Rnd_DBP87: CA_Magazine
	{
		greenmag_canSpeedload=1;
		greenmag_needBelt=0;
		greenmag_ammo="greenmag_ammo_580x42_basic_1Rnd";
		greenmag_basicammo="greenmag_ammo_580x42_basic_1Rnd";
	};
	class VME_QBZ95_1_30Rnd_DBP10_Tracer_Green: CA_Magazine
	{
		greenmag_canSpeedload=1;
		greenmag_needBelt=0;
		greenmag_ammo="greenmag_ammo_580x42_basic_1Rnd";
		greenmag_basicammo="greenmag_ammo_580x42_basic_1Rnd";
	};
	class VME_QBZ95_1_30Rnd_DBP10_Tracer_Red: CA_Magazine
	{
		greenmag_canSpeedload=1;
		greenmag_needBelt=0;
		greenmag_ammo="greenmag_ammo_580x42_basic_1Rnd";
		greenmag_basicammo="greenmag_ammo_580x42_basic_1Rnd";
	};
	class VME_QJB95_1_75Rnd_DBP10: CA_Magazine
	{
		greenmag_canSpeedload=1;
		greenmag_needBelt=0;
		greenmag_ammo="greenmag_ammo_580x42_basic_1Rnd";
		greenmag_basicammo="greenmag_ammo_580x42_basic_1Rnd";
	};
	class VME_QJB95_1_75Rnd_DBP10_Red: CA_Magazine
	{
		greenmag_canSpeedload=1;
		greenmag_needBelt=0;
		greenmag_ammo="greenmag_ammo_580x42_basic_1Rnd";
		greenmag_basicammo="greenmag_ammo_580x42_basic_1Rnd";
	};
	class VME_QJB95_1_75Rnd_DBP10_Tracer_Red: CA_Magazine
	{
		greenmag_canSpeedload=1;
		greenmag_needBelt=0;
		greenmag_ammo="greenmag_ammo_580x42_basic_1Rnd";
		greenmag_basicammo="greenmag_ammo_580x42_basic_1Rnd";
	};
	class VME_QJB95_1_75Rnd_DBP10_Tracer_Green: CA_Magazine
	{
		greenmag_canSpeedload=1;
		greenmag_needBelt=0;
		greenmag_ammo="greenmag_ammo_580x42_basic_1Rnd";
		greenmag_basicammo="greenmag_ammo_580x42_basic_1Rnd";
	};
	class VME_QJY88_200Rnd_DBP10_Red: CA_Magazine
	{
		greenmag_canSpeedload=1;
		greenmag_needBelt=0;
		greenmag_ammo="greenmag_ammo_580x42_basic_1Rnd";
		greenmag_basicammo="greenmag_ammo_580x42_basic_1Rnd";
	};
	class VME_QJB95_1_75Rnd_DBP87: CA_Magazine
	{
		greenmag_canSpeedload=1;
		greenmag_needBelt=0;
		greenmag_ammo="greenmag_ammo_580x42_basic_1Rnd";
		greenmag_basicammo="greenmag_ammo_580x42_basic_1Rnd";
	};
};
