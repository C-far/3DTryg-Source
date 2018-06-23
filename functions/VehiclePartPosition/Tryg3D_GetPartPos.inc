Tryg3D::Function:: Tryg3D::GetPartPos(modelid,partid,Float:x,Float:y,Float:z,Float:rx,Float:ry,Float:rz,&Float:tx,&Float:ty,&Float:tz,Float:offset_x=0.0,Float:offset_y=0.0,Float:offset_z=0.0){
	new Float:ox,Float:oy,Float:oz;
	switch(partid){
		case VEHICLE_PART_RFTIRE: {
			GetVehicleModelInfo(modelid,VEHICLE_MODEL_INFO_WHEELSFRONT,ox,oy,oz);
		}
		case VEHICLE_PART_LFTIRE: {
			GetVehicleModelInfo(modelid,VEHICLE_MODEL_INFO_WHEELSFRONT,ox,oy,oz);
			ox *= (-1);
			offset_x *= (-1);
		}
		case VEHICLE_PART_RRTIRE: {
			GetVehicleModelInfo(modelid,VEHICLE_MODEL_INFO_WHEELSREAR,ox,oy,oz);
		}
		case VEHICLE_PART_LRTIRE: {
			GetVehicleModelInfo(modelid,VEHICLE_MODEL_INFO_WHEELSREAR,ox,oy,oz);
			ox *= (-1);
			offset_x *= (-1);
		}
		case VEHICLE_PART_HOOD: {
			GetVehicleModelInfo(modelid,VEHICLE_MODEL_INFO_SIZE,ox,oy,oz);
			oy /= 2.0;
			ox = oz = 0.0;
		}
		case VEHICLE_PART_TRUNK: {
			GetVehicleModelInfo(modelid,VEHICLE_MODEL_INFO_SIZE,ox,oy,oz);
			oy /= (-2.0);
			offset_y *= (-1);
			ox = oz = 0.0;
		}
		case VEHICLE_PART_ROOF: {
			GetVehicleModelInfo(modelid,VEHICLE_MODEL_INFO_SIZE,ox,oy,oz);
			oz /= 2.0;
			ox = oy = 0.0;
		}
		case VEHICLE_PART_CHASSIS: {
			GetVehicleModelInfo(modelid,VEHICLE_MODEL_INFO_SIZE,ox,oy,oz);
			oz /= (-2.0);
			offset_z *= (-1);
			ox = oy = 0.0;
		}
		case VEHICLE_PART_PETROLCAP: {
			GetVehicleModelInfo(modelid,VEHICLE_MODEL_INFO_PETROLCAP,ox,oy,oz);
		}
	}
	ox += offset_x;
	oy += offset_y;
	oz += offset_z;
	ShiftOffsetToPosition(x,y,z, rx,ry,rz, ox,oy,oz, tx,ty,tz);
	return !(ox == 0.0 && oy == 0.0 && oz == 0.0);
}