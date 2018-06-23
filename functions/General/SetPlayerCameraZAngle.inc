Tryg3D::Function:: SetPlayerCameraZAngle(playerid,Float:rz){
	new Float:x,Float:y,Float:z,Float:tx,Float:ty,Float:tz,Float:rx,Float:T3D:tmp;
	GetPlayerCameraPos(playerid,x,y,z);
	GetPlayerCameraRotation(playerid,rx,T3D:tmp);
	GetPointInFront3D(x,y,z,rx,rz,1.0,tx,ty,tz);
	SetPlayerCameraLookAt(playerid,tx,ty,tz);
}