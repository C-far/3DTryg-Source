Tryg3D::Function:: MovePointColWithVehicleCut(Float:StartX,Float:StartY,Float:StartZ,Float:EndX,Float:EndY,Float:EndZ,&Float:x,&Float:y,&Float:z,Float:cut_size=0.0){
	new Float:px,Float:py,Float:pz,vehicleid;
	vehicleid = MovePointColWithVehicle(StartX,StartY,StartZ,EndX,EndY,EndZ,px,py,pz);
	GetPointFor2Point3DEx(StartX,StartY,StartZ,px,py,pz,(GetDistanceBetweenPoints3D(StartX,StartY,StartZ,px,py,pz)-cut_size),x,y,z);
	return vehicleid;
}