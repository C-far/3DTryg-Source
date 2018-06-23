Tryg3D::Function:: IsDynVehFullyInDynamicArea(STREAMER_TAG_VEHICLE vehicleid,STREAMER_TAG_AREA areaid){
	new Float:size_x,Float:size_y,Float:size_z,
		Float:x,Float:y,Float:z,
		Float:minx,Float:miny,Float:minz,
		Float:maxx,Float:maxy,Float:maxz;
	GetVehicleModelInfo(GetDynamicVehicleModel(vehicleid),VEHICLE_MODEL_INFO_SIZE,size_x,size_y,size_z);
	size_x /= 2.0, size_y /= 2.0, size_z /= 2.0;

	GetDynamicVehiclePos(vehicleid,x,y,z);
	
	minx = x - size_x;
	miny = y - size_y;
	minz = z - size_z;
	
	maxx = x + size_x;
	maxy = y + size_y;
	maxz = z + size_z;
	
	if(!IsPointInDynamicArea(areaid,minx,miny,minz)) return 0;
	if(!IsPointInDynamicArea(areaid,minx,miny,maxz)) return 0;
	if(!IsPointInDynamicArea(areaid,minx,maxy,minz)) return 0;
	if(!IsPointInDynamicArea(areaid,minx,maxy,maxz)) return 0;
	if(!IsPointInDynamicArea(areaid,maxx,miny,minz)) return 0;
	if(!IsPointInDynamicArea(areaid,maxx,miny,maxz)) return 0;
	if(!IsPointInDynamicArea(areaid,maxx,maxy,minz)) return 0;
	if(!IsPointInDynamicArea(areaid,maxx,maxy,maxz)) return 0;
	return 1;
}