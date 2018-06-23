Tryg3D::Function:: GetPointInWallForPoint(Float:x,Float:y,Float:z,Float:radius,&Float:tx,&Float:ty,&Float:tz,Float:sector=90.0){
	if(sector <= 0.0 || sector > 360.0) return 0;
	new Float:px,Float:py,Float:pz,Float:tmp_dist,Float:near_dist = 20000.0,sec_cnt = floatround(360.0/sector);
	if(sec_cnt > 360) sec_cnt = 360;
	
	for(new i = 0; i < sec_cnt; i++){
		GetPointInFront3DCol(x,y,z,0.0,CompRotationFloat(sector*i),radius,px,py,pz); 
		tmp_dist = GetDistanceBetweenPoints3D(x,y,z,px,py,pz);
		if(tmp_dist < near_dist){
			near_dist = tmp_dist;
			tx = px;
			ty = py;
			tz = pz;
		}
	}
	return 1;
}