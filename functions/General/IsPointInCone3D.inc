//IsPointInCone by Crayder
Tryg3D::Function:: IsPointInCone3D(Float:px,Float:py,Float:pz,Float:xA,Float:yA,Float:zA,Float:xB,Float:yB,Float:zB,Float:pointA_radius,Float:pointB_radius){
	new Float:cylinder_length = GetDistanceBetweenPoints3D(xA,yA,zA,xB,yB,zB);
	if(cylinder_length <= 0.0) return 0;
	new Float:iX, Float:iY, Float:iZ,
		Float:distance = GetDistanceFromPointToLine(px,py,pz,xA,yA,zA,xB,yB,zB,iX,iY,iZ),
		Float:radius = (GetDistanceBetweenPoints3D(iX,iY,iZ,xA,yA,zA) / cylinder_length * pointB_radius) + (GetDistanceBetweenPoints3D(iX,iY,iZ,xB,yB,zB) / cylinder_length * pointA_radius);
	return (distance != -1.0 && distance <= radius);
}