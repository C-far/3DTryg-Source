Tryg3D::Function:: SetPlayerAbsolutePositionVeh(playerid,Float:x,Float:y,Float:z,Float:angle,worldid = -1,interiorid = -1,compensatedtime = -1,freezeplayer = 1){
	new T3D:vehicleid = GetPlayerVehicleID(playerid), seatid;
	if(T3D:vehicleid == 0){
		SetPlayerAbsolutePosition(playerid,x,y,z,angle,worldid,interiorid,compensatedtime,freezeplayer);
	} else {
		SetPlayerAbsolutePosition(playerid,x,y,z,angle,worldid,interiorid,compensatedtime,freezeplayer);
		if(worldid != -1) SetVehicleVirtualWorld(T3D:vehicleid,worldid);
		if(interiorid != -1) LinkVehicleToInterior(T3D:vehicleid,interiorid);
		SetVehiclePos(T3D:vehicleid,x,y,z);
		SetVehicleZAngle(T3D:vehicleid,angle);
		PutPlayerInVehicle(playerid,T3D:vehicleid,0);
		if(worldid != -1 || interiorid != -1){
			Tryg3D::Foreach(i){
				if(GetPlayerVehicleID(i) == T3D:vehicleid && (seatid = GetPlayerVehicleSeat(i)) != 0){
					if(worldid != -1) SetPlayerVirtualWorld(i,worldid);
					if(interiorid != -1) SetPlayerInterior(i,interiorid);
					PutPlayerInVehicle(i,T3D:vehicleid,seatid);
				}
			}
		}
	}
}