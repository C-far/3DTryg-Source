Tryg3D::Function:: Item::GetVirtualWorld(TRYG3D_ELEMENT_TAG elementid,Item3D_Type:element_type){
	switch(element_type){
		case item_player: {
			return GetPlayerVirtualWorld(_:elementid);
		}
		case item_npc: {
			#if defined Tryg3D_FCNPC
				if(FCNPC::IsValid(_:elementid)){
					return FCNPC::GetVirtualWorld(_:elementid);
				} else {
					return GetPlayerVirtualWorld(_:elementid);
				}
			#else
				return GetPlayerVirtualWorld(_:elementid);
			#endif
		}
		
		#if defined Tryg3D_Actor
			case item_actor: {
				return GetActorVirtualWorld(_:elementid);
			}
		#endif
		
		case item_vehicle: {
			return GetVehicleVirtualWorld(_:elementid);
		}
		#if defined Tryg3D_Streamer
			case item_dynamic_object: {
				return Streamer::GetIntData(STREAMER_TYPE_OBJECT,_:elementid,E_STREAMER_WORLD_ID);
			}
			case item_dynamic_pickup: {
				return Streamer::GetIntData(STREAMER_TYPE_PICKUP,_:elementid,E_STREAMER_WORLD_ID);
			}
			case item_dynamic_cp: {
				return Streamer::GetIntData(STREAMER_TYPE_CP,_:elementid,E_STREAMER_WORLD_ID);
			}
			case item_dynamic_racecp: {
				return Streamer::GetIntData(STREAMER_TYPE_RACE_CP,_:elementid,E_STREAMER_WORLD_ID);
			}
			case item_dynamic_mapicon: {
				return Streamer::GetIntData(STREAMER_TYPE_MAP_ICON,_:elementid,E_STREAMER_WORLD_ID);
			}
			case item_dynamic_3dtext: {
				return Streamer::GetIntData(STREAMER_TYPE_3D_TEXT_LABEL,_:elementid,E_STREAMER_WORLD_ID);
			}
			case item_dynamic_actor: {
				return GetDynamicActorVirtualWorld(STREAMER_TAG_ACTOR (_:elementid));
			}
		#endif
		
		#if defined Tryg3D_VehicleStreamer
			case item_dynamic_vehicle: {
				return GetDynamicVehicleVirtualWorld(STREAMER_TAG_VEHICLE (_:elementid));
			}
		#endif
		
		#if defined Tryg3D_FCNPC
			case item_fcnpc: {
				return FCNPC::GetVirtualWorld(_:elementid);
			}
		#endif
	}
	return INVALID_VIRTUAL_WORLD;
}
