Tryg3D::Function:: Item::InStream(TRYG3D_ELEMENT_TAG elementid,Item3D_Type:element_type,Stream:StreamData[Stream3D]){
	new Float:px,Float:py,Float:pz;
	if(!Item::GetPos(elementid,element_type,px,py,pz)) return 0;
	return IsPointInStream(px,py,pz,StreamData);
}