Tryg3D::Function:: Stream:StreamCone3D(Float:xA,Float:yA,Float:zA,Float:xB,Float:yB,Float:zB,Float:pointA_radius,Float:pointB_radius){
	new StreamCreate(StreamData);
	StreamData[T3D:type] = s_cone;
	StreamData[T3D:minX] = xA;
	StreamData[T3D:minY] = yA;
	StreamData[T3D:minZ] = zA;
	StreamData[T3D:maxX] = xB;
	StreamData[T3D:maxY] = yB;
	StreamData[T3D:maxZ] = zB;
	StreamData[T3D:X] = pointA_radius;
	StreamData[T3D:Y] = pointB_radius;
	return StreamData;
}