Tryg3D::Function:: Item::GetInvalidID(Item3D_Type:item_type){
	switch(item_type){
		case item_player:				return INVALID_PLAYER_ID;
		case item_npc:					return INVALID_PLAYER_ID;
		
		#if defined Tryg3D_Actor
			case item_actor:			return INVALID_ACTOR_ID;
		#endif
		
		case item_object:				return INVALID_OBJECT_ID;
		case item_vehicle:				return INVALID_VEHICLE_ID;
		
		#if defined Tryg3D_Streamer
			case item_dynamic_object:	return INVALID_STREAMER_ID;
			case item_dynamic_pickup:	return INVALID_STREAMER_ID;
			case item_dynamic_cp:		return INVALID_STREAMER_ID;
			case item_dynamic_racecp:	return INVALID_STREAMER_ID;
			case item_dynamic_mapicon:	return INVALID_STREAMER_ID;
			case item_dynamic_3dtext:	return INVALID_STREAMER_ID;
			case item_dynamic_actor:	return INVALID_STREAMER_ID;
		#endif
		
		#if defined Tryg3D_VehicleStreamer
			case item_dynamic_vehicle:	return INVALID_STREAMER_ID;
		#endif
		
		#if defined Tryg3D_FCNPC
			case item_fcnpc:			return INVALID_PLAYER_ID;
		#endif
	}
	return cellmax;
}