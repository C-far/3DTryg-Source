//Update 3DTryg for SA:MP 0.3.7

#if !defined isnull
	#define isnull(%1) 									((!(%1[0])) || (((%1[0]) == '\1') && (!(%1[1]))))
#endif

#if !defined CreateExplosionForPlayer
	native CreateExplosionForPlayer(playerid,Float:X,Float:Y,Float:Z,type,Float:Radius);
#endif

#if !defined IsValidVehicle
	native IsValidVehicle(vehicleid);
#endif