class draDialog
{
	idd=3000;
	name= "dra Dialog v0.1";
	movingEnable=false;
	enableSimulation=true;
	onLoad="";
	
	class Objects
	{
		class dra_tabletDRA : dra_tablet{};
	};
	
	class controls
	{
		class draTextAssets : dra_ActiveText
		{
			idc=3012;
			text="资产";
			action="'Refresh'execVM 'DrongosArtillery\Scripts\Control\Buttons.sqf'";
			x=dra_COL;
			y=dra_ROW;
			w=dra_BUTTON_W+(dra_COLINC*1);
			h=dra_BUTTON_H;
		};
		
		class draActiveTextGrid : dra_ActiveText
		{
			idc=3014;
			text="";
			tooltip="Tablet>F5求助";
			action="'Grid'execVM'DrongosArtillery\Scripts\Control\Buttons.sqf'";
			x=dra_COL+(dra_COLINC*6.5);
			y=dra_ROW+(dra_ROWINC*0);
			w=dra_BUTTON_W*2;
			h=dra_BUTTON_H;
		};	
		
		class draTextMissions : dra_ActiveText
		{
			idc=3013;
			text="注册任务";
			//tooltip="Tablet>F5 for help";
			action="'MissionFilter'execVM'DrongosArtillery\Scripts\Control\Buttons.sqf'";
			x=dra_COL;
			y=dra_ROW+(dra_ROWINC*7);
			w=dra_BUTTON_W+(dra_COLINC*3);
			h=dra_BUTTON_H;
		};
		
		class dra_ListGroups : dra_RscListBox 
		{
			idc=3000;
			text="";
			onLBSelChanged="execVM'DrongosArtillery\Scripts\Control\SelectAsset.sqf'";
			onLBDblClick="'ControlAsset'execVM'DrongosArtillery\Scripts\Control\Buttons.sqf'";
			x=dra_COL;
			y=dra_ROW+(dra_ROWINC*1);
			w=dra_BUTTON_W+(dra_COLINC*5);
			h=dra_BUTTON_H+(dra_ROWINC*4);
		};
		
		class dra_ListMissions : dra_RscListBox 
		{
			idc=3001;
			text="";
			onLBSelChanged="execVM'DrongosArtillery\Scripts\Control\SelectPlottedMission.sqf'";
			onLBDblClick="'RepeatMission'execVM'DrongosArtillery\Scripts\Control\Buttons.sqf'";
			x=dra_COL;
			y=dra_ROW+(dra_ROWINC*8);
			w=dra_BUTTON_W+(dra_COLINC*7);
			h=dra_BUTTON_H+(dra_ROWINC*3);
		};
		
		class dra_ButtonAbort : dra_RscButtonMenu
		{
			idc=3011;
			text="中止";
			onButtonClick="'Abort'execVM'DrongosArtillery\Scripts\Control\Buttons.sqf'";
			x=dra_COL+(dra_COLINC*0);
			y=dra_ROW+(dra_ROWINC*6);
			w=dra_BUTTON_W;
			h=dra_BUTTON_H;
		};
		class dra_ButtonRelease : dra_RscButtonMenu
		{
			idc=3003;
			text="释放";
			onButtonClick="'Release'execVM'DrongosArtillery\Scripts\Control\Buttons.sqf'";
			x=dra_COL+(dra_COLINC*1);
			y=dra_ROW+(dra_ROWINC*6);
			w=dra_BUTTON_W;
			h=dra_BUTTON_H;
		};
		class dra_ButtonMove : dra_RscButtonMenu
		{
			idc=3015;
			text="移动";
			onButtonClick="'Move'execVM'DrongosArtillery\Scripts\Control\Buttons.sqf'";
			x=dra_COL+(dra_COLINC*2);
			y=dra_ROW+(dra_ROWINC*6);
			w=dra_BUTTON_W;
			h=dra_BUTTON_H;
		};
		class dra_ButtonPrepare : dra_RscButtonMenu
		{
			idc=3016;
			text="";
			onButtonClick="'Prepare'execVM'DrongosArtillery\Scripts\Control\Buttons.sqf'";
			x=dra_COL+(dra_COLINC*3);
			y=dra_ROW+(dra_ROWINC*6);
			w=dra_BUTTON_W;
			h=dra_BUTTON_H;
		};
		class dra_ButtonControl : dra_RscButtonMenu
		{
			idc=3002;
			text="控制";
			onButtonClick="'ControlAsset'execVM'DrongosArtillery\Scripts\Control\Buttons.sqf'";
			x=dra_COL+(dra_COLINC*4);
			y=dra_ROW+(dra_ROWINC*6);
			w=dra_BUTTON_W;
			h=dra_BUTTON_H;
		};

		class draEditSpotterPos : dra_RscEdit
		{
			idc=3004;
			//tooltip="Format is XXXXXYYYYY";
			onLBDblClick="'InputSpotter'execVM'DrongosArtillery\Scripts\Control\Buttons.sqf'";
			x=dra_COL+(dra_COLINC*6.5);
			y=dra_ROW+(dra_ROWINC*1);
			w=(dra_BUTTON_W*1.5);
			h=dra_BUTTON_H;
			text="";
		};
		
		class draEditTargetPos : dra_RscEdit
		{
			idc=3005;
			//tooltip="Format is XXXXXYYYYY";
			onLBDblClick="'InputTarget'execVM'DrongosArtillery\Scripts\Control\Buttons.sqf'";
			x=dra_COL+(dra_COLINC*6.5);
			y=dra_ROW+(dra_ROWINC*3);
			w=(dra_BUTTON_W*1.5);
			h=dra_BUTTON_H;
			text="";
		};
		
		class draEditPolarPos : dra_RscEdit
		{
			idc=3006;
			tooltip="Format is DIRECTION,DISTANCE";
			x=dra_COL+(dra_COLINC*6.5);
			y=dra_ROW+(dra_ROWINC*5);
			w=(dra_BUTTON_W*1.5);
			h=dra_BUTTON_H;
			text="";
		};
		
		class dra_ButtonInputSpotterPos : dra_RscButtonMenu
		{
			idc=3007;
			text="观测点";
			tooltip="输入观测点位置";
			onButtonClick="'InputSpotter'execVM'DrongosArtillery\Scripts\Control\Buttons.sqf'";
			x=dra_COL+(dra_COLINC*6.5);
			y=dra_ROW+(dra_ROWINC*2);
			w=dra_BUTTON_W*1.5;
			h=dra_BUTTON_H;
		};
		
		class dra_ButtonInputTarget : dra_RscButtonMenu
		{
			idc=3008;
			text="目标点";
			tooltip="输入目标和火力任务";
			onButtonClick="'InputTarget'execVM'DrongosArtillery\Scripts\Control\Buttons.sqf'";
			x=dra_COL+(dra_COLINC*6.5);
			y=dra_ROW+(dra_ROWINC*4);
			w=dra_BUTTON_W*1.5;
			h=dra_BUTTON_H;
		};
		
		class dra_ButtonInputPolar : dra_RscButtonMenu
		{
			idc=3009;
			text="极坐标点";
			tooltip="输入极坐标目标和规划火力任务";
			onButtonClick="'InputPolar'execVM'DrongosArtillery\Scripts\Control\Buttons.sqf'";
			x=dra_COL+(dra_COLINC*6.5);
			y=dra_ROW+(dra_ROWINC*6);
			w=dra_BUTTON_W*1.5;
			h=dra_BUTTON_H;
		};
		
		class dra_ButtonInputMapclick : dra_RscButtonMenu
		{
			idc=3010;
			text="地图选择";
			tooltip="Input target";
			onButtonClick="execVM'DrongosArtillery\Scripts\Map\Mapclick.sqf'";
			x=dra_COL+(dra_COLINC*5);
			y=dra_ROW+(dra_ROWINC*6);
			w=dra_BUTTON_W;
			h=dra_BUTTON_H;
		};
		
/*		class dra_ButtonRepeatMission : dra_RscButtonMenu
		{
			idc=3011;
			text="Control";
			tooltip="Repeat/pre-plotted mission";
			onButtonClick="'RepeatMission'execVM'DrongosArtillery\Scripts\Control\Buttons.sqf'";
			x=dra_COL+(dra_COLINC*7);
			y=dra_ROW+(dra_ROWINC*7);
			w=dra_BUTTON_W;
			h=dra_BUTTON_H;
		};*/
		
// Fire mission dialog
		class draTextAsset : dra_RscText
		{
			idc=3030;
			text="";
			sizeEx=dra_TEXTSIZE;
			x=dra_COL+(dra_COLINC*0);
			y=dra_ROW+(dra_ROWINC*0);
			w=dra_BUTTON_W +(dra_COLINC*5);
			h=dra_BUTTON_H;
		};

		class draButtonTubePrevious : dra_ActiveText
		{
			idc=3031;
			text="<<";
			action="'PreviousTube' execVM 'DrongosArtillery\Scripts\Control\Buttons.sqf'";
			x=dra_COL+(dra_COLINC*6.5);
			y=dra_ROW+(dra_ROWINC*0);
			w=dra_BUTTON_W/2;
			h=dra_BUTTON_H;
		};
		class draTextAssetTube : dra_ActiveText
		{
			idc=3032;
			text="Tube:";
			action="'CurrentTube' execVM 'DrongosArtillery\Scripts\Control\Buttons.sqf'";
			x=dra_COL+(dra_COLINC*7);
			y=dra_ROW+(dra_ROWINC*0);
			w=dra_BUTTON_W/2;
			h=dra_BUTTON_H;
		};
		class draButtonTubeNext : dra_ActiveText
		{
			idc=3033;
			text=">>";
			action="'NextTube' execVM 'DrongosArtillery\Scripts\Control\Buttons.sqf'";
			x=dra_COL+(dra_COLINC*7.5);
			y=dra_ROW+(dra_ROWINC*0);
			w=dra_BUTTON_W/2;
			h=dra_BUTTON_H;
		};

		class draTextAimpoint : dra_RscText
		{
			idc=3034;
			text="Aimpoint: XXXX";
			x=dra_COL+(dra_COLINC*0);
			y=dra_ROW+(dra_ROWINC*1);
			w=dra_BUTTON_W +(dra_COLINC*6);
			h=dra_BUTTON_H;
		};
		
		class draTextAdjust : dra_RscText
		{
			idc=3035;
			text="调整";
			tooltip="负值(如：100)将向左或向下调整";
			sizeEx=dra_TEXTSIZE;
			x=dra_COL+(dra_COLINC*0);
			y=dra_ROW+(dra_ROWINC*8);
			w=dra_BUTTON_W +(dra_COLINC*1);
			h=dra_BUTTON_H;
		};

		class draTextAdjustLeftRight : dra_RscText
		{
			idc=3036;
			text="</>";
			sizeEx=dra_TEXTSIZE;
			x=dra_COL+(dra_COLINC*0);
			y=dra_ROW+(dra_ROWINC*9);
			w=(dra_BUTTON_W*1);
			h=dra_BUTTON_H;
		};

		class draTextAdjustAddDrop : dra_RscText
		{
			idc=3037;
			text="^/v";
			sizeEx=dra_TEXTSIZE;
			x=dra_COL+(dra_COLINC*0);
			y=dra_ROW+(dra_ROWINC*10);
			w=(dra_BUTTON_W*1);
			h=dra_BUTTON_H;
		};
		
		class draMissionDescription : dra_RscEdit
		{
			idc=3038;
			text="";
			x=dra_COL+(dra_COLINC*2);
			y=dra_ROW+(dra_ROWINC*9);
			w=dra_BUTTON_W+(dra_COLINC*3);
			h=dra_BUTTON_H;
			tooltip="Fire mission description";
		};
		class draEditRounds : dra_RscEdit
		{
			idc=3039;
			x=dra_COL+(dra_COLINC*3);
			y=dra_ROW+(dra_ROWINC*5);
			w=dra_BUTTON_W;
			h=dra_BUTTON_H;
			text="1";
			tooltip="Rounds to fire";
		};

		class draEditAdjustLR : dra_RscEdit
		{
			idc=3040;
			x=dra_COL+(dra_COLINC*.5);
			y=dra_ROW+(dra_ROWINC*9);
			w=dra_BUTTON_W*.47;
			h=dra_BUTTON_H;
			text="";
		};
		
		class draEditAdjustAddDrop : dra_RscEdit
		{
			idc=3041;
			x=dra_COL+(dra_COLINC*.5);
			y=dra_ROW+(dra_ROWINC*10);
			w=dra_BUTTON_W*.47;
			h=dra_BUTTON_H;
			text="";
		};

		class draButtonAdjustSend : dra_RscButtonMenu
		{
			idc=3043;
			text="调整";
			action="'Adjust'execVM'DrongosArtillery\Scripts\Control\Buttons.sqf'";
			x=dra_COL+(dra_COLINC*0);
			y=dra_ROW+(dra_ROWINC*11);
			w=dra_BUTTON_W;
			h=dra_BUTTON_H;
		};
		
		class draListWarheadType : dra_RscListBox 
		{
			idc=3044;
			text="";
			onLBSelChanged="execVM'DrongosArtillery\Scripts\Control\SelectWarhead.sqf'";
			x=dra_COL+(dra_COLINC*0);
			y=dra_ROW+(dra_ROWINC*2);
			w=dra_BUTTON_W+(dra_COLINC*2);
			h=dra_BUTTON_H+(dra_ROWINC*5);
		};
		class draListMissionType : dra_RscListBox 
		{
			idc=3045;
			text="";
			//onLBSelChanged="";
			onLBSelChanged="execVM'DrongosArtillery\Scripts\Control\SelectMissionType.sqf'";
			x=dra_COL+(dra_COLINC*3);
			y=dra_ROW+(dra_ROWINC*2);
			w=dra_BUTTON_W;
			h=dra_BUTTON_H+(dra_ROWINC*1);
		};
		class draListAngle : dra_RscListBox 
		{
			idc=3046;
			text="";
			onLBSelChanged="";
			x=dra_COL+(dra_COLINC*4);
			y=dra_ROW+(dra_ROWINC*2);
			w=dra_BUTTON_W;
			h=dra_BUTTON_H+(dra_ROWINC*1);
		};
		class draListFuse : dra_RscListBox 
		{
			idc=3047;
			text="";
			onLBSelChanged="execVM'DrongosArtillery\Scripts\Control\SelectFuse.sqf'";
			x=dra_COL+(dra_COLINC*6);
			y=dra_ROW+(dra_ROWINC*2);
			w=dra_BUTTON_W+(dra_COLINC*.5);
			h=dra_BUTTON_H+(dra_ROWINC*2);
		};
		class draEditAirburstHeight : dra_RscEdit
		{
			idc=3048;
			x=dra_COL+(dra_COLINC*6);
			y=dra_ROW+(dra_ROWINC*5);
			w=(dra_BUTTON_W/2);
			h=dra_BUTTON_H;
			text="50";
		};
		class draTextAirburstHeight : dra_RscText
		{
			idc=3049;
			text="";
			x=dra_COL+(dra_COLINC*6.5);
			y=dra_ROW+(dra_ROWINC*5);
			w=dra_BUTTON_W;
			h=dra_BUTTON_H;
		};
		class draButtonTransmit : dra_RscButtonMenu
		{
			idc=3020;
			text="发射/XMIT";
			onButtonClick="execVM'DrongosArtillery\Scripts\Control\Transmit.sqf'";
			x=dra_COL+(dra_COLINC*3);
			y=dra_ROW+(dra_ROWINC*11);
			w=dra_BUTTON_W +(dra_COLINC*1);
			h=dra_BUTTON_H;
		};
		
		class draButtonSetTube : dra_RscButtonMenu
		{
			idc=3022;
			text="SET TUBE";
			onButtonClick="execVM'DrongosArtillery\Scripts\Control\SetTube.sqf'";
			x=dra_COL+(dra_COLINC*3);
			y=dra_ROW+(dra_ROWINC*8);
			w=dra_BUTTON_W +(dra_COLINC*1);
			h=dra_BUTTON_H;
		};
		
		class draButtonSetTubeAll : dra_RscButtonMenu
		{
			idc=3023;
			text="SET ALL";
			onButtonClick="execVM'DrongosArtillery\Scripts\Control\SetTubeAll.sqf'";
			x=dra_COL+(dra_COLINC*3);
			y=dra_ROW+(dra_ROWINC*9);
			w=dra_BUTTON_W +(dra_COLINC*1);
			h=dra_BUTTON_H;
		};
		
		class draListSheaf : dra_RscListBox 
		{
			idc=3050;
			text="";
			//onLBSelChanged="";
			onLBSelChanged="execVM'DrongosArtillery\Scripts\Control\SelectSheaf.sqf'";
			x=dra_COL+(dra_COLINC*5);
			y=dra_ROW+(dra_ROWINC*2);
			w=dra_BUTTON_W;
			h=dra_BUTTON_H+(dra_ROWINC*1);
		};

		class draEditSheafSizeX : dra_RscEdit
		{
			idc=3054;
			x=dra_COL+(dra_COLINC*5);
			y=dra_ROW+(dra_ROWINC*4);
			w=dra_BUTTON_W/2;
			h=dra_BUTTON_H;
			text="100";
			tooltip="X size";
		};
		class draEditSheafSizeY : dra_RscEdit
		{
			idc=3055;
			x=dra_COL+(dra_COLINC*5.47);
			y=dra_ROW+(dra_ROWINC*4);
			w=dra_BUTTON_W/2;
			h=dra_BUTTON_H;
			text="100";
			tooltip="Y size";
		};
		
/*		class draEditSheafAngle : dra_RscEdit
		{
			idc=3057;
			x=dra_COL+(dra_COLINC*5);
			y=dra_ROW+(dra_ROWINC*5);
			w=dra_BUTTON_W/2;
			h=dra_BUTTON_H;
			text="-1";
			tooltip="Sheaf angle (-1 for default)";
		};*/
		
		class draEditInterval : dra_RscEdit
		{
			idc=3061;
			x=dra_COL+(dra_COLINC*3);
			y=dra_ROW+(dra_ROWINC*6);
			w=dra_BUTTON_W;
			h=dra_BUTTON_H;
			text="0";
			tooltip="Interval (seconds)";
		};

		class draButtonControlImmediate : dra_RscButtonMenu
		{
			idc=3057;
			text="立即抑制";
			action="''execVM'DrongosArtillery\Scripts\Control\ImmediateSuppression.sqf'";
			x=dra_COL+(dra_COLINC*7);
			y=dra_ROW+(dra_ROWINC*8);
			w=dra_BUTTON_W;
			h=dra_BUTTON_H;
		};
		class draButtonControlImmediateSmoke : dra_RscButtonMenu
		{
			idc=3059;
			text="立即抑制烟雾";
			action="''execVM'DrongosArtillery\Scripts\Control\ImmediateSuppressionSmoke.sqf'";
			x=dra_COL+(dra_COLINC*7);
			y=dra_ROW+(dra_ROWINC*9);
			w=dra_BUTTON_W;
			h=dra_BUTTON_H;
		};

		class draButtonControlAbort : dra_RscButtonMenu
		{
			idc=3056;
			text="中止";
			action="'AbortControlled'execVM'DrongosArtillery\Scripts\Control\Buttons.sqf'";
			x=dra_COL+(dra_COLINC*7);
			y=dra_ROW+(dra_ROWINC*10);
			w=dra_BUTTON_W;
			h=dra_BUTTON_H;
		};
		
/*		class draButtonControlAssets : dra_RscButtonMenu
		{
			idc=3057;
			text="Assets";
			action="'BackToAssets' execVM 'DrongosArtillery\Scripts\Control\Buttons.sqf'";
			x=dra_COL+(dra_COLINC*7);
			y=dra_ROW+(dra_ROWINC*10);
			w=dra_BUTTON_W;
			h=dra_BUTTON_H;
		};*/

		class draButtonControlEndMission : dra_RscButtonMenu
		{
			idc=3058;
			text="结束任务";
			action="'EndMission' execVM 'DrongosArtillery\Scripts\Control\Buttons.sqf'";
			x=dra_COL+(dra_COLINC*7);
			y=dra_ROW+(dra_ROWINC*11);
			w=dra_BUTTON_W;
			h=dra_BUTTON_H;
		};
		
		class draEditTubesToFire : dra_RscEdit
		{
			idc=3019;
			text="ALL TUBES";
			tooltip="(eg. 1,3,4)";
			x=dra_COL+(dra_COLINC*3);
			y=dra_ROW+(dra_ROWINC*4);
			w=dra_BUTTON_W;
			h=dra_BUTTON_H;
		};
		class draEditCreep : dra_RscEdit
		{
			idc=3021;
			text="";
			tooltip="Rolling barrage direction and spacing (eg. 90,100)";
			x=dra_COL+(dra_COLINC*3);
			y=dra_ROW+(dra_ROWINC*7);
			w=dra_BUTTON_W;
			h=dra_BUTTON_H;
		};
		

// Virtual fire mission dialog
		class draTextVAtubes : dra_RscText
		{
			idc=3065;
			text="";
			sizeEx=dra_TEXTSIZE;
			x=dra_COL+(dra_COLINC*0);
			y=dra_ROW+(dra_ROWINC*2);
			w=dra_BUTTON_W +(dra_COLINC*2);
			h=dra_BUTTON_H;
		};
		class draTextVAammo : dra_RscText
		{
			idc=3066;
			text="";
			sizeEx=dra_TEXTSIZE;
			x=dra_COL+(dra_COLINC*0);
			y=dra_ROW+(dra_ROWINC*3);
			w=dra_BUTTON_W +(dra_COLINC*2);
			h=dra_BUTTON_H;
		};
		class draTextVAkill : dra_RscText
		{
			idc=3067;
			text="";
			sizeEx=dra_TEXTSIZE;
			x=dra_COL+(dra_COLINC*0);
			y=dra_ROW+(dra_ROWINC*4);
			w=dra_BUTTON_W +(dra_COLINC*2);
			h=dra_BUTTON_H;
		};
		class draTextVAdam : dra_RscText
		{
			idc=3068;
			text="";
			sizeEx=dra_TEXTSIZE;
			x=dra_COL+(dra_COLINC*0);
			y=dra_ROW+(dra_ROWINC*5);
			w=dra_BUTTON_W +(dra_COLINC*2);
			h=dra_BUTTON_H;
		};
		
		class draTextCRAM : dra_RscText
		{
			idc=3080;
			text="C-RAM/EW";
			x=dra_COL;
			y=dra_ROW;
			w=dra_BUTTON_W+(dra_COLINC*1);
			h=dra_BUTTON_H;
		};
		
		class draListCRAM : dra_RscListBox 
		{
			idc=3081;
			text="";
			onLBSelChanged="execVM'DrongosArtillery\Scripts\Radar\SelectCRAM.sqf'";
			onLBDblClick="execVM'DrongosArtillery\Scripts\Radar\ToggleCRAM.sqf'";
			x=dra_COL;
			y=dra_ROW+(dra_ROWINC*1);
			w=dra_BUTTON_W+(dra_COLINC*7);
			h=dra_BUTTON_H+(dra_ROWINC*2);
		};
		class draCRAMEditDir : dra_RscEdit
		{
			idc=3084;
			x=dra_COL+(dra_COLINC*6);
			y=dra_ROW+(dra_ROWINC*0);
			//w=dra_BUTTON_W+(dra_COLINC*0.5);
			w=dra_BUTTON_W/1;
			h=dra_BUTTON_H;
			text="0";
			tooltip="0-360";
		};
		class draCRAMButtonDir : dra_RscButtonMenu
		{
			idc=3085;
			text="DIR";
			onButtonClick="execVM'DrongosArtillery\Scripts\CRAM\SetDir.sqf'";
			x=dra_COL+(dra_COLINC*7);
			y=dra_ROW+(dra_ROWINC*0);
			//w=dra_BUTTON_W+(dra_COLINC*0.5);
			w=dra_BUTTON_W/1;
			h=dra_BUTTON_H;
		};
		class draActiveTextRadar : dra_ActiveText
		{
			idc=3082;
			text="";
			action="execVM'DrongosArtillery\Scripts\Radar\ToggleAlerts.sqf'";
			x=dra_COL;
			y=dra_ROW+(dra_ROWINC*4);
			w=dra_BUTTON_W+(dra_COLINC*1);
			h=dra_BUTTON_H;
		};	
		class draListRadars : dra_RscListBox 
		{
			idc=3083;
			text="";
			//onLBSelChanged="execVM'DrongosArtillery\Scripts\Radar\SelectRadar.sqf'";
			//onLBDblClick="execVM'DrongosArtillery\Scripts\Radar\ToggleRadar.sqf'";
			x=dra_COL;
			y=dra_ROW+(dra_ROWINC*5);
			w=dra_BUTTON_W+(dra_COLINC*7);
			h=dra_BUTTON_H+(dra_ROWINC*2);
		};
		class draTextSatellites : dra_RscText
		{
			idc=3086;
			text="卫星";
			//action="execVM'DrongosArtillery\Scripts\Radar\ToggleAlerts.sqf'";
			x=dra_COL;
			y=dra_ROW+(dra_ROWINC*8);
			w=dra_BUTTON_W+(dra_COLINC*1);
			h=dra_BUTTON_H;
		};	
		class draListSatellites : dra_RscListBox 
		{
			idc=3087;
			text="";
			//onLBSelChanged="execVM'DrongosArtillery\Scripts\Radar\SelectRadar.sqf'";
			onLBDblClick="execVM'DrongosArtillery\Scripts\Satellite\SelectSatellite.sqf'";
			x=dra_COL;
			y=dra_ROW+(dra_ROWINC*9);
			w=dra_BUTTON_W+(dra_COLINC*7);
			h=dra_BUTTON_H+(dra_ROWINC*2);
		};
		
		class draDroneListDrones : dra_RscListBox 
		{
			idc=3090;
			text="";
			onLBSelChanged="execVM'DrongosArtillery\Scripts\Drones\SelectDrone.sqf'";
			x=dra_COL;
			y=dra_ROW+(dra_ROWINC*1);
			w=dra_BUTTON_W+(dra_COLINC*7);
			h=dra_BUTTON_H+(dra_ROWINC*4);
		};
		class draTextDrones : dra_RscText
		{
			idc=3091;
			text="巡飞弹";
			x=dra_COL;
			y=dra_ROW;
			w=dra_BUTTON_W+(dra_COLINC*5);
			h=dra_BUTTON_H;
		};
		class draDroneListTypes : dra_RscListBox 
		{
			idc=3092;
			text="";
			onLBSelChanged="execVM'DrongosArtillery\Scripts\Drones\SelectType.sqf'";
			x=dra_COL+(dra_COLINC*7);
			y=dra_ROW+(dra_ROWINC*6);
			w=dra_BUTTON_W+(dra_COLINC*0);
			h=dra_BUTTON_H+(dra_ROWINC*4);
		};
		class draDroneEditALT : dra_RscEdit
		{
			idc=3093;
			x=dra_COL;
			y=dra_ROW+(dra_ROWINC*6);
			w=dra_BUTTON_W+(dra_COLINC*0);
			h=dra_BUTTON_H;
			text="500";
		};
		class draDroneButtonALT : dra_RscButtonMenu
		{
			idc=3094;
			text="Set ALT";
			onButtonClick="'Move'execVM'DrongosArtillery\Scripts\Drones\SetAltitude.sqf'";
			x=dra_COL+(dra_COLINC*0);
			y=dra_ROW+(dra_ROWINC*7);
			w=dra_BUTTON_W+(dra_COLINC*0);
			h=dra_BUTTON_H;
		};
		class draDroneButtonHalt : dra_RscButtonMenu
		{
			idc=3098;
			text="死亡";
			onButtonClick="execVM'DrongosArtillery\Scripts\Drones\Halt.sqf'";
			x=dra_COL+(dra_COLINC*1);
			y=dra_ROW+(dra_ROWINC*6);
			w=dra_BUTTON_W+(dra_COLINC*0);
			h=dra_BUTTON_H;
		};
		class draDroneButtonMove : dra_RscButtonMenu
		{
			idc=3095;
			text="移动";
			onButtonClick="execVM'DrongosArtillery\Scripts\Drones\StartMove.sqf'";
			x=dra_COL+(dra_COLINC*2);
			y=dra_ROW+(dra_ROWINC*6);
			w=dra_BUTTON_W+(dra_COLINC*0);
			h=dra_BUTTON_H;
		};
		class draDroneButtonMarkers : dra_RscButtonMenu
		{
			idc=3096;
			text="标记";
			onButtonClick="execVM'DrongosArtillery\Scripts\Drones\Markers.sqf'";
			x=dra_COL+(dra_COLINC*3);
			y=dra_ROW+(dra_ROWINC*6);
			w=dra_BUTTON_W+(dra_COLINC*0);
			h=dra_BUTTON_H;
		};
		class draDroneButtonAuto : dra_RscButtonMenu
		{
			idc=3097;
			text="自动";
			onButtonClick="execVM'DrongosArtillery\Scripts\Drones\Automatic.sqf'";
			x=dra_COL+(dra_COLINC*7);
			y=dra_ROW+(dra_ROWINC*11);
			w=dra_BUTTON_W+(dra_COLINC*0);
			h=dra_BUTTON_H;
		};
		class draDroneButtonAutoCancel : dra_RscButtonMenu
		{
			idc=3099;
			text="取消";
			onButtonClick="execVM'DrongosArtillery\Scripts\Drones\Cancel.sqf'";
			x=dra_COL+(dra_COLINC*6);
			y=dra_ROW+(dra_ROWINC*11);
			w=dra_BUTTON_W+(dra_COLINC*0);
			h=dra_BUTTON_H;
		};

// Cruise missiles
		class draTextCruise : dra_RscText
		{
			idc=3100;
			text="巡航导弹发射装置";
			x=dra_COL;
			y=dra_ROW;
			w=dra_BUTTON_W+(dra_COLINC*5);
			h=dra_BUTTON_H;
		};
		class draListCruiseLaunchers : dra_RscListBox 
		{
			idc=3101;
			text="";
			onLBSelChanged="execVM'DrongosArtillery\Scripts\Cruise\SelectLauncher.sqf'";
			x=dra_COL;
			y=dra_ROW+(dra_ROWINC*1);
			w=dra_BUTTON_W+(dra_COLINC*6);
			h=dra_BUTTON_H+(dra_ROWINC*4);
		};
		class draListCruiseWarheads : dra_RscListBox 
		{
			idc=3104;
			text="";
			onLBSelChanged="execVM'DrongosArtillery\Scripts\Cruise\SelectWarhead.sqf'";
			x=dra_COL+(dra_COLINC*7);
			y=dra_ROW+(dra_ROWINC*1);
			w=dra_BUTTON_W+(dra_COLINC*0);
			h=dra_BUTTON_H+(dra_ROWINC*1);
		};
		class draCruiseButtonLaunch : dra_RscButtonMenu
		{
			idc=3102;
			text="发射";
			onButtonClick="FALSE execVM'DrongosArtillery\Scripts\Cruise\Launch.sqf'";
			x=dra_COL+(dra_COLINC*7);
			y=dra_ROW+(dra_ROWINC*11);
			w=dra_BUTTON_W+(dra_COLINC*0);
			h=dra_BUTTON_H;
		};
		class draCruiseButtonWP : dra_RscButtonMenu
		{
			idc=3103;
			text="Set Waypoints";
			onButtonClick="execVM'DrongosArtillery\Scripts\Cruise\WPstart.sqf'";
			x=dra_COL+(dra_COLINC*0);
			y=dra_ROW+(dra_ROWINC*6);
			w=dra_BUTTON_W+(dra_COLINC*2);
			h=dra_BUTTON_H;
		};
		class draCruiseEditALT : dra_RscEdit
		{
			idc=3105;
			x=dra_COL+(dra_COLINC*7);
			y=dra_ROW+(dra_ROWINC*4);
			w=dra_BUTTON_W+(dra_COLINC*0);
			h=dra_BUTTON_H;
			text="100";
		};
		class draCruiseButtonALT : dra_RscButtonMenu
		{
			idc=3106;
			text="Set ALT";
			onButtonClick="'Move'execVM'DrongosArtillery\Scripts\Cruise\SetAltitude.sqf'";
			x=dra_COL+(dra_COLINC*7);
			y=dra_ROW+(dra_ROWINC*5);
			w=dra_BUTTON_W+(dra_COLINC*0);
			h=dra_BUTTON_H;
		};
		class draListCruiseWP : dra_RscListBox 
		{
			idc=3107;
			text="";
			onLBSelChanged="'Load'execVM'DrongosArtillery\Scripts\Cruise\Waypoints.sqf'";
			x=dra_COL+(dra_COLINC*0);
			y=dra_ROW+(dra_ROWINC*7);
			w=dra_BUTTON_W+(dra_COLINC*4);
			h=dra_BUTTON_H+(dra_ROWINC*3);
		};
		class draCruiseButtonSave : dra_RscButtonMenu
		{
			idc=3108;
			text="保存";
			onButtonClick="'Save'execVM'DrongosArtillery\Scripts\Cruise\Waypoints.sqf'";
			x=dra_COL+(dra_COLINC*0);
			y=dra_ROW+(dra_ROWINC*11);
			w=dra_BUTTON_W+(dra_COLINC*0);
			h=dra_BUTTON_H;
		};
/*		class draCruiseButtonLoad : dra_RscButtonMenu
		{
			idc=3109;
			text="Load";
			onButtonClick="'Load'execVM'DrongosArtillery\Scripts\Cruise\Waypoints.sqf'";
			x=dra_COL+(dra_COLINC*1);
			y=dra_ROW+(dra_ROWINC*11);
			w=dra_BUTTON_W+(dra_COLINC*0);
			h=dra_BUTTON_H;
		};*/
		
		class draEditCruiseDescription : dra_RscEdit
		{
			idc=3109;
			tooltip="Description of WP set";
			x=dra_COL+(dra_COLINC*3);
			y=dra_ROW+(dra_ROWINC*6);
			w=dra_BUTTON_W+(dra_COLINC*3);
			h=dra_BUTTON_H;
		};
		
		class draCruiseButtonDelete : dra_RscButtonMenu
		{
			idc=3110;
			text="删除";
			onButtonClick="'Delete'execVM'DrongosArtillery\Scripts\Cruise\Waypoints.sqf'";
			x=dra_COL+(dra_COLINC*1);
			y=dra_ROW+(dra_ROWINC*11);
			w=dra_BUTTON_W+(dra_COLINC*0);
			h=dra_BUTTON_H;
		};
		class draListCruiseMissiles : dra_RscListBox 
		{
			idc=3111;
			text="";
			onLBSelChanged="execVM'DrongosArtillery\Scripts\Cruise\SelectMissile.sqf'";
			x=dra_COL+(dra_COLINC*5);
			y=dra_ROW+(dra_ROWINC*7);
			w=dra_BUTTON_W+(dra_COLINC*1);
			h=dra_BUTTON_H+(dra_ROWINC*3);
		};
/*		class draActiveTextCruiseMode : dra_ActiveText
		{
			idc=3112;
			text="";
			tooltip="Strike/Loiter";
			action="'CRUISEMODE'execVM'DrongosArtillery\Scripts\Control\Buttons.sqf'";
			x=dra_COL+(dra_COLINC*7);
			y=dra_ROW+(dra_ROWINC*10);
			w=dra_BUTTON_W+(dra_COLINC*0);
			h=dra_BUTTON_H;
		};*/
		class draCruiseButtonUploadWP : dra_RscButtonMenu
		{
			idc=3113;
			text="Upload WP";
			onButtonClick="execVM'DrongosArtillery\Scripts\Cruise\UploadWP.sqf'";
			x=dra_COL+(dra_COLINC*5);
			y=dra_ROW+(dra_ROWINC*11);
			w=dra_BUTTON_W+(dra_COLINC*0);
			h=dra_BUTTON_H;
		};
		class draCruiseButtonDestruct : dra_RscButtonMenu
		{
			idc=3114;
			text="自毁";
			onButtonClick="execVM'DrongosArtillery\Scripts\Cruise\Destruct.sqf'";
			x=dra_COL+(dra_COLINC*6);
			y=dra_ROW+(dra_ROWINC*11);
			w=dra_BUTTON_W+(dra_COLINC*0);
			h=dra_BUTTON_H;
		};

		class dra_ButtonTF1 : dra_RscButtonTabFNC {
			idc=-1;
			text="";
			tooltip="炮兵";
			onButtonClick="'Artillery'execVM'DrongosArtillery\Scripts\Control\Buttons.sqf'";
		};

		class dra_ButtonTF2 : dra_RscButtonTabFNC {
			text="";
			tooltip="巡飞弹";
			onButtonClick="'Drone'execVM'DrongosArtillery\Scripts\Control\Buttons.sqf'";
			x=dra_tabFx+(dra_tabFinc*1);
		};
		
		class dra_ButtonTF3 : dra_RscButtonTabFNC {
			text="";
			tooltip="巡航导弹";
			onButtonClick="'Cruise'execVM'DrongosArtillery\Scripts\Control\Buttons.sqf'";
			x=dra_tabFx+(dra_tabFinc*2);
		};

		class dra_ButtonTF4 : dra_RscButtonTabFNC {
			text="";
			tooltip="C-RAM/Radar/Satellites/EW";
			onButtonClick="'Radar'execVM'DrongosArtillery\Scripts\Control\Buttons.sqf'";
			x=dra_tabFx+(dra_tabFinc*3);
		};

		class dra_ButtonTF5 : dra_RscButtonTabFNC {
			text="";
			tooltip="地图网格";
			onButtonClick="'Map'execVM'DrongosArtillery\Scripts\Control\Buttons.sqf'";
			x=dra_tabFx+(dra_tabFinc*4);
		};
		
		class dra_ButtonTF6 : dra_RscButtonTabFNC {
			text="";
			tooltip="地图网格颜色";
			onButtonClick="'MapColour'execVM'DrongosArtillery\Scripts\Control\Buttons.sqf'";
			x=dra_tabFx+(dra_tabFinc*5);
		};

		class dra_ButtonTF7 : dra_RscButtonTabFNC {
			text="";
			tooltip="";
			onButtonClick="";
			x=dra_tabFx+(dra_tabFinc*6);
		};

		class dra_ButtonTF8 : dra_RscButtonTabFNC {
			text="";
			tooltip="Force release";
			onButtonClick="'ForceRelease'execVM'DrongosArtillery\Scripts\Control\Buttons.sqf'";
			x=dra_tabFx+(dra_tabFinc*7);
		};
		
		class dra_ButtonTF9 : dra_RscButtonTabFNC {
			text="";
			tooltip="Hints ON/OFF";
			onButtonClick="'Hints'execVM'DrongosArtillery\Scripts\Control\Buttons.sqf'";
			x=dra_tabFx+(dra_tabFinc*8);
		};
		
		class dra_ButtonTF10 : dra_RscButtonTabFNC {
			text="";
			tooltip="View distance -";
			onButtonClick="'ViewDistance-'execVM'DrongosArtillery\Scripts\Control\Buttons.sqf'";
			x=dra_tabFx+(dra_tabFinc*9);
		};
		
		class dra_ButtonTF11 : dra_RscButtonTabFNC {
			text="";
			tooltip="View distance +";
			onButtonClick="'ViewDistance+'execVM'DrongosArtillery\Scripts\Control\Buttons.sqf'";
			x=dra_tabFx+(dra_tabFinc*10);
		};
		
		class dra_ButtonTF12 : dra_RscButtonTabFNC {
			text="";
			tooltip="Diagnostics";
			onButtonClick="'Diagnostics'execVM'DrongosArtillery\Scripts\Control\Buttons.sqf'";
			x=dra_tabFx+(dra_tabFinc*11.3);
		};
		
		class dra_ButtonExitTabletDRA : dra_ButtonExitTablet{
			tooltip="Exit/reset view";
			onButtonClick="'Exit'execVM'DrongosArtillery\Scripts\Control\Buttons.sqf'";
			//onButtonClick="closeDialog 0;hintSilent''";
		};
	};
};
