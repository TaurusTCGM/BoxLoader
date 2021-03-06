class Land_Boxloader_mem_cupm1152: Land_Boxloader_membase_truck {
	model = "\boxloader_retrofit\mdl\boxloader_mem_cupm1152.p3d";
};
class Land_Boxloader_mem_cuphsov: Land_Boxloader_membase_truck {
	model = "\boxloader_retrofit\mdl\boxloader_mem_cuphsov.p3d";
};
class Land_Boxloader_mem_cupmtvr: Land_Boxloader_membase_truck {
	model = "\boxloader_retrofit\mdl\boxloader_mem_cupmtvr.p3d";
};
class Land_Boxloader_mem_cupuaz: Land_Boxloader_membase_truck {
	model = "\boxloader_retrofit\mdl\boxloader_mem_cupuaz.p3d";
};
class Land_Boxloader_mem_cupdatsun: Land_Boxloader_membase_truck {
	model = "\boxloader_retrofit\mdl\boxloader_mem_cupdatsun.p3d";
};
class Land_Boxloader_mem_cupdatsun_rear: Land_Boxloader_membase_truck {
	model = "\boxloader_retrofit\mdl\boxloader_mem_cupdatsun_rear.p3d";
};
class Land_Boxloader_mem_cupm998: Land_Boxloader_membase_truck {
	model = "\boxloader_retrofit\mdl\boxloader_mem_cupm998.p3d";
	class VehicleTransport: VehicleTransport {
		class Carrier: Carrier {
			cargoBayDimensions[]        = {"BBox_Base1", "BBox_Corner"};
			cargoAlignment[]            = {"back","center"};
			maxLoadMass                 = 10000;
			disableHeightLimit          = 0;
		};
	};
};
class Land_Boxloader_mem_cupv3s: Land_Boxloader_membase_truck {
	model = "\boxloader_retrofit\mdl\boxloader_mem_cupv3s.p3d";
};