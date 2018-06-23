Tryg3D::Function:: FCNPC::SetVehicleRotation(npcid,Float:rx,Float:ry,Float:rz){
	new Float:qw,Float:qx,Float:qy,Float:qz;
	Tryg3D::EulerToQuat(rx,ry,rz,qw,qx,qy,qz);
	FCNPC::SetQuaternion(npcid,qw,qx,qy,qz);
}
