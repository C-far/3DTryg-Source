Tryg3D::Function:: IsPlayerAimingAt(playerid,Float:x,Float:y,Float:z,Float:radius){
	new Float:cx,Float:cy,Float:cz,Float:fx,Float:fy,Float:fz;
	GetPlayerCameraPos(playerid,cx,cy,cz);
	GetPlayerCameraFrontVector(playerid,fx,fy,fz);
	return (radius >= GetCameraTargetDistance(cx,cy,cz,x,y,z,fx,fy,fz));
}