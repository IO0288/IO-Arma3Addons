class asdg_SlotInfo;
class asdg_MuzzleSlot: asdg_SlotInfo {
    class compatibleItems {};
};
class asdg_MuzzleSlot_46: asdg_MuzzleSlot {
    class compatibleItems: compatibleItems {
        bwa3_muzzle_snds_rotex_ii = 1;
    };
};

class UK3CB_MuzzleSlot_556_HK33: asdg_MuzzleSlot {
    class compatibleItems {
        bwa3_muzzle_snds_qdss = 1;
        bwa3_muzzle_snds_qdss_green = 1;
        bwa3_muzzle_snds_qdss_tan = 1;
        bwa3_muzzle_snds_rotex_iiic = 1;
        bwa3_muzzle_snds_rotex_iiic_green = 1;
        bwa3_muzzle_snds_rotex_iiic_tan = 1;
    };
};

class UK3CB_MuzzleSlot_762_G3: asdg_MuzzleSlot {
    class compatibleItems {
        bwa3_muzzle_snds_rotex_iia = 1;
    };
};

class UK3CB_MuzzleSlot_762_M14: asdg_MuzzleSlot {
    class compatibleItems {
        bwa3_muzzle_snds_rotex_iia = 1;
    };
};

class UnderBarrelSlot;
class rhs_rifle_gripod_slot: UnderBarrelSlot {
    class compatibleItems {};
};
class rhs_western_rifle_gripod_slot: rhs_rifle_gripod_slot {
    class compatibleItems: compatibleItems {
        bwa3_bipod_atlas = 1;
        bwa3_bipod_harris = 1;
        bwa3_bipod_harris_green = 1;
        bwa3_bipod_harris_tan = 1;
    };
};

class asdg_OpticRail;
class asdg_OpticRail1913: asdg_OpticRail {
    class compatibleItems;
};
class asdg_OpticRail1913_long: asdg_OpticRail1913 {
    class compatibleItems: compatibleItems {
        BWA3_optic_PMII_DMR_MicroT1_front_NSV = 1;
        BWA3_optic_PMII_DMR_MicroT1_front_NSV_pip = 1;
        BWA3_optic_PMII_DMR_MicroT1_rear_NSV = 1;
        BWA3_optic_PMII_DMR_MicroT1_rear_NSV_pip = 1;
        BWA3_optic_PMII_DMR_NSV = 1;
        BWA3_optic_PMII_DMR_NSV_pip = 1;
        BWA3_optic_Hensoldt_NSV = 1;
        BWA3_optic_M5Xi_MSR_MicroT2_NSV = 1;
        BWA3_optic_M5Xi_MSR_MicroT2_NSV_pip = 1;
        BWA3_optic_M5Xi_MSR_NSV = 1;
        BWA3_optic_M5Xi_MSR_NSV_pip = 1;
        BWA3_optic_M5Xi_Tremor3_MicroT2_NSV = 1;
        BWA3_optic_M5Xi_Tremor3_MicroT2_NSV_pip = 1;
        BWA3_optic_M5Xi_Tremor3_NSV = 1;
        BWA3_optic_M5Xi_Tremor3_NSV_pip = 1;
    };
};
