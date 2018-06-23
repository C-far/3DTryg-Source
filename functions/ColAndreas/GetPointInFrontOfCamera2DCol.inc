//GetPointInFrontOfCamera2D (ColAndreas)
Tryg3D::Function:: Float:GetPointInFrontOfCamera2DCol(playerid,&Float:tx,&Float:ty,Float:radius){
	new Float:x,Float:y,Float:z,Float:rz;
	GetPlayerCameraPos(playerid,x,y,z);
	GetPlayerCameraZAngle(playerid,rz);
	GetPointInFront3DCol(x,y,z,0.0,rz,radius,tx,ty,z);
	return rz;
}