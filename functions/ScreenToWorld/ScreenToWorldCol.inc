Tryg3D::Function:: ScreenToWorldCol(playerid,Float:distance,Float:screenX,Float:screenY,&Float:wX,&Float:wY,&Float:wZ){
	if(ScreenToWorld(playerid,screenX,screenY,wX,wY,wZ)){
		new Float:cX,Float:cY,Float:cZ;
		GetPlayerCameraPos(playerid,cX,cY,cZ);

		wX = cX + (wX * distance);
		wY = cY + (wY * distance);
		wZ = cZ + (wZ * distance);
		
		return ColAndreas::RayCastLine(cX,cY,cZ,wX,wY,wZ + 0.001,wX,wY,wZ) + 1;
	}
	return 0;
}