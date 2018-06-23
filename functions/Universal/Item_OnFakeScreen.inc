Tryg3D::Function:: Item::OnFakeScreen(Float:x,Float:y,Float:z,TRYG3D_ELEMENT_TAG targetid,Item3D_Type:target_type,Float:rx,Float:rz,Float:vrx=VERTICAL_CAMERA_RADIUS,Float:vrz=HORIZONTAL_CAMERA_RADIUS,bool:testLOS=true,bool:veh_col=false){
	new Float:tx,Float:ty,Float:tz;
	if(!Item::GetPos(targetid,target_type,tx,ty,tz)) return 0;
	return IsPointInSphericalSectorEx(tx,ty,tz,x,y,z,rx,rz,Tryg3D::StreamDistance,vrx,vrz,testLOS,veh_col);
}