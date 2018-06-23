Tryg3D::Function:: Item::GetInStream(Stream:StreamData[Stream3D],Item3D_Type:element_type,element_list[],max_element=sizeof(element_list)){
	new T3D:cnt = 0, T3D:upp = -1;
	switch(element_type){
		case item_player: {
			Tryg3D::Foreach(i){
				if(T3D:upp >= max_element) break;
				if(!IsPlayerNPC(i)){
					if(Item::InStream(i,element_type,StreamData)){
						element_list[T3D:upp++] = i;
						T3D:cnt++;
					}
				}
			}
		}
		
		case item_npc: {
			Tryg3D::Foreach(i){
				if(T3D:upp >= max_element) break;
				if(IsPlayerNPC(i)){
					if(Item::InStream(i,element_type,StreamData)){
						element_list[T3D:upp++] = i;
						T3D:cnt++;
					}
				}
			}
		}
		
		#if defined Tryg3D_Actor
			case item_actor: {
				for(new i = 0, j = GetActorPoolSize(); i <= j; i++){
					if(T3D:upp >= max_element) break;
					if(IsValidActor(i) && Item::InStream(i,element_type,StreamData)){
						element_list[T3D:upp++] = i;
						T3D:cnt++;
					}
				}
			}
		#endif
		
		case item_object: {
			for(new i = 0; i < MAX_OBJECTS; i++){
				if(T3D:upp >= max_element) break;
				if(IsValidObject(i) && Item::InStream(i,element_type,StreamData)){
					element_list[T3D:upp++] = i;
					T3D:cnt++;
				}
			}
		}
		
		case item_vehicle: {
			for(new i = 0, j = GetVehiclePoolSize(); i <= j; i++){
				if(T3D:upp >= max_element) break;
				if(IsValidVehicle(i) && Item::InStream(i,element_type,StreamData)){
					element_list[T3D:upp++] = i;
					T3D:cnt++;
				}
			}
		}
		
		#if defined Tryg3D_Streamer
			case item_dynamic_object: {
				for(new i = 1, j = Streamer::GetUpperBound(STREAMER_TYPE_OBJECT); i <= j; i++){
					if(IsValidDynamicObject(STREAMER_TAG_OBJECT i)){
						if(T3D:upp >= max_element) break;
						if(Item::InStream(i,element_type,StreamData)){
							element_list[T3D:upp++] = i;
							T3D:cnt++;
						}
					}
				}
			}
			case item_dynamic_pickup: {
				for(new i = 1, j = Streamer::GetUpperBound(STREAMER_TYPE_PICKUP); i <= j; i++){
					if(IsValidDynamicPickup(STREAMER_TAG_PICKUP i)){
						if(T3D:upp >= max_element) break;
						if(Item::InStream(i,element_type,StreamData)){
							element_list[T3D:upp++] = i;
							T3D:cnt++;
						}
					}
				}
			}
			case item_dynamic_cp: {
				for(new i = 1, j = Streamer::GetUpperBound(STREAMER_TYPE_CP); i <= j; i++){
					if(IsValidDynamicCP(STREAMER_TAG_CP i)){
						if(T3D:upp >= max_element) break;
						if(Item::InStream(i,element_type,StreamData)){
							element_list[T3D:upp++] = i;
							T3D:cnt++;
						}
					}
				}
			}
			case item_dynamic_racecp: {
				for(new i = 1, j = Streamer::GetUpperBound(STREAMER_TYPE_RACE_CP); i <= j; i++){
					if(IsValidDynamicRaceCP(STREAMER_TAG_RACE_CP i)){
						if(T3D:upp >= max_element) break;
						if(Item::InStream(i,element_type,StreamData)){
							element_list[T3D:upp++] = i;
							T3D:cnt++;
						}
					}
				}
			}
			case item_dynamic_mapicon: {
				for(new i = 1, j = Streamer::GetUpperBound(STREAMER_TYPE_MAP_ICON); i <= j; i++){
					if(IsValidDynamicMapIcon(STREAMER_TAG_MAP_ICON i)){
						if(T3D:upp >= max_element) break;
						if(Item::InStream(i,element_type,StreamData)){
							element_list[T3D:upp++] = i;
							T3D:cnt++;
						}
					}
				}
			}
			case item_dynamic_3dtext: {
				for(new i = 1, j = Streamer::GetUpperBound(STREAMER_TYPE_3D_TEXT_LABEL); i <= j; i++){
					if(IsValidDynamic3DTextLabel(STREAMER_TAG_3D_TEXT_LABEL i)){
						if(T3D:upp >= max_element) break;
						if(Item::InStream(i,element_type,StreamData)){
							element_list[T3D:upp++] = i;
							T3D:cnt++;
						}
					}
				}
			}
			case item_dynamic_actor: {
				for(new i = 1, j = Streamer::GetUpperBound(STREAMER_TYPE_ACTOR); i <= j; i++){
					if(IsValidDynamicActor(STREAMER_TAG_ACTOR i)){
						if(T3D:upp >= max_element) break;
						if(Item::InStream(i,element_type,StreamData)){
							element_list[T3D:upp++] = i;
							T3D:cnt++;
						}
					}
				}
			}
		#endif
		
		#if defined Tryg3D_VehicleStreamer
			case item_dynamic_vehicle: {
				for(new i = 1, j = Streamer::GetUpperBound(STREAMER_TYPE_VEHICLE); i <= j; i++){
					if(IsValidDynamicVehicle(STREAMER_TAG_VEHICLE i)){
						if(T3D:upp >= max_element) break;
						if(Item::InStream(i,element_type,StreamData)){
							element_list[T3D:upp++] = i;
							T3D:cnt++;
						}
					}
				}
			}
		#endif
		
		#if defined Tryg3D_FCNPC
			case item_fcnpc: {
				Tryg3D::Foreach(i){
					if(T3D:upp >= max_element) break;
					if(IsPlayerNPC(i) && FCNPC::IsValid(i)){
						if(Item::InStream(i,element_type,StreamData)){
							element_list[T3D:upp++] = i;
							T3D:cnt++;
						}
					}
				}
			}
		#endif
	}
	return T3D:cnt;
}