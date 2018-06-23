/************************************************************************************************************************************
 *                                                                                                                                  *
 * ColAndreas Functions                                                                                                             *
 *                                                                                                                                  *
 ************************************************************************************************************************************/
 
#define IsCollisionFlag(%0,%1)						((%0) & (%1))
#define IsPointInUnderwater(%1,%2,%3)				(IsPointInWater((%1),(%2),(%3)) && ((%3) < -1.0))
#define GetPlayerCollisionFlags(%0)					Item::GetCollisionFlags((%0),item_player)
#define GetVehicleCollisionFlags(%0)				Item::GetCollisionFlags((%0),item_vehicle)

#define GetPointInFrontOnGround(%0,%1,%2,%3,%4,%5,%6,%7,%8) GetPointInFront3DCol((%0),(%1),(%2),(%3),(%4),(%8),(%5),(%6),(%7))
