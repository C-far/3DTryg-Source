Tryg3D::Function:: Item::InDynamicArea(TRYG3D_ELEMENT_TAG elementid,Item3D_Type:element_type,STREAMER_TAG_AREA areaid){
	new Float:px,Float:py,Float:pz;
	if(!Item::GetPos(elementid,element_type,px,py,pz)) return 0;
	return IsPointInDynamicArea(areaid,px,py,pz);
}