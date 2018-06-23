//GetRandomPointInCircle by Crayder
Tryg3D::Function:: GetRandomPointInCircle(Float:x,Float:y,Float:radius,&Float:tx,&Float:ty){
	new Float:T3D:alfa = float(random(1000000)+1)/1000000.0,
		Float:T3D:beta = float(random(1000000)+1)/1000000.0;
	if(T3D:beta < T3D:alfa) Tryg3D::SwapInt(T3D:alfa,T3D:beta);
	tx = x + (T3D:beta * radius * floatcos(2.0 * FLOAT_PI * T3D:alfa / T3D:beta));
	ty = y + (T3D:beta * radius * floatsin(2.0 * FLOAT_PI * T3D:alfa / T3D:beta));
}