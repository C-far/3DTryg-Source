Tryg3D::Function:: CountTextDraw(){
	new T3D:count = 0;
	for(new i = 0; i < MAX_TEXT_DRAWS; i++){
		if(IsValidTextDraw(Text:i)) T3D:count++;
	}
	return T3D:count;
}