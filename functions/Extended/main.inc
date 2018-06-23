/************************************************************************************************************************************
 *                                                                                                                                  *
 * Extended Functions                                                                                                               *
 *                                                                                                                                  *
 ************************************************************************************************************************************/

 //flag_a
#define Tryg3D_GetActiveCount() 						GetSVarInt("ADM:3DTryg:ACTIVE")
#define Tryg3D_GetErrorCount() 							GetSVarInt("ADM:3DTryg:Error")
#define Tryg3D_ResetErrorCount() 						SetSVarInt("ADM:3DTryg:Error",0)
#define Update3DTrygErrorCount() 						SetSVarInt("ADM:3DTryg:Error",Tryg3D::GetErrorCount()+1)

#define Tryg3D_SetStreamDistance(%0)					Tryg3D::StreamDistance = (%0)
#define Tryg3D_GetStreamDistance()						Tryg3D::StreamDistance