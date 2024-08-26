////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.45
//https://mikero.bytex.digital/Downloads
//'now' is Tue Aug 27 00:19:49 2024 : 'file' last modified on Mon Sep 11 19:57:44 2017
////////////////////////////////////////////////////////////////////

#define _ARMA_

//(212 Enums)
enum {
	cmd_stay_back = 4,
	cmd_move = 12,
	cmd_fire = 27,
	cmd_watch = 28,
	cmd_keep_depth_undersurface = 47,
	cmd_reply_fail = 77,
	cmd_report = 81,
	cmd_radio_custom_2 = 101,
	cmd_unit_10 = 119,
	cmd_select_yellow = 128,
	cmd_vehicle_4 = 132,
	cmd_vehicle_10 = 138,
	cmd_mp_channel_side = 143,
	cmd_deselect_team_from_bar = 168,
	cmd_take_backpack = 181,
	destructengine = 2,
	cmd_expect = 11,
	cmd_watch_around = 29,
	cmd_watch_auto = 30,
	cmd_team_red = 56,
	cmd_assign_blue = 63,
	cmd_radio_hotel = 73,
	cmd_radio_juliet = 75,
	cmd_reply_injured = 91,
	cmd_reply_out_of_faks = 92,
	cmd_radio_custom_3 = 102,
	cmd_unit_11 = 120,
	cmd_vehicle_5 = 133,
	cmd_vehicle_11 = 139,
	cmd_hc_select_team_from_bar = 178,
	destructdefault = 6,
	destructwreck = 7,
	cmd_stop = 10,
	cmd_loose_form = 23,
	cmd_stealth = 32,
	cmd_drop_carried = 41,
	cmd_team_yellow = 59,
	cmd_radio_india = 74,
	cmd_reply_ammo_low = 89,
	cmd_radio_custom_4 = 103,
	cmd_unit_12 = 121,
	cmd_vehicle_6 = 134,
	cmd_vehicle_12 = 140,
	cmd_mp_channel_vehicle = 146,
	cmd_disassemble_weapon = 183,
	destructtree = 3,
	destructtent = 4,
	cmd_aware = 34,
	cmd_safe = 35,
	cmd_healbleeding = 36,
	cmd_keep_depth_abovesurface = 48,
	cmd_keep_depth_bottom = 49,
	cmd_support_done = 98,
	cmd_radio_custom_5 = 104,
	cmd_my_vehicle = 123,
	cmd_select_main = 124,
	cmd_vehicle_7 = 135,
	cmd_conversation = 147,
	cmd_stop_auto = 149,
	cmd_disable_mine = 162,
	cmd_join_all = 169,
	cmd_switch_to_selected = 171,
	stabilizedinaxisx = 1,
	stabilizedinaxesxyz = 4,
	cmd_form_stagcol = 14,
	cmd_engage = 22,
	cmd_heal = 37,
	cmd_team_main = 55,
	cmd_radio_bravo = 67,
	cmd_reply_copy = 78,
	cmd_radio_custom_6 = 105,
	cmd_vehicle_8 = 136,
	cmd_single_units = 141,
	cmd_getin_auto = 151,
	cmd_hold_fire_auto = 160,
	cmd_fire_at_position_ammo = 186,
	stabilizedinaxisy = 2,
	cmd_radio_alpha = 66,
	cmd_reply_done = 76,
	cmd_reply_killed = 88,
	cmd_radio_custom_7 = 106,
	cmd_unit_1 = 110,
	cmd_vehicle_9 = 137,
	cmd_open_fire_auto = 159,
	cmd_openparachute = 180,
	stabilizedinaxesboth = 3,
	destructno = 0,
	cmd_getin = 0,
	cmd_next_waypoint = 7,
	cmd_unloadfrom = 43,
	cmd_pos_auto = 54,
	cmd_reply_repeat = 79,
	cmd_reply_one_less = 85,
	cmd_support_refuel = 97,
	cmd_radio_custom = 99,
	cmd_radio_custom_8 = 107,
	cmd_unit_2 = 111,
	cmd_units_all = 122,
	cmd_select_green = 126,
	cmd_mp_channel_command = 144,
	cmd_mp_channel_group = 145,
	_hintsw = 25,
	_hintsh = 4,
	cmd_action = 2,
	cmd_form_echleft = 16,
	cmd_combat = 33,
	cmd_repair_vehicle = 39,
	cmd_team_green = 57,
	cmd_assign_main = 60,
	cmd_team_dissolve = 65,
	cmd_reply_hit = 84,
	cmd_reply_firenotready = 87,
	cmd_support_ambulance = 94,
	cmd_radio_custom_9 = 108,
	cmd_unit_3 = 112,
	cmd_select_red = 125,
	cmd_rearm_auto = 152,
	cmd_fire_at_position_auto = 154,
	cmd_join_auto = 158,
	_hintsx = 0,
	cmd_form_wedge = 15,
	cmd_heal_self = 38,
	cmd_assign_green = 62,
	cmd_unit_4 = 113,
	cmd_attack_auto = 153,
	cmd_switch_to_leader = 170,
	cmd_assemble_weapon = 182,
	htnone = 0,
	_hintsy = 0,
	stabilizedinaxesnone = 0,
	cmd_join = 9,
	cmd_form_diamond = 20,
	cmd_keep_form = 24,
	cmd_keep_depth_relative_up = 44,
	cmd_suppress = 50,
	cmd_reply_under_fire = 83,
	cmd_support_repair = 95,
	cmd_support_rearm = 96,
	cmd_unit_5 = 114,
	cmd_getout = 1,
	cmd_flank_right = 6,
	cmd_form_column = 13,
	cmd_keep_depth_relative_down = 45,
	cmd_radio_foxtrot = 71,
	cmd_reply_fuel_low = 90,
	cmd_unit_6 = 115,
	cmd_complex_command = 161,
	cmd_select_unit_from_bar = 163,
	cmd_notarget = 172,
	cmd_hc_select_auto = 173,
	cmd_hc_deselect_unit_from_bar = 177,
	htmoveright = 3,
	sptpercents = 1,
	_xspacing = 0,
	cmd_form_vee = 18,
	cmd_form_file = 21,
	cmd_keep_depth_leader = 46,
	cmd_pos_up = 51,
	cmd_pos_down = 53,
	cmd_radio_echo = 70,
	cmd_radio_golf = 72,
	cmd_reply_fireready = 86,
	cmd_unit_7 = 116,
	cmd_mp_channel_global = 142,
	cmd_select_vehicle_from_bar = 165,
	cmd_deselect_vehicle_from_bar = 166,
	cmd_hc_select_auto_add = 174,
	htfade = 1,
	htmoveleft = 2,
	destructman = 5,
	cmd_hide = 8,
	cmd_form_echright = 17,
	cmd_hold_fire = 25,
	cmd_putin = 42,
	cmd_assign_red = 61,
	cmd_reply_engaging = 82,
	cmd_unit_8 = 117,
	cmd_select_blue = 127,
	cmd_vehicle_1 = 129,
	cmd_deselect_unit_from_bar = 164,
	cmd_hc_deselect_auto = 175,
	cmd_fire_auto = 185,
	sptplain = 0,
	_yspacing = 0,
	cmd_flank_left = 5,
	cmd_open_fire = 26,
	cmd_team_blue = 58,
	cmd_radio_custom_0 = 109,
	cmd_unit_9 = 118,
	cmd_vehicle_2 = 130,
	cmd_select_auto = 155,
	cmd_hc_select_unit_from_bar = 176,
	cmd_hc_deselect_team_from_bar = 179,
	cmd_engage_auto = 184,
	destructbuilding = 1,
	cmd_advance = 3,
	cmd_form_line = 19,
	cmd_watch_dir = 31,
	cmd_carry = 40,
	cmd_pos_middle = 52,
	cmd_assign_yellow = 64,
	cmd_radio_charlie = 68,
	cmd_radio_delta = 69,
	cmd_reply_where_are_you = 80,
	cmd_support_medic = 93,
	cmd_radio_custom_1 = 100,
	cmd_vehicle_3 = 131,
	cmd_move_auto = 148,
	cmd_watch_ctx = 150,
	cmd_select_auto_add = 156,
	cmd_deselect_auto = 157,
	cmd_select_team_from_bar = 167
};

class CfgPatches
{
	class A3_Editor_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		name = "Arma 3 - Legacy 3D Editor";
		url = "https://www.arma3.com";
		requiredAddons[] = {"A3_Data_F"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};
class CfgEditorObjects
{
	prefix_editor = "A3\editor_f\data\scripts\prefix.hpp";
	postfix_editor = "A3\editor_f\data\scripts\postfix.hpp";
	center = "A3\editor_f\data\scripts\center.hpp";
	group = "A3\editor_f\data\scripts\group.hpp";
	unit = "A3\editor_f\data\scripts\unit.hpp";
	vehicle = "A3\editor_f\data\scripts\vehicle.hpp";
	soundSource = "A3\editor_f\data\scripts\soundSource.hpp";
	mine = "A3\editor_f\data\scripts\mine.hpp";
	intel = "A3\editor_f\data\scripts\intel.hpp";
	marker = "A3\editor_f\data\scripts\marker.hpp";
	trigger = "A3\editor_f\data\scripts\trigger.hpp";
	waypoint = "A3\editor_f\data\scripts\waypoint.hpp";
	guardedPoint = "A3\editor_f\data\scripts\guardedPoint.hpp";
	location = "A3\editor_f\data\scripts\location.hpp";
	dynOGrabber = "A3\editor_f\data\scripts\dynOGrabber.hpp";
	objectComposition = "A3\editor_f\data\scripts\objectComposition.hpp";
	test = "A3\editor_f\data\scripts\test.hpp";
};
class CfgNonAIVehicles
{
	class Editor_Proxy_Composition
	{
		scope = 1;
		model = "\A3\editor_f\data\composition_proxy\composition_proxy";
		displayName = "Editor proxy - Object composition";
		autocenter = 0;
		reversed = 0;
		animated = 0;
		simulation = "flag";
		selectionFabric = "";
	};
};
class DefaultFont
{
	font = "RobotoCondensed";
};
class ScrollBar
{
	color[] = {1,1,1,0.6};
	colorActive[] = {1,1,1,1};
	colorDisabled[] = {1,1,1,0.3};
	thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
	arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
	arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
	border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
	shadow = 0;
	scrollSpeed = 0.06;
	width = 0;
	height = 0;
	autoScrollEnabled = 0;
	autoScrollSpeed = -1;
	autoScrollDelay = 5;
	autoScrollRewind = 0;
};
class RscControlsGroup
{
	class VScrollbar;
	class HScrollbar;
};
class RscControlsGroupNoScrollbars;
class RscControlsGroupNoHScrollbars;
class RscControlsGroupNoVScrollbars;
class RscListNBox;
class DefaultTextAttributes;
class RscButtonImages;
class RscText;
class RscLine;
class RscTree;
class RscTitle;
class RscPicture;
class RscPictureKeepAspect;
class RscStructuredText;
class RscObject;
class RscActiveText;
class RscActivePicture;
class RscButton;
class RscButtonTextOnly;
class RscShortcutButton;
class RscShortcutButtonMain;
class RscButtonEditor;
class RscIGUIShortcutButton;
class RscGearShortcutButton;
class RscButtonMenu;
class RscButtonMenuOK;
class RscButtonMenuCancel;
class RscButtonMenuSteam;
class RscCheckbox;
class RscProgress;
class RscLoadingText;
class RscListBox;
class RscListBoxKeys;
class RscIGUIListBox;
class RscIGUIListNBox;
class RscEdit;
class RscSlider;
class RscXSliderH;
class RscXListBox;
class RscFrame;
class RscBackground;
class RscBackgroundStripeTop;
class RscBackgroundStripeBottom;
class RscBackgroundGUI;
class RscBackgroundGUILeft;
class RscBackgroundGUIRight;
class RscBackgroundGUIBottom;
class RscBackgroundGUITop;
class RscBackgroundGUIDark;
class RscBackgroundLogo;
class RscHTML;
class RscHitZones;
class RscMapControl;
class RscMapControlEmpty;
class RscMap;
class RscCompass;
class RscWatch;
class RscObjectives;
class IGUIBack;
class RscStandardDisplay;
class RscLineBreak;
class RscCombo;
class RscDisplayBackgroundStripes;
class RscToolbox;
class RscVignette;
class RscMapControlTooltip;
class CA_Mainback;
class CA_Back;
class CA_Title_Back;
class CA_Black_Back;
class CA_Title;
class CA_Logo;
class CA_Logo_Small;
class CA_RscButton;
class CA_RscButton_dialog;
class CA_Ok;
class CA_Ok_image;
class CA_Ok_image2;
class CA_Ok_text;
class RscDisplayMain: RscStandardDisplay
{
	class controls
	{
		class Button3DEditor: RscButton
		{
			idc = 115;
			shortcuts[] = {"512 + 0x20"};
			x = -10;
			y = -10;
			w = 0;
			h = 0;
			colorBackground[] = {0,0,0,0};
			onButtonClick = "!cheatsenabled";
		};
	};
};
class RscDisplayMissionEditor
{
	class ControlsBackground
	{
		class Background: RscListBox
		{
			x = -1;
			y = -1;
			w = 3;
			h = 3;
		};
		class CA_M_Map: RscMapControl
		{
			x = "safezoneXAbs";
			y = "safezoneY";
			w = "safezoneWAbs";
			h = "safezoneH";
			class Legend
			{
				x = 0.03;
				y = 0.03;
				w = 0.299;
				h = 0.122;
				font = "RobotoCondensed";
				sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
				colorBackground[] = {0.906,0.901,0.88,0.8};
				color[] = {0,0,0,1};
			};
			moveOnEdges = 0;
			iconCamera = "\A3\ui_f\data\GUI\Rsc\RscDisplayMissionEditor\iconCamera_ca.paa";
			iconCameraColor[] = {0.8,0.6,0.05,0.8};
			iconCameraSize = 24;
		};
	};
	class Controls
	{
		delete B_Save;
		delete B_Restart;
		delete B_Clear;
		delete B_Preview;
		delete B_Map;
		delete B_Exit;
		delete B_Load;
		delete T_Frame1;
		delete M_Map;
		delete T_Help1;
		class Disclaimer: RscStructuredText
		{
			idc = 903;
			x = "safezoneX";
			y = "safezoneY";
			w = "safezoneW";
			h = "0.03 * 3";
			text = "<t color='#ff0000' align='center' shadow='0'>GAME 2 EDITOR.<br />OBSOLETE, NOT FOR RELEASE!</t>";
		};
		class T_Background2: RscText
		{
			x = "SafeZoneX";
			y = "SafeZoneY";
			w = 0.25;
			h = "SafeZoneH";
			colorBackground[] = {0,0,0,0.7};
		};
		class T_Background1: RscText
		{
			x = "SafeZoneX + SafeZoneW - 1 + 0.81";
			y = "SafeZoneY";
			w = 0.19;
			h = "SafeZoneH";
			colorBackground[] = {0,0,0,0.7};
		};
		class T_ObjectBrowser: RscTree
		{
			x = "SafeZoneX";
			y = "SafeZoneY";
			w = 0.25;
			h = "SafeZoneH";
		};
		class L_NewObject: RscListBox
		{
			x = "(SafeZoneW + SafeZoneX) - (1 - 0.821)";
			y = "SafeZoneY + 0.01";
			w = 0.169;
			h = "14 * 0.03";
			sizeEx = 0.03;
			rows = 15;
			columns = 1;
		};
		class L_ObjectInfo: RscListBox
		{
			x = "(SafeZoneW + SafeZoneX) - (1 - 0.821)";
			y = "SafeZoneY + 0.02 + 14 * 0.03";
			w = 0.169;
			h = "6 * 0.03";
			colorBackground[] = {0,0,0,0.7};
			sizeEx = 0.03;
		};
		class CA_B_Load: RscButton
		{
			idc = 206;
			x = "(SafeZoneW + SafeZoneX) - (1 - 0.817)";
			y = 0.52;
			w = 0.18;
			text = "$STR_DISP_ARCMAP_LOAD";
			toolTip = "$STR_UI_EDITOR_LOAD_T";
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			default = 0;
		};
		class CA_B_Save: CA_B_Load
		{
			idc = 205;
			y = 0.56;
			text = "$STR_DISP_ARCMAP_SAVE";
			toolTip = "$STR_UI_EDITOR_SAVE_T";
		};
		class CA_B_Restart: CA_B_Load
		{
			idc = 207;
			y = 0.6;
			text = "$STR_UI_EDITOR_RESTART";
			toolTip = "$STR_UI_EDITOR_RESTART_T";
		};
		class CA_B_Clear: CA_B_Load
		{
			idc = 210;
			y = 0.64;
			text = "$STR_DISP_ARCMAP_CLEAR";
			toolTip = "$STR_UI_EDITOR_CLEAR_T";
		};
		class CA_B_Map: CA_B_Load
		{
			idc = 209;
			y = 0.72;
			text = "$STR_UI_EDITOR_HIDE_MAP";
			toolTip = "$STR_UI_EDITOR_HIDE_MAP_T";
		};
		class CA_B_Preview: CA_B_Load
		{
			idc = 208;
			y = 0.84;
			text = "$STR_DISP_ARCMAP_PREVIEW";
			toolTip = "$STR_UI_EDITOR_PREVIEW_T";
			default = 1;
		};
		class CA_B_Exit: CA_B_Load
		{
			idc = 2;
			y = 0.92;
			text = "$STR_DISP_ARCMAP_EXIT";
			toolTip = "$STR_UI_EDITOR_QUIT_T";
		};
	};
	class Menu
	{
		colorBackground[] = {0,0,0,0.7};
		colorBorder[] = {0,0,0,0};
		sizeEx = "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		font = "RobotoCondensed";
	};
};
class RscDisplayEditObject
{
	class Controls
	{
		class T_Background: RscText
		{
			colorBackground[] = {0.2,0.2,0.2,1};
			x = "SafeZoneX + 0.25 + 0.02";
			y = 0.08;
			w = 0.71;
			h = 0.9;
		};
		class Title: RscText
		{
			idc = -1;
			style = "0x20 + 0x02 + 0x00";
			x = "SafeZoneX + 0.25 + 0.02";
			y = 0;
			w = 0.19;
			h = 0.025;
			sizeEx = 0.025;
			text = "";
		};
		class B_OK: RscButton
		{
			idc = 1;
			x = "SafeZoneX + 0.25 + 0.2";
			y = "0.915-0.05";
			w = 0.18;
			h = 0.1045752;
			text = "$STR_DISP_OK";
			default = 1;
		};
		class B_Cancel: B_OK
		{
			idc = 2;
			x = "SafeZoneX + 0.25 + 0.39";
			text = "$STR_DISP_CANCEL";
			default = 0;
		};
		class T_Title: RscTitle
		{
			style = "0x20 + 0x02";
			x = "SafeZoneX + 0.25 + 0.02";
			y = 0.09;
			w = 0.71;
			text = "$STR_UI_EDITOR_OBJECT_PROPERTIES";
		};
		class G_ControlsGroup: RscControlsGroup
		{
			idc = 101;
			x = "SafeZoneX + 0.25 + 0.02";
			y = 0.15;
			w = 0.71;
			h = 0.73;
			class Controls{};
		};
	};
	class Title: RscText
	{
		style = 1;
		h = "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		colorBackground[] = {0,0,0,0};
	};
	class Combo: RscCombo
	{
		h = "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		wholeHeight = 0.45;
	};
	class Slider: RscXSliderH
	{
		h = "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	};
	class Edit: RscEdit
	{
		h = "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	};
	class Tree: RscTree
	{
		h = "10 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	};
	class Preview: RscPicture{};
	class Picture: RscPicture
	{
		h = "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	};
	class Button: RscButton
	{
		x = 0.21;
		h = "(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		w = 0.47;
	};
};
class RscDisplayMissionLoad
{
	idd = 122;
	movingEnable = 1;
	class Controls
	{
		class T_Background: RscText
		{
			x = 0.175;
			y = 0.32;
			w = 0.4;
			h = 0.3;
			colorBackground[] = {0,0,0,0.7};
		};
		class T_Title: RscTitle
		{
			style = 0;
			x = 0.175;
			y = 0.33;
			w = 0.4;
			text = "$STR_UI_EDITOR_LOAD_TITLE";
		};
		class B_OK: RscButton
		{
			idc = 1;
			x = 0.2;
			y = 0.52;
			w = 0.18;
			h = 0.1045752;
			text = "$STR_DISP_OK";
			default = 1;
		};
		class B_Cancel: B_OK
		{
			idc = 2;
			x = 0.39;
			text = "$STR_DISP_CANCEL";
			default = 0;
		};
	};
};
class RscDisplayMissionSave
{
	idd = 123;
	movingEnable = 1;
	class controlsBackground
	{
		class T_Background: RscText
		{
			x = "8 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 			((safezoneW / safezoneH) min 1.2))/2)";
			y = "6.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY + (safezoneH - 			(		((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "16 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			h = "7 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
			colorBackground[] = {0,0,0,0.7};
		};
	};
	class Controls
	{
		delete T_Background;
		class T_Title: RscTitle
		{
			idc = 1001;
			text = "$STR_UI_EDITOR_SAVE_TITLE";
			style = 0;
			x = "8 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 			((safezoneW / safezoneH) min 1.2))/2)";
			y = "6.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY + (safezoneH - 			(		((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "16 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			h = "1 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
		};
		class T_Mission: RscText
		{
			idc = 1002;
			text = "$STR_UI_EDITOR_SAVE_MISSION";
			x = "8.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 			((safezoneW / safezoneH) min 1.2))/2)";
			y = "8.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY + (safezoneH - 			(		((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "3.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			h = "1 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
		};
		class E_Mission: RscEdit
		{
			idc = 101;
			x = "12 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 			((safezoneW / safezoneH) min 1.2))/2)";
			y = "8.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY + (safezoneH - 			(		((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "11.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			h = "1 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
		};
		class T_Placement: T_Mission
		{
			idc = 1003;
			text = "$STR_UI_EDITOR_SAVE_EXPORT";
			x = "8.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 			((safezoneW / safezoneH) min 1.2))/2)";
			y = "10 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY + (safezoneH - 			(		((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "3.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			h = "1 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
		};
		class C_Placement: RscCombo
		{
			idc = 104;
			x = "12 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 			((safezoneW / safezoneH) min 1.2))/2)";
			y = "10 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY + (safezoneH - 			(		((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "11.5 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			h = "1 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
		};
		class B_OK: RscButton
		{
			idc = 1;
			default = 1;
			shortcuts[] = {"0x00050000 + 0",28,57,156};
			text = "$STR_DISP_OK";
			x = "16 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 			((safezoneW / safezoneH) min 1.2))/2)";
			y = "12.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY + (safezoneH - 			(		((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "8 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			h = "1 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
		};
		class B_Cancel: B_OK
		{
			idc = 2;
			shortcuts[] = {"0x00050000 + 1"};
			text = "$STR_DISP_CANCEL";
			x = "8 * 					(		((safezoneW / safezoneH) min 1.2) / 32) + 		(safezoneX + (safezoneW - 			((safezoneW / safezoneH) min 1.2))/2)";
			y = "12.5 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) + 		(safezoneY + (safezoneH - 			(		((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			w = "8 * 					(		((safezoneW / safezoneH) min 1.2) / 32)";
			h = "1 * 					(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
		};
	};
};
class RscDisplayInterruptEditorPreview: RscStandardDisplay
{
	onLoad = "private ['_dummy']; _dummy = ['Init', _this] execVM '\A3\ui_f\scripts\pauseLoadinit.sqf';";
	onUnload = "private ['_dummy']; _dummy = ['Unload', _this] execVM '\A3\ui_f\scripts\pauseOnUnload.sqf';";
	class controlsBackground
	{
		class Mainback: RscPicture
		{
			idc = 1104;
			x = 0.038;
			y = 0.17;
			w = 0.627451;
			h = 0.8366013;
			text = "";
		};
	};
	class controls
	{
		delete B_Cancel;
		delete B_Quit;
		delete B_Options;
		delete B_Restart;
		delete B_Edit3D;
		delete B_Edit2D;
		delete Title;
		class Preview_Title: CA_Title
		{
			x = 0.057;
			y = 0.182;
			text = "$STR_DISP_INT_TITLE";
		};
		class ButtonEdit2D: RscShortcutButtonMain
		{
			idc = 113;
			x = 0.05;
			y = 0.271;
			text = "$STR_UI_EDITOR_INT_EDIT2D";
			default = 0;
		};
		class ButtonEdit3D: ButtonEdit2D
		{
			idc = 114;
			x = 0.05;
			y = 0.368;
			text = "$STR_UI_EDITOR_INT_EDIT3D";
		};
		class ButtonRestart: ButtonEdit2D
		{
			idc = 105;
			x = 0.05;
			y = 0.464;
			text = "$STR_UI_EDITOR_RESTART";
		};
		class ButtonOptions: ButtonEdit2D
		{
			idc = 101;
			y = 0.56;
			text = "$STR_A3_RscDisplayMain_ButtonOptions";
		};
		class ButtonQuit: ButtonEdit2D
		{
			idc = 104;
			y = 0.656;
			text = "$STR_UI_EDITOR_INT_QUIT";
		};
		class ButtonCancel: RscShortcutButton
		{
			idc = 2;
			shortcuts[] = {"0x00050000 + 1"};
			x = 0.05;
			y = 0.755;
			text = "$STR_DISP_INT_CONTINUE";
		};
	};
};
class RscDisplayInterruptEditor3D: RscStandardDisplay
{
	class controls
	{
		class Title: RscTitle
		{
			text = "$STR_DISP_INT_3DEDIT_TITLE";
		};
		class B_Edit2D: RscButton
		{
			h = 0.04;
		};
		class B_Preview: B_Edit2D{};
		class B_Restart: B_Edit2D{};
		class B_Options: B_Edit2D{};
		class B_Quit: B_Edit2D{};
		class B_Cancel: B_Edit2D{};
	};
};
