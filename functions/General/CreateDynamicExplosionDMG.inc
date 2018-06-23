Tryg3D::Function:: CreateDynamicExplosionDMG(Float:x,Float:y,Float:z,type,Float:radius,worldid = -1,interiorid = -1,playerid = -1,Float:distance = 200.0,Float:damage=82.5,Float:vehicle_damage=82.5,byplayerid=INVALID_PLAYER_ID){
	new Float:T3D:health,Float:T3D:armour,T3D:vid;
	if(playerid == -1){
		Tryg3D::Foreach(i){
			new Float:px, Float:py, Float:pz;
			if(IsPlayerInAnyVehicle(i)){
				GetVehiclePos(GetPlayerVehicleID(i),px,py,pz);
			} else {
				GetPlayerPos(i,px,py,pz);
			}
			if((GetPlayerInterior(i) == interiorid || interiorid == -1) && (GetPlayerVirtualWorld(i) == worldid || worldid == -1) && (VectorSize(px-x,py-y,pz-z) <= distance)){
				if(IsPlayerInRangeOfPoint(i,radius,x,y,z)){
					if(IsPlayerInAnyVehicle(i)){
						T3D:vid = GetPlayerVehicleID(i);
						GetVehicleHealth(T3D:vid,T3D:health);
						CreateExplosionForPlayer(i,x,y,z,type,radius);
						if(i != byplayerid) SetVehicleHealth(T3D:vid,NLTZF(T3D:health-vehicle_damage));
					} else {
						GetPlayerHealth(i,T3D:health);
						GetPlayerArmour(i,T3D:armour);
						SetPlayerHealth(i,765.0); //anti death in explosion
						CreateExplosionForPlayer(i,x,y,z,type,radius);
						SetPlayerHealth(i,T3D:health);
						SetPlayerArmour(i,T3D:armour);
						if(i != byplayerid) Tryg3D::GivePlayerDamage(i,damage,byplayerid,51,3);
					}
				} else {
					CreateExplosionForPlayer(i,x,y,z,type,radius);
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
			if((GetPlayerInterior(playerid) == interiorid || interiorid == -1) && (GetPlayerVirtualWorld(playerid) == worldid || worldid == -1) && (VectorSize(px-x,py-y,pz-z) <= distance)){
				if(IsPlayerInRangeOfPoint(playerid,radius,x,y,z)){
					if(IsPlayerInAnyVehicle(playerid)){
						T3D:vid = GetPlayerVehicleID(playerid);
						GetVehicleHealth(T3D:vid,T3D:health);
						CreateExplosionForPlayer(playerid,x,y,z,type,radius);
						if(playerid != byplayerid) SetVehicleHealth(T3D:vid,NLTZF(T3D:health-vehicle_damage));
					} else {
						GetPlayerHealth(playerid,T3D:health);
						GetPlayerArmour(playerid,T3D:armour);
						SetPlayerHealth(playerid,765.0); //anti death in explosion
						CreateExplosionForPlayer(playerid,x,y,z,type,radius);
						SetPlayerHealth(playerid,T3D:health);
						SetPlayerArmour(playerid,T3D:armour);
						if(playerid != byplayerid) Tryg3D::GivePlayerDamage(playerid,damage,byplayerid,51,3);
					}
				} else {
					CreateExplosionForPlayer(playerid,x,y,z,type,radius);
				}
			}
		}
	}
}