/************************************************************************************************************************************
 *                                                                                                                                  *
 * FCNPC Functions                                                                                                                  *
 *                                                                                                                                  *
 ************************************************************************************************************************************/
 
#define FCNPC_InRangeOfPoint(%0,%1,%2,%3,%4)	(Item::GetDistanceFromPoint((%0),item_fcnpc,(%2),(%3),(%4)) <= (%1))
#define IsNPCInRangeOfPoint						FCNPC::InRangeOfPoint
#define GetNPCTargetAngle						FCNPC::GetTargetAngle
#define SetNPCTargetAngle						FCNPC::SetTargetAngle
#define GetPointInFrontOfNPC					FCNPC::GetPointInFront
#define GetPointInFrontOfNPCCol					FCNPC::GetPointInFrontCol
#define SetNPCAbsolutePosition					FCNPC::SetAbsolutePosition