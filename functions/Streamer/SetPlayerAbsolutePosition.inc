Tryg3D::Function:: SetPlayerAbsolutePosition(playerid,Float:x,Float:y,Float:z,Float:angle,worldid = -1,interiorid = -1,compensatedtime = -1,freezeplayer = 1){
	Streamer::UpdateEx(playerid,x,y,z,worldid,interiorid,-1,compensatedtime,freezeplayer);
	if(worldid != -1) SetPlayerVirtualWorld(playerid,worldid);
	if(interiorid != -1) SetPlayerInterior(playerid,interiorid);
	SetPlayerPos(playerid,x,y,z);
	SetPlayerFacingAngle(playerid,angle);
	SetCameraBehindPlayer(playerid);
}