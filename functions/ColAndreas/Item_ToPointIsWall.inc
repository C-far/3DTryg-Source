Tryg3D::Function:: Item::ToPointIsWall(Float:x,Float:y,Float:z,TRYG3D_ELEMENT_TAG targetid,Item3D_Type:target_type){
	new Float:xB,Float:yB,Float:zB,Float:T3D:tmp;
	if(!Item::GetPos(targetid,target_type,xB,yB,zB)) return false;
	return ColAndreas::RayCastLine(xB,yB,zB,x,y,z,T3D:tmp,T3D:tmp,T3D:tmp);
}