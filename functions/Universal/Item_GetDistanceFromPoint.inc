Tryg3D::Function:: Float:Item::GetDistanceFromPoint(TRYG3D_ELEMENT_TAG elementid,Item3D_Type:element_type,Float:x,Float:y,Float:z){
	new Float:tx,Float:ty,Float:tz;
	if(!Item::GetPos(elementid,element_type,tx,ty,tz)) return -1.0;
	return GetDistanceBetweenPoints3D(x,y,z,tx,ty,tz);
}