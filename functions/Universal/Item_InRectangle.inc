Tryg3D::Function:: Item::InRectangle(TRYG3D_ELEMENT_TAG elementid,Item3D_Type:element_type,Float:minx,Float:miny,Float:maxx,Float:maxy){
	new Float:px,Float:py,Float:pz;
	if(!Item::GetPos(elementid,element_type,px,py,pz)) return 0;
	return IsPointInRectangle(px,py,minx,miny,maxx,maxy);
}