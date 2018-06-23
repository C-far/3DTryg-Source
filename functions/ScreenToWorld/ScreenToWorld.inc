Tryg3D::Function:: ScreenToWorld(playerid,Float:screenX,Float:screenY,&Float:vX,&Float:vY,&Float:vZ){
	if((0.0 <= screenX <= cOnScreenX) && (0.0 <= screenY <= cOnScreenY) && GetPlayerCameraFrontVector(playerid,vX,vY,vZ)){
		new Float:pX = ((screenX / cOnScreenX) - 0.5) * 2.0 * cInGameX,
			Float:pZ = ((screenY / cOnScreenY) - 0.5) * 2.0 * ((GetPlayerCameraAspectRatio(playerid) > 1.375) ? cInGameYw : cInGameY),
			Float:nXx, Float:nYx, Float:nZx,
			Float:nXz, Float:nYz, Float:nZz;
		
		Tryg3D::NormCrossProduct(nXx,nYx,nZx,vX,vY,vZ,0.0,0.0,1.0); //front vector (x) z vector
		Tryg3D::NormCrossProduct(nXz,nYz,nZz,vX,vY,vZ,nXx,nYx,nZx); //front vector (x) right vector

		vX += nXx * pX + nXz * pZ;
		vY += nYx * pX + nYz * pZ;
		vZ += nZx * pX + nZz * pZ;
		
		return 1;
	}
	return 0;
}