Tryg3D::Function:: Item::OnPlayerScreen(playerid,TRYG3D_ELEMENT_TAG targetid,Item3D_Type:target_type=item_player,element_orientation:orientation=o_front,Float:rx=INVALID_ROTATION,Float:rz=INVALID_ROTATION,Float:vrx=VERTICAL_CAMERA_RADIUS,Float:vrz=HORIZONTAL_CAMERA_RADIUS,bool:testLOS=true,bool:testVW=true,bool:veh_col=false){
	new Float:x,Float:y,Float:z,Float:tx,Float:ty,Float:tz,Float:prx,Float:prz,worldid;
	GetPlayerCameraPos(playerid,x,y,z);
	GetPlayerCameraRotation(playerid,prx,prz);
	
	switch(orientation){
		case o_left:	prx = CompRotationFloat(prx+90.0);
		case o_right:	prx = CompRotationFloat(prx-90.0);
		case o_back:	prx = CompRotationFloat(prx+180.0);
	}
	
	worldid = GetPlayerVirtualWorld(playerid);
	if(rx != INVALID_ROTATION) prx = rx;
	if(rz != INVALID_ROTATION) prz = rz;
	
	if(!Item::GetPos(targetid,target_type,tx,ty,tz)) return 0;
	
	if(testVW){
		new T3D:vw = Item::GetVirtualWorld(targetid,target_type);
		if(T3D:vw != worldid && T3D:vw != -1) return 0;
	}
	return IsPointInSphericalSectorEx(tx,ty,tz,x,y,z,prx,prz,Tryg3D::StreamDistance,vrx,vrz,testLOS,veh_col);
}