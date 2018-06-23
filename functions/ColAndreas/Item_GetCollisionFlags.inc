Tryg3D::Function:: Item::GetCollisionFlags(TRYG3D_ELEMENT_TAG elementid,Item3D_Type:element_type){
	new Float:x,Float:y,Float:z;
	if(!Item::GetPos(elementid,element_type,x,y,z)) return 0;
	return GetPointCollisionFlags(x,y,z);
}
