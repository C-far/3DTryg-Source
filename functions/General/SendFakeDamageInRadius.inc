Tryg3D::Function:: SendFakeDamageInRadius(weaponid,bodypart,Float:damage,Float:vehicle_damage,Float:x,Float:y,Float:z,Float:radius,worldid = -1,interiorid = -1,playerid = -1,byplayerid=INVALID_PLAYER_ID){
	new Float:T3D:health,T3D:vid;
	if(playerid == -1){
		Tryg3D::Foreach(i){
			new Float:px, Float:py, Float:pz;
			if(IsPlayerInAnyVehicle(i)){
				GetVehiclePos(GetPlayerVehicleID(i),px,py,pz);
			} else {
				GetPlayerPos(i,px,py,pz);
			}
			if((GetPlayerInterior(i) == interiorid || interiorid == -1) && (GetPlayerVirtualWorld(i) == worldid || worldid == -1) && (VectorSize(px-x,py-y,pz-z) <= radius)){
				if(IsPlayerInAnyVehicle(i)){
					T3D:vid = GetPlayerVehicleID(i);
					GetVehicleHealth(T3D:vid,T3D:health);
					if(i != byplayerid) SetVehicleHealth(T3D:vid,NLTZF(T3D:health-vehicle_damage));
				} else {
					if(i != byplayerid) Tryg3D::GivePlayerDamage(i,damage,byplayerid,weaponid,bodypart);
				}
			}
		}
	} else {
		if(IsPlayerConnected(playerid)){
			new Float:px, Float:py, Float:pz;
			if(IsPlayerInAnyVehicle(playerid)){
				GetVehiclePos(GetPlayerVehicleID(playerid),px,py,pz);
			} else {
				GetPlayerPos(playerid,px,py,pz);
			}
			if((GetPlayerInterior(playerid) == interiorid || interiorid == -1) && (GetPlayerVirtualWorld(playerid) == worldid || worldid == -1) && (VectorSize(px-x,py-y,pz-z) <= radius)){
				if(IsPlayerInAnyVehicle(playerid)){
					T3D:vid = GetPlayerVehicleID(playerid);
					GetVehicleHealth(T3D:vid,T3D:health);
					if(playerid != byplayerid) SetVehicleHealth(T3D:vid,NLTZF(T3D:health-vehicle_damage));
				} else {
					if(playerid != byplayerid) Tryg3D::GivePlayerDamage(playerid,damage,byplayerid,weaponid,bodypart);
				}
			}
		}
	}
}