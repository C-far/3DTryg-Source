Tryg3D::Function:: FCNPC::SetFloorPos(npcid){
	new Float:x,Float:y,Float:z,Float:target_z;
	FCNPC::GetPosition(npcid,x,y,z);
	ColAndreas::FindGroundZ(x,y,z,target_z);
	FCNPC::SetPosition(npcid,x,y,target_z+1.0);
	return 1;
}