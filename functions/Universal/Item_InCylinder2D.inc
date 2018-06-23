Tryg3D::Function:: Item::InCylinder2D(TRYG3D_ELEMENT_TAG elementid,Item3D_Type:element_type,Float:x,Float:y,Float:minz,Float:maxz,Float:radius){
	new Float:px,Float:py,Float:pz;
	if(!Item::GetPos(elementid,element_type,px,py,pz)) return 0;
	return IsPointInCylinder2D(px,py,pz,x,y,minz,maxz,radius);
}
