Tryg3D::Function:: IsPointBetween2Points3D(Float:px,Float:py,Float:pz,Float:xA,Float:yA,Float:zA,Float:xB,Float:yB,Float:zB){
	return (GetDistanceBetweenPoints3D(xA,yA,zA,xB,yB,zB) == (GetDistanceBetweenPoints3D(xA,yA,zA,px,py,pz) + GetDistanceBetweenPoints3D(xB,yB,zB,px,py,pz)));
}