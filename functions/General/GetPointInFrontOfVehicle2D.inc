Tryg3D::Function:: Float:GetPointInFrontOfVehicle2D(vehicleid,&Float:tx,&Float:ty,Float:radius){
	new Float:rz,Float:x,Float:y;
	GetVehiclePos(vehicleid,x,y,rz);
	GetVehicleZAngle(vehicleid,rz);
	GetPointInFront2D(x,y,rz,radius,tx,ty);
	return rz;
}