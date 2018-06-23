Tryg3D::Function:: Float:GetEllipseRadius(Float:x,Float:y,Float:angle){
	if(x <= 0.0) return -1.0;
	new Float:theta = atan((y/x)*floattan(CompRotationFloat(angle),degrees));
	return floatsqroot((floatpower(x,2.0)*floatpower(floatsin(theta,degrees),2.0))+(floatpower(y,2.0)*floatpower(floatcos(theta,degrees),2.0)));
}