Tryg3D::Function:: Item::InCube3D(TRYG3D_ELEMENT_TAG elementid,Item3D_Type:element_type,Float:x,Float:y,Float:z,Float:rx,Float:ry,Float:rz,Float:size_x,Float:size_y,Float:size_z){
	new Float:px,Float:py,Float:pz;
	if(!Item::GetPos(elementid,element_type,px,py,pz)) return 0;
	return IsPointInCube3D(px,py,pz,x,y,z,rx,ry,rz,size_x,size_y,size_z);
}