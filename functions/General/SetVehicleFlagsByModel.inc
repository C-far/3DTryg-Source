Tryg3D::Function:: SetVehicleFlagsByModel(modelid,value){
	if(!(400 <= modelid <= 611)) return 0;
	Tryg3D::VehicleFlags[modelid - 400] = value;
	return 1;
}