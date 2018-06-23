Tryg3D::Function:: FCNPC::GoToAir(npcid,Float:x,Float:y,Float:z,type = FCNPC_MOVE_TYPE_AUTO,Float:speed = FCNPC_MOVE_SPEED_AUTO,Float:dist_offset = 0.0,stopdelay = 250){
	FCNPC::SetVehicleTargetRotation(npcid,x,y,z);
	FCNPC::GoTo(npcid,x,y,z,type,speed,false,0.0,false,dist_offset,stopdelay);
}