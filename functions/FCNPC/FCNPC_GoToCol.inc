Tryg3D::Function:: FCNPC::GoToCol(npcid,Float:x,Float:y,Float:z,type = FCNPC_MOVE_TYPE_AUTO,Float:speed = FCNPC_MOVE_SPEED_AUTO,bool:UseMapAndreas = false,Float:cut_size = 0.0,bool:setangle = true,Float:dist_offset = 0.0,stopdelay = 250){
	new Float:px,Float:py,Float:pz,Float:tx,Float:ty,Float:tz;
	FCNPC::GetPosition(npcid,px,py,pz);
	if(MovePointColCutLineEx(px,py,pz,x,y,z,tx,ty,tz,cut_size)){
		FCNPC::GoTo(npcid,tx,ty,tz,type,speed,UseMapAndreas,0.0,setangle,dist_offset,stopdelay);
	}
}