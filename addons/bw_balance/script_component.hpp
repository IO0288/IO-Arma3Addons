#define COMPONENT main
#include "script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE
// #define CBA_DEBUG_SYNCHRONOUS
// #define ENABLE_PERFORMANCE_COUNTERS

#ifdef DEBUG_ENABLED_WB_BW
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_WB_BW
    #define DEBUG_SETTINGS DEBUG_SETTINGS_WB_BW
#endif

#define MAGAZINE_WELL WB_Magazines

// #include "\x\cba\addons\main\script_macros_common.hpp"
// #include "\bwa3_common\script_component.h"
