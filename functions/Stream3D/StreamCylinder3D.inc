Tryg3D::Function:: Stream:StreamCylinder3D(Float:xA,Float:yA,Float:zA,Float:xB,Float:yB,Float:zB,Float:radius){
	new StreamCreate(StreamData);
	StreamData[T3D:type] = s_cylinder3d;
	StreamData[T3D:minX] = xA;
	StreamData[T3D:minY] = yA;
	StreamData[T3D:minZ] = zA;
	StreamData[T3D:maxX] = xB;
	StreamData[T3D:maxY] = yB;
	StreamData[T3D:maxZ] = zB;
	StreamData[T3D:R] = radius;
	return StreamData;
}