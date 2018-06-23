Tryg3D::Function:: Item::GetPos(TRYG3D_ELEMENT_TAG elementid,Item3D_Type:element_type,&Float:x,&Float:y,&Float:z){
	switch(element_type){
		case item_player:				GetPlayerPos(_:elementid,x,y,z);
		case item_npc: {
			#if defined Tryg3D_FCNPC
				if(FCNPC::IsValid(_:elementid)){
					FCNPC::GetPosition(_:elementid,x,y,z);
				} else {
					GetPlayerPos(_:elementid,x,y,z);
				}
			#else
				GetPlayerPos(_:elementid,x,y,z);
			#endif
		}
		
		#if defined Tryg3D_Actor
			case item_actor:			GetActorPos(_:elementid,x,y,z);
		#endif
		
		case item_object:				GetObjectPos(_:elementid,x,y,z);
		case item_vehicle:				GetVehiclePos(_:elementid,x,y,z);
		
		#if defined Tryg3D_Streamer
			case item_dynamic_object:	GetDynamicObjectPos(STREAMER_TAG_OBJECT (_:elementid),x,y,z);
			case item_dynamic_pickup: 	Streamer::GetItemPos(STREAMER_TYPE_PICKUP,_:elementid,x,y,z);
			case item_dynamic_cp: 		Streamer::GetItemPos(STREAMER_TYPE_CP,_:elementid,x,y,z);
			case item_dynamic_racecp:	Streamer::GetItemPos(STREAMER_TYPE_RACE_CP,_:elementid,x,y,z);
			case item_dynamic_mapicon:	Streamer::GetItemPos(STREAMER_TYPE_MAP_ICON,_:elementid,x,y,z);
			case item_dynamic_3dtext: 	Streamer::GetItemPos(STREAMER_TYPE_3D_TEXT_LABEL,_:elementid,x,y,z);
			case item_dynamic_actor:	GetDynamicActorPos(STREAMER_TAG_ACTOR (_:elementid),x,y,z);
		#endif
		
		#if defined Tryg3D_VehicleStreamer
			case item_dynamic_vehicle:	GetDynamicVehiclePos(STREAMER_TAG_VEHICLE (_:elementid),x,y,z);
		#endif
		
		#if defined Tryg3D_FCNPC
			case item_fcnpc: 			FCNPC::GetPosition(_:elementid,x,y,z);
		#endif
		
		default: return 0;
	}
	return 1;
}
