Tryg3D::Function:: SetPlayerCameraRotation(playerid,Float:rx,Float:rz){
	new Float:x,Float:y,Float:z,Float:tx,Float:ty,Float:tz;
	GetPlayerCameraPos(playerid,x,y,z);
	GetPointInFront3D(x,y,z,rx,rz,1.0,tx,ty,tz);
	SetPlayerCameraLookAt(playerid,tx,ty,tz);
}