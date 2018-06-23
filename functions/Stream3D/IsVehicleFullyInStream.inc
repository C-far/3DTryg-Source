Tryg3D::Function:: IsVehicleFullyInStream(vehicleid,Stream:StreamData[Stream3D]){
	new Float:size_x,Float:size_y,Float:size_z,
		Float:x,Float:y,Float:z,
		Float:minx,Float:miny,Float:minz,
		Float:maxx,Float:maxy,Float:maxz;
	GetVehicleModelInfo(GetVehicleModel(vehicleid),VEHICLE_MODEL_INFO_SIZE,size_x,size_y,size_z);
	size_x /= 2.0, size_y /= 2.0, size_z /= 2.0;

	GetVehiclePos(vehicleid,x,y,z);
	
	minx = x - size_x;
	miny = y - size_y;
	minz = z - size_z;
	
	maxx = x + size_x;
	maxy = y + size_y;
	maxz = z + size_z;
	
	if(!IsPointInStream(minx,miny,minz,StreamData)) return 0;
	if(!IsPointInStream(minx,miny,maxz,StreamData)) return 0;
	if(!IsPointInStream(minx,maxy,minz,StreamData)) return 0;
	if(!IsPointInStream(minx,maxy,maxz,StreamData)) return 0;
	if(!IsPointInStream(maxx,miny,minz,StreamData)) return 0;
	if(!IsPointInStream(maxx,miny,maxz,StreamData)) return 0;
	if(!IsPointInStream(maxx,maxy,minz,StreamData)) return 0;
	if(!IsPointInStream(maxx,maxy,maxz,StreamData)) return 0;
	return 1;
}