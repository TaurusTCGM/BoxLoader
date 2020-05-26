["boxloader_hidecargo_enabled","CHECKBOX",[localize "STR_boxloader_Ena_Hid_Car_feat",localize "STR_boxloader_Can_be_chang_mid_mis"],"Boxloader",true,true] call CBA_settings_fnc_init;
["boxloader_maxload_enabled","CHECKBOX",[localize "STR_boxloader_Ena_play_load_wei_lim",localize "STR_boxloader_Lim_wei_play_can_load_push"],"Boxloader",false,true] call CBA_settings_fnc_init;
["boxloader_push_enabled","CHECKBOX",[localize "STR_boxloader_Ena_push_obj",localize "STR_boxloader_Ena_push_sys"],"Boxloader",true,true] call CBA_settings_fnc_init;
["boxloader_maxload_lift","SLIDER",[localize "STR_boxloader_Max_lif_wei",localize "STR_boxloader_max_wei_play_can_lift_and_load_into_some_chest_height"],"Boxloader",[10,5000,50,0],true] call CBA_settings_fnc_init;
["boxloader_maxload_overhead","SLIDER",[localize "STR_boxloader_Max_over_wei",localize "STR_boxloader_max_wei_play_can_lift_and_load_into_some_above_head"],"Boxloader",[10,5000,30,0],true] call CBA_settings_fnc_init;
["boxloader_maxload_push","SLIDER",[localize "STR_boxloader_Max_push_wei",localize "STR_boxloader_max_wei_play_push_ground_and_load_into_ground_lev"],"Boxloader",[10,5000,200,0],true] call CBA_settings_fnc_init;
["boxloader_maxload_minpush","SLIDER",[localize "STR_boxloader_Min_push_wei",localize "STR_boxloader_Only_obj_with_wei_above_this"],"Boxloader",[-1,1000,10,0],true] call CBA_settings_fnc_init;

["boxloader_maxunload_enabled","CHECKBOX",[localize "STR_boxloader_Ena_play_UNL_wei_lim",localize "STR_boxloader_Appl_load_wei_limit_to_unloading"],"Boxloader",false,true] call CBA_settings_fnc_init;
["boxloader_preciseunload_enabled","CHECKBOX",[localize "STR_boxloader_Ena_prec_unl",localize "STR_boxloader_Allow_using_precise_unl_act"],"Boxloader",false,true] call CBA_settings_fnc_init;

["boxloader_allrepair_work","CHECKBOX",[localize "STR_boxloader_Ena_rep_veh_bui",localize "STR_boxloader_New_spawn_veh_cap_rep_will_be_fort_const"],"Boxloader",true,true] call CBA_settings_fnc_init;
["boxloader_allrepair_load","CHECKBOX",[localize "STR_boxloader_Ena_rep_veh_load",localize "STR_boxloader_New_spawn_veh_cap_of_rep_will_have_load_hand_equip"],"Boxloader",true,true] call CBA_settings_fnc_init;
["boxloader_allrepair_weight","SLIDER",[localize "STR_boxloader_Max_rep_veh_load_wei",localize "STR_boxloader_New_spaw_veh_max_wei_rep_veh_load_equip_load_in_veh"],"Boxloader",[1000,50000,10000,0],true] call CBA_settings_fnc_init;
["boxloader_allrepair_height","SLIDER",[localize "STR_boxloader_Max_rep_veh_load_height",localize "STR_boxloader_New_spaw_veh_The_max_height_rep_veh_load_equip_can_reach"],"Boxloader",[1,20,5,0],true] call CBA_settings_fnc_init;
["boxloader_allrepair_push","SLIDER",[localize "STR_boxloader_Max_rep_veh_push_wei",localize "STR_boxloader_New_spawn_veh_The_max_wei_rep_veh_load_equip_can_push_on_ground"],"Boxloader",[1000,50000,10000,0],true] call CBA_settings_fnc_init;



{
	[_x select 0,"CHECKBOX",[_x select 1,_x select 2],["Boxloader","Bulldozing"],false,true] call CBA_settings_fnc_init;
} forEach [
	["boxloader_tractor_bulldoze",localize "STR_boxloader_Ena_Bulldozing",localize "STR_boxloader_Allow_cons_tractor_rem_trees_bush"],
	["boxloader_tractor_bulldoze_hide",localize "Bulldozing: 'Hide' type",localize "STR_boxloader_Enable_bulldozin_terr_obj"],
	["boxloader_tractor_bulldoze_fence",localize "Bulldozing: 'Fence' type",localize "STR_boxloader_Enable_bulldozin_fence_obj"],
	["boxloader_tractor_bulldoze_wall",localize "Bulldozing: 'Wall' type",localize "STR_boxloader_Enable_bulldozin_fence_obj"],
	//["boxloader_tractor_bulldoze_rock",localize "Bulldozing: 'Rock' type",localize "STR_boxloader_Enable_bulldozin_rock_object"],
	["boxloader_tractor_bulldoze_ruins",localize "Bulldozing: Ruins",localize "STR_boxloader_Enable_bulldozin_destroy_build"]
];


true
