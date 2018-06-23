Tryg3D::Function:: Item::IsPlayerInRange(playerid,Float:range,TRYG3D_ELEMENT_TAG targetid,Item3D_Type:target_type=item_player,bool:testLOS=true,bool:veh_col=false){
	return Item::InRangeOfItem(playerid,item_player,range,targetid,target_type,testLOS,veh_col);
}