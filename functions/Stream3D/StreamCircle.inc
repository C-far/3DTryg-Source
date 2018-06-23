Tryg3D::Function:: Stream:StreamCircle(Float:x,Float:y,Float:radius){
	new StreamCreate(StreamData);
	StreamData[T3D:type] = s_circle;
	StreamData[T3D:X] = x;
	StreamData[T3D:Y] = y;
	StreamData[T3D:R] = radius;
	return StreamData;
}