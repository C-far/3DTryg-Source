Tryg3D::Function:: Item::GetRotationQuat(TRYG3D_ELEMENT_TAG elementid,Item3D_Type:element_type,&Float:qw,&Float:qx,&Float:qy,&Float:qz){
	new Float:rx,Float:ry,Float:rz;
	qw = qx = qy = qz = 0.0;
	switch(element_type){
		
		#if defined Tryg3D_YSF
			case item_player: {
				GetPlayerRotationQuat(_:elementid,qw,qx,qy,qz);
			}
		#endif
		
		case item_object: {
			GetObjectRot(_:elementid,rx,ry,rz);
			Tryg3D::EulerToQuat(rx,ry,rz,qw,qx,qy,qz);
			qw *= (-1);
		}
		case item_vehicle: {
			GetVehicleRotationQuat(_:elementid,qw,qx,qy,qz);
		}
		
		#if defined Tryg3D_Streamer
			case item_dynamic_object: {
				GetDynamicObjectRot(STREAMER_TAG_OBJECT (_:elementid),rx,ry,rz);
				Tryg3D::EulerToQuat(rx,ry,rz,qw,qx,qy,qz);
				qw *= (-1);
			}
		#endif
		
		#if defined Tryg3D_VehicleStreamer
			case item_dynamic_vehicle: {
				GetDynamicVehicleRotationQuat(STREAMER_TAG_VEHICLE (_:elementid),qw,qx,qy,qz);
			}
		#endif
		
		#if defined Tryg3D_FCNPC
			case item_fcnpc: {
				FCNPC::GetQuaternion(_:elementid,qw,qx,qy,qz);
			
			}
		#endif
		
		default: return 0;
	}
	return 1;
}