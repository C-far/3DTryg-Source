/************************************************************************************************************************************
 *                                                                                                                                  *
 * FilterScript/GameMode Init Hook                                                                                                  *
 *                                                                                                                                  *
 ************************************************************************************************************************************/

new bool:CRC_Tryg3DInit = true,
	bool:CRC_Tryg3DExit = true,
	T3D:FSAT = 0;

#define Tryg3D_GetActiveTime()							(GetTickCount()-T3D:FSAT)
#define Tryg3D_GetVersion(%0) 							((%0) / 10000),(((%0) % 10000) / 100),(((%0) % 10000) % 100)

#if defined Tryg3D_ColAndreas

	forward OnColAndreasRemoveBuilding();

	Tryg3D::Function:: Tryg3D::IsColAndreasInit(){
		new Float:mapunit;
		ColAndreas::FindZ_For2DCoord(0.0,0.0,mapunit);
		return !(mapunit <= 0.0);
	}

	Tryg3D::Function:: Tryg3D::SafeColAndreasInit(){
		//check ColAndreas Init
		new bool:ColAndreasLastStat = false;
		if(!Tryg3D::IsColAndreasInit()){
			CallRemoteFunction("OnColAndreasRemoveBuilding","");
			ColAndreas::Init();
			ColAndreasLastStat = true;
		}
		if(!Tryg3D::IsColAndreasInit()){
			print("[ADM] Error: ColAndreas failed to initiated.");
			print("[ADM] Error: Cannot load /scriptfiles/colandreas/ColAndreas.cadb (http://8.ct8.pl/d/ColAndreas%20Data%20Base)");
			Update3DTrygErrorCount();
		} else {
			if(ColAndreasLastStat){
				print("[ADM] Info: ColAndreas successfully init.");
			}
		}
	}
	
#endif

#if defined Tryg3D_MapAndreas

	Tryg3D::Function:: Tryg3D::IsMapAndreasInit(){
		new Float:mapunit;
		MapAndreas_FindZ_For2DCoord(0.0,0.0,mapunit);
		return !(mapunit <= 0.0);
	}

	//MapAndreas 1.2.1
	Tryg3D::Function:: Tryg3D::SafeMapAndreasInit(mode = MAP_ANDREAS_MODE_FULL, name[]="", len=sizeof(name)){
		//check MapAndreas Init
		new bool:MapAndreasLastStat = false;
		if(!Tryg3D::IsMapAndreasInit()){
			MapAndreas_Init(mode,name,len);
			MapAndreasLastStat = true;
		}
		if(!Tryg3D::IsMapAndreasInit()){
			print("[ADM] Error: MapAndreas failed to initiated.");
			print("[ADM] Error: Cannot load /scriptfiles/SAfull.hmap (http://8.ct8.pl/d/MapAndreas%201.2.1)");
			Update3DTrygErrorCount();
		} else {
			if(MapAndreasLastStat){
				print("[ADM] Info: MapAndreas successfully init.");
			}
		}
	}

#endif

Tryg3D::Public:: Tryg3D::OnRequestResponse(index, response_code, data[]){
	if(response_code == 200){
		if(isnull(data)) return 0;
		new T3D:version[16], T3D:ver, T3D:file_ver = Tryg3D::Version;
		strmid(T3D:version,data,0,strlen(data));
		T3D:ver = strval(T3D:version);
		if(T3D:ver > T3D:file_ver){
			print(" ");
			printf("[ADM] Info: Please update your 3DTryg include to v%d.%d.%d from here:",Tryg3D::GetVersion(T3D:ver));
			print("http://8.ct8.pl/d/3DTryg.inc");
			print(" ");
		}
	}
	return 1;
}

Tryg3D::Function:: Tryg3D::Init(){
	T3D:FSAT = GetTickCount();
	SetSVarInt("ADM:3DTryg:ACTIVE",Tryg3D::GetActiveCount()+1);
	
	//Welcome to 3DTryg
	new T3D:ver_name[16];
	format(T3D:ver_name,sizeof(T3D:ver_name),"%d.%d.%d",Tryg3D::GetVersion(Tryg3D::Version));
	if(GetSVarInt("ADM:3DTryg:INIT") == 0){
		SetSVarInt("ADM:3DTryg:INIT",1);
		printf("[ADM] Info: Load 3DTryg v%s for SA:MP %s by Abyss Morgan",T3D:ver_name,Tryg3D_SAMP_Version);
	}
	
	//Init Map Precision
	#if !defined DISABLE_3D_TRYG_INIT
		#if defined Tryg3D_ColAndreas
			Tryg3D::SafeColAndreasInit();
		#endif
		#if defined Tryg3D_MapAndreas
			Tryg3D::SafeMapAndreasInit(MAP_ANDREAS_MODE_FULL);
		#endif
		
		#if ((defined Tryg3D_MapAndreas) && (defined Tryg3D_FCNPC))
			new T3D:MapAddress = MapAndreas_GetAddress();
			if(T3D:MapAddress != 0){
				FCNPC::InitMapAndreas(T3D:MapAddress);
				print("[ADM] Info: MapAndreas successfully attached to FCNPC.");
			} else {
				print("[ADM] Error: MapAndreas failed attach to FCNPC (MapAndreas not inited).");
				Update3DTrygErrorCount();
			}
		#endif
		
	#endif
	
	#if defined Tryg3D_FCNPC
		if(!fexist("FCNPC/nodes")){
			print("[ADM] Error: Plugin data not found /scriptfiles/FCNPC/nodes/*.dat (http://8.ct8.pl/d/FCNPC%20Nodes).");
			Update3DTrygErrorCount();
		}
	#endif
	
	if(GetSVarInt("ADM:3DTryg:VERCHECK") == 0){
		SetSVarInt("ADM:3DTryg:VERCHECK",1);
		SetSVarInt("ADM:3DTryg:VERSION",Tryg3D::Version);
		new T3D:send_data[128];
		format(T3D:send_data,sizeof(T3D:send_data),"8.ct8.pl/detector/_check.php?module=3DTryg&version=%d",Tryg3D::Version);
		HTTP(0,HTTP_GET,T3D:send_data,"","Tryg3D_OnRequestResponse");
	}
	
	for(new i = 400; i <= 611; i++){
		SetVehicleFlagsByModel(i,GetVehicleDefaultFlagsByModel(i));
	}
}

Tryg3D::Function:: Tryg3D::Exit(){
	SetSVarInt("ADM:3DTryg:ACTIVE",Tryg3D::GetActiveCount()-1);
	
	//Goodbye 3DTryg
	new T3D:ver_name[16];
	format(T3D:ver_name,sizeof(T3D:ver_name),"%d.%d.%d",(Tryg3D::Version / 10000),((Tryg3D::Version % 10000) / 100),((Tryg3D::Version % 10000) % 100));
	if(Tryg3D::GetActiveCount() == 0){
		SetSVarInt("ADM:3DTryg:INIT",0);
		printf("[ADM] Info: Unload 3DTryg v%s for SA:MP %s by Abyss Morgan",T3D:ver_name,Tryg3D_SAMP_Version);
	}
}

//Hook: OnFilterScriptInit
public OnFilterScriptInit(){
	if(CRC_Tryg3DInit){
		CRC_Tryg3DInit = false;
		Tryg3D::Init();
	}
	#if defined Tryg3D_OnFilterScriptInit
		Tryg3D_OnFilterScriptInit();
	#endif
	return 1;
}

#if defined _ALS_OnFilterScriptInit
	#undef OnFilterScriptInit
#else
	#define _ALS_OnFilterScriptInit
#endif
#define OnFilterScriptInit Tryg3D_OnFilterScriptInit
#if defined Tryg3D_OnFilterScriptInit
	forward Tryg3D_OnFilterScriptInit();
#endif

//Hook: OnGameModeInit
public OnGameModeInit(){
	if(CRC_Tryg3DInit){
		CRC_Tryg3DInit = false;
		Tryg3D::Init();
	}
	#if defined Tryg3D_OnGameModeInit
		Tryg3D_OnGameModeInit();
	#endif
	return 1;
}

#if defined _ALS_OnGameModeInit
	#undef OnGameModeInit
#else
	#define _ALS_OnGameModeInit
#endif
#define OnGameModeInit Tryg3D_OnGameModeInit
#if defined Tryg3D_OnGameModeInit
	forward Tryg3D_OnGameModeInit();
#endif

//Hook: OnFilterScriptExit
public OnFilterScriptExit(){
	if(CRC_Tryg3DExit){
		CRC_Tryg3DExit = false;
		Tryg3D::Exit();
	}
	#if defined Tryg3D_OnFilterScriptExit
		Tryg3D_OnFilterScriptExit();
	#endif
	return 1;
}

#if defined _ALS_OnFilterScriptExit
	#undef OnFilterScriptExit
#else
	#define _ALS_OnFilterScriptExit
#endif
#define OnFilterScriptExit Tryg3D_OnFilterScriptExit
#if defined Tryg3D_OnFilterScriptExit
	forward Tryg3D_OnFilterScriptExit();
#endif

//Hook: OnGameModeExit
public OnGameModeExit(){
	if(CRC_Tryg3DExit){
		CRC_Tryg3DExit = false;
		Tryg3D::Exit();
	}
	#if defined Tryg3D_OnGameModeExit
		Tryg3D_OnGameModeExit();
	#endif
	return 1;
}

#if defined _ALS_OnGameModeExit
	#undef OnGameModeExit
#else
	#define _ALS_OnGameModeExit
#endif
#define OnGameModeExit Tryg3D_OnGameModeExit
#if defined Tryg3D_OnGameModeExit
	forward Tryg3D_OnGameModeExit();
#endif

/************************************************************************************************************************************
 *                                                                                                                                  *
 * Additional operations                                                                                                            *
 *                                                                                                                                  *
 ************************************************************************************************************************************/

#pragma unused Tryg3D_WeaponDamage
#pragma unused Tryg3D_StreamDistance
#pragma unused Tryg3D_DeatchTick
#pragma unused v3DFSAT

#undef Update3DTrygErrorCount

//EOF