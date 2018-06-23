Tryg3D::Function:: Float:Item::GetDistance(TRYG3D_ELEMENT_TAG elementid,Item3D_Type:element_type,TRYG3D_ELEMENT_TAG targetid,Item3D_Type:target_type){
	new Float:x,Float:y,Float:z,Float:tx,Float:ty,Float:tz;
	if(!Item::GetPos(elementid,element_type,x,y,z)) return -1.0;
	if(!Item::GetPos(targetid,target_type,tx,ty,tz)) return -1.0;
	return GetDistanceBetweenPoints3D(x,y,z,tx,ty,tz);
}