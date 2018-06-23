Tryg3D::Function:: IsPlayerOnSpawn(playerid,Float:check_radius=1.0){
	new teamid,modelid,Float:spawn_x,Float:spawn_y,Float:spawn_z,Float:z_angle,weapon1,weapon1_ammo,weapon2,weapon2_ammo,weapon3,weapon3_ammo;
	GetSpawnInfo(playerid,teamid,modelid,spawn_x,spawn_y,spawn_z,z_angle,weapon1,weapon1_ammo,weapon2,weapon2_ammo,weapon3,weapon3_ammo);
	return IsPlayerInRangeOfPoint(playerid,check_radius,spawn_x,spawn_y,spawn_z);
}
