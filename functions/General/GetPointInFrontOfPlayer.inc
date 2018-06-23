Tryg3D::Function:: Float:GetPointInFrontOfPlayer(playerid,&Float:tx,&Float:ty,Float:radius){
	new Float:rz;
	GetPlayerPos(playerid,tx,ty,rz);
	if(IsPlayerInAnyVehicle(playerid)){
		GetVehicleZAngle(GetPlayerVehicleID(playerid),rz);
	} else {
		GetPlayerFacingAngle(playerid,rz);
	}
	GetPointInFront2D(tx,ty,rz,radius,tx,ty);
	return rz;
}