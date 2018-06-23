//GetPointInFrontOfCamera3D (ColAndreas)
Tryg3D::Function:: GetPointInFrontOfCamera3DCol(playerid,&Float:tx,&Float:ty,&Float:tz,Float:radius,&Float:rx=0.0,&Float:rz=0.0){
	new Float:x,Float:y,Float:z;
	GetPlayerCameraPos(playerid,x,y,z);
	GetPlayerCameraRotation(playerid,rx,rz);
	GetPointInFront3DCol(x,y,z,rx,rz,radius,tx,ty,tz);
}