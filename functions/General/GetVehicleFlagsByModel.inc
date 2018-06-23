Tryg3D::Function:: GetVehicleFlagsByModel(modelid){
	if(!(400 <= modelid <= 611)) return 0;
	return Tryg3D::VehicleFlags[modelid - 400];
}