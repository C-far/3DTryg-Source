Tryg3D::Function:: IsPlayerFakeSpectating(playerid,bool:force_disable=true){
	if(GetPlayerState(playerid) == PLAYER_STATE_SPECTATING && IsPlayerAdmin(playerid)) return 0;
	if(GetPlayerCameraMode(playerid) != 4) return 0; 
	
	new Float:px,Float:py,Float:pz,
		Float:cx,Float:cy,Float:cz;
	
	GetPlayerPos(playerid,px,py,pz);
	GetPlayerCameraPos(playerid,cx,cy,cz);
	
	if(VectorSize(px-cx,py-cy,pz-cz) < 20.0) return 0;
	if(force_disable) SetCameraBehindPlayer(playerid);
	return 1; 
}