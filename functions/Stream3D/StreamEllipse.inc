Tryg3D::Function:: Stream:StreamEllipse(Float:cx,Float:cy,Float:size_x,Float:size_y){
	new StreamCreate(StreamData);
	StreamData[T3D:type] = s_ellipse;
	StreamData[T3D:X] = cx;
	StreamData[T3D:Y] = cy;
	StreamData[T3D:minX] = size_x;
	StreamData[T3D:minY] = size_y;
	return StreamData;
}