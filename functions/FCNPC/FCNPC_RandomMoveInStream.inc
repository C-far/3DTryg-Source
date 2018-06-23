Tryg3D::Function:: FCNPC::RandomMoveInStream(npcid,Stream:StreamData[Stream3D],Float:climbing = 2.0,type = FCNPC_MOVE_TYPE_AUTO,Float:speed = FCNPC_MOVE_SPEED_AUTO,bool:UseMapAndreas = false,bool:setangle = true,Float:dist_offset = 0.0,stopdelay = 250){
	if(!FCNPC::IsValid(npcid) || FCNPC::IsDead(npcid)) return 0;
	new Float:x,Float:y,Float:z,Float:tx,Float:ty,Float:tz,Float:T3D:tmp,cnt = 0;
	FCNPC::GetPosition(npcid,x,y,z);
	do {
		if(cnt >= 100) return 0;
		GetRandomPointInStream(StreamData,tx,ty,tz);
		ColAndreas::FindZ_For2DCoord(tx,ty,tz);
		tz += 1.0;
		cnt++;
	} while (IsPointInWater(tx,ty) || ColAndreas::RayCastLine(x,y,z,tx,ty,tz,T3D:tmp,T3D:tmp,T3D:tmp) || GetDistanceBetweenPoints1D(tz,z) > climbing || !IsPointInStream(tx,ty,tz,StreamData));
	return FCNPC::GoTo(npcid,tx,ty,tz,type,speed,UseMapAndreas,0.0,setangle,dist_offset,stopdelay);
}