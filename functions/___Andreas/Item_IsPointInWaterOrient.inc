Tryg3D::Function:: Item::IsPointInWaterOrient(TRYG3D_ELEMENT_TAG elementid,Item3D_Type:element_type,Float:radius,element_orientation:orientation=o_front){
	new Float:px,Float:py,Float:pz,Float:x,Float:y,Float:z;
	if(!Item::GetPos(elementid,element_type,px,py,pz)) return false;
	if(!Item::GetOrientationPos(elementid,element_type,orientation,radius,x,y,z)) return false;
	return IsPointInWater(x,y,0.0);
}