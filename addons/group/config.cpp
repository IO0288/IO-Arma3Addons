#include "../main/script_version.hpp"
class CfgPatches
{
	class IOAA3_GROUP_ODST
	{
		name = "IOAA3_GROUP_ODST - IO0288";
		units[] = {"IOAA3_GROUP_ODST_Rifleman_Fleck",};
		weapons[] = {};
		requiredVersion = 2.10; // 所需Arma3版本
		requiredAddons[] = {"A3_Data_F", "bwa3_units"};
		author = "IO0288";
		url = "https://git.io0288.cn/IO0288/IO-Arma3Addons";
		versionAr[] = {MAJOR, MINOR, PATCH, BUILD};
	};
};
class Extended_PreInit_EventHandlers
{
	IOAA3_Group_InitLoadout = "IOAA3_Group_InitLoadout_Var = [] execVM '\ioaa3_def_group\loadout.sqf'";
};
class CfgGroups
{
    class West
    {
		class IOAA3_GROUP_ODST_D
        {
            name="ODST - D";
            class IOAA3_GROUP_ODST_D_infantry
            {
                name="ODST_D_infantry";
                aliveCategory="Infantry";
                class rhs_group_nato_usarmy_d_company_hq
                {
                    name="ODST - infantry - D";
                    faction="CIV_ODST";
                    side=1;
                    rarityGroup=0.75;
                    icon="\A3\ui_f\data\map\markers\nato\b_hq.paa";
                    class Unit0
                    {
                        side=1;
                        vehicle="IOAA3_GROUP_ODST_Rifleman_Fleck";
                        rank="CAPTAIN";
                        position[]={0, 5, 0};
                    };
                    class Unit1
                    {
                        side=1;
                        vehicle="rhsusf_army_ocp_officer";
                        rank="LIEUTENANT";
                        position[]={-5, 0, 0};
                    };
                    class Unit2
                    {
                        side=1;
                        vehicle="rhsusf_army_ocp_squadleader";
                        rank="SERGEANT";
                        position[]={3, 0, 0};
                    };
                    class Unit3
                    {
                        side=1;
                        vehicle="IOAA3_GROUP_ODST_Rifleman_Fleck";
                        rank="PRIVATE";
                        position[]={5, 0, 0};
                    };
					class Unit4
                    {
                        side=1;
                        vehicle="IOAA3_GROUP_ODST_Rifleman_Fleck";
                        rank="PRIVATE";
                        position[]={5, 0, 0};
                    };
					class Unit5
                    {
                        side=1;
                        vehicle="IOAA3_GROUP_ODST_Rifleman_Fleck";
                        rank="PRIVATE";
                        position[]={5, 0, 0};
                    };
					class Unit6
                    {
                        side=1;
                        vehicle="IOAA3_GROUP_ODST_Rifleman_Fleck";
                        rank="PRIVATE";
                        position[]={5, 0, 0};
                    };
					class Unit7
                    {
                        side=1;
                        vehicle="IOAA3_GROUP_ODST_Rifleman_Fleck";
                        rank="PRIVATE";
                        position[]={5, 0, 0};
                    };
					class Unit8
                    {
                        side=1;
                        vehicle="IOAA3_GROUP_ODST_Rifleman_Fleck";
                        rank="PRIVATE";
                        position[]={5, 0, 0};
                    };
					class Unit9
                    {
                        side=1;
                        vehicle="IOAA3_GROUP_ODST_Rifleman_Fleck";
                        rank="PRIVATE";
                        position[]={5, 0, 0};
                    };
                };
			};
		};
	};
};
class CfgVehicles
{
	class B_Soldier_base_F;
	// 基准
	class IOAA3_GROUP_ODST_Rifleman_Base : B_Soldier_base_F
	{
		author = "$STR_IOAA3_Group_Author";
		identityTypes[] = {"LanguageENG_F", "Head_Euro", "BWA3_G_Bundeswehr_default"};
		scope = 0;

		faceType = "Man_A3";
		faction = "CIV_ODST";

		genericNames = "BundeswehrMen";
		
		uniformClass = "BWA3_Uniform_Fleck";
		vehicleClass = "MenRecon";

		class EventHandlers;

		linkedItems[] = {"BWA3_Vest_Rifleman_Fleck", "BWA3_OpsCore_FastMT_Fleck", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_OPFOR"};
		weapons[] = {"BWA3_G36A3_ZO4x30_RSAS_pointer", "", "Throw", "Put"};
		magazines[] = {"BWA3_30Rnd_556x45_G36", "BWA3_30Rnd_556x45_G36", "BWA3_30Rnd_556x45_G36", "BWA3_30Rnd_556x45_G36", "BWA3_30Rnd_556x45_G36", "BWA3_30Rnd_556x45_G36", "BWA3_30Rnd_556x45_G36", "BWA3_30Rnd_556x45_G36", "BWA3_15Rnd_9x19_P8", "BWA3_15Rnd_9x19_P8", "BWA3_15Rnd_9x19_P8", "BWA3_DM51A1", "BWA3_DM25"};

		respawnLinkedItems[] = {"BWA3_Vest_Rifleman_Fleck", "BWA3_OpsCore_FastMT_Fleck", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_OPFOR"};
		respawnWeapons[] = {"BWA3_G36A3_ZO4x30_RSAS_pointer", "", "Throw", "Put"};
		respawnMagazines[] = {"BWA3_30Rnd_556x45_G36", "BWA3_30Rnd_556x45_G36", "BWA3_30Rnd_556x45_G36", "BWA3_30Rnd_556x45_G36", "BWA3_30Rnd_556x45_G36", "BWA3_30Rnd_556x45_G36", "BWA3_30Rnd_556x45_G36", "BWA3_30Rnd_556x45_G36", "BWA3_15Rnd_9x19_P8", "BWA3_15Rnd_9x19_P8", "BWA3_15Rnd_9x19_P8", "BWA3_DM51A1", "BWA3_DM25"};
	};
	// 步枪
	class IOAA3_GROUP_ODST_Rifleman_Fleck : IOAA3_GROUP_ODST_Rifleman_Base
	{
		author = "$STR_IOAA3_Group_Author";
		scope = 2;
		displayName = "$STR_IOAA3_Group_RiflemanName";
		editorPreview = "\bwa3_units\editorpreview\BWA3_Rifleman_Fleck.jpg";

		role = "Rifleman";
		class EventHandlers : EventHandlers
		{
			class IOAA3_SetLoadout
			{
				init = "[_this select 0, loadout_lizi_base] call CBA_fnc_setLoadout;";
			};
		};
	};
	// 掷弹
	class IOAA3_GROUP_ODST_Grenadier_Fleck : IOAA3_GROUP_ODST_Rifleman_Base
	{
		author = "$STR_IOAA3_Group_Author";
		scope = 2;
		displayName = "$STR_IOAA3_Group_GrenadierNameName";
		editorPreview = "\bwa3_units\editorpreview\BWA3_Grenadier_Fleck.jpg";

		cost = 130000;
		threat[] = {1, 0.3, 0.1};
		role = "Grenadier";
		class EventHandlers : EventHandlers
		{
			class IOAA3_SetLoadout
			{
				init = "[_this select 0, loadout_lizi_liudang] call CBA_fnc_setLoadout;";
			};
		};
	};
	// 机枪
	class IOAA3_GROUP_ODST_MachineGunner_MG4_Fleck : IOAA3_GROUP_ODST_Rifleman_Base
	{
		scope = 2;
		displayName = "$STR_IOAA3_Group_MachineGunnerMG4Name";
		editorPreview = "\bwa3_units\editorpreview\BWA3_MachineGunner_MG4_Fleck.jpg";

		cost = 110000;
		threat[] = {1, 0.1, 0.3};
		icon = "iconManMG";
		role = "MachineGunner";
		class EventHandlers : EventHandlers
		{
			class IOAA3_SetLoadout
			{
				init = "[_this select 0, loadout_lizi_jiqiang] call CBA_fnc_setLoadout;";
			};
		};

		uniformClass = "BWA3_Uniform_sleeves_Fleck";

		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_MG_s"};
				speechPlural[] = {"veh_infantry_MG_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_MG_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_MG_p";
		nameSound = "veh_infantry_MG_s";
	};
	// 医疗
	class IOAA3_GROUP_ODST_Medic_Fleck : IOAA3_GROUP_ODST_Rifleman_Base
	{
		scope = 2;
		displayName = "$STR_IOAA3_Group_MedicName";
		editorPreview = "\bwa3_units\editorpreview\BWA3_Medic_Fleck.jpg";

		attendant = 1;
		cost = 300000;
		camouflage = 1.6;
		sensitivity = 2.5;
		icon = "iconManMedic";
		picture = "pictureHeal";
		role = "CombatLifeSaver";
		class EventHandlers : EventHandlers
		{
			class IOAA3_SetLoadout
			{
				init = "[_this select 0, loadout_lizi_yiliao] call CBA_fnc_setLoadout;";
			};
		};

		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_medic_s"};
				speechPlural[] = {"veh_infantry_medic_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_medic_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_medic_p";
		nameSound = "veh_infantry_medic_s";
	};
	// 精射
	class IOAA3_GROUP_ODST_Marksman_Fleck : IOAA3_GROUP_ODST_Rifleman_Base
	{
		scope = 2;
		displayName = "$STR_IOAA3_Group_MarksmanName";
		editorPreview = "\bwa3_units\editorpreview\BWA3_Marksman_Fleck.jpg";

		cost = 150000;
		sensitivity = 3.3;
		role = "Marksman";
		class EventHandlers : EventHandlers
		{
			class IOAA3_SetLoadout
			{
				init = "[_this select 0, loadout_lizi_jings_1] call CBA_fnc_setLoadout;";
			};
		};
	};
	// AT
	class IOAA3_GROUP_ODST_RiflemanAT_RGW90_Fleck : IOAA3_GROUP_ODST_Rifleman_Base
	{
		scope = 2;
		displayName = "$STR_IOAA3_Group_RiflemanATName";
		editorPreview = "\bwa3_units\editorpreview\BWA3_RiflemanAT_RGW90_Fleck.jpg";

		cost = 180000;
		threat[] = {1, 0.7, 0.3};
		icon = "iconManAT";
		role = "MissileSpecialist";
		class EventHandlers : EventHandlers
		{
			class IOAA3_SetLoadout
			{
				init = "[_this select 0, loadout_lizi_at] call CBA_fnc_setLoadout;";
			};
		};

		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_AT_s"};
				speechPlural[] = {"veh_infantry_AT_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_AT_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_AT_p";
		nameSound = "veh_infantry_AT_s";
	};
	// 工兵
	class IOAA3_GROUP_ODST_Engineer_Fleck : IOAA3_GROUP_ODST_Rifleman_Base
	{
		scope = 2;
		displayName = "$STR_IOAA3_Group_EngineerName";
		editorPreview = "\bwa3_units\editorpreview\BWA3_Engineer_Fleck.jpg";

		cost = 220000;
		camouflage = 1.6;
		sensitivity = 2.5;
		canDeactivateMines = 1;
		engineer = 1;
		detectSkill = 60;
		threat[] = {1, 0.5, 0.1};
		icon = "iconManEngineer";
		picture = "pictureRepair";
		role = "Sapper";
		class EventHandlers : EventHandlers
		{
			class IOAA3_SetLoadout
			{
				init = "[_this select 0, loadout_lizi_jianb] call CBA_fnc_setLoadout;";
			};
		};

		uniformClass = "BWA3_Uniform_tee_Fleck";
	};
	// 班长
	class IOAA3_GROUP_ODST_SL_Fleck : IOAA3_GROUP_ODST_Rifleman_Base
	{
		scope = 2;
		displayName = "$STR_IOAA3_Group_SLName";
		editorPreview = "\bwa3_units\editorpreview\BWA3_SL_Fleck.jpg";

		cost = 500000;
		camouflage = 1.4;
		sensitivity = 3.3;
		icon = "iconManLeader";
		role = "Rifleman";
		class EventHandlers : EventHandlers
		{
			class IOAA3_SetLoadout
			{
				init = "[_this select 0, loadout_lizi_zhihui] call CBA_fnc_setLoadout;";
			};
		};

		uniformClass = "BWA3_Uniform_sleeves_Fleck";
	};
	// 后勤
	class IOAA3_GROUP_ODST_Officer_Fleck : IOAA3_GROUP_ODST_Rifleman_Base
	{
		scope = 2;
		displayName = "$STR_IOAA3_Group_OfficerName";
		editorPreview = "\bwa3_units\editorpreview\BWA3_Officer_Fleck.jpg";

		cost = 600000;
		camouflage = 1.6;
		sensitivity = 3;
		icon = "iconManOfficer";
		role = "Rifleman";
		class EventHandlers : EventHandlers
		{
			class IOAA3_SetLoadout
			{
				init = "[_this select 0, loadout_lizi_zhihui] call CBA_fnc_setLoadout;";
			};
		};

		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_officer_s"};
				speechPlural[] = {"veh_infantry_officer_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_officer_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_officer_p";
		nameSound = "veh_infantry_officer_s";
	};
	// 车组/机组
	class IOAA3_GROUP_ODST_Crew_Fleck : IOAA3_GROUP_ODST_Rifleman_Base
	{
		scope = 2;
		displayName = "$STR_IOAA3_Group_CrewName";
		editorPreview = "\bwa3_units\editorpreview\BWA3_Crew_Fleck.jpg";

		accuracy = 2.3;
		minFireTime = 7;
		camouflage = 1.6;
		sensitivity = 2.5; // 2.8;
		cost = 90000;
		role = "Crewman";
		primaryAmmoCoef = 0.2;
		secondaryAmmoCoef = 0.05;
		handgunAmmoCoef = 0.1;

		uniformClass = "BWA3_Uniform_Crew_Fleck";
		linkedItems[] = {"BWA3_CrewmanKSK_Fleck_Headset", "BWA3_ItemNaviPad", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"BWA3_CrewmanKSK_Fleck_Headset", "BWA3_ItemNaviPad", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"BWA3_MP7_RSAS_pointer", "Throw", "Put", "BWA3_Vector"};
		respawnWeapons[] = {"BWA3_MP7_RSAS_pointer", "Throw", "Put", "BWA3_Vector"};
		magazines[] = {"BWA3_40Rnd_46x30_MP7", "BWA3_40Rnd_46x30_MP7", "BWA3_DM51A1", "BWA3_DM25"};
		respawnMagazines[] = {"BWA3_40Rnd_46x30_MP7", "BWA3_40Rnd_46x30_MP7", "BWA3_DM51A1", "BWA3_DM25"};
	};
	// class rhsusf_assault_eagleaiii_ocp_ar: rhsusf_assault_eagleaiii_ocp
	// {
	// 	scope = 1;
	// 	author = "$STR_RHSUSF_AUTHOR_FULL";
	// 	displayName = "Eagle A-III OEF-CP (AR)";
	// 	class TransportItems
	// 	{
	// 		class _xx_rhsusf_100Rnd_556x45_soft_pouch
	// 		{
	// 			name = "rhsusf_100Rnd_556x45_soft_pouch";
	// 			count = 4;
	// 		};
	// 		class _xx_rhsusf_200Rnd_556x45_mixed_soft_pouch_coyote
	// 		{
	// 			name = "rhsusf_200Rnd_556x45_mixed_soft_pouch_coyote";
	// 			count = 1;
	// 		};
	// 	};
	// };
};
