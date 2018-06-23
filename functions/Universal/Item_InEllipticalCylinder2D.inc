Tryg3D::Function:: Item::InEllipticalCylinder2D(TRYG3D_ELEMENT_TAG elementid,Item3D_Type:element_type,Float:cx,Float:cy,Float:minz,Float:maxz,Float:size_x,Float:size_y){
	new Float:px,Float:py,Float:pz;
	if(!Item::GetPos(elementid,element_type,px,py,pz)) return 0;
	return IsPointInEllipticalCylinder2D(px,py,pz,cx,cy,minz,maxz,size_x,size_y);
}