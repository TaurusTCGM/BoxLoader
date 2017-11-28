
//Editor entries
class Land_Boxloader_Pallet_1_ed: Boxloader_Pallet_base_ed {
	displayName = "Boxloader Pallet Square";
	model = "\boxloader\mdl\boxloader_pallet1.p3d";
	scope=2;
	scopeCurator=2;
	BoxloaderClass = "Land_Boxloader_Pallet_1";
};
class Land_Boxloader_Pallet_2_ed: Boxloader_Pallet_base_ed {
	displayName = "Boxloader EUR-1 Pallet";
	model = "\boxloader\mdl\boxloader_pallet2.p3d";
	scope=2;
	scopeCurator=2;
	BoxloaderClass = "Land_Boxloader_Pallet_2";
};
class Land_Boxloader_Pallet_3_ed: Boxloader_Pallet_base_ed {
	displayName = "Boxloader Pallet US";
	model = "\boxloader\mdl\boxloader_pallet3.p3d";
	scope=2;
	scopeCurator=2;
	BoxloaderClass = "Land_Boxloader_Pallet_3";
};
class Land_Boxloader_iso20_ed: Boxloader_Pallet_base_ed {
	model = "\boxloader\mdl\boxloader_iso_basic.p3d";
	displayName = "20ft ISO (Green)";
	editorSubcategory="EdSubCat_BoxloaderCon";
	scope=2;
	scopeCurator=2;
	BoxloaderClass = "Land_Boxloader_iso_20ft";
	hiddenSelections[] = {"container"};
	hiddenSelectionsTextures[] = {"\boxloader\tex\boxloader_iso_blank_co.paa"};
};
class Land_Boxloader_iso_tricon_ed: Boxloader_Pallet_base_ed {
	model = "\boxloader\mdl\boxloader_iso_tricon.p3d";
	displayName = "TRICON (Green)";
	editorSubcategory="EdSubCat_BoxloaderCon";
	scope=2;
	scopeCurator=2;
	BoxloaderClass = "Land_Boxloader_iso_tricon";
	hiddenSelections[] = {"container"};
	hiddenSelectionsTextures[] = {"\boxloader\tex\boxloader_iso_blank_co.paa"};
};

class Land_Boxloader_iso_20ft_black_ed: Land_Boxloader_iso20_ed {
	displayName = "20ft ISO (Black)";
	hiddenSelectionsTextures[] = {"\boxloader\tex\boxloader_iso_black_co.paa"};
	BoxloaderClass = "Land_Boxloader_iso_20ft_black";
};
class Land_Boxloader_iso_20ft_aid_ed: Land_Boxloader_iso20_ed {
	displayName = "20ft ISO (Red Crystal)";
	hiddenSelectionsTextures[] = {"\boxloader\tex\boxloader_iso_aid_co.paa"};
	BoxloaderClass = "Land_Boxloader_iso_20ft_aid";
};
class Land_Boxloader_iso_20ft_seabee_ed: Land_Boxloader_iso20_ed {
	displayName = "20ft ISO (Equipment)";
	hiddenSelectionsTextures[] = {"\boxloader\tex\boxloader_iso_seabee_co.paa"};
	BoxloaderClass = "Land_Boxloader_iso_20ft_seabee";
};


class Land_Boxloader_iso_tricon_black_ed: Land_Boxloader_iso_tricon_ed {
	displayName = "TRICON (Black)";
	hiddenSelectionsTextures[] = {"\boxloader\tex\boxloader_iso_black_co.paa"};
	BoxloaderClass = "Land_Boxloader_iso_tricon_black";
};
class Land_Boxloader_iso_tricon_aid_ed: Land_Boxloader_iso_tricon_ed {
	displayName = "TRICON (Red Crystal)";
	hiddenSelectionsTextures[] = {"\boxloader\tex\boxloader_iso_aid_co.paa"};
	BoxloaderClass = "Land_Boxloader_iso_tricon_aid";
};
class Land_Boxloader_iso_tricon_seabee_ed: Land_Boxloader_iso_tricon_ed {
	displayName = "TRICON (Equipment)";
	hiddenSelectionsTextures[] = {"\boxloader\tex\boxloader_iso_seabee_co.paa"};
	BoxloaderClass = "Land_Boxloader_iso_tricon_seabee";
};


class Land_Boxloader_Pallet_5_ed: Boxloader_Pallet_base_ed {
	displayName = "Boxloader 463L Master Pallet";
	model = "\boxloader\mdl\boxloader_pallet5.p3d";
	scope=2;
	scopeCurator=2;
	BoxloaderClass = "Land_Boxloader_Pallet_5";
};


//Gameplay pallets
class Land_Boxloader_Pallet_1: Boxloader_Pallet_Base {
	model = "\boxloader\mdl\boxloader_pallet1.p3d";
	displayName = "Boxloader Pallet Square";
	class VehicleTransport: VehicleTransport {
		class Carrier: Carrier {
			maxLoadMass                 = 15000; //hectograms?
		};
	};
};

class Land_Boxloader_Pallet_2: Boxloader_Pallet_Base {
	model = "\boxloader\mdl\boxloader_pallet2.p3d";
	displayName = "Boxloader EUR-1 Pallet";
};
class Land_Boxloader_Pallet_3: Boxloader_Pallet_Base {
	model = "\boxloader\mdl\boxloader_pallet3.p3d";
	displayName = "Boxloader Pallet US";
};
class Land_Boxloader_Pallet_4: Boxloader_Pallet_Base {
	model = "\boxloader\mdl\boxloader_pallet4.p3d";
	displayName = "Boxloader Flat Rack";
	class VehicleTransport: VehicleTransport {
		class Carrier: Carrier {
			cargoBayDimensions[]        = {"BBox_Base1", "BBox_Corner"};
			exits[]						= {"BBox_Exit"};
			cargoAlignment[]            = {"front","center"};
			cargoSpacing[]              = {0.05, 0.05, 0};
			maxLoadMass                 = 480000; //randomly chosen
			disableHeightLimit          = 1;
		};
	};
};
class Land_Boxloader_Pallet_5: Boxloader_Pallet_Base {
	model = "\boxloader\mdl\boxloader_pallet5.p3d";
	displayName = "463L Master Pallet";
	ace_dragging_dragPosition[] = {0,2.5,0};
	class VehicleTransport: VehicleTransport {
		class Cargo: Cargo {
			dimensions[]                = {"BBox_Base0", "BBox_Corner"};
		};
		class Carrier: Carrier {
			cargoBayDimensions[]        = {"BBox_Base1", "BBox_Corner"};
			cargoAlignment[]            = {"left","front"};
			cargoSpacing[]              = {0.05, 0.05, 0};
			maxLoadMass                 = 45000;
			disableHeightLimit          = 0;
		};
	};
};
class Boxloader_Container_Base: Boxloader_Pallet_Base {
	class EventHandlers: EventHandlers {
		init = "[_this select 0,'container'] call boxloader_fnc_pallet_init";	
	};
	hiddenSelections[] = {"container"};
	hiddenSelectionsTextures[] = {"\boxloader\tex\boxloader_iso_blank_co.paa"};
	class VehicleTransport: VehicleTransport {
		class Cargo: Cargo {
			parachuteClass              = "B_Parachute_02_F";
			canBeTransported            = 1;
			dimensions[]                = {};
		};
		class Carrier: Carrier {
			cargoBayDimensions[]        = {"BBox_Base1", "BBox_Corner"};
			cargoSpacing[]              = {0.01, 0.01, 0};
			maxLoadMass                 = 280000;
			exits[]                     = {"BBox_Exit1","BBox_Exit2"};
			disableHeightLimit			= 0;
		};
	};
	class AnimationSources {
		class Door_1_Source {
			source = "user";
			initPhase = 0;
			animPeriod = 1;
			sound = "GenericDoorsSound";
		};
		class Door_2_Source: Door_1_Source {};
	};
	class UserActions {
		class OpenDoor1 {
			displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
			displayName = "Open Door";
			position = Action_1;
			priority = 0.4;
			radius = 3;
			onlyForPlayer = false;
			condition = ((this animationPhase "Door_1L_Anim")<0.5);
			statement = (this animateSource ["Door_1_Source",1]);
		};
		class OpenDoor2: OpenDoor1 {
			position = Action_2;
			condition = ((this animationPhase "Door_2L_Anim")<0.5);
			statement = (this animateSource ["Door_2_Source",1]);
		};
		class CloseDoor1: OpenDoor1 {
			displayName = "Close Door";
			condition = ((this animationPhase "Door_1L_Anim")>0.5);
			statement = (this animateSource ["Door_1_Source",0]);
		};
		class CloseDoor2: OpenDoor2 {
			displayName = "Close Door";
			condition = ((this animationPhase "Door_2L_Anim")>0.5);
			statement = (this animateSource ["Door_2_Source",0]);
		};
	};
	ace_dragging_canDrag = 0;
};
class Land_Boxloader_iso_20ft: Boxloader_Container_Base {
	model = "\boxloader\mdl\boxloader_iso_basic.p3d";
	displayName = "20ft ISO (Green)";
	class VehicleTransport: VehicleTransport {
		class Carrier: Carrier {
			maxLoadMass                 = 280000;
		};
	};
};
class Land_Boxloader_iso_20ft_black: Land_Boxloader_iso_20ft {
	displayName = "20ft ISO (Black)";
	hiddenSelectionsTextures[] = {"\boxloader\tex\boxloader_iso_black_co.paa"};
};
class Land_Boxloader_iso_20ft_aid: Land_Boxloader_iso_20ft {
	displayName = "20ft ISO (Red Crystal)";
	hiddenSelectionsTextures[] = {"\boxloader\tex\boxloader_iso_aid_co.paa"};
};
class Land_Boxloader_iso_20ft_seabee: Land_Boxloader_iso_20ft {
	displayName = "20ft ISO (Equipment)";
	hiddenSelectionsTextures[] = {"\boxloader\tex\boxloader_iso_seabee_co.paa"};
};

class Land_Boxloader_iso_tricon: Boxloader_Container_Base {
	model = "\boxloader\mdl\boxloader_iso_tricon.p3d";
	displayName = "TRICON (Green)";
	class VehicleTransport: VehicleTransport {
		class Carrier: Carrier {
			maxLoadMass                 = 56000;
		};
	};
	class UserActions {
		class OpenDoor1 {
			displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
			displayName = "Open Door";
			position = Action_1;
			priority = 0.4;
			radius = 3;
			onlyForPlayer = false;
			condition = ((this animationPhase "Door_1L_Anim")<0.5);
			statement = (this animateSource ["Door_1_Source",1]);
		};
		class CloseDoor1: OpenDoor1 {
			displayName = "Close Door";
			condition = ((this animationPhase "Door_1L_Anim")>0.5);
			statement = (this animateSource ["Door_1_Source",0]);
		};
	};
};
class Land_Boxloader_iso_tricon_black: Land_Boxloader_iso_tricon {
	displayName = "TRICON (Black)";
	hiddenSelectionsTextures[] = {"\boxloader\tex\boxloader_iso_black_co.paa"};
};
class Land_Boxloader_iso_tricon_aid: Land_Boxloader_iso_tricon {
	displayName = "TRICON (Red Crystal)";
	hiddenSelectionsTextures[] = {"\boxloader\tex\boxloader_iso_aid_co.paa"};
};
class Land_Boxloader_iso_tricon_seabee: Land_Boxloader_iso_tricon {
	displayName = "TRICON (Equipment)";
	hiddenSelectionsTextures[] = {"\boxloader\tex\boxloader_iso_seabee_co.paa"};
};