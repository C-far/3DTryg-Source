Tryg3D::Function:: WorldToScreen(playerid,Float:x,Float:y,Float:z,&Float:screenX,&Float:screenY){
	new Float:vX, Float:vY, Float:vZ,
		Float:cX, Float:cY, Float:cZ,
		Float:nXx, Float:nYx, Float:nZx,
		Float:nXz, Float:nYz, Float:nZz;
	
	if(GetPlayerCameraPos(playerid,cX,cY,cZ)){
		GetPlayerCameraFrontVector(playerid,vX,vY,vZ);

		Tryg3D::NormCrossProduct(nXx,nYx,nZx,vX,vY,vZ,0.0,0.0,1.0);
		Tryg3D::NormCrossProduct(nXz,nYz,nZz,vX,vY,vZ,nXx,nYx,nZx);
		
		// Distance, can be both positive and negative
		screenX = (vX * (x - cX) + vY * (y - cY) + vZ * (z - cZ) ) / ((vX * vX) + (vY * vY) + (vZ * vZ));

		if((_: screenX & (1 << (cellbits - 1))) == 0) { // only positive values
			z = (((z - cZ) / screenX) - vZ) / nZz;
			x = (((x - cX) / screenX) - vX - (z * nXz)) / nXx;

			screenX = ((x / (cInGameX * 2.0)) + 0.5) * cOnScreenX;
			screenY = ((z / (((GetPlayerCameraAspectRatio(playerid) > 1.375) ? cInGameYw : cInGameY) * 2.0)) + 0.5) * cOnScreenY;
			return ((0.0 <= screenX <= cOnScreenX) && (0.0 <= screenY <= cOnScreenY));
		}
	}
	return 0;
}