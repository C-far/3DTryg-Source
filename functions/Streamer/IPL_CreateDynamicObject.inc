Tryg3D::Function:: STREAMER_TAG_OBJECT IPL_CreateDynamicObject(modelid,Float:x,Float:y,Float:z,Float:qx,Float:qy,Float:qz,Float:qw,worldid=-1,interiorid=-1,playerid=-1,Float:streamdistance=STREAMER_OBJECT_SD,Float:drawdistance=STREAMER_OBJECT_DD,STREAMER_TAG_AREA areaid=STREAMER_TAG_AREA -1,priority=0){
	new Float:rx,Float:ry,Float:rz;
	Tryg3D::QuatToEuler(rx,ry,rz,qw,qx,qy,qz);
	return CreateDynamicObject(modelid,x,y,z,rx,ry,rz,worldid,interiorid,playerid,streamdistance,drawdistance,areaid,priority);
}