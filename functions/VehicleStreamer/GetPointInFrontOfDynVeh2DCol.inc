//GetPointInFrontOfVehicle2D (ColAndreas)
Tryg3D::Function:: Float:GetPointInFrontOfDynVeh2DCol(STREAMER_TAG_VEHICLE vehicleid,&Float:tx,&Float:ty,Float:radius){
	new Float:rx,Float:ry,Float:rz,Float:x,Float:y,Float:z;
	GetDynamicVehiclePos(vehicleid,x,y,z);
	GetDynamicVehicleRotation(vehicleid,rx,ry,rz);
	GetPointInFront3DCol(x,y,z,0.0,rz,radius,tx,ty,z);
	return rz;
}