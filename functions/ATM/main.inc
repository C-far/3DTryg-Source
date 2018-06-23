/************************************************************************************************************************************
 *                                                                                                                                  *
 * ATM Module Functions                                                                                                             *
 * Code anti-collision: YES                                                                                                         *
 *                                                                                                                                  *
 ************************************************************************************************************************************/

#if !defined randomex
	#define randomex(%0,%1) 							(random((%1)-(%0)+1)+(%0))
#endif

#define Tryg3D_KeyPressed(%0) 							(((newkeys & (%0)) == (%0)) && ((oldkeys & (%0)) != (%0)))
#define Tryg3D_KeyReleased(%0)							(((newkeys & (%0)) != (%0)) && ((oldkeys & (%0)) == (%0)))
#define Tryg3D_KeyHolding(%0) 							((newkeys & (%0)) == (%0))

//%d:%02d:%02d:%02d
#define Tryg3D_SecToTimeDay(%0)							((%0) / 86400),(((%0) % 86400) / 3600),((((%0) % 86400) % 3600) / 60),((((%0) % 86400) % 3600) % 60)
#define Tryg3D_MSToTimeDay(%0)							Tryg3D_SecToTimeDay((%0)/1000)
//%02d:%02d:%02d
#define Tryg3D_SecToTime(%0)							((%0) / 3600),(((%0) % 3600) / 60),(((%0) % 3600) % 60)
#define Tryg3D_MSToTime(%0)								Tryg3D_SecToTime((%0)/1000)
//%02d:%02d
#define Tryg3D_SecToTimeMini(%0)						((%0) / 60),((%0) % 60)
#define Tryg3D_MSToTimeMini(%0)							Tryg3D_SecToTimeMini((%0)/1000)

#define v3Dfunction%0(%1)								forward %0(%1); public %0(%1)