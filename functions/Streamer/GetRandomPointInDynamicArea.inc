Tryg3D::Function:: GetRandomPointInDynamicArea(STREAMER_TAG_AREA areaid,&Float:tx,&Float:ty,&Float:tz){
	switch(GetDynamicAreaType(areaid)){
		case STREAMER_AREA_TYPE_CIRCLE: {
			new Float:x,Float:y,Float:z,Float:size;
			Streamer::GetItemPos(STREAMER_TYPE_AREA,areaid,x,y,z);
			Streamer::GetFloatData(STREAMER_TYPE_AREA,areaid,E_STREAMER_SIZE,size);
			GetRandomPointInCircle(x,y,size,tx,ty);
			tz = FLOAT_INFINITY;
			return 1;
		}
		case STREAMER_AREA_TYPE_CYLINDER: {
			new Float:x,Float:y,Float:z,Float:size,Float:minz,Float:maxz;
			Streamer::GetItemPos(STREAMER_TYPE_AREA,areaid,x,y,z);
			Streamer::GetFloatData(STREAMER_TYPE_AREA,areaid,E_STREAMER_MIN_Z,minz);
			Streamer::GetFloatData(STREAMER_TYPE_AREA,areaid,E_STREAMER_MAX_Z,maxz);
			Streamer::GetFloatData(STREAMER_TYPE_AREA,areaid,E_STREAMER_SIZE,size);
			GetRandomPointInCylinder2D(x,y,minz,maxz,size,tx,ty,tz);
			return 1;
		}
		case STREAMER_AREA_TYPE_SPHERE: {
			new Float:x,Float:y,Float:z,Float:size;
			Streamer::GetItemPos(STREAMER_TYPE_AREA,areaid,x,y,z);
			Streamer::GetFloatData(STREAMER_TYPE_AREA,areaid,E_STREAMER_SIZE,size);
			GetRandomPointInSphere(x,y,z,size,tx,ty,tz);
			return 1;
		}
		case STREAMER_AREA_TYPE_RECTANGLE: {
			new Float:minx,Float:miny,Float:maxx,Float:maxy;
			Streamer::GetFloatData(STREAMER_TYPE_AREA,areaid,E_STREAMER_MIN_X,minx);
			Streamer::GetFloatData(STREAMER_TYPE_AREA,areaid,E_STREAMER_MIN_Y,miny);
			Streamer::GetFloatData(STREAMER_TYPE_AREA,areaid,E_STREAMER_MAX_X,maxx);
			Streamer::GetFloatData(STREAMER_TYPE_AREA,areaid,E_STREAMER_MAX_Y,maxy);
			GetRandomPointInRectangle(minx,miny,maxx,maxy,tx,ty);
			tz = FLOAT_INFINITY;
			return 1;
		}
		case STREAMER_AREA_TYPE_CUBOID: {
			new Float:minx,Float:miny,Float:minz,Float:maxx,Float:maxy,Float:maxz;
			Streamer::GetFloatData(STREAMER_TYPE_AREA,areaid,E_STREAMER_MIN_X,minx);
			Streamer::GetFloatData(STREAMER_TYPE_AREA,areaid,E_STREAMER_MIN_Y,miny);
			Streamer::GetFloatData(STREAMER_TYPE_AREA,areaid,E_STREAMER_MIN_Z,minz);
			Streamer::GetFloatData(STREAMER_TYPE_AREA,areaid,E_STREAMER_MAX_X,maxx);
			Streamer::GetFloatData(STREAMER_TYPE_AREA,areaid,E_STREAMER_MAX_Y,maxy);
			Streamer::GetFloatData(STREAMER_TYPE_AREA,areaid,E_STREAMER_MAX_Z,maxz);
			GetRandomPointInCube(minx,miny,minz,maxx,maxy,maxz,tx,ty,tz);
			return 1;
		}
	}
	return 0;
}