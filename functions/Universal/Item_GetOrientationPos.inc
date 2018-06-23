Tryg3D::Function:: Item::GetOrientationPos(TRYG3D_ELEMENT_TAG elementid,Item3D_Type:element_type,element_orientation:orientation,Float:distance,&Float:tx,&Float:ty,&Float:tz){
	new Float:x,Float:y,Float:z,Float:rx,Float:ry,Float:rz;
	if(!Item::GetPos(elementid,element_type,x,y,z)) return 0;
	switch(element_type){
		case item_player: {
			GetPlayerFacingAngle(_:elementid,rz);
		}
		case item_npc: {
			#if defined Tryg3D_FCNPC
				if(FCNPC::IsValid(_:elementid)){
					rz = FCNPC::GetAngle(_:elementid);
				} else {
					GetPlayerFacingAngle(_:elementid,rz);
				}
			#else
				GetPlayerFacingAngle(_:elementid,rz);
			#endif
		}
		
		#if defined Tryg3D_Actor
			case item_actor: {
				GetActorFacingAngle(_:elementid,rz);
			}
		#endif
		
		case item_object: {
			GetObjectRot(_:elementid,rx,ry,rz);
		}
		case item_vehicle: {
			Tryg3D::GetVehicleRotation(_:elementid,rx,ry,rz);
		}
		
		#if defined Tryg3D_Streamer
			case item_dynamic_object: {
				GetDynamicObjectRot(STREAMER_TAG_OBJECT (_:elementid),rx,ry,rz);
			}
			case item_dynamic_actor: {
				GetDynamicActorFacingAngle(STREAMER_TAG_ACTOR (_:elementid),rz);
			}
		#endif
		
		#if defined Tryg3D_VehicleStreamer
			case item_dynamic_vehicle: {
				GetDynamicVehicleRotation(STREAMER_TAG_VEHICLE (_:elementid),rx,ry,rz);
			}
		#endif
		
		#if defined Tryg3D_FCNPC
			case item_fcnpc: {
				rz = FCNPC::GetAngle(_:elementid);
			}
		#endif
		default: return 0;
	}
	
	switch(element_type){
		case item_player, item_npc, item_actor, item_dynamic_actor, item_fcnpc: {
			switch(orientation){
				case o_left:	GetPointInFront3D(x,y,z,0.0,CompRotationFloat(rz+90.0),distance,tx,ty,tz);
				case o_right:	GetPointInFront3D(x,y,z,0.0,CompRotationFloat(rz-90.0),distance,tx,ty,tz);
				case o_up:		tx = x, ty = y, tz = z + distance;
				case o_down:	tx = x, ty = y, tz = z - distance;
				case o_front:	GetPointInFront3D(x,y,z,0.0,rz,distance,tx,ty,tz);
				case o_back:	GetPointInFront3D(x,y,z,0.0,CompRotationFloat(rz+180.0),distance,tx,ty,tz);
			}
		}
		case item_vehicle, item_object, item_dynamic_object, item_dynamic_vehicle: {
			switch(orientation){
				case o_left:	GetPointInFront3D(x,y,z,ry,CompRotationFloat(rz+90.0),distance,tx,ty,tz);
				case o_right:	GetPointInFront3D(x,y,z,CompRotationFloat(ry+180.0),CompRotationFloat(rz+90.0),distance,tx,ty,tz);
				case o_up:		Item::GetUpPos(elementid,element_type,distance,tx,ty,tz);
				case o_down:	Item::GetUpPos(elementid,element_type,distance,tx,ty,tz,true);
				case o_front:	GetPointInFront3D(x,y,z,rx,rz,distance,tx,ty,tz);
				case o_back:	GetPointInFront3D(x,y,z,CompRotationFloat(rx+180.0),rz,distance,tx,ty,tz);
			}
		}
	}
	return 1;
}