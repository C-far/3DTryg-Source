//GetRandomPointOnSphere by Neil Lamoureux
Tryg3D::Function:: GetRandomPointOnSphere(Float:x,Float:y,Float:z,Float:radius,&Float:tx,&Float:ty,&Float:tz){
	new Float:T3D:alfa = float(random(1000000)+1)/1000000.0,
		Float:T3D:beta = float(random(1000000)+1)/1000000.0,
		Float:T3D:theta = 2 * FLOAT_PI * T3D:alfa,
		Float:T3D:phi = acos(2 * T3D:beta - 1);
	tx = x + (radius * floatsin(T3D:phi,degrees) * floatcos(T3D:theta,degrees));
	ty = y + (radius * floatsin(T3D:phi,degrees) * floatsin(T3D:theta,degrees));
	tz = z + (radius * floatcos(T3D:phi,degrees));
}