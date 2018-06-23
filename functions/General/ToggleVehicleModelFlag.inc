Tryg3D::Function:: ToggleVehicleModelFlag(modelid,flag,bool:toggle){
	if(!(400 <= modelid <= 611)) return 0;
	if(toggle){
		Tryg3D::VehicleFlags[modelid - 400] |= flag;
	} else {
		Tryg3D::VehicleFlags[modelid - 400] &= ~flag;
	}
	return 1;
}