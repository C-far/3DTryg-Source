Tryg3D::Function:: Item::InCube(TRYG3D_ELEMENT_TAG elementid,Item3D_Type:element_type,Float:minx,Float:miny,Float:minz,Float:maxx,Float:maxy,Float:maxz){
	new Float:px,Float:py,Float:pz;
	if(!Item::GetPos(elementid,element_type,px,py,pz)) return 0;
	return IsPointInCube(px,py,pz,minx,miny,minz,maxx,maxy,maxz);
}