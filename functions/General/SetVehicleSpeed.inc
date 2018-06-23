Tryg3D::Function:: SetVehicleSpeed(vehicleid,Float:speed){
	new Float:rx,Float:ry,Float:rz,Float:vx,Float:vy,Float:vz;
	Tryg3D::GetVehicleRotation(vehicleid,rx,ry,rz);
	GetPointInFront3DEx(0.0,0.0,0.0,rx,ry,rz,(speed / VEHICLE_SPEED_MULTIPLIER),vx,vy,vz);
	SetVehicleVelocity(vehicleid,vx,vy,vz);
}