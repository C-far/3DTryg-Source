Tryg3D::Function:: DeCompRotation(rotation,&crotation=0){
	crotation = rotation;
	while(crotation >= 180) crotation -= 360;
	while(crotation < -180) crotation += 360;
	return crotation;
}