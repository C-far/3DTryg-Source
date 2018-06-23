Tryg3D::Function:: SetPlayerLookAtPlayer(playerid,targetid,cut = CAMERA_CUT){
	new Float:x,Float:y,Float:z;
	GetPlayerPos(targetid,x,y,z);
	SetPlayerCameraLookAt(playerid,x,y,z,cut);
}
