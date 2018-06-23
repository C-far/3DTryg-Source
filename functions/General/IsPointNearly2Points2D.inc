//Abyss Morgan Algorithm (False Ellipse Test 2D)
Tryg3D::Function:: IsPointNearly2Points2D(Float:px,Float:py,Float:xA,Float:yA,Float:xB,Float:yB,Float:maxdist){
	new Float:dAB = GetDistanceBetweenPoints2D(xA,yA,xB,yB);
	return (dAB <= (GetDistanceBetweenPoints2D(xA,yA,px,py) + GetDistanceBetweenPoints2D(xB,yB,px,py)) <= (dAB+maxdist));
}