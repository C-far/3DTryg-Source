Tryg3D::Function:: Float:GetLineSize3D(Float:points[][],maxpoints=sizeof(points)){
	if(maxpoints < 2) return 0.0;
	new Float:T3D:distance = 0.0;
	for(new i = 1; i < maxpoints; i++){
		T3D:distance += GetDistanceBetweenPoints3D(points[i-1][0],points[i-1][1],points[i-1][2],points[i][0],points[i][1],points[i][2]);
	}
	return T3D:distance;
}