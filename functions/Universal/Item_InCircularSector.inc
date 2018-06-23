Tryg3D::Function:: Item::InCircularSector(TRYG3D_ELEMENT_TAG elementid,Item3D_Type:element_type,Float:x,Float:y,Float:rz,Float:radius,Float:view_angle){
	new Float:px,Float:py,Float:pz;
	if(!Item::GetPos(elementid,element_type,px,py,pz)) return 0;
	return IsPointInCircularSector(px,py,x,y,rz,radius,view_angle);
}