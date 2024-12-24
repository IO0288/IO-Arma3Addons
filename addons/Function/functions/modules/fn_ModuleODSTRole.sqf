_logic = param [0,objNull,[objNull]];

_synced = synchronizedObjects _logic;	// objetos Sincronizados [ARRAY]

[_synced] execVM "\ioaa3_def_function\modules\ODST_Role\initODSTRole.sqf";

diag_log "[IOAA3] - ODST Role - Module initialized";

