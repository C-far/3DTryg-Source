Tryg3D::Function:: Float:DeCompRotationFloat(Float:rotation,&Float:crotation=0.0){
	crotation = rotation;
	while(crotation >= 180.0) crotation -= 360.0;
	while(crotation < -180.0) crotation += 360.0;
	return crotation;
}