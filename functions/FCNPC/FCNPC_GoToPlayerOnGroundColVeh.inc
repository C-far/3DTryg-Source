Tryg3D::Function:: FCNPC::GoToPlayerOnGroundColVeh(npcid,playerid,type = FCNPC_MOVE_TYPE_AUTO,Float:speed = FCNPC_MOVE_SPEED_AUTO,bool:UseMapAndreas = false,Float:cut_size = 1.0,Float:climbing = 2.0,bool:setangle = true,Float:dist_offset = 0.0,stopdelay = 250){
	new Float:px,Float:py,Float:pz,Float:x,Float:y,Float:z,Float:tx,Float:ty,Float:tz;
	GetPlayerPos(playerid,x,y,z);
	FCNPC::GetPosition(npcid,px,py,pz);
	if(GetDistanceBetweenPoints1D(pz,z) > climbing) z = pz;
	if(MovePointColWithVehicleCut(px,py,pz,x,y,z,tx,ty,tz,cut_size)){
		FCNPC::GoTo(npcid,tx,ty,tz,type,speed,UseMapAndreas,0.0,setangle,dist_offset,stopdelay);
	}
}