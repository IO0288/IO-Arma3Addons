class CfgPatches
{
	class RF_Vehicles_CommandoMortar
	{
		addonRootClass = "RF_Vehicles";
		requiredAddons[] = {"RF_Vehicles"};
		requiredVersion = 0.1;
		units[] = {"B_CommandoMortar_weapon_RF", "O_CommandoMortar_weapon_RF", "I_CommandoMortar_weapon_RF", "I_E_CommandoMortar_weapon_RF", "B_CommandoMortar_RF", "O_CommandoMortar_RF", "I_CommandoMortar_RF", "B_G_CommandoMortar_RF", "O_G_CommandoMortar_RF", "I_G_CommandoMortar_RF", "I_E_CommandoMortar_RF"};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {"Sh_60mm_AMOS_RF", "Flare_60mm_AMOS_White_RF", "Smoke_60mm_AMOS_White_RF", "Sh_60mm_AMOS_guided_RF", "Sh_60mm_AMOS_LG_RF"};
	};
};
class CfgVehicles
{
	class LandVehicle;
	class StaticWeapon : LandVehicle
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class StaticMortar : StaticWeapon
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				class ViewOptics;
			};
		};
		class EventHandlers;
	};
	class Bag_Base;
	class Weapon_Bag_Base : Bag_Base
	{
		class assembleInfo
		{
		};
	};
	class B_CommandoMortar_weapon_RF : Weapon_Bag_Base
	{
		author = "$STR_LXRF_Author";
		dlc = "rf";
		scope = 2;
		scopeCurator = 2;
		faction = "BLU_F";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_DismantledWeapons";
		displayName = "$STR_LXRF_CommandoMortar_weapon0";
		hiddenSelections[] = {"Camo", "Camo2"};
		hiddenSelectionsTextures[] = {"\lxRF\vehicles_rf\CommandoMortar\data\UAV_backpack_NATO_co.paa", "\lxRF\vehicles_rf\CommandoMortar\data\CommandoMortar_RF_olive_co.paa"};
		picture = "\lxRF\vehicles_rf\CommandoMortar\data\UI\icon_B_CommandoMortar_weapon_CA.paa";
		model = "lxRF\vehicles_rf\CommandoMortar\CommandoMortar_RF_backpack.p3d";
		mass = 350;
		class assembleInfo : assembleInfo
		{
			base = "";
			displayName = "$STR_LXRF_CommandoMortar_base";
			assembleTo = "B_CommandoMortar_RF";
		};
	};
	class O_CommandoMortar_weapon_RF : B_CommandoMortar_weapon_RF
	{
		author = "$STR_LXRF_Author";
		dlc = "rf";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_LXRF_CommandoMortar_weapon1";
		faction = "OPF_F";
		hiddenSelections[] = {"Camo", "Camo2"};
		hiddenSelectionsTextures[] = {"\lxRF\vehicles_rf\CommandoMortar\data\UAV_backpack_CSAT_co.paa", "\lxRF\vehicles_rf\CommandoMortar\data\CommandoMortar_RF_tan_co.paa"};
		picture = "\lxRF\vehicles_rf\CommandoMortar\data\UI\icon_O_CommandoMortar_weapon_CA.paa";
		class assembleInfo : assembleInfo
		{
			assembleTo = "O_CommandoMortar_RF";
		};
	};
	class I_CommandoMortar_weapon_RF : B_CommandoMortar_weapon_RF
	{
		author = "$STR_LXRF_Author";
		dlc = "rf";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_LXRF_CommandoMortar_weapon2";
		hiddenSelections[] = {"Camo", "Camo2"};
		hiddenSelectionsTextures[] = {"\lxRF\vehicles_rf\CommandoMortar\data\UAV_backpack_AAF_co.paa", "\lxRF\vehicles_rf\CommandoMortar\data\CommandoMortar_RF_olive_co.paa"};
		picture = "\lxRF\vehicles_rf\CommandoMortar\data\UI\icon_I_CommandoMortar_weapon_CA.paa";
		faction = "IND_F";
		class assembleInfo : assembleInfo
		{
			assembleTo = "I_CommandoMortar_RF";
		};
	};
	class I_E_CommandoMortar_weapon_RF : I_CommandoMortar_weapon_RF
	{
		author = "$STR_LXRF_Author";
		dlc = "rf";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_LXRF_CommandoMortar_weapon3";
		hiddenSelections[] = {"Camo", "Camo2"};
		hiddenSelectionsTextures[] = {"\lxRF\vehicles_rf\CommandoMortar\data\UAV_backpack_NATO_co.paa", "\lxRF\vehicles_rf\CommandoMortar\data\CommandoMortar_RF_olive_co.paa"};
		picture = "\lxRF\vehicles_rf\CommandoMortar\data\UI\icon_B_CommandoMortar_weapon_CA.paa";
		faction = "IND_E_F";
		class assembleInfo : assembleInfo
		{
			assembleTo = "I_E_CommandoMortar_RF";
		};
	};
	class CommandoMortar_base_RF : StaticMortar
	{
		author = "$STR_LXRF_Author";
		dlc = "rf";
		scope = 0;
		displayname = "$STR_LXRF_CommandoMortar_base";
		class Library
		{
			libTextDesc = "$STR_LXRF_CommandoMortar_base_Library";
		};
		transportSoldier = 0;
		cargoAction[] = {"Mortar_Gunner"};
		getInAction = "GetInMortar";
		getOutAction = "GetOutLow";
		unitInfoType = "RscUnitInfoMortar";
		editorSubcategory = "EdSubcat_Turrets";
		picture = "\A3\Static_f\Mortar_01\data\UI\Mortar_01_ca.paa";
		icon = "\A3\Static_f\Mortar_01\data\UI\map_Mortar_01_CA.paa";
		cost = 200000;
		accuracy = 0.25;
		EPEImpulseDamageCoef = 5;
		class Damage
		{
			tex[] = {};
			mat[] = {"lxRF\vehicles_rf\CommandoMortar\data\CommandoMortar_RF.rvmat", "lxRF\vehicles_rf\CommandoMortar\data\CommandoMortar_damage.rvmat", "lxRF\vehicles_rf\CommandoMortar\data\CommandoMortar_destruct.rvmat"};
		};
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				gunnerAction = "Mortar_Gunner";
				gunnergetInAction = "";
				gunnergetOutAction = "";
				weapons[] = {"mortar_60mm_RF"};
				elevationMode = 1;
				initCamElev = 0;
				minCamElev = -35;
				maxCamElev = 35;
				initelev = 0;
				minelev = -30;
				maxelev = 13;
				minTurn = -180;
				maxTurn = 180;
				initTurn = 0;
				cameraDir = "look";
				discreteDistance[] = {100, 200, 300, 400, 500, 700, 1000, 1600, 2000, 2400, 2800};
				discreteDistanceCameraPoint[] = {"eye"};
				discreteDistanceInitIndex = 5;
				turretInfoType = "RscWeaponRangeArtillery";
				gunnerForceOptics = 0;
				memoryPointGunnerOptics = "eye";
				gunnerOpticsModel = "\A3\Weapons_F\acc\reticle_Mortar_01_F.p3d";
				disableSoundAttenuation = 1;
				class ViewOptics : ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.174;
					minFov = 0.0077778;
					maxFov = 0.14;
					visionMode[] = {"Normal", "NVG"};
				};
				magazines[] = {"4Rnd_60mm_Mo_shells_RF", "4Rnd_60mm_Mo_shells_RF", "4Rnd_60mm_Mo_shells_RF", "2Rnd_60mm_Mo_Flare_white_RF", "2Rnd_60mm_Mo_Smoke_white_RF"};
				ejectDeadGunner = 1;
				usepip = 2;
			};
		};
		class EventHandlers : EventHandlers
		{
			fired = "_this call (uinamespace getvariable 'BIS_fnc_effectFired');";
		};
		htMin = 1;
		htMax = 480;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		class DestructionEffects
		{
			class Smoke
			{
				simulation = "particles";
				type = "WeaponWreckSmoke";
				position = "destructionEffect";
				intensity = 1;
				interval = 1;
				lifeTime = 5;
			};
		};
		model = "\lxRF\vehicles_rf\CommandoMortar\CommandoMortar_RF";
		artilleryScanner = 1;
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\lxRF\vehicles_rf\CommandoMortar\data\CommandoMortar_RF_olive_co.paa"};
	};
	class B_CommandoMortar_RF : CommandoMortar_base_RF
	{
		author = "$STR_LXRF_Author";
		dlc = "rf";
		scope = 2;
		scopeCurator = 2;
		class SimpleObject
		{
			eden = 1;
			animate[] = {{"mainturret", 0}, {"maingun", 0}, {"optics", 0}, {"optics_stabilization", 0}, {"legs_zeroing", 0}, {"uplegs_zeroing", 0}};
			hide[] = {"light_back", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 0.757;
			verticalOffsetWorld = 0.035;
			init = "''";
		};
		editorPreview = "\lxRF\editorpreviews_rf\Data\CfgVehicles\B_CommandoMortar_RF.jpg";
		side = 1;
		faction = "BLU_F";
		crew = "B_Soldier_F";
		availableForSupportTypes[] = {"Artillery"};
		class assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"B_CommandoMortar_weapon_RF"};
			displayName = "";
		};
	};
	class O_CommandoMortar_RF : B_CommandoMortar_RF
	{
		author = "$STR_LXRF_Author";
		dlc = "rf";
		scope = 2;
		scopeCurator = 2;
		editorPreview = "\lxRF\editorpreviews_rf\Data\CfgVehicles\O_CommandoMortar_RF.jpg";
		side = 0;
		faction = "OPF_F";
		crew = "O_Soldier_F";
		hiddenSelectionsTextures[] = {"\lxRF\vehicles_rf\CommandoMortar\data\CommandoMortar_RF_tan_co.paa"};
		class assembleInfo : assembleInfo
		{
			dissasembleTo[] = {"O_CommandoMortar_weapon_RF"};
		};
	};
	class I_CommandoMortar_RF : B_CommandoMortar_RF
	{
		author = "$STR_LXRF_Author";
		dlc = "rf";
		scope = 2;
		scopeCurator = 2;
		editorPreview = "\lxRF\editorpreviews_rf\Data\CfgVehicles\I_CommandoMortar_RF.jpg";
		crew = "I_soldier_F";
		side = 2;
		faction = "IND_F";
		class assembleInfo : assembleInfo
		{
			dissasembleTo[] = {"I_CommandoMortar_weapon_RF"};
		};
	};
	class B_G_CommandoMortar_RF : B_CommandoMortar_RF
	{
		author = "$STR_LXRF_Author";
		dlc = "rf";
		scope = 2;
		scopeCurator = 2;
		editorPreview = "\lxRF\editorpreviews_rf\Data\CfgVehicles\B_G_CommandoMortar_RF.jpg";
		crew = "B_G_Soldier_F";
		faction = "BLU_G_F";
	};
	class O_G_CommandoMortar_RF : O_CommandoMortar_RF
	{
		author = "$STR_LXRF_Author";
		dlc = "rf";
		scope = 2;
		scopeCurator = 2;
		editorPreview = "\lxRF\editorpreviews_rf\Data\CfgVehicles\B_G_CommandoMortar_RF.jpg";
		crew = "O_G_Soldier_F";
		faction = "OPF_G_F";
		class assembleInfo : assembleInfo
		{
			dissasembleTo[] = {"B_CommandoMortar_weapon_RF"};
		};
	};
	class I_G_CommandoMortar_RF : I_CommandoMortar_RF
	{
		author = "$STR_LXRF_Author";
		dlc = "rf";
		scope = 2;
		scopeCurator = 2;
		editorPreview = "\lxRF\editorpreviews_rf\Data\CfgVehicles\B_G_CommandoMortar_RF.jpg";
		crew = "I_G_Soldier_F";
		faction = "IND_G_F";
		class assembleInfo : assembleInfo
		{
			dissasembleTo[] = {"B_CommandoMortar_weapon_RF"};
		};
	};
	class I_E_CommandoMortar_RF : I_CommandoMortar_RF
	{
		author = "$STR_LXRF_Author";
		dlc = "rf";
		scope = 2;
		scopeCurator = 2;
		editorPreview = "\lxRF\editorpreviews_rf\Data\CfgVehicles\B_G_CommandoMortar_RF.jpg";
		crew = "I_E_Soldier_F";
		faction = "IND_E_F";
		class assembleInfo : assembleInfo
		{
			dissasembleTo[] = {"I_E_CommandoMortar_weapon_RF"};
		};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class CfgWeapons
{
	class CannonCore;
	class mortar_82mm : CannonCore
	{
		class Single1 : Mode_SemiAuto
		{
		};
		class Single2 : Single1
		{
		};
		class Single3 : Single1
		{
		};
		class Burst1 : Mode_Burst
		{
		};
	};
	class mortar_60mm_RF : mortar_82mm
	{
		displayname = "$STR_LXRF_mortar_60mm";
		magazineReloadTime = 4;
		magazines[] = {"8Rnd_60mm_Mo_shells_RF", "4Rnd_60mm_Mo_Flare_white_RF", "4Rnd_60mm_Mo_Smoke_white_RF", "8Rnd_60mm_Mo_guided_RF", "8Rnd_60mm_Mo_LG_RF", "4Rnd_60mm_Mo_shells_RF", "2Rnd_60mm_Mo_Flare_white_RF", "2Rnd_60mm_Mo_Smoke_white_RF", "4Rnd_60mm_Mo_guided_RF", "4Rnd_60mm_Mo_LG_RF"};
		class StandardSound
		{
			SoundSetShot[] = {"rf_Mortar60mm_Shot_SoundSet", "rf_Mortar60mm_Tail_SoundSet"};
		};
		class Single1 : Single1
		{
			class StandardSound
			{
				SoundSetShot[] = {"rf_Mortar60mm_Shot_SoundSet", "rf_Mortar60mm_Tail_SoundSet"};
			};
			textureType = "semi";
		};
		class Single2 : Single2
		{
			class StandardSound
			{
				SoundSetShot[] = {"rf_Mortar60mm_Shot_SoundSet", "rf_Mortar60mm_Tail_SoundSet"};
			};
			textureType = "semi";
		};
		class Single3 : Single3
		{
			class StandardSound
			{
				SoundSetShot[] = {"rf_Mortar60mm_Shot_SoundSet", "rf_Mortar60mm_Tail_SoundSet"};
			};
			textureType = "semi";
		};
		class Burst1 : Burst1
		{
			class StandardSound
			{
				SoundSetShot[] = {"rf_Mortar60mm_Shot_SoundSet", "rf_Mortar60mm_Tail_SoundSet"};
			};
		};
	};
};
class CfgMagazines
{
	class 8Rnd_82mm_Mo_shells;
	class 8Rnd_60mm_Mo_shells_RF : 8Rnd_82mm_Mo_shells
	{
		ammo = "Sh_60mm_AMOS_RF";
		count = 8;
		initSpeed = 150;
		displayNameMFDFormat = "HE";
	};
	class 8Rnd_82mm_Mo_Flare_white;
	class 4Rnd_60mm_Mo_Flare_white_RF : 8Rnd_82mm_Mo_Flare_white
	{
		ammo = "Flare_60mm_AMOS_White_RF";
		count = 4;
		initSpeed = 150;
		displayNameMFDFormat = "FLARE";
	};
	class 8Rnd_82mm_Mo_Smoke_white;
	class 4Rnd_60mm_Mo_Smoke_white_RF : 8Rnd_82mm_Mo_Smoke_white
	{
		ammo = "Smoke_60mm_AMOS_White_RF";
		count = 4;
		initSpeed = 150;
		displayNameMFDFormat = "SMOKE";
	};
	class 8Rnd_82mm_Mo_guided;
	class 8Rnd_60mm_Mo_guided_RF : 8Rnd_82mm_Mo_guided
	{
		ammo = "Sh_60mm_AMOS_guided_RF";
		count = 8;
		initSpeed = 150;
		displayNameMFDFormat = "GUIDED";
	};
	class 8Rnd_82mm_Mo_LG;
	class 8Rnd_60mm_Mo_LG_RF : 8Rnd_82mm_Mo_LG
	{
		ammo = "Sh_60mm_AMOS_LG_RF";
		count = 8;
		initSpeed = 150;
		displayNameMFDFormat = "LASER GUID";
	};
	class 4Rnd_60mm_Mo_shells_RF : 8Rnd_60mm_Mo_shells_RF
	{
		count = 4;
	};
	class 2Rnd_60mm_Mo_Flare_white_RF : 4Rnd_60mm_Mo_Flare_white_RF
	{
		count = 2;
	};
	class 2Rnd_60mm_Mo_Smoke_white_RF : 4Rnd_60mm_Mo_Smoke_white_RF
	{
		count = 2;
	};
	class 4Rnd_60mm_Mo_guided_RF : 8Rnd_60mm_Mo_guided_RF
	{
		count = 4;
	};
	class 4Rnd_60mm_Mo_LG_RF : 8Rnd_60mm_Mo_LG_RF
	{
		count = 4;
	};
};
class CfgAmmo
{
	class Sh_82mm_AMOS;
	class Sh_60mm_AMOS_RF : Sh_82mm_AMOS
	{
		model = "\lxRF\weapons_RF\Ammo\shell_rf.p3d";
		hit = 120;
		indirectHit = 30;
		indirectHitRange = 12;
	};
	class Flare_82mm_AMOS_White;
	class Flare_60mm_AMOS_White_RF : Flare_82mm_AMOS_White
	{
		model = "\lxRF\weapons_RF\Ammo\shell_rf.p3d";
	};
	class Smoke_82mm_AMOS_White;
	class Smoke_60mm_AMOS_White_RF : Smoke_82mm_AMOS_White
	{
		model = "\lxRF\weapons_RF\Ammo\shell_rf.p3d";
	};
	class Sh_82mm_AMOS_guided;
	class Sh_60mm_AMOS_guided_RF : Sh_82mm_AMOS_guided
	{
		model = "\lxRF\weapons_RF\Ammo\shell_rf.p3d";
		hit = 120;
	};
	class Sh_82mm_AMOS_LG;
	class Sh_60mm_AMOS_LG_RF : Sh_82mm_AMOS_LG
	{
		model = "\lxRF\weapons_RF\Ammo\shell_rf.p3d";
		hit = 120;
	};
};
