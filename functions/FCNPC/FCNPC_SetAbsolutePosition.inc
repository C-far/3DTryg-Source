Tryg3D::Function:: FCNPC::SetAbsolutePosition(npcid,Float:x,Float:y,Float:z,Float:angle,worldid = -1,interiorid = -1,compensatedtime = -1,freezeplayer = 1){
	Streamer::UpdateEx(npcid,x,y,z,worldid,interiorid,-1,compensatedtime,freezeplayer);
	if(worldid != -1) FCNPC::SetVirtualWorld(npcid,worldid);
	if(interiorid != -1) FCNPC::SetInterior(npcid,interiorid);
	FCNPC::SetPosition(npcid,x,y,z);
	FCNPC::SetAngle(npcid,angle);
}