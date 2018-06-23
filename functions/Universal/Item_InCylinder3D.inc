Tryg3D::Function:: Item::InCylinder3D(TRYG3D_ELEMENT_TAG elementid,Item3D_Type:element_type,Float:xA,Float:yA,Float:zA,Float:xB,Float:yB,Float:zB,Float:radius){
	new Float:px,Float:py,Float:pz;
	if(!Item::GetPos(elementid,element_type,px,py,pz)) return 0;
	return IsPointInCylinder3D(px,py,pz,xA,yA,zA,xB,yB,zB,radius);
}