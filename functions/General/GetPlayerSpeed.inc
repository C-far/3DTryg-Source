Tryg3D::Function:: Float:GetPlayerSpeed(playerid){
	new Float:x,Float:y,Float:z;
	GetPlayerVelocity(playerid,x,y,z);
	return floatmul(VectorSize(x,y,z),PLAYER_SPEED_MULTIPLIER);
}