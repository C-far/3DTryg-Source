Tryg3D::Function:: Item::InCone(TRYG3D_ELEMENT_TAG elementid,Item3D_Type:element_type,Float:xA,Float:yA,Float:zA,Float:xB,Float:yB,Float:zB,Float:pointA_radius,Float:pointB_radius){
	new Float:px,Float:py,Float:pz;
	if(!Item::GetPos(elementid,element_type,px,py,pz)) return 0;
	return IsPointInCone3D(px,py,pz,xA,yA,zA,xB,yB,zB,pointA_radius,pointB_radius);
}