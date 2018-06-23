//DistanceFromPointToLine by Crayder
Tryg3D::Function:: Float:GetDistanceFromPointToLine(Float:px,Float:py,Float:pz,Float:sX,Float:sY,Float:sZ,Float:eX,Float:eY,Float:eZ,&Float:iX=0.0,&Float:iY=0.0,&Float:iZ=0.0){
	new Float:dist = GetDistanceBetweenPoints3D(eX,eY,eZ,sX,sY,sZ);
	if(dist <= 0.0) return -1.0;
	new Float:T3D:U = (((px - sX) * (eX - sX)) + ((py - sY) * (eY - sY)) + ((pz - sZ) * (eZ - sZ))) / (dist*dist);
	if(T3D:U < 0.0 || T3D:U > 1.0) return -1.0;

	iX = sX + T3D:U * (eX - sX);
	iY = sY + T3D:U * (eY - sY);
	iZ = sZ + T3D:U * (eZ - sZ);

	return GetDistanceBetweenPoints3D(iX,iY,iZ,px,py,pz);
}