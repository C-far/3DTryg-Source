Tryg3D::Function:: Item::InSphericalSector(TRYG3D_ELEMENT_TAG elementid,Item3D_Type:element_type,Float:x,Float:y,Float:z,Float:rx,Float:rz,Float:radius,Float:vrx,Float:vrz){
	new Float:px,Float:py,Float:pz;
	if(!Item::GetPos(elementid,element_type,px,py,pz)) return 0;
	return IsPointInSphericalSector(px,py,pz,x,y,z,rx,rz,radius,vrx,vrz);
}
