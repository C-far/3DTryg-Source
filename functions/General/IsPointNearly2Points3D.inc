//Abyss Morgan Algorithm (False Ellipse Test 3D)
Tryg3D::Function:: IsPointNearly2Points3D(Float:px,Float:py,Float:pz,Float:xA,Float:yA,Float:zA,Float:xB,Float:yB,Float:zB,Float:maxdist){
	new Float:dAB = GetDistanceBetweenPoints3D(xA,yA,zA,xB,yB,zB);
	return (dAB <= (GetDistanceBetweenPoints3D(xA,yA,zA,px,py,pz) + GetDistanceBetweenPoints3D(xB,yB,zB,px,py,pz)) <= (dAB+maxdist));
}