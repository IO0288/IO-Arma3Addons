// Images code

class CfgUnitInsignia {
	//  ODST  //
	class odst_houq{
		displayName = "[ODST] 后勤";
		texture = "\ioaa3_def_insignia\data\odst\houq.paa";
		author = "IO0288";
	};
	class odst_ecy{
		displayName = "[ODST] 二次元";
		texture = "\ioaa3_def_insignia\data\odst\odst_ecy_bz.paa";
		author = "ODST";
	};
};

class UniformSlotInfo {
	slotType = 0;
	linkProxy = "-";
};

class CfgPatches {
	class IOAA3_Insignia {
        author = "IO0288";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"A3_Weapons_F"};
	};
};
