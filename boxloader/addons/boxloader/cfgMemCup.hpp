class Land_Boxloader_mem_cupm1152: Land_Boxloader_membase_truck {
	model = "\boxloader\mdl\boxloader_mem_cupm1152.p3d";
};
class Land_Boxloader_mem_cuphsov: Land_Boxloader_membase_truck {
	model = "\boxloader\mdl\boxloader_mem_cuphsov.p3d";
};
class Land_Boxloader_mem_cupm998: Land_Boxloader_membase_truck {
	model = "\boxloader\mdl\boxloader_mem_cupm998.p3d";
	class VehicleTransport: VehicleTransport {
		class Carrier: Carrier {
			cargoBayDimensions[]        = {"BBox_Base1", "BBox_Corner"};
			cargoSpacing[]              = {0, 0.1, 0};
			cargoAlignment[]            = {"back","center"};
			maxLoadMass                 = 10000;
			disableHeightLimit          = 0;
		};
	};
};