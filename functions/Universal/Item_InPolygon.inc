Tryg3D::Function:: Item::InPolygon(TRYG3D_ELEMENT_TAG elementid,Item3D_Type:element_type,Float:points[],maxpoints = sizeof(points)){
	new Float:px,Float:py,Float:pz;
	if(!Item::GetPos(elementid,element_type,px,py,pz)) return 0;
	return IsPointInPolygon(px,py,points,maxpoints);
}