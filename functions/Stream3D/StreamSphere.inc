Tryg3D::Function:: Stream:StreamSphere(Float:x,Float:y,Float:z,Float:radius){
	new StreamCreate(StreamData);
	StreamData[T3D:type] = s_sphere;
	StreamData[T3D:X] = x;
	StreamData[T3D:Y] = y;
	StreamData[T3D:Z] = z;
	StreamData[T3D:R] = radius;
	return StreamData;
}