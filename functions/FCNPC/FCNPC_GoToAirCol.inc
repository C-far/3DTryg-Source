Tryg3D::Function:: FCNPC::GoToAirCol(npcid,Float:x,Float:y,Float:z,type = FCNPC_MOVE_TYPE_AUTO,Float:speed = FCNPC_MOVE_SPEED_AUTO,Float:cut_size = 0.0,Float:dist_offset = 0.0,stopdelay = 250){
	new Float:px,Float:py,Float:pz,Float:tx,Float:ty,Float:tz;
	GetVehiclePos(FCNPC::GetVehicleID(npcid),px,py,pz);
	if(MovePointColCutLineEx(px,py,pz,x,y,z,tx,ty,tz,cut_size)){
		FCNPC::SetVehicleTargetRotation(npcid,tx,ty,tz);
		FCNPC::GoTo(npcid,tx,ty,tz,type,speed,false,0.0,false,dist_offset,stopdelay);
	}
}