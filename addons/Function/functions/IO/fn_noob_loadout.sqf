params ["_cargoBox"];

clearItemCargoGlobal _cargoBox;
_zzjj_noob_loadout = [["ACE_EntrenchingTool","ACE_Clacker","B_UavTerminal","ACE_CableTie","ACE_surgicalKit","ACE_wirecutter","ToolKit","ACE_personalAidKit","adv_aceCPR_AED","ACE_HuntIR_monitor","ACE_packingBandage","ACE_fieldDressing","ACE_elasticBandage","ACE_quikclot","ACE_epinephrine","ACE_morphine","JAS_GPNVG18_blk","ACE_IR_Strobe_Item","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_MapTools","greenmag_item_speedloader","ACE_bloodIV","greenmag_ammo_556x45_basic_60Rnd","greenmag_beltlinked_762x51_basic_200"],[4,1,1,2,1,1,1,2,1,1,20,20,20,20,10,10,8,8,8,8,1,2,1,20,5]];
_zzjj_noob_loadout_a = _zzjj_noob_loadout select 0;
_zzjj_noob_loadout_b = _zzjj_noob_loadout select 1;
_len = count _zzjj_noob_loadout_a;

for "_i" from 0 to _len do {
	_cargoBox addItemCargoGlobal [_zzjj_noob_loadout_a select _i, _zzjj_noob_loadout_b select _i];
};