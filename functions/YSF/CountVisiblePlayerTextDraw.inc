Tryg3D::Function:: CountVisiblePlayerTextDraw(playerid){
	new T3D:count = 0;
	for(new i = 0; i < MAX_PLAYER_TEXT_DRAWS; i++){
		if(IsValidPlayerTextDraw(playerid,PlayerText:i) && IsPlayerTextDrawVisible(playerid,PlayerText:i)) T3D:count++;
	}
	return T3D:count;
}