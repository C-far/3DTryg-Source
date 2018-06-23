//GetPointInFrontOfPlayer (ColAndreas)
Tryg3D::Function:: Float:GetPointInFrontOfPlayerCol(playerid,&Float:tx,&Float:ty,Float:radius){
	new Float:rz,Float:z;
	GetPlayerPos(playerid,tx,ty,z);
	if(IsPlayerInAnyVehicle(playerid)){
		GetVehicleZAngle(GetPlayerVehicleID(playerid),rz);
	} else {
		GetPlayerFacingAngle(playerid,rz);
	}
	GetPointInFront3DCol(tx,ty,z,0.0,rz,radius,tx,ty,z);
	return rz;
}