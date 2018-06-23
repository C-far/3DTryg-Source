Tryg3D::Function:: Item::GetUpVector(TRYG3D_ELEMENT_TAG elementid,Item3D_Type:element_type,&Float:vx,&Float:vy,&Float:vz){
	new Float:qw,Float:qx,Float:qy,Float:qz;
	if(!Item::GetRotationQuat(elementid,element_type,qw,qx,qy,qz)) return 0;
	
	switch(element_type){
		case item_object: {
			GetQuatUpVector(qw,qx,qy,qz,vx,vy,vz);
		}
		case item_vehicle, item_dynamic_vehicle: {
			GetQuatUpVector(qw,-qx,-qy,-qz,vx,vy,vz);
		}
		#if defined Tryg3D_Streamer
			case item_dynamic_object: {
				GetQuatUpVector(qw,qx,qy,qz,vx,vy,vz);
			}
		#endif
		default: return 0;
	}
	return 1;
}