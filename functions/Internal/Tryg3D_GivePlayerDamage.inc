Tryg3D::Function:: Tryg3D::GivePlayerDamage(targetid,Float:amount,playerid,weaponid,bodypart){
	if(targetid == INVALID_PLAYER_ID) return 0;
	if(Tryg3D::DeatchTick[targetid] != 0 && GetTickCount() < Tryg3D::DeatchTick[targetid]) return 0;
	#if defined Tryg3D_FCNPC
		if(IsPlayerNPC(targetid) && FCNPC::IsValid(targetid)){
			new Float:T3D:health,Float:T3D:armour;
			T3D:health = FCNPC::GetHealth(targetid);
			T3D:armour = FCNPC::GetArmour(targetid);
			CallRemoteFunction("FCNPC_OnGiveDamage","ddddf",targetid,playerid,weaponid,bodypart,amount);
			CallRemoteFunction("FCNPC_OnTakeDamage","ddddf",targetid,playerid,weaponid,bodypart,amount);
			if(T3D:armour >= amount){
				FCNPC::SetArmour(targetid,T3D:armour-amount);
			} else if(T3D:armour < amount){
				amount -= T3D:armour;
				FCNPC::SetArmour(targetid,0.0);
				if(T3D:health-amount <= 0.0){
					CallRemoteFunction("OnPlayerDeath","ddd",targetid,playerid,weaponid);
					CallRemoteFunction("FCNPC_OnDeath","ddd",targetid,playerid,weaponid);
					Tryg3D::DeatchTick[targetid] = GetTickCount()+200;
					FCNPC::Respawn(targetid);
				} else {
					FCNPC::SetHealth(targetid,T3D:health-amount);
				}
			} else {
				if(T3D:health-amount <= 0.0){
					CallRemoteFunction("OnPlayerDeath","ddd",targetid,playerid,weaponid);
					CallRemoteFunction("FCNPC_OnDeath","ddd",targetid,playerid,weaponid);
					Tryg3D::DeatchTick[targetid] = GetTickCount()+200;
					FCNPC::Respawn(targetid);
				} else {
					FCNPC::SetHealth(targetid,T3D:health-amount);
				}
			}
		} else {
	#endif
		new Float:T3D:health,Float:T3D:armour;
		GetPlayerArmour(targetid,T3D:armour);
		GetPlayerHealth(targetid,T3D:health);
		CallRemoteFunction("OnPlayerGiveDamage","ddfdd",playerid,targetid,amount,weaponid,bodypart);
		CallRemoteFunction("OnPlayerTakeDamage","ddfdd",targetid,playerid,amount,weaponid,bodypart);
		if(T3D:armour >= amount){
			SetPlayerArmour(targetid,T3D:armour-amount);
		} else if(T3D:armour < amount){
			amount -= T3D:armour;
			SetPlayerArmour(targetid,0.0);
			if(T3D:health-amount <= 0.0){
				CallRemoteFunction("OnPlayerDeath","ddd",targetid,playerid,weaponid);
				Tryg3D::DeatchTick[targetid] = GetTickCount()+200;
				SpawnPlayer(targetid);
			} else {
				SetPlayerHealth(targetid,T3D:health-amount);
			}
		} else {
			if(T3D:health-amount <= 0.0){
				CallRemoteFunction("OnPlayerDeath","ddd",targetid,playerid,weaponid);
				Tryg3D::DeatchTick[targetid] = GetTickCount()+200;
				SpawnPlayer(targetid);
			} else {
				SetPlayerHealth(targetid,T3D:health-amount);
			}
		}
	#if defined Tryg3D_FCNPC
		}
	#endif
	return 1;
}