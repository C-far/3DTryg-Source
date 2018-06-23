Tryg3D::Function:: Float:GetPointInFrontOfDynVeh2D(STREAMER_TAG_VEHICLE vehicleid,&Float:tx,&Float:ty,Float:radius){
	new Float:rx,Float:ry,Float:rz,Float:x,Float:y;
	GetDynamicVehiclePos(vehicleid,x,y,rz);
	GetDynamicVehicleRotation(vehicleid,rx,ry,rz);
	GetPointInFront2D(x,y,rz,radius,tx,ty);
	return rz;
}