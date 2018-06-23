Tryg3D::Function:: IsPointBetween2Points2D(Float:px,Float:py,Float:xA,Float:yA,Float:xB,Float:yB){
	return (GetDistanceBetweenPoints2D(xA,yA,xB,yB) == (GetDistanceBetweenPoints2D(xA,yA,px,py) + GetDistanceBetweenPoints2D(xB,yB,px,py)));
}