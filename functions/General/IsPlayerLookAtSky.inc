Tryg3D::Function:: IsPlayerLookAtSky(playerid){
	new Float:rx,Float:rz;
	GetPlayerCameraRotation(playerid,rx,rz);
	return (rx > 0.0 && rx <= 90.0);
}