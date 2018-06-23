Tryg3D::Function:: Item::InEllipse(TRYG3D_ELEMENT_TAG elementid,Item3D_Type:element_type,Float:cx,Float:cy,Float:size_x,Float:size_y){
	new Float:px,Float:py,Float:pz;
	if(!Item::GetPos(elementid,element_type,px,py,pz)) return 0;
	return IsPointInEllipse(px,py,cx,cy,size_x,size_y);
}