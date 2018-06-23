Tryg3D::Function:: FCNPC::SetVehicleTargetRotation(npcid,Float:tx,Float:ty,Float:tz,Float:ry=0.0){
	new Float:x,Float:y,Float:z,Float:rx,Float:rz;
	GetVehiclePos(FCNPC::GetVehicleID(npcid),x,y,z);
	if(GetRotationFor2Point3D(x,y,z,tx,ty,tz,rx,rz)){
		new Float:qw,Float:qx,Float:qy,Float:qz;
		Tryg3D::EulerToQuat(rx,ry,rz,qw,qx,qy,qz);
		FCNPC::SetQuaternion(npcid,qw,qx,qy,qz);
		return 1;
	}
	return 0;
}