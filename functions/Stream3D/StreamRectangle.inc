Tryg3D::Function:: Stream:StreamRectangle(Float:minx,Float:miny,Float:maxx,Float:maxy){
	new StreamCreate(StreamData);
	StreamData[T3D:type] = s_rectangle;
	StreamData[T3D:minX] = minx;
	StreamData[T3D:minY] = miny;
	StreamData[T3D:maxX] = maxx;
	StreamData[T3D:maxY] = maxy;
	return StreamData;
}