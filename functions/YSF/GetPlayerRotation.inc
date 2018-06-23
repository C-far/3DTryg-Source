Tryg3D::Function:: GetPlayerRotation(playerid,&Float:rx,&Float:ry,&Float:rz){
	new Float:qw,Float:qx,Float:qy,Float:qz;
	GetPlayerRotationQuat(playerid,qw,qx,qy,qz);
	Tryg3D::QuatToEuler(rx,ry,rz,qw,qx,qy,qz);
}