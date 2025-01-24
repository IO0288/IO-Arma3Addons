class IOAA3_ModuleODSTrole: Module_F
{
	scope = 2;
	displayNAme = "兵种选择";
	icon = "\ioaa3_def_src\src\icon_bzrole.paa"; // Map icon. Delete this entry to use the default icon
	category = "IOAA3modules";
	function = "IO_fnc_moduleODSTRole";
	functionPriority = 10;
	isGlobal = 1;
	isTriggerActivated = 0;
	isDisposable = 0;

	//curatorInfoType = "RscDisplayAttributeModuleJammer";

	class ModuleDescription: ModuleDescription
	{
		description = "兵种选择器(预设装备&ACE兵种&有限军火库)，可以同步到多个对象";
		sync[] = {"LocationArea_F", "AnyBrain", "AnyStaticObject", "AnyVehicle", "AnyPerson"};

		class LocationArea_F
		{
			position = 1;
			direction = 1;
			optional = 1;
			duplicate = 1;
			synced[] = {"AnyBrain"};
		};
	};
};