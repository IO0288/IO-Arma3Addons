#include "script_version.hpp"
class CfgPatches
{
	class youmei_del
	{
		name = "youmei_del - IO0288";
		units[] = {};
		weapons[] = {};
		requiredVersion = 2.10;// 所需Arma3版本
		requiredAddons[] = {"Youmei"};
		author = "IO0288";
		authors[] =
			{"IO0288"};
		url = "https://git.io0288.cn/IO0288/IO-Arma3Addons";
		versionAr[] = {MAJOR, MINOR, PATCH, BUILD};
	};
};
class CfgVehicles
{
    class B_Soldier_base_F;
    class Bag_Base;
    class B_Soldier_diver_base_F;
    class Youmei : B_Soldier_base_F
    {
        scope=2;
        model="Youmei\Youmei.P3D";
        hiddenSelections[]={};
        hiddenSelectionsTextures[]={};
    };
    class Youmei_s1 : B_Soldier_base_F
    {
        scope=2;
        model="Youmei\Youmei.P3D";
        hiddenSelections[]={"Camo", "Camo1"};
        hiddenSelectionsTextures[]={"youmei\suit\suit_brown_co.paa", "youmei\skirt\skirt_red.paa"};
    };
    class Youmei_s2 : B_Soldier_base_F
    {
        scope=2;
        model="Youmei\Youmei.P3D";
        hiddenSelections[]={"Camo", "Camo1"};
        hiddenSelectionsTextures[]={"youmei\suit\suit_dark_blue_co.paa", "youmei\skirt\skirt_red.paa"};
    };
    class Youmei_s3 : B_Soldier_base_F
    {
        scope=2;
        model="Youmei\Youmei.P3D";
        hiddenSelections[]={"Camo", "Camo1"};
        hiddenSelectionsTextures[]={"youmei\suit\suit_dark_blue_co.paa", "youmei\skirt\skirt_blue.paa"};
    };
    class Youmei_s4 : B_Soldier_base_F
    {
        scope=2;
        model="Youmei\Youmei.P3D";
        hiddenSelections[]={"Camo", "Camo1"};
        hiddenSelectionsTextures[]={"youmei\suit\suit_brown_co.paa", "youmei\skirt\skirt_brown.paa"};
    };
    class Youmei_s5 : B_Soldier_base_F
    {
        scope=2;
        model="Youmei\Youmei.P3D";
        hiddenSelections[]={"Camo", "Camo1"};
        hiddenSelectionsTextures[]={"youmei\suit\suit_dark_blue_co.paa", "youmei\skirt\skirt_red_2.paa"};
    };
    class Youmei_s6 : B_Soldier_base_F
    {
        scope=2;
        model="Youmei\Youmei.P3D";
        hiddenSelections[]={"Camo", "Camo1"};
        hiddenSelectionsTextures[]={"youmei\suit\suit_blk_co.paa", "youmei\skirt\skirt_red.paa"};
    };
    class Youmei_2 : B_Soldier_base_F
    {
        scope=2;
        model="Youmei\Youmei_2.P3D";
        hiddenSelections[]={};
        hiddenSelectionsTextures[]={};
    };
    class Youmei_2_s1 : B_Soldier_base_F
    {
        scope=2;
        model="Youmei\Youmei_2.P3D";
        hiddenSelections[]={"Camo", "Camo1"};
        hiddenSelectionsTextures[]={"youmei\suit\suit_brown_co.paa", "youmei\skirt\skirt_red.paa"};
    };
    class Youmei_2_s2 : B_Soldier_base_F
    {
        scope=2;
        model="Youmei\Youmei_2.P3D";
        hiddenSelections[]={"Camo", "Camo1"};
        hiddenSelectionsTextures[]={"youmei\suit\suit_dark_blue_co.paa", "youmei\skirt\skirt_red.paa"};
    };
    class Youmei_2_s3 : B_Soldier_base_F
    {
        scope=2;
        model="Youmei\Youmei_2.P3D";
        hiddenSelections[]={"Camo", "Camo1"};
        hiddenSelectionsTextures[]={"youmei\suit\suit_dark_blue_co.paa", "youmei\skirt\skirt_blue.paa"};
    };
    class Youmei_2_s4 : B_Soldier_base_F
    {
        scope=2;
        model="Youmei\Youmei_2.P3D";
        hiddenSelections[]={"Camo", "Camo1"};
        hiddenSelectionsTextures[]={"youmei\suit\suit_brown_co.paa", "youmei\skirt\skirt_brown_2.paa"};
    };
    class Youmei_2_s5 : B_Soldier_base_F
    {
        scope=2;
        model="Youmei\Youmei_2.P3D";
        hiddenSelections[]={"Camo", "Camo1"};
        hiddenSelectionsTextures[]={"youmei\suit\suit_dark_blue_co.paa", "youmei\skirt\skirt_red_2.paa"};
    };
    class Youmei_2_s6 : B_Soldier_base_F
    {
        scope=2;
        model="Youmei\Youmei_2.P3D";
        hiddenSelections[]={"Camo", "Camo1"};
        hiddenSelectionsTextures[]={"youmei\suit\suit_blk_co.paa", "youmei\skirt\skirt_red.paa"};
    };
    class Youmei_2_w : B_Soldier_base_F
    {
        scope=2;
        model="Youmei\Youmei_2.P3D";
        hiddenSelections[]={"Camo2", "Camo4"};
        hiddenSelectionsTextures[]={"youmei\tex\SIWA_white_co.paa", "youmei\tex\shoes_black_co.paa"};
    };
    class Youmei_2_s1_w : B_Soldier_base_F
    {
        scope=2;
        model="Youmei\Youmei_2.P3D";
        hiddenSelections[]={"Camo", "Camo1", "Camo2", "Camo4"};
        hiddenSelectionsTextures[]={"youmei\suit\suit_brown_co.paa", "youmei\skirt\skirt_red.paa", "youmei\tex\SIWA_white_co.paa", "youmei\tex\shoes_black_co.paa"};
    };
    class Youmei_2_s2_w : B_Soldier_base_F
    {
        scope=2;
        model="Youmei\Youmei_2.P3D";
        hiddenSelections[]={"Camo", "Camo1", "Camo2", "Camo4"};
        hiddenSelectionsTextures[]={"youmei\suit\suit_dark_blue_co.paa", "youmei\skirt\skirt_red.paa", "youmei\tex\SIWA_white_co.paa", "youmei\tex\shoes_black_co.paa"};
    };
    class Youmei_2_s3_w : B_Soldier_base_F
    {
        scope=2;
        model="Youmei\Youmei_2.P3D";
        hiddenSelections[]={"Camo", "Camo1", "Camo2", "Camo4"};
        hiddenSelectionsTextures[]={"youmei\suit\suit_dark_blue_co.paa", "youmei\skirt\skirt_blue.paa", "youmei\tex\SIWA_white_co.paa", "youmei\tex\shoes_black_co.paa"};
    };
    class Youmei_2_s4_w : B_Soldier_base_F
    {
        scope=2;
        model="Youmei\Youmei_2.P3D";
        hiddenSelections[]={"Camo", "Camo1", "Camo2", "Camo4"};
        hiddenSelectionsTextures[]={"youmei\suit\suit_brown_co.paa", "youmei\skirt\skirt_brown_2.paa", "youmei\tex\SIWA_white_co.paa", "youmei\tex\shoes_black_co.paa"};
    };
    class Youmei_2_s5_w : B_Soldier_base_F
    {
        scope=2;
        model="Youmei\Youmei_2.P3D";
        hiddenSelections[]={"Camo", "Camo1", "Camo2", "Camo4"};
        hiddenSelectionsTextures[]={"youmei\suit\suit_dark_blue_co.paa", "youmei\skirt\skirt_red_2.paa", "youmei\tex\SIWA_white_co.paa", "youmei\tex\shoes_black_co.paa"};
    };
    class Youmei_2_s6_w : B_Soldier_base_F
    {
        scope=2;
        model="Youmei\Youmei_2.P3D";
        hiddenSelections[]={"Camo", "Camo1", "Camo2", "Camo4"};
        hiddenSelectionsTextures[]={"youmei\suit\suit_blk_co.paa", "youmei\skirt\skirt_red.paa", "youmei\tex\SIWA_white_co.paa", "youmei\tex\shoes_black_co.paa"};
    };
    class Youmei_tactical : B_Soldier_base_F
    {
        scope=2;
        model="Youmei\Youmei_tactical.P3D";
        hiddenSelections[]={};
        hiddenSelectionsTextures[]={};
    };
    class Youmei_tactical_s1 : B_Soldier_base_F
    {
        scope=2;
        model="Youmei\Youmei_tactical.P3D";
        hiddenSelections[]={"Camo", "Camo1", "Comtac", "Camo3"};
        hiddenSelectionsTextures[]={"youmei\suit\suit_brown_co.paa", "youmei\skirt\skirt_red.paa", "youmei\comtac\PeltorComtac3_blk.paa", "youmei\tactical\Mechamix_blk2_co.paa"};
    };
    class Youmei_tactical_s2 : B_Soldier_base_F
    {
        scope=2;
        model="Youmei\Youmei_tactical.P3D";
        hiddenSelections[]={"Camo", "Camo1", "Comtac", "Camo3", "Camo4"};
        hiddenSelectionsTextures[]={"youmei\suit\suit_dark_blue_co.paa", "youmei\skirt\skirt_red.paa", "youmei\comtac\PeltorComtac3.paa", "youmei\tactical\VSM_ZG_OAKLEY_PILOT.paa", "youmei\tactical\globe_blk_co.paa"};
    };
    class Youmei_tactical_s3 : B_Soldier_base_F
    {
        scope=2;
        model="Youmei\Youmei_tactical.P3D";
        hiddenSelections[]={"Camo", "Camo1", "Comtac", "Camo3", "Camo4"};
        hiddenSelectionsTextures[]={"youmei\suit\suit_dark_blue_co.paa", "youmei\skirt\skirt_blue.paa", "youmei\comtac\PeltorComtac3_blk.paa", "youmei\tactical\VSM_ZG_OAKLEY_PILOT.paa", "youmei\tactical\globe_blk_co.paa"};
    };
    class Youmei_tactical_s4 : B_Soldier_base_F
    {
        scope=2;
        model="Youmei\Youmei_tactical.P3D";
        hiddenSelections[]={"Camo", "Camo1", "Comtac", "Camo3", "Camo4"};
        hiddenSelectionsTextures[]={"youmei\suit\suit_brown_co.paa", "youmei\skirt\skirt_brown.paa", "youmei\comtac\PeltorComtac3.paa", "youmei\tactical\Mechamix_blk2_co.paa", "youmei\tactical\globe_blk_co.paa"};
    };
    class Youmei_tactical_s5 : B_Soldier_base_F
    {
        scope=2;
        model="Youmei\Youmei_tactical.P3D";
        hiddenSelections[]={"Camo", "Camo1", "Comtac", "Camo3", "Camo4"};
        hiddenSelectionsTextures[]={"youmei\suit\suit_dark_blue_co.paa", "youmei\skirt\skirt_red_2.paa", "youmei\comtac\PeltorComtac3_od.paa", "youmei\tactical\MC_co.paa", "youmei\tactical\globe_co.paa"};
    };
    class Youmei_tactical_s6 : B_Soldier_base_F
    {
        scope=2;
        model="Youmei\Youmei_tactical.P3D";
        hiddenSelections[]={"Camo", "Camo1", "Comtac", "Camo3", "Camo4"};
        hiddenSelectionsTextures[]={"youmei\suit\suit_blk_co.paa", "youmei\skirt\skirt_red.paa", "youmei\comtac\PeltorComtac3.paa", "youmei\tactical\PIG_alpha_green.paa", "youmei\tactical\globe_co.paa"};
    };
    class Youmei_tactical_2 : B_Soldier_base_F
    {
        scope=2;
        model="Youmei\Youmei_tactical_2.P3D";
        hiddenSelections[]={};
        hiddenSelectionsTextures[]={};
    };
    class Youmei_tactical_2_s1 : B_Soldier_base_F
    {
        scope=2;
        model="Youmei\Youmei_tactical_2.P3D";
        hiddenSelections[]={"Camo", "Camo1", "Comtac", "Camo3"};
        hiddenSelectionsTextures[]={"youmei\suit\suit_brown_co.paa", "youmei\skirt\skirt_red.paa", "youmei\comtac\PeltorComtac3_blk.paa", "youmei\tactical\Mechamix_blk2_co.paa"};
    };
    class Youmei_tactical_2_s2 : B_Soldier_base_F
    {
        scope=2;
        model="Youmei\Youmei_tactical_2.P3D";
        hiddenSelections[]={"Camo", "Camo1", "Comtac", "Camo3", "Camo4"};
        hiddenSelectionsTextures[]={"youmei\suit\suit_dark_blue_co.paa", "youmei\skirt\skirt_red.paa", "youmei\comtac\PeltorComtac3.paa", "youmei\tactical\VSM_ZG_OAKLEY_PILOT.paa", "youmei\tactical\globe_blk_co.paa"};
    };
    class Youmei_tactical_2_s3 : B_Soldier_base_F
    {
        scope=2;
        model="Youmei\Youmei_tactical_2.P3D";
        hiddenSelections[]={"Camo", "Camo1", "Comtac", "Camo3", "Camo4"};
        hiddenSelectionsTextures[]={"youmei\suit\suit_dark_blue_co.paa", "youmei\skirt\skirt_blue.paa", "youmei\comtac\PeltorComtac3_blk.paa", "youmei\tactical\VSM_ZG_OAKLEY_PILOT.paa", "youmei\tactical\globe_blk_co.paa"};
    };
    class Youmei_tactical_2_s4 : B_Soldier_base_F
    {
        scope=2;
        model="Youmei\Youmei_tactical_2.P3D";
        hiddenSelections[]={"Camo", "Camo1", "Comtac", "Camo3", "Camo4"};
        hiddenSelectionsTextures[]={"youmei\suit\suit_brown_co.paa", "youmei\skirt\skirt_brown.paa", "youmei\comtac\PeltorComtac3.paa", "youmei\tactical\Mechamix_blk2_co.paa", "youmei\tactical\globe_blk_co.paa"};
    };
    class Youmei_tactical_2_s5 : B_Soldier_base_F
    {
        scope=2;
        model="Youmei\Youmei_tactical_2.P3D";
        hiddenSelections[]={"Camo", "Camo1", "Comtac", "Camo3", "Camo4"};
        hiddenSelectionsTextures[]={"youmei\suit\suit_dark_blue_co.paa", "youmei\skirt\skirt_red_2.paa", "youmei\comtac\PeltorComtac3_od.paa", "youmei\tactical\MC_co.paa", "youmei\tex\shoes_co.paa"};
    };
    class Youmei_tactical_2_s6 : B_Soldier_base_F
    {
        scope=2;
        model="Youmei\Youmei_tactical_2.P3D";
        hiddenSelections[]={"Camo", "Camo1", "Comtac", "Camo3", "Camo4"};
        hiddenSelectionsTextures[]={"youmei\suit\suit_blk_co.paa", "youmei\skirt\skirt_red.paa", "youmei\comtac\PeltorComtac3.paa", "youmei\tactical\PIG_alpha_green.paa", "youmei\tex\shoes_co.paa"};
    };
    class Youmei_tactical_3 : B_Soldier_base_F
    {
        scope=2;
        model="Youmei\Youmei_tactical_3.P3D";
        hiddenSelections[]={};
        hiddenSelectionsTextures[]={};
    };
    class Youmei_tactical_3_s1 : B_Soldier_base_F
    {
        scope=2;
        model="Youmei\Youmei_tactical_3.P3D";
        hiddenSelections[]={"Camo", "Camo1", "Comtac", "Camo2", "Camo3", "Camo4"};
        hiddenSelectionsTextures[]={"youmei\suit\suit_brown_co.paa", "youmei\skirt\skirt_red.paa", "youmei\comtac\PeltorComtac3.paa", "youmei\tex\siwa_co.paa", "youmei\tactical\Mechamix_blk_co.paa", "youmei\tactical\globe_co.paa"};
    };
    class Youmei_tactical_3_s2 : B_Soldier_base_F
    {
        scope=2;
        model="Youmei\Youmei_tactical_3.P3D";
        hiddenSelections[]={"Camo", "Camo1", "Comtac", "Camo2", "Camo3", "Camo4"};
        hiddenSelectionsTextures[]={"youmei\suit\suit_dark_blue_co.paa", "youmei\skirt\skirt_red.paa", "youmei\comtac\PeltorComtac3_od.paa", "youmei\tex\siwa_co.paa", "youmei\tactical\thegun_blk_co.paa", "youmei\tactical\globe_co.paa"};
    };
    class Youmei_tactical_3_s3 : B_Soldier_base_F
    {
        scope=2;
        model="Youmei\Youmei_tactical_3.P3D";
        hiddenSelections[]={"Camo", "Camo1", "Comtac", "Camo2", "Camo3", "Camo4"};
        hiddenSelectionsTextures[]={"youmei\suit\suit_dark_blue_co.paa", "youmei\skirt\skirt_blue.paa", "youmei\comtac\PeltorComtac3.paa", "youmei\tex\siwa_co.paa", "youmei\tactical\VSM_ZG_OAKLEY_PILOT.paa", "youmei\tactical\globe_co.paa"};
    };
    class Youmei_tactical_3_s4 : B_Soldier_base_F
    {
        scope=2;
        model="Youmei\Youmei_tactical_3.P3D";
        hiddenSelections[]={"Camo", "Camo1", "Comtac", "Camo2", "Camo3", "Camo4"};
        hiddenSelectionsTextures[]={"youmei\suit\suit_brown_co.paa", "youmei\skirt\skirt_brown.paa", "youmei\comtac\PeltorComtac3_od.paa", "youmei\tex\siwa_co.paa", "youmei\tactical\Mechamix_blk2_co.paa", "youmei\tactical\globe_co.paa"};
    };
    class Youmei_tactical_3_s5 : B_Soldier_base_F
    {
        scope=2;
        model="Youmei\Youmei_tactical_3.P3D";
        hiddenSelections[]={"Camo", "Camo1", "Comtac", "Camo2", "Camo3", "Camo4"};
        hiddenSelectionsTextures[]={"youmei\suit\suit_dark_blue_co.paa", "youmei\skirt\skirt_red_2.paa", "youmei\comtac\PeltorComtac3_blk.paa", "youmei\tex\siwa_co.paa", "youmei\tactical\Mechamix_grey_co.paa", "youmei\tactical\globe_co.paa"};
    };
    class Youmei_tactical_3_s6 : B_Soldier_base_F
    {
        scope=2;
        model="Youmei\Youmei_tactical_3.P3D";
        hiddenSelections[]={"Camo", "Camo1", "Comtac", "Camo2", "Camo3", "Camo4"};
        hiddenSelectionsTextures[]={"youmei\suit\suit_blk_co.paa", "youmei\skirt\skirt_red.paa", "youmei\comtac\PeltorComtac3.paa", "youmei\tex\siwa_co.paa", "youmei\tactical\PIG_alpha_green.paa", "youmei\tactical\globe_co.paa"};
    };
    class Youmei_tactical_3_w : B_Soldier_base_F
    {
        scope=2;
        model="Youmei\Youmei_tactical_3.P3D";
        hiddenSelections[]={"Camo2", "Camo4", "Camo5"};
        hiddenSelectionsTextures[]={"youmei\tex\SIWA_white_co.paa", "youmei\tactical\globe_blk_co.paa", "youmei\tactical\lowerbody_blk_co.paa"};
    };
    class Youmei_tactical_3_s1_w : B_Soldier_base_F
    {
        scope=2;
        model="Youmei\Youmei_tactical_3.P3D";
        hiddenSelections[]={"Camo", "Camo1", "Comtac", "Camo2", "Camo3", "Camo4", "Camo5"};
        hiddenSelectionsTextures[]={"youmei\suit\suit_brown_co.paa", "youmei\skirt\skirt_red.paa", "youmei\comtac\PeltorComtac3.paa", "youmei\tex\SIWA_white_co.paa", "youmei\tactical\Mechamix_blk_co.paa", "youmei\tactical\globe_blk_co.paa", "youmei\tactical\lowerbody_blk_co.paa"};
    };
    class Youmei_tactical_3_s2_w : B_Soldier_base_F
    {
        scope=2;
        model="Youmei\Youmei_tactical_3.P3D";
        hiddenSelections[]={"Camo", "Camo1", "Comtac", "Camo2", "Camo3", "Camo4", "Camo5"};
        hiddenSelectionsTextures[]={"youmei\suit\suit_dark_blue_co.paa", "youmei\skirt\skirt_red.paa", "youmei\comtac\PeltorComtac3_od.paa", "youmei\tex\siwa_white_co.paa", "youmei\tactical\thegun_blk_co.paa", "youmei\tactical\globe_blk_co.paa", "youmei\tactical\lowerbody_blk_co.paa"};
    };
    class Youmei_tactical_3_s3_w : B_Soldier_base_F
    {
        scope=2;
        model="Youmei\Youmei_tactical_3.P3D";
        hiddenSelections[]={"Camo", "Camo1", "Comtac", "Camo2", "Camo3", "Camo4", "Camo5"};
        hiddenSelectionsTextures[]={"youmei\suit\suit_dark_blue_co.paa", "youmei\skirt\skirt_blue.paa", "youmei\comtac\PeltorComtac3.paa", "youmei\tex\SIWA_white_co.paa", "youmei\tactical\VSM_ZG_OAKLEY_PILOT.paa", "youmei\tactical\globe_blk_co.paa", "youmei\tactical\lowerbody_blk_co.paa"};
    };
    class Youmei_tactical_3_s4_w : B_Soldier_base_F
    {
        scope=2;
        model="Youmei\Youmei_tactical_3.P3D";
        hiddenSelections[]={"Camo", "Camo1", "Comtac", "Camo2", "Camo3", "Camo4", "Camo5"};
        hiddenSelectionsTextures[]={"youmei\suit\suit_brown_co.paa", "youmei\skirt\skirt_brown.paa", "youmei\comtac\PeltorComtac3_od.paa", "youmei\tex\SIWA_white_co.paa", "youmei\tactical\Mechamix_blk2_co.paa", "youmei\tactical\globe_blk_co.paa", "youmei\tactical\lowerbody_blk_co.paa"};
    };
    class Youmei_tactical_3_s5_w : B_Soldier_base_F
    {
        scope=2;
        model="Youmei\Youmei_tactical_3.P3D";
        hiddenSelections[]={"Camo", "Camo1", "Comtac", "Camo2", "Camo3", "Camo4", "Camo5"};
        hiddenSelectionsTextures[]={"youmei\suit\suit_dark_blue_co.paa", "youmei\skirt\skirt_red_2.paa", "youmei\comtac\PeltorComtac3_blk.paa", "youmei\tex\SIWA_white_co.paa", "youmei\tactical\Mechamix_grey_co.paa", "youmei\tactical\globe_blk_co.paa", "youmei\tactical\lowerbody_blk_co.paa"};
    };
    class Youmei_tactical_3_s6_w : B_Soldier_base_F
    {
        scope=2;
        model="Youmei\Youmei_tactical_3.P3D";
        hiddenSelections[]={"Camo", "Camo1", "Comtac", "Camo2", "Camo3", "Camo4", "Camo5"};
        hiddenSelectionsTextures[]={"youmei\suit\suit_blk_co.paa", "youmei\skirt\skirt_red.paa", "youmei\comtac\PeltorComtac3.paa", "youmei\tex\SIWA_white_co.paa", "youmei\tactical\PIG_alpha_green.paa", "youmei\tactical\globe_blk_co.paa", "youmei\tactical\lowerbody_blk_co.paa"};
    };
    class Youmei_tactical_4 : B_Soldier_base_F
    {
        scope=2;
        model="Youmei\Youmei_tactical_4.P3D";
        hiddenSelections[]={};
        hiddenSelectionsTextures[]={};
    };
    class Youmei_tactical_4_s1 : B_Soldier_base_F
    {
        scope=2;
        model="Youmei\Youmei_tactical_4.P3D";
        hiddenSelections[]={"Camo", "Camo1", "Comtac", "Camo2", "Camo3", "Camo4"};
        hiddenSelectionsTextures[]={"youmei\suit\suit_brown_co.paa", "youmei\skirt\skirt_red.paa", "youmei\comtac\PeltorComtac3.paa", "youmei\tex\siwa_co.paa", "youmei\tactical\Mechamix_blk_co.paa", "youmei\tex\shoes_co.paa"};
    };
    class Youmei_tactical_4_s2 : B_Soldier_base_F
    {
        scope=2;
        model="Youmei\Youmei_tactical_4.P3D";
        hiddenSelections[]={"Camo", "Camo1", "Comtac", "Camo2", "Camo3", "Camo4"};
        hiddenSelectionsTextures[]={"youmei\suit\suit_dark_blue_co.paa", "youmei\skirt\skirt_red.paa", "youmei\comtac\PeltorComtac3_od.paa", "youmei\tex\siwa_co.paa", "youmei\tactical\thegun_blk_co.paa", "youmei\tex\shoes_co.paa"};
    };
    class Youmei_tactical_4_s3 : B_Soldier_base_F
    {
        scope=2;
        model="Youmei\Youmei_tactical_4.P3D";
        hiddenSelections[]={"Camo", "Camo1", "Comtac", "Camo2", "Camo3", "Camo4"};
        hiddenSelectionsTextures[]={"youmei\suit\suit_dark_blue_co.paa", "youmei\skirt\skirt_blue.paa", "youmei\comtac\PeltorComtac3.paa", "youmei\tex\siwa_co.paa", "youmei\tactical\VSM_ZG_OAKLEY_PILOT.paa", "youmei\tex\shoes_co.paa"};
    };
    class Youmei_tactical_4_s4 : B_Soldier_base_F
    {
        scope=2;
        model="Youmei\Youmei_tactical_4.P3D";
        hiddenSelections[]={"Camo", "Camo1", "Comtac", "Camo2", "Camo3", "Camo4"};
        hiddenSelectionsTextures[]={"youmei\suit\suit_brown_co.paa", "youmei\skirt\skirt_brown.paa", "youmei\comtac\PeltorComtac3_od.paa", "youmei\tex\siwa_co.paa", "youmei\tactical\Mechamix_blk2_co.paa", "youmei\tex\shoes_co.paa"};
    };
    class Youmei_tactical_4_s5 : B_Soldier_base_F
    {
        scope=2;
        model="Youmei\Youmei_tactical_4.P3D";
        hiddenSelections[]={"Camo", "Camo1", "Comtac", "Camo2", "Camo3", "Camo4"};
        hiddenSelectionsTextures[]={"youmei\suit\suit_dark_blue_co.paa", "youmei\skirt\skirt_red_2.paa", "youmei\comtac\PeltorComtac3_blk.paa", "youmei\tex\siwa_co.paa", "youmei\tactical\Mechamix_grey_co.paa", "youmei\tex\shoes_co.paa"};
    };
    class Youmei_tactical_4_s6 : B_Soldier_base_F
    {
        scope=2;
        model="Youmei\Youmei_tactical_4.P3D";
        hiddenSelections[]={"Camo", "Camo1", "Comtac", "Camo2", "Camo3", "Camo4"};
        hiddenSelectionsTextures[]={"youmei\suit\suit_blk_co.paa", "youmei\skirt\skirt_red.paa", "youmei\comtac\PeltorComtac3.paa", "youmei\tex\siwa_co.paa", "youmei\tactical\PIG_alpha_green.paa", "youmei\tex\shoes_co.paa"};
    };
    class Youmei_tactical_4_w : B_Soldier_base_F
    {
        scope=2;
        model="Youmei\Youmei_tactical_4.P3D";
        hiddenSelections[]={"Camo2", "Camo4", "Camo5"};
        hiddenSelectionsTextures[]={"youmei\tex\SIWA_white_co.paa", "youmei\tex\shoes_black_co.paa", "youmei\tactical\lowerbody_blk_co.paa"};
    };
    class Youmei_tactical_4_s1_w : B_Soldier_base_F
    {
        scope=2;
        model="Youmei\Youmei_tactical_4.P3D";
        hiddenSelections[]={"Camo", "Camo1", "Comtac", "Camo2", "Camo3", "Camo4", "Camo5"};
        hiddenSelectionsTextures[]={"youmei\suit\suit_brown_co.paa", "youmei\skirt\skirt_red.paa", "youmei\comtac\PeltorComtac3.paa", "youmei\tex\SIWA_white_co.paa", "youmei\tactical\Mechamix_blk_co.paa", "youmei\tex\shoes_black_co.paa", "youmei\tactical\lowerbody_blk_co.paa"};
    };
    class Youmei_tactical_4_s2_w : B_Soldier_base_F
    {
        scope=2;
        model="Youmei\Youmei_tactical_4.P3D";
        hiddenSelections[]={"Camo", "Camo1", "Comtac", "Camo2", "Camo3", "Camo4", "Camo5"};
        hiddenSelectionsTextures[]={"youmei\suit\suit_dark_blue_co.paa", "youmei\skirt\skirt_red.paa", "youmei\comtac\PeltorComtac3_od.paa", "youmei\tex\siwa_white_co.paa", "youmei\tactical\thegun_blk_co.paa", "youmei\tex\shoes_black_co.paa", "youmei\tactical\lowerbody_blk_co.paa"};
    };
    class Youmei_tactical_4_s3_w : B_Soldier_base_F
    {
        scope=2;
        model="Youmei\Youmei_tactical_4.P3D";
        hiddenSelections[]={"Camo", "Camo1", "Comtac", "Camo2", "Camo3", "Camo4", "Camo5"};
        hiddenSelectionsTextures[]={"youmei\suit\suit_dark_blue_co.paa", "youmei\skirt\skirt_blue.paa", "youmei\comtac\PeltorComtac3.paa", "youmei\tex\SIWA_white_co.paa", "youmei\tactical\VSM_ZG_OAKLEY_PILOT.paa", "youmei\tex\shoes_black_co.paa", "youmei\tactical\lowerbody_blk_co.paa"};
    };
    class Youmei_tactical_4_s4_w : B_Soldier_base_F
    {
        scope=2;
        model="Youmei\Youmei_tactical_4.P3D";
        hiddenSelections[]={"Camo", "Camo1", "Comtac", "Camo2", "Camo3", "Camo4", "Camo5"};
        hiddenSelectionsTextures[]={"youmei\suit\suit_brown_co.paa", "youmei\skirt\skirt_brown.paa", "youmei\comtac\PeltorComtac3_od.paa", "youmei\tex\SIWA_white_co.paa", "youmei\tactical\Mechamix_blk2_co.paa", "youmei\tex\shoes_black_co.paa", "youmei\tactical\lowerbody_blk_co.paa"};
    };
    class Youmei_tactical_4_s5_w : B_Soldier_base_F
    {
        scope=2;
        model="Youmei\Youmei_tactical_4.P3D";
        hiddenSelections[]={"Camo", "Camo1", "Comtac", "Camo2", "Camo3", "Camo4", "Camo5"};
        hiddenSelectionsTextures[]={"youmei\suit\suit_dark_blue_co.paa", "youmei\skirt\skirt_red_2.paa", "youmei\comtac\PeltorComtac3_blk.paa", "youmei\tex\SIWA_white_co.paa", "youmei\tactical\Mechamix_grey_co.paa", "youmei\tex\shoes_black_co.paa", "youmei\tactical\lowerbody_blk_co.paa"};
    };
    class Youmei_tactical_4_s6_w : B_Soldier_base_F
    {
        scope=2;
        model="Youmei\Youmei_tactical_4.P3D";
        hiddenSelections[]={"Camo", "Camo1", "Comtac", "Camo2", "Camo3", "Camo4", "Camo5"};
        hiddenSelectionsTextures[]={"youmei\suit\suit_blk_co.paa", "youmei\skirt\skirt_red.paa", "youmei\comtac\PeltorComtac3.paa", "youmei\tex\SIWA_white_co.paa", "youmei\tactical\PIG_alpha_green.paa", "youmei\tex\shoes_black_co.paa", "youmei\tactical\lowerbody_blk_co.paa"};
    };
    class youmei_Bp : Bag_Base
    {
        author="Funny 2333";
        displayname="[Test] youmei backpack";
        hiddenSelections[]={};
        hiddenselectionstextures[]={};
        model="\youmei\youmei_bp.p3d";
        picture="";
        scope=2;
        scopeCurator=0;
        maximumLoad=320;
        mass=60;
    };
};
class cfgWeapons
{
    class ItemCore;
    class UniformItem;
    class Uniform_Base;
    class HeadgearItem;
    class H_HelmetB;
    class NVGoggles;
    class VestItem;
    class Vest_Camo_Base : ItemCore
    {
        class ItemInfo;
    };
    class youmei_beret : H_HelmetB
    {
        author="funny2333";
        scope=2;
        ace_hearing_protection=0.85;
        ace_hearing_lowerVolume=0.5;
        weaponPoolAvailable=1;
        displayName="[test] Youmei beret (style 1)";
        picture="";
        model="\youmei\youmei_beret.p3d";
        hiddenSelections[]={};
        hiddenSelectionsTextures[]={};
        descriptionShort="$STR_A3_SP_AL_II";
        class ItemInfo : HeadgearItem
        {
            mass=20;
            uniformModel="\youmei\youmei_beret.p3d";
            hiddenSelections[]={};
            hiddenSelectionsTextures[]={};
            modelSides[]={3, 1};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=15;
                    armorStructural=97;
                    damageResistance=0.51039;
                    passThrough=0.01;
                };
                class Face
                {
                    hitpointName="HitFace";
                    armor=15;
                    armorStructural=97;
                    damageResistance=0.51039;
                    passThrough=0.01;
                };
            };
        };
    };
    class youmei_beret_2 : H_HelmetB
    {
        author="funny2333";
        scope=2;
        ace_hearing_protection=0.85;
        ace_hearing_lowerVolume=0.5;
        weaponPoolAvailable=1;
        displayName="[test] Youmei beret (style 2) black";
        picture="";
        model="\youmei\youmei_beret_2.p3d";
        hiddenSelections[]={};
        hiddenSelectionsTextures[]={};
        descriptionShort="$STR_A3_SP_AL_II";
        class ItemInfo : HeadgearItem
        {
            mass=20;
            uniformModel="\youmei\youmei_beret_2.p3d";
            hiddenSelections[]={};
            hiddenSelectionsTextures[]={};
            modelSides[]={3, 1};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=15;
                    armorStructural=97;
                    damageResistance=0.51039;
                    passThrough=0.01;
                };
                class Face
                {
                    hitpointName="HitFace";
                    armor=15;
                    armorStructural=97;
                    damageResistance=0.51039;
                    passThrough=0.01;
                };
            };
        };
    };
    class youmei_beret_2_bl : H_HelmetB
    {
        author="funny2333";
        scope=2;
        ace_hearing_protection=0.85;
        ace_hearing_lowerVolume=0.5;
        weaponPoolAvailable=1;
        displayName="[test] Youmei beret (style 2) blue";
        picture="";
        model="\youmei\youmei_beret_2.p3d";
        hiddenSelections[]={"Camo"};
        hiddenSelectionsTextures[]={"Youmei\hcap\Hcap_BL.paa"};
        descriptionShort="$STR_A3_SP_AL_II";
        class ItemInfo : HeadgearItem
        {
            mass=20;
            uniformModel="\youmei\youmei_beret_2.p3d";
            hiddenSelections[]={"Camo"};
            hiddenSelectionsTextures[]={"Youmei\hcap\Hcap_BL.paa"};
            modelSides[]={3, 1};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=15;
                    armorStructural=97;
                    damageResistance=0.51039;
                    passThrough=0.01;
                };
                class Face
                {
                    hitpointName="HitFace";
                    armor=15;
                    armorStructural=97;
                    damageResistance=0.51039;
                    passThrough=0.01;
                };
            };
        };
    };
    class youmei_beret_2_cy : H_HelmetB
    {
        author="funny2333";
        scope=2;
        ace_hearing_protection=0.85;
        ace_hearing_lowerVolume=0.5;
        weaponPoolAvailable=1;
        displayName="[test] Youmei beret (style 2) yellow";
        picture="";
        model="\youmei\youmei_beret_2.p3d";
        hiddenSelections[]={"Camo"};
        hiddenSelectionsTextures[]={"Youmei\hcap\Hcap_c.paa"};
        descriptionShort="$STR_A3_SP_AL_II";
        class ItemInfo : HeadgearItem
        {
            mass=20;
            uniformModel="\youmei\youmei_beret_2.p3d";
            hiddenSelections[]={"Camo"};
            hiddenSelectionsTextures[]={"Youmei\hcap\Hcap_c.paa"};
            modelSides[]={3, 1};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=15;
                    armorStructural=97;
                    damageResistance=0.51039;
                    passThrough=0.01;
                };
                class Face
                {
                    hitpointName="HitFace";
                    armor=15;
                    armorStructural=97;
                    damageResistance=0.51039;
                    passThrough=0.01;
                };
            };
        };
    };
    class youmei_beret_2_p : H_HelmetB
    {
        author="funny2333";
        scope=2;
        ace_hearing_protection=0.85;
        ace_hearing_lowerVolume=0.5;
        weaponPoolAvailable=1;
        displayName="[test] Youmei beret (style 2) pink";
        picture="";
        model="\youmei\youmei_beret_2.p3d";
        hiddenSelections[]={"Camo"};
        hiddenSelectionsTextures[]={"Youmei\hcap\Hcap_p.paa"};
        descriptionShort="$STR_A3_SP_AL_II";
        class ItemInfo : HeadgearItem
        {
            mass=20;
            uniformModel="\youmei\youmei_beret_2.p3d";
            hiddenSelections[]={"Camo"};
            hiddenSelectionsTextures[]={"Youmei\hcap\Hcap_p.paa"};
            modelSides[]={3, 1};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=15;
                    armorStructural=97;
                    damageResistance=0.51039;
                    passThrough=0.01;
                };
                class Face
                {
                    hitpointName="HitFace";
                    armor=15;
                    armorStructural=97;
                    damageResistance=0.51039;
                    passThrough=0.01;
                };
            };
        };
    };
    class youmei_beret_2_w : H_HelmetB
    {
        author="funny2333";
        scope=2;
        ace_hearing_protection=0.85;
        ace_hearing_lowerVolume=0.5;
        weaponPoolAvailable=1;
        displayName="[test] Youmei beret (style 2) white";
        picture="";
        model="\youmei\youmei_beret_2.p3d";
        hiddenSelections[]={"Camo"};
        hiddenSelectionsTextures[]={"Youmei\hcap\Hcap_W.paa"};
        descriptionShort="$STR_A3_SP_AL_II";
        class ItemInfo : HeadgearItem
        {
            mass=20;
            uniformModel="\youmei\youmei_beret_2.p3d";
            hiddenSelections[]={"Camo"};
            hiddenSelectionsTextures[]={"Youmei\hcap\Hcap_W.paa"};
            modelSides[]={3, 1};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=15;
                    armorStructural=97;
                    damageResistance=0.51039;
                    passThrough=0.01;
                };
                class Face
                {
                    hitpointName="HitFace";
                    armor=15;
                    armorStructural=97;
                    damageResistance=0.51039;
                    passThrough=0.01;
                };
            };
        };
    };
    class youmei_beret_2_R : H_HelmetB
    {
        author="funny2333";
        scope=2;
        ace_hearing_protection=0.85;
        ace_hearing_lowerVolume=0.5;
        weaponPoolAvailable=1;
        displayName="[test] Youmei beret (style 2) Red";
        picture="";
        model="\youmei\youmei_beret_2.p3d";
        hiddenSelections[]={"Camo"};
        hiddenSelectionsTextures[]={"Youmei\hcap\Hcap_R.paa"};
        descriptionShort="$STR_A3_SP_AL_II";
        class ItemInfo : HeadgearItem
        {
            mass=20;
            uniformModel="\youmei\youmei_beret_2.p3d";
            hiddenSelections[]={"Camo"};
            hiddenSelectionsTextures[]={"Youmei\hcap\Hcap_R.paa"};
            modelSides[]={3, 1};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=15;
                    armorStructural=97;
                    damageResistance=0.51039;
                    passThrough=0.01;
                };
                class Face
                {
                    hitpointName="HitFace";
                    armor=15;
                    armorStructural=97;
                    damageResistance=0.51039;
                    passThrough=0.01;
                };
            };
        };
    };
    class youmei_1961_mc : ItemCore
    {
        scope=2;
        displayName="[Test] Youmei LBT 1961 mc ";
        author="Funny2333";
        picture="";
        model="Youmei\youmei_1961.p3d";
        hiddenSelections[]={};
        hiddenSelectionsTextures[]={};
        descriptionShort="";
        class ItemInfo : VestItem
        {
            uniformModel="Youmei\youmei_1961.p3d";
            hiddenSelections[]={};
            hiddenSelectionsTextures[]={};
            containerClass="Supply100";
            mass=10;
            passThrough=1;
            class HitpointsProtectionInfo
			// {
            //     class Chest
            //     {
            //         HitpointName="HitChest";
            //         armor=2000;
            //         PassThrough=0.01;
            //     };
            //     class Diaphragm
            //     {
            //         HitpointName="HitDiaphragm";
            //         armor=2000;
            //         PassThrough=0.01;
            //     };
            //     class Abdomen
            //     {
            //         hitpointName="HitAbdomen";
            //         armor=2000;
            //         passThrough=0.01;
            //     };
            //     class Body
            //     {
            //         hitpointName="HitBody";
            //         passThrough=0.01;
            //     };
        	// };
			{
                class Chest
                {
                    HitpointName="HitChest";
                    armor=1;
                    PassThrough=0.1;
                };
                class Diaphragm
                {
                    HitpointName="HitDiaphragm";
                    armor=15;
                    PassThrough=0.1;
                };
                class Abdomen
                {
                    hitpointName="HitAbdomen";
                    armor=15;
                    passThrough=0.2;
                };
                class Body
                {
                    hitpointName="HitBody";
                    passThrough=0.2;
                };
				class Neck
                {
                    HitpointName="HitNeck";
                    armor=10;
                    PassThrough=0.4;
                };
            };
        };
    };
    class youmei_1961_cb : ItemCore
    {
        scope=2;
        displayName="[Test] Youmei LBT 1961 cb ";
        author="Funny2333";
        picture="";
        model="Youmei\youmei_1961.p3d";
        hiddenSelections[]={"Camo1"};
        hiddenSelectionsTextures[]={"Youmei\1961\1961_cb_co.paa"};
        descriptionShort="";
        class ItemInfo : VestItem
        {
            uniformModel="Youmei\youmei_1961.p3d";
            hiddenSelections[]={"Camo1"};
            hiddenSelectionsTextures[]={"Youmei\1961\1961_cb_co.paa"};
            containerClass="Supply100";
            mass=10;
            passThrough=1;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName="HitChest";
                    armor=1;
                    PassThrough=0.1;
                };
                class Diaphragm
                {
                    HitpointName="HitDiaphragm";
                    armor=10;
                    PassThrough=0.2;
                };
                class Abdomen
                {
                    hitpointName="HitAbdomen";
                    armor=10;
                    passThrough=0.3;
                };
                class Body
                {
                    hitpointName="HitBody";
                    passThrough=0.3;
                };
				class Neck
                {
                    HitpointName="HitNeck";
                    armor=10;
                    PassThrough=0.4;
                };
            };
    };
    class youmei_vest_blk : ItemCore
    {
        scope=2;
        displayName="[Test] Youmei tactical vest black ";
        author="Funny2333";
        picture="";
        model="Youmei\youmei_vest.p3d";
        hiddenSelections[]={};
        hiddenSelectionsTextures[]={};
        descriptionShort="";
        class ItemInfo : VestItem
        {
            uniformModel="Youmei\youmei_vest.p3d";
            hiddenSelections[]={};
            hiddenSelectionsTextures[]={};
            containerClass="Supply100";
            mass=10;
            passThrough=1;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName="HitChest";
                    armor=1;
                    PassThrough=0.1;
                };
                class Diaphragm
                {
                    HitpointName="HitDiaphragm";
                    armor=10;
                    PassThrough=0.2;
                };
                class Abdomen
                {
                    hitpointName="HitAbdomen";
                    armor=10;
                    passThrough=0.3;
                };
                class Body
                {
                    hitpointName="HitBody";
                    passThrough=0.3;
                };
				class Neck
                {
                    HitpointName="HitNeck";
                    armor=10;
                    PassThrough=0.4;
                };
            };
    };
    class youmei_vest_mc : ItemCore
    {
        scope=2;
        displayName="[Test] Youmei tactical vest MC ";
        author="Funny2333";
        picture="";
        model="Youmei\youmei_vest.p3d";
        hiddenSelections[]={"Camo"};
        hiddenSelectionsTextures[]={"Youmei\tactical\Vest_mc_co.paa"};
        descriptionShort="";
        class ItemInfo : VestItem
        {
            uniformModel="Youmei\youmei_vest.p3d";
            hiddenSelections[]={"Camo"};
            hiddenSelectionsTextures[]={"Youmei\tactical\Vest_mc_co.paa"};
            containerClass="Supply100";
            mass=10;
            passThrough=1;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName="HitChest";
                    armor=1;
                    PassThrough=0.1;
                };
                class Diaphragm
                {
                    HitpointName="HitDiaphragm";
                    armor=10;
                    PassThrough=0.2;
                };
                class Abdomen
                {
                    hitpointName="HitAbdomen";
                    armor=10;
                    passThrough=0.3;
                };
                class Body
                {
                    hitpointName="HitBody";
                    passThrough=0.3;
                };
				class Neck
                {
                    HitpointName="HitNeck";
                    armor=10;
                    PassThrough=0.4;
                };
            };
    };
    class youmei_vest_tan : ItemCore
    {
        scope=2;
        displayName="[Test] Youmei tactical vest Tan ";
        author="Funny2333";
        picture="";
        model="Youmei\youmei_vest.p3d";
        hiddenSelections[]={"Camo"};
        hiddenSelectionsTextures[]={"Youmei\tactical\Vest_co.paa"};
        descriptionShort="";
        class ItemInfo : VestItem
        {
            uniformModel="Youmei\youmei_vest.p3d";
            hiddenSelections[]={"Camo"};
            hiddenSelectionsTextures[]={"Youmei\tactical\Vest_co.paa"};
            containerClass="Supply100";
            mass=10;
            passThrough=1;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName="HitChest";
                    armor=1;
                    PassThrough=0.1;
                };
                class Diaphragm
                {
                    HitpointName="HitDiaphragm";
                    armor=10;
                    PassThrough=0.2;
                };
                class Abdomen
                {
                    hitpointName="HitAbdomen";
                    armor=10;
                    passThrough=0.3;
                };
                class Body
                {
                    hitpointName="HitBody";
                    passThrough=0.3;
                };
				class Neck
                {
                    HitpointName="HitNeck";
                    armor=10;
                    PassThrough=0.4;
                };
            };
        };
    };
    class Youmeiu : Uniform_Base
    {
        scope=2;
        displayName="[Test] Youmei 1 Basics";
        picture="\Gen3ts\ico\mc.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo : UniformItem
        {
            uniformModel="-";
            uniformClass="Youmei";
            containerClass="Supply60";
            mass="22 * 1.5";
            allowedSlots[]={"701", "801", "901"};
            armor=0;
        };
    };
    class Youmeiu_s1 : Uniform_Base
    {
        scope=2;
        displayName="[Test] Youmei 1 Style 1";
        picture="\Gen3ts\ico\mc.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo : UniformItem
        {
            uniformModel="-";
            uniformClass="Youmei_s1";
            containerClass="Supply60";
            mass="22 * 1.5";
            allowedSlots[]={"701", "801", "901"};
            armor=0;
        };
    };
    class Youmeiu_s2 : Uniform_Base
    {
        scope=2;
        displayName="[Test] Youmei Style 2";
        picture="\Gen3ts\ico\mc.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo : UniformItem
        {
            uniformModel="-";
            uniformClass="Youmei_s2";
            containerClass="Supply60";
            mass="22 * 1.5";
            allowedSlots[]={"701", "801", "901"};
            armor=0;
        };
    };
    class Youmeiu_s3 : Uniform_Base
    {
        scope=2;
        displayName="[Test] Youmei 1 Style 3";
        picture="\Gen3ts\ico\mc.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo : UniformItem
        {
            uniformModel="-";
            uniformClass="Youmei_s3";
            containerClass="Supply60";
            mass="22 * 1.5";
            allowedSlots[]={"701", "801", "901"};
            armor=0;
        };
    };
    class Youmeiu_s4 : Uniform_Base
    {
        scope=2;
        displayName="[Test] Youmei 1 Style 4";
        picture="\Gen3ts\ico\mc.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo : UniformItem
        {
            uniformModel="-";
            uniformClass="Youmei_s4";
            containerClass="Supply60";
            mass="22 * 1.5";
            allowedSlots[]={"701", "801", "901"};
            armor=0;
        };
    };
    class Youmeiu_s5 : Uniform_Base
    {
        scope=2;
        displayName="[Test] Youmei 1 Style 5";
        picture="\Gen3ts\ico\mc.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo : UniformItem
        {
            uniformModel="-";
            uniformClass="Youmei_s5";
            containerClass="Supply60";
            mass="22 * 1.5";
            allowedSlots[]={"701", "801", "901"};
            armor=0;
        };
    };
    class Youmeiu_s6 : Uniform_Base
    {
        scope=2;
        displayName="[Test] Youmei 1 Style 6";
        picture="\Gen3ts\ico\mc.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo : UniformItem
        {
            uniformModel="-";
            uniformClass="Youmei_s6";
            containerClass="Supply60";
            mass="22 * 1.5";
            allowedSlots[]={"701", "801", "901"};
            armor=0;
        };
    };
    class Youmeiu_2 : Uniform_Base
    {
        scope=2;
        displayName="[Test] Youmei 2 Basics";
        picture="\Gen3ts\ico\mc.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo : UniformItem
        {
            uniformModel="-";
            uniformClass="Youmei_2";
            containerClass="Supply60";
            mass="22 * 1.5";
            allowedSlots[]={"701", "801", "901"};
            armor=0;
        };
    };
    class Youmeiu_2_s1 : Uniform_Base
    {
        scope=2;
        displayName="[Test] Youmei 2 Style 1";
        picture="\Gen3ts\ico\mc.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo : UniformItem
        {
            uniformModel="-";
            uniformClass="Youmei_2_s1";
            containerClass="Supply60";
            mass="22 * 1.5";
            allowedSlots[]={"701", "801", "901"};
            armor=0;
        };
    };
    class Youmeiu_2_s2 : Uniform_Base
    {
        scope=2;
        displayName="[Test] Youmei 2 Style 2";
        picture="\Gen3ts\ico\mc.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo : UniformItem
        {
            uniformModel="-";
            uniformClass="Youmei_2_s2";
            containerClass="Supply60";
            mass="22 * 1.5";
            allowedSlots[]={"701", "801", "901"};
            armor=0;
        };
    };
    class Youmeiu_2_s3 : Uniform_Base
    {
        scope=2;
        displayName="[Test] Youmei 2 Style 3";
        picture="\Gen3ts\ico\mc.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo : UniformItem
        {
            uniformModel="-";
            uniformClass="Youmei_2_s3";
            containerClass="Supply60";
            mass="22 * 1.5";
            allowedSlots[]={"701", "801", "901"};
            armor=0;
        };
    };
    class Youmeiu_2_s4 : Uniform_Base
    {
        scope=2;
        displayName="[Test] Youmei 2 Style 4";
        picture="\Gen3ts\ico\mc.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo : UniformItem
        {
            uniformModel="-";
            uniformClass="Youmei_2_s4";
            containerClass="Supply60";
            mass="22 * 1.5";
            allowedSlots[]={"701", "801", "901"};
            armor=0;
        };
    };
    class Youmeiu_2_s5 : Uniform_Base
    {
        scope=2;
        displayName="[Test] Youmei 2 Style 5";
        picture="\Gen3ts\ico\mc.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo : UniformItem
        {
            uniformModel="-";
            uniformClass="Youmei_2_s5";
            containerClass="Supply60";
            mass="22 * 1.5";
            allowedSlots[]={"701", "801", "901"};
            armor=0;
        };
    };
    class Youmeiu_2_s6 : Uniform_Base
    {
        scope=2;
        displayName="[Test] Youmei 2 Style 6";
        picture="\Gen3ts\ico\mc.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo : UniformItem
        {
            uniformModel="-";
            uniformClass="Youmei_2_s6";
            containerClass="Supply60";
            mass="22 * 1.5";
            allowedSlots[]={"701", "801", "901"};
            armor=0;
        };
    };
    class Youmeiu_2_w : Uniform_Base
    {
        scope=2;
        displayName="[Test](White) Youmei 2 Basics";
        picture="\Gen3ts\ico\mc.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo : UniformItem
        {
            uniformModel="-";
            uniformClass="Youmei_2_w";
            containerClass="Supply60";
            mass="22 * 1.5";
            allowedSlots[]={"701", "801", "901"};
            armor=0;
        };
    };
    class Youmeiu_2_s1_w : Uniform_Base
    {
        scope=2;
        displayName="[Test](White) Youmei 2 Style 1";
        picture="\Gen3ts\ico\mc.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo : UniformItem
        {
            uniformModel="-";
            uniformClass="Youmei_2_s1_w";
            containerClass="Supply60";
            mass="22 * 1.5";
            allowedSlots[]={"701", "801", "901"};
            armor=0;
        };
    };
    class Youmeiu_2_s2_w : Uniform_Base
    {
        scope=2;
        displayName="[Test](White) Youmei 2 Style 2";
        picture="\Gen3ts\ico\mc.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo : UniformItem
        {
            uniformModel="-";
            uniformClass="Youmei_2_s2_w";
            containerClass="Supply60";
            mass="22 * 1.5";
            allowedSlots[]={"701", "801", "901"};
            armor=0;
        };
    };
    class Youmeiu_2_s3_w : Uniform_Base
    {
        scope=2;
        displayName="[Test](White) Youmei 2 Style 3";
        picture="\Gen3ts\ico\mc.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo : UniformItem
        {
            uniformModel="-";
            uniformClass="Youmei_2_s3_w";
            containerClass="Supply60";
            mass="22 * 1.5";
            allowedSlots[]={"701", "801", "901"};
            armor=0;
        };
    };
    class Youmeiu_2_s4_w : Uniform_Base
    {
        scope=2;
        displayName="[Test](White) Youmei 2 Style 4";
        picture="\Gen3ts\ico\mc.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo : UniformItem
        {
            uniformModel="-";
            uniformClass="Youmei_2_s4_w";
            containerClass="Supply60";
            mass="22 * 1.5";
            allowedSlots[]={"701", "801", "901"};
            armor=0;
        };
    };
    class Youmeiu_2_s5_w : Uniform_Base
    {
        scope=2;
        displayName="[Test](White) Youmei 2 Style 5";
        picture="\Gen3ts\ico\mc.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo : UniformItem
        {
            uniformModel="-";
            uniformClass="Youmei_2_s5_w";
            containerClass="Supply60";
            mass="22 * 1.5";
            allowedSlots[]={"701", "801", "901"};
            armor=0;
        };
    };
    class Youmeiu_2_s6_w : Uniform_Base
    {
        scope=2;
        displayName="[Test](White) Youmei 2 Style 6";
        picture="\Gen3ts\ico\mc.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo : UniformItem
        {
            uniformModel="-";
            uniformClass="Youmei_2_s6_w";
            containerClass="Supply60";
            mass="22 * 1.5";
            allowedSlots[]={"701", "801", "901"};
            armor=0;
        };
    };
    class Youmeiu_tactical : Uniform_Base
    {
        scope=2;
        displayName="[Test] Youmei Tactical 1 Basics";
        picture="\Gen3ts\ico\mc.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo : UniformItem
        {
            uniformModel="-";
            uniformClass="Youmei_tactical";
            containerClass="Supply60";
            mass="22 * 1.5";
            allowedSlots[]={"701", "801", "901"};
            armor=0;
        };
    };
    class Youmeiu_tactical_s1 : Uniform_Base
    {
        scope=2;
        displayName="[Test] Youmei Tactical 1 Style 1";
        picture="\Gen3ts\ico\mc.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo : UniformItem
        {
            uniformModel="-";
            uniformClass="Youmei_tactical_s1";
            containerClass="Supply60";
            mass="22 * 1.5";
            allowedSlots[]={"701", "801", "901"};
            armor=0;
        };
    };
    class Youmeiu_tactical_s2 : Uniform_Base
    {
        scope=2;
        displayName="[Test] Youmei Tactical 1 Style 2";
        picture="\Gen3ts\ico\mc.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo : UniformItem
        {
            uniformModel="-";
            uniformClass="Youmei_tactical_s2";
            containerClass="Supply60";
            mass="22 * 1.5";
            allowedSlots[]={"701", "801", "901"};
            armor=0;
        };
    };
    class Youmeiu_tactical_s3 : Uniform_Base
    {
        scope=2;
        displayName="[Test] Youmei Tactical 1 Style 3";
        picture="\Gen3ts\ico\mc.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo : UniformItem
        {
            uniformModel="-";
            uniformClass="Youmei_tactical_s3";
            containerClass="Supply60";
            mass="22 * 1.5";
            allowedSlots[]={"701", "801", "901"};
            armor=0;
        };
    };
    class Youmeiu_tactical_s4 : Uniform_Base
    {
        scope=2;
        displayName="[Test] Youmei Tactical 1 Style 4";
        picture="\Gen3ts\ico\mc.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo : UniformItem
        {
            uniformModel="-";
            uniformClass="Youmei_tactical_s4";
            containerClass="Supply60";
            mass="22 * 1.5";
            allowedSlots[]={"701", "801", "901"};
            armor=0;
        };
    };
    class Youmeiu_tactical_s5 : Uniform_Base
    {
        scope=2;
        displayName="[Test] Youmei Tactical 1 Style 5";
        picture="\Gen3ts\ico\mc.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo : UniformItem
        {
            uniformModel="-";
            uniformClass="Youmei_tactical_s5";
            containerClass="Supply60";
            mass="22 * 1.5";
            allowedSlots[]={"701", "801", "901"};
            armor=0;
        };
    };
    class Youmeiu_tactical_s6 : Uniform_Base
    {
        scope=2;
        displayName="[Test] Youmei Tactical 1 Style 6";
        picture="\Gen3ts\ico\mc.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo : UniformItem
        {
            uniformModel="-";
            uniformClass="Youmei_tactical_s6";
            containerClass="Supply60";
            mass="22 * 1.5";
            allowedSlots[]={"701", "801", "901"};
            armor=0;
        };
    };
    class Youmeiu_tactical_2 : Uniform_Base
    {
        scope=2;
        displayName="[Test] Youmei Tactical 2 Basics";
        picture="\Gen3ts\ico\mc.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo : UniformItem
        {
            uniformModel="-";
            uniformClass="Youmei_tactical_2";
            containerClass="Supply60";
            mass="22 * 1.5";
            allowedSlots[]={"701", "801", "901"};
            armor=0;
        };
    };
    class Youmeiu_tactical_2_s1 : Uniform_Base
    {
        scope=2;
        displayName="[Test] Youmei Tactical 2 Style 1";
        picture="\Gen3ts\ico\mc.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo : UniformItem
        {
            uniformModel="-";
            uniformClass="Youmei_tactical_2_s1";
            containerClass="Supply60";
            mass="22 * 1.5";
            allowedSlots[]={"701", "801", "901"};
            armor=0;
        };
    };
    class Youmeiu_tactical_2_s2 : Uniform_Base
    {
        scope=2;
        displayName="[Test] Youmei Tactical 2 Style 2";
        picture="\Gen3ts\ico\mc.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo : UniformItem
        {
            uniformModel="-";
            uniformClass="Youmei_tactical_s2";
            containerClass="Supply60";
            mass="22 * 1.5";
            allowedSlots[]={"701", "801", "901"};
            armor=0;
        };
    };
    class Youmeiu_tactical_2_s3 : Uniform_Base
    {
        scope=2;
        displayName="[Test] Youmei Tactical 2 Style 3";
        picture="\Gen3ts\ico\mc.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo : UniformItem
        {
            uniformModel="-";
            uniformClass="Youmei_tactical_2_s3";
            containerClass="Supply60";
            mass="22 * 1.5";
            allowedSlots[]={"701", "801", "901"};
            armor=0;
        };
    };
    class Youmeiu_tactical_2_s4 : Uniform_Base
    {
        scope=2;
        displayName="[Test] Youmei Tactical 2 Style 4";
        picture="\Gen3ts\ico\mc.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo : UniformItem
        {
            uniformModel="-";
            uniformClass="Youmei_tactical_2_s4";
            containerClass="Supply60";
            mass="22 * 1.5";
            allowedSlots[]={"701", "801", "901"};
            armor=0;
        };
    };
    class Youmeiu_tactical_2_s5 : Uniform_Base
    {
        scope=2;
        displayName="[Test] Youmei Tactical 2 Style 5";
        picture="\Gen3ts\ico\mc.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo : UniformItem
        {
            uniformModel="-";
            uniformClass="Youmei_tactical_2_s5";
            containerClass="Supply60";
            mass="22 * 1.5";
            allowedSlots[]={"701", "801", "901"};
            armor=0;
        };
    };
    class Youmeiu_tactical_2_s6 : Uniform_Base
    {
        scope=2;
        displayName="[Test] Youmei Tactical 2 Style 6";
        picture="\Gen3ts\ico\mc.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo : UniformItem
        {
            uniformModel="-";
            uniformClass="Youmei_tactical_2_s6";
            containerClass="Supply60";
            mass="22 * 1.5";
            allowedSlots[]={"701", "801", "901"};
            armor=0;
        };
    };
    class Youmeiu_tactical_3 : Uniform_Base
    {
        scope=2;
        displayName="[Test] Youmei Tactical 3 Basics";
        picture="\Gen3ts\ico\mc.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo : UniformItem
        {
            uniformModel="-";
            uniformClass="Youmei_tactical_3";
            containerClass="Supply60";
            mass="22 * 1.5";
            allowedSlots[]={"701", "801", "901"};
            armor=0;
        };
    };
    class Youmeiu_tactical_3_s1 : Uniform_Base
    {
        scope=2;
        displayName="[Test] Youmei Tactical 3 Style 1";
        picture="\Gen3ts\ico\mc.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo : UniformItem
        {
            uniformModel="-";
            uniformClass="Youmei_tactical_3_s1";
            containerClass="Supply60";
            mass="22 * 1.5";
            allowedSlots[]={"701", "801", "901"};
            armor=0;
        };
    };
    class Youmeiu_tactical_3_s2 : Uniform_Base
    {
        scope=2;
        displayName="[Test] Youmei Tactical 3 Style 2";
        picture="\Gen3ts\ico\mc.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo : UniformItem
        {
            uniformModel="-";
            uniformClass="Youmei_tactical_3_s2";
            containerClass="Supply60";
            mass="22 * 1.5";
            allowedSlots[]={"701", "801", "901"};
            armor=0;
        };
    };
    class Youmeiu_tactical_3_s3 : Uniform_Base
    {
        scope=2;
        displayName="[Test] Youmei Tactical 3 Style 3";
        picture="\Gen3ts\ico\mc.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo : UniformItem
        {
            uniformModel="-";
            uniformClass="Youmei_tactical_3_s3";
            containerClass="Supply60";
            mass="22 * 1.5";
            allowedSlots[]={"701", "801", "901"};
            armor=0;
        };
    };
    class Youmeiu_tactical_3_s4 : Uniform_Base
    {
        scope=2;
        displayName="[Test] Youmei Tactical 3 Style 4";
        picture="\Gen3ts\ico\mc.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo : UniformItem
        {
            uniformModel="-";
            uniformClass="Youmei_tactical_3_s4";
            containerClass="Supply60";
            mass="22 * 1.5";
            allowedSlots[]={"701", "801", "901"};
            armor=0;
        };
    };
    class Youmeiu_tactical_3_s5 : Uniform_Base
    {
        scope=2;
        displayName="[Test] Youmei Tactical 3 Style 5";
        picture="\Gen3ts\ico\mc.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo : UniformItem
        {
            uniformModel="-";
            uniformClass="Youmei_tactical_3_s4";
            containerClass="Supply60";
            mass="22 * 1.5";
            allowedSlots[]={"701", "801", "901"};
            armor=0;
        };
    };
    class Youmeiu_tactical_3_s6 : Uniform_Base
    {
        scope=2;
        displayName="[Test] Youmei Tactical 3 Style 6";
        picture="\Gen3ts\ico\mc.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo : UniformItem
        {
            uniformModel="-";
            uniformClass="Youmei_tactical_3_s6";
            containerClass="Supply60";
            mass="22 * 1.5";
            allowedSlots[]={"701", "801", "901"};
            armor=0;
        };
    };
    class Youmeiu_tactical_3_w : Uniform_Base
    {
        scope=2;
        displayName="[Test](White) Youmei Tactical 3 Basics";
        picture="\Gen3ts\ico\mc.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo : UniformItem
        {
            uniformModel="-";
            uniformClass="Youmei_tactical_3_w";
            containerClass="Supply60";
            mass="22 * 1.5";
            allowedSlots[]={"701", "801", "901"};
            armor=0;
        };
    };
    class Youmeiu_tactical_3_s1_w : Uniform_Base
    {
        scope=2;
        displayName="[Test](White) Youmei Tactical 3 Style 1";
        picture="\Gen3ts\ico\mc.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo : UniformItem
        {
            uniformModel="-";
            uniformClass="Youmei_tactical_3_s1_w";
            containerClass="Supply60";
            mass="22 * 1.5";
            allowedSlots[]={"701", "801", "901"};
            armor=0;
        };
    };
    class Youmeiu_tactical_3_s2_w : Uniform_Base
    {
        scope=2;
        displayName="[Test](White) Youmei Tactical 3 Style 2";
        picture="\Gen3ts\ico\mc.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo : UniformItem
        {
            uniformModel="-";
            uniformClass="Youmei_tactical_3_s2_w";
            containerClass="Supply60";
            mass="22 * 1.5";
            allowedSlots[]={"701", "801", "901"};
            armor=0;
        };
    };
    class Youmeiu_tactical_3_s3_w : Uniform_Base
    {
        scope=2;
        displayName="[Test](White) Youmei Tactical 3 Style 3";
        picture="\Gen3ts\ico\mc.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo : UniformItem
        {
            uniformModel="-";
            uniformClass="Youmei_tactical_3_s3_w";
            containerClass="Supply60";
            mass="22 * 1.5";
            allowedSlots[]={"701", "801", "901"};
            armor=0;
        };
    };
    class Youmeiu_tactical_3_s4_w : Uniform_Base
    {
        scope=2;
        displayName="[Test](White) Youmei Tactical 3 Style 4";
        picture="\Gen3ts\ico\mc.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo : UniformItem
        {
            uniformModel="-";
            uniformClass="Youmei_tactical_3_s4_w";
            containerClass="Supply60";
            mass="22 * 1.5";
            allowedSlots[]={"701", "801", "901"};
            armor=0;
        };
    };
    class Youmeiu_tactical_3_s5_w : Uniform_Base
    {
        scope=2;
        displayName="[Test](White) Youmei Tactical 3 Style 5";
        picture="\Gen3ts\ico\mc.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo : UniformItem
        {
            uniformModel="-";
            uniformClass="Youmei_tactical_3_s4_w";
            containerClass="Supply60";
            mass="22 * 1.5";
            allowedSlots[]={"701", "801", "901"};
            armor=0;
        };
    };
    class Youmeiu_tactical_3_s6_w : Uniform_Base
    {
        scope=2;
        displayName="[Test](White) Youmei Tactical 3 Style 6";
        picture="\Gen3ts\ico\mc.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo : UniformItem
        {
            uniformModel="-";
            uniformClass="Youmei_tactical_3_s6_w";
            containerClass="Supply60";
            mass="22 * 1.5";
            allowedSlots[]={"701", "801", "901"};
            armor=0;
        };
    };
    class Youmeiu_tactical_4 : Uniform_Base
    {
        scope=2;
        displayName="[Test] Youmei Tactical 4 Basics";
        picture="\Gen3ts\ico\mc.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo : UniformItem
        {
            uniformModel="-";
            uniformClass="Youmei_tactical_4";
            containerClass="Supply60";
            mass="22 * 1.5";
            allowedSlots[]={"701", "801", "901"};
            armor=0;
        };
    };
    class Youmeiu_tactical_4_s1 : Uniform_Base
    {
        scope=2;
        displayName="[Test] Youmei Tactical 4 Style 1";
        picture="\Gen3ts\ico\mc.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo : UniformItem
        {
            uniformModel="-";
            uniformClass="Youmei_tactical_4_s1";
            containerClass="Supply60";
            mass="22 * 1.5";
            allowedSlots[]={"701", "801", "901"};
            armor=0;
        };
    };
    class Youmeiu_tactical_4_s2 : Uniform_Base
    {
        scope=2;
        displayName="[Test] Youmei Tactical 4 Style 2";
        picture="\Gen3ts\ico\mc.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo : UniformItem
        {
            uniformModel="-";
            uniformClass="Youmei_tactical_4_s2";
            containerClass="Supply60";
            mass="22 * 1.5";
            allowedSlots[]={"701", "801", "901"};
            armor=0;
        };
    };
    class Youmeiu_tactical_4_s3 : Uniform_Base
    {
        scope=2;
        displayName="[Test] Youmei Tactical 4 Style 3";
        picture="\Gen3ts\ico\mc.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo : UniformItem
        {
            uniformModel="-";
            uniformClass="Youmei_tactical_4_s3";
            containerClass="Supply60";
            mass="22 * 1.5";
            allowedSlots[]={"701", "801", "901"};
            armor=0;
        };
    };
    class Youmeiu_tactical_4_s4 : Uniform_Base
    {
        scope=2;
        displayName="[Test] Youmei Tactical 4 Style 4";
        picture="\Gen3ts\ico\mc.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo : UniformItem
        {
            uniformModel="-";
            uniformClass="Youmei_tactical_4_s4";
            containerClass="Supply60";
            mass="22 * 1.5";
            allowedSlots[]={"701", "801", "901"};
            armor=0;
        };
    };
    class Youmeiu_tactical_4_s5 : Uniform_Base
    {
        scope=2;
        displayName="[Test] Youmei Tactical 4 Style 5";
        picture="\Gen3ts\ico\mc.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo : UniformItem
        {
            uniformModel="-";
            uniformClass="Youmei_tactical_4_s4";
            containerClass="Supply60";
            mass="22 * 1.5";
            allowedSlots[]={"701", "801", "901"};
            armor=0;
        };
    };
    class Youmeiu_tactical_4_s6 : Uniform_Base
    {
        scope=2;
        displayName="[Test] Youmei Tactical 4 Style 6";
        picture="\Gen3ts\ico\mc.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo : UniformItem
        {
            uniformModel="-";
            uniformClass="Youmei_tactical_4_s6";
            containerClass="Supply60";
            mass="22 * 1.5";
            allowedSlots[]={"701", "801", "901"};
            armor=0;
        };
    };
    class Youmeiu_tactical_4_w : Uniform_Base
    {
        scope=2;
        displayName="[Test](White) Youmei Tactical 4 Basics";
        picture="\Gen3ts\ico\mc.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo : UniformItem
        {
            uniformModel="-";
            uniformClass="Youmei_tactical_4_w";
            containerClass="Supply60";
            mass="22 * 1.5";
            allowedSlots[]={"701", "801", "901"};
            armor=0;
        };
    };
    class Youmeiu_tactical_4_s1_w : Uniform_Base
    {
        scope=2;
        displayName="[Test](White) Youmei Tactical 4 Style 1";
        picture="\Gen3ts\ico\mc.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo : UniformItem
        {
            uniformModel="-";
            uniformClass="Youmei_tactical_4_s1_w";
            containerClass="Supply60";
            mass="22 * 1.5";
            allowedSlots[]={"701", "801", "901"};
            armor=0;
        };
    };
    class Youmeiu_tactical_4_s2_w : Uniform_Base
    {
        scope=2;
        displayName="[Test](White) Youmei Tactical 4 Style 2";
        picture="\Gen3ts\ico\mc.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo : UniformItem
        {
            uniformModel="-";
            uniformClass="Youmei_tactical_4_s2_w";
            containerClass="Supply60";
            mass="22 * 1.5";
            allowedSlots[]={"701", "801", "901"};
            armor=0;
        };
    };
    class Youmeiu_tactical_4_s3_w : Uniform_Base
    {
        scope=2;
        displayName="[Test](White) Youmei Tactical 4 Style 3";
        picture="\Gen3ts\ico\mc.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo : UniformItem
        {
            uniformModel="-";
            uniformClass="Youmei_tactical_4_s3_w";
            containerClass="Supply60";
            mass="22 * 1.5";
            allowedSlots[]={"701", "801", "901"};
            armor=0;
        };
    };
    class Youmeiu_tactical_4_s4_w : Uniform_Base
    {
        scope=2;
        displayName="[Test](White) Youmei Tactical 4 Style 4";
        picture="\Gen3ts\ico\mc.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo : UniformItem
        {
            uniformModel="-";
            uniformClass="Youmei_tactical_4_s4_w";
            containerClass="Supply60";
            mass="22 * 1.5";
            allowedSlots[]={"701", "801", "901"};
            armor=0;
        };
    };
    class Youmeiu_tactical_4_s5_w : Uniform_Base
    {
        scope=2;
        displayName="[Test](White) Youmei Tactical 4 Style 5";
        picture="\Gen3ts\ico\mc.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo : UniformItem
        {
            uniformModel="-";
            uniformClass="Youmei_tactical_4_s4_w";
            containerClass="Supply60";
            mass="22 * 1.5";
            allowedSlots[]={"701", "801", "901"};
            armor=0;
        };
    };
    class Youmeiu_tactical_4_s6_w : Uniform_Base
    {
        scope=2;
        displayName="[Test](White) Youmei Tactical 4 Style 6";
        picture="\Gen3ts\ico\mc.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo : UniformItem
        {
            uniformModel="-";
            uniformClass="Youmei_tactical_4_s6_w";
            containerClass="Supply60";
            mass="22 * 1.5";
            allowedSlots[]={"701", "801", "901"};
            armor=0;
        };
    };
    class youmei_NVG : NVGoggles
    {
        author="ZAIA";
        scope=2;
        displayName="[Test] Youmei invisible NVG";
        model="\Youmei\.p3d";
        hiddenSelections[]={};
        hiddenselectionstextures[]={};
        picture="";
        modelOptics="";
        colorPreset[]={0, {0, 0, 0, 0}, {0.7, 0.3, 1.3, 0.9}, {1, 1, 6, 0}};
        class Library
        {
            libTextDesc="";
        };
        descriptionShort="invisible NVG";
        visionMode[]={"Normal", "NVG", "TI"};
        class ItemInfo
        {
            type=616;
            hmdType=0;
            uniformModel="\Youmei\.p3d";
            hiddenSelections[]={};
            hiddenselectionstextures[]={};
            modelOff="\Youmei\.p3d";
            mass=13.624781;
        };
        scopeCurator=2;
        weaponPoolAvailable=1;
    };
};
class CfgGlasses
{
    class None;
    class Youmei_okl_2 : None
    {
        scope=2;
        dlc="";
        displayname="[Test] youmei oakley 3.0 classes";
        author="Youmei";
        model="Youmei\youmei_oakley.p3d";
        picture="";
        hiddenSelections[]={};
        hiddenSelectionsTextures[]={};
        identityTypes[]={};
        class ItemInfo
        {
            type=616;
            hmdType=0;
            model="Youmei\youmei_oakley.p3d";
            mass=4;
            hiddenSelections[]={};
            hiddenSelectionsTextures[]={};
        };
    };
    class Youmei_okl_3 : None
    {
        scope=2;
        dlc="";
        displayname="[Test] youmei oakley 3.0 classes (black)";
        author="Youmei";
        model="Youmei\youmei_oakley.p3d";
        picture="";
        hiddenSelections[]={"Camo", "Camo1"};
        hiddenSelectionsTextures[]={"Youmei\oakley\glasses_m_frame_co.paa", "Youmei\oakley\glass_b.paa"};
        identityTypes[]={};
        class ItemInfo
        {
            type=616;
            hmdType=0;
            model="Youmei\youmei_oakley.p3d";
            mass=4;
            hiddenSelections[]={"Camo", "Camo1"};
            hiddenSelectionsTextures[]={"Youmei\oakley\glasses_m_frame_co.paa", "Youmei\oakley\glass_b.paa"};
        };
    };
    class Youmei_okl_4 : None
    {
        scope=2;
        dlc="";
        displayname="[Test] youmei oakley 3.0 classes (Red)";
        author="Youmei";
        model="Youmei\youmei_oakley.p3d";
        picture="";
        hiddenSelections[]={"Camo", "Camo1"};
        hiddenSelectionsTextures[]={"Youmei\oakley\glasses_m_frame_co.paa", "Youmei\oakley\glass_R.paa"};
        identityTypes[]={};
        class ItemInfo
        {
            type=616;
            hmdType=0;
            model="Youmei\youmei_oakley.p3d";
            mass=4;
            hiddenSelections[]={"Camo", "Camo1"};
            hiddenSelectionsTextures[]={"Youmei\oakley\glasses_m_frame_co.paa", "Youmei\oakley\glass_R.paa"};
        };
    };
    class Youmei_okl_5 : None
    {
        scope=2;
        dlc="";
        displayname="[Test] youmei oakley 3.0 classes (Yellow)";
        author="Youmei";
        model="Youmei\youmei_oakley.p3d";
        picture="";
        hiddenSelections[]={"Camo", "Camo1"};
        hiddenSelectionsTextures[]={"Youmei\oakley\glasses_m_frame_co.paa", "Youmei\oakley\glass_Y.paa"};
        identityTypes[]={};
        class ItemInfo
        {
            type=616;
            hmdType=0;
            model="Youmei\youmei_oakley.p3d";
            mass=4;
            hiddenSelections[]={"Camo", "Camo1"};
            hiddenSelectionsTextures[]={"Youmei\oakley\glasses_m_frame_co.paa", "Youmei\oakley\glass_Y.paa"};
        };
    };
};
