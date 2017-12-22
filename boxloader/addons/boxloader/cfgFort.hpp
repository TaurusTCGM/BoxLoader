class Land_Boxloader_Hesco_Flat: HBarrier_base_F {
	displayName = "Boxloader HESCO (Packed)";
	editorCategory="EdCat_Supplies";
	model = "\boxloader\mdl\boxloader_hesco_flat.p3d";
	scope = 2;
	scopeCurator = 2;
	editorSubcategory="EdSubCat_BoxloaderFort";
	class EventHandlers {
		init = "[_this select 0,0] call boxloader_fnc_hesco";
		class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
	};
};

class Land_Boxloader_Hesco_BigFlat: Land_Boxloader_Hesco_Flat {
	displayName = "Boxloader Big HESCO (Packed)";
	model = "\boxloader\mdl\boxloader_hesco_bigflat.p3d";
	class EventHandlers {
		init = "[_this select 0,1] call boxloader_fnc_hesco";
		class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
	};
}
class Land_Boxloader_Hesco_SmallFlat: Land_Boxloader_Hesco_Flat {
	displayName = "Boxloader Small HESCO (Packed)";
	model = "\boxloader\mdl\boxloader_hesco_smallflat.p3d";
	class EventHandlers {
		init = "[_this select 0,2] call boxloader_fnc_hesco";
		class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
	};
}



class Land_Boxloader_Hesco_1: Land_Boxloader_Hesco_Flat {
	displayName = "Boxloader HESCO 1m";
	model = "\boxloader\mdl\boxloader_hesco_1.p3d";
	class EventHandlers {
		init = "_this call boxloader_fnc_hesco_built";
		class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
	};
	scope = 1;
	scopeCurator = 1;
	ace_dragging_canCarry = 0;
	ace_cargo_canLoad = 0;
	Boxloader_ConBase="Land_Boxloader_Hesco_Flat";
	class AnimationSources {
		class Fill_Source {
			source = "user";
			initPhase = 1;
			animPeriod = 0;
		};
		class Empty_Source {
			source = "user";
			initPhase = 0;
			animPeriod = 0;
		};
	};
	armor=1000;
	destrType="DestructBuilding";
	hiddenSelections[] = {"fill"};
	hiddenSelectionsTextures[] = {"\boxloader\tex\boxloader_hesco_dirt_co.paa"};
};
class Land_Boxloader_Hesco_3: Land_Boxloader_Hesco_1 {
	displayName = "Boxloader HESCO 3m";
	model = "\boxloader\mdl\boxloader_hesco_3.p3d";
};
class Land_Boxloader_Hesco_5: Land_Boxloader_Hesco_1 {
	displayName = "Boxloader HESCO 5m";
	model = "\boxloader\mdl\boxloader_hesco_5.p3d";
};
class Land_Boxloader_Fort_Roof_Flat: HBarrier_base_F {
	displayName = "Boxloader Bunker Roof (Packed)";
	editorCategory="EdCat_Supplies";
	editorSubcategory="EdSubCat_BoxloaderFort";
	model = "\boxloader\mdl\boxloader_fort_roof_flat.p3d";
	scope = 2;
	Boxloader_ConBase="Land_Boxloader_Fort_Roof";
	Boxloader_ConName="Build bunker roof";
	scopeCurator = 2;
	class EventHandlers {
		init = "_this call boxloader_fnc_fort_roof";
		class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
	};
};
class Land_Boxloader_Fort_Roof: Land_Boxloader_Fort_Roof_Flat {
	armor=2000;
	destrType="DestructBuilding";
	displayName = "Boxloader Bunker Roof";
	model = "\boxloader\mdl\boxloader_fort_roof.p3d";
	scope = 1;
	scopeCurator = 1;
	ace_dragging_canCarry = 0;
	ace_cargo_canLoad = 0;
	Boxloader_ConBase="Land_Boxloader_Fort_Roof_Flat";
	class AnimationSources {
		class Fill_Source {
			source = "user";
			initPhase = 1;
			animPeriod = 1;
		};
		class Lift_Source {
			source = "user";
			initPhase = 0;
			animPeriod = 1;
		};
	};
	class EventHandlers {
		init = "_this call boxloader_fnc_fort_roof_built";
		class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
	};
};

class Land_Boxloader_Fort_Plat_Flat: HBarrier_base_F {
	displayName = "Boxloader Wood Platform (Packed)";
	editorCategory="EdCat_Supplies";
	editorSubcategory="EdSubCat_BoxloaderFort";
	model = "\boxloader\mdl\boxloader_fort_plat_flat.p3d";
	scope = 2;
	scopeCurator = 2;
	class EventHandlers {
		init = "_this call boxloader_fnc_fort_plat";
		class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
	};
	hiddenSelections[] = {"texture"};
	hiddenSelectionsTextures[] = {"\boxloader\tex\boxloader_wood_co.paa"};
};
class Land_Boxloader_Fort_Plat_5: HBarrier_base_F {
	armor=800;
	destrType="DestructBuilding";
	displayName = "Boxloader Bunker Platform 5x5";
	model = "\boxloader\mdl\boxloader_fort_plat_5m.p3d";
	scope = 1;
	scopeCurator = 1;
	ace_dragging_canCarry = 0;
	ace_cargo_canLoad = 0;
	Boxloader_ConBase="Land_Boxloader_Fort_Plat_Flat";
	class EventHandlers {
		init = "_this call boxloader_fnc_fort_plat_built";
		class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
	};
};
class Land_Boxloader_Fort_Plat_3: Land_Boxloader_Fort_plat_5 {
	displayName = "Boxloader Bunker Platform 3x3";
	model = "\boxloader\mdl\boxloader_fort_plat_3m.p3d";
};
class Land_Boxloader_Hesco_Big1: Land_Boxloader_Hesco_1 {
	armor=2000;
	displayName = "Boxloader Big HESCO 2m";
	model = "\boxloader\mdl\boxloader_hesco_big1.p3d";
	Boxloader_ConBase="Land_Boxloader_Hesco_BigFlat";
};
class Land_Boxloader_Hesco_Big3: Land_Boxloader_Hesco_Big1 {
	displayName = "Boxloader Big HESCO 6m";
	model = "\boxloader\mdl\boxloader_hesco_big3.p3d";
};
class Land_Boxloader_Hesco_Big5: Land_Boxloader_Hesco_Big1 {
	displayName = "Boxloader Big HESCO 10m";
	model = "\boxloader\mdl\boxloader_hesco_big5.p3d";
};

class Land_Boxloader_Hesco_Small1: Land_Boxloader_Hesco_1 {
	armor=1000;
	displayName = "Boxloader Small HESCO 0.5m";
	model = "\boxloader\mdl\boxloader_hesco_small1.p3d";
	Boxloader_ConBase="Land_Boxloader_Hesco_SmallFlat";
};
class Land_Boxloader_Hesco_Small6: Land_Boxloader_Hesco_Small1 {
	displayName = "Boxloader Small HESCO 3m";
	model = "\boxloader\mdl\boxloader_hesco_small6.p3d";
};
class Land_Boxloader_Hesco_Small10: Land_Boxloader_Hesco_Small1 {
	displayName = "Boxloader Small HESCO 5m";
	model = "\boxloader\mdl\boxloader_hesco_small10.p3d";
};



class Land_Boxloader_Fort_iso_Green: ThingX {
	model = "\boxloader\mdl\boxloader_iso_basic.p3d";
	editorCategory="EdCat_Supplies";
	displayName = "Container Building, Packed (Green)";
	editorSubcategory="EdSubCat_BoxloaderFort";
	class AnimationSources {
		class Sign_Hide_Source {
			source = "user";
			initPhase = 0;
			animPeriod = 1;
		};
	};
	scope=2;
	scopeCurator=2;
	class EventHandlers {
		init = "[_this select 0,1] call boxloader_fnc_fort_iso";
		class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
	};
	BoxloaderClass = "Land_Boxloader_iso_20ft";
	hiddenSelections[] = {"container","sign"};
	hiddenSelectionsTextures[] = {"\boxloader\tex\boxloader_iso_od_co.paa","\boxloader\tex\boxloader_isostruct_black_ca.paa"};
	slingLoadCargoMemoryPoints[] = { "SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};
};
class Land_Boxloader_Fort_iso_Rusty: Land_Boxloader_Fort_iso_Green {
	displayName = "Container Building, Packed (Rusty)";
	hiddenSelections[] = {"container","sign"};
	class EventHandlers {
		init = "[_this select 0,2] call boxloader_fnc_fort_iso";
		class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
	};
	hiddenSelectionsTextures[] = {"\boxloader\tex\boxloader_iso_blank_co.paa","\boxloader\tex\boxloader_isostruct_white_ca.paa"};
};
class Land_Boxloader_Fort_iso_Brown: Land_Boxloader_Fort_iso_Green {
	displayName = "Container Building, Packed (Brown)";
	class EventHandlers {
		init = "[_this select 0,3] call boxloader_fnc_fort_iso";
		class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
	};
	hiddenSelections[] = {"container","sign"};
	hiddenSelectionsTextures[] = {"\boxloader\tex\boxloader_iso_sand_co.paa","\boxloader\tex\boxloader_isostruct_black_ca.paa"};
};
class Land_Boxloader_Fort_iso_Aid: Land_Boxloader_Fort_iso_Green {
	displayName = "Container Building, Packed (Medical)";
	class EventHandlers {
		init = "[_this select 0,0] call boxloader_fnc_fort_iso";
		class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
	};
	hiddenSelections[] = {"container","sign"};
	hiddenSelectionsTextures[] = {"\boxloader\tex\boxloader_iso_aid_co.paa","\boxloader\tex\boxloader_isostruct_black_ca.paa"};
};