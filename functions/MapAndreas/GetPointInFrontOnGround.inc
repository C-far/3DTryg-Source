Tryg3D::Function:: GetPointInFrontOnGround(Float:x,Float:y,Float:z,Float:rx,Float:rz,&Float:tx,&Float:ty,&Float:tz,Float:max_distance){
	new Float:tmpz;
	Tryg3D::MapAndreasFindZ(x,y,tmpz);
	new Float:radius = GetDistanceBetweenPoints3D(x,y,z,x,y,tmpz),
		Float:cos = floatcos(rx+90.0,degrees),
		Float:dist;
	if(cos == 0.0){
		dist = radius;
	} else {
		dist = floatabs(radius/cos);
	}
	if((dist > max_distance) || (rx >= 0.0 && rx <= 180.0)){
		dist = max_distance;
	}
	GetPointInFront3D(x,y,z,rx,rz,dist,tx,ty,tz);
	if(!((dist > max_distance) || (rx >= 0.0 && rx <= 180.0))){
		Tryg3D::MapAndreasFindZ(tx,ty,tz);
	}
}