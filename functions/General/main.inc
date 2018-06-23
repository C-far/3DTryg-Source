/************************************************************************************************************************************
 *                                                                                                                                  *
 * General Functions                                                                                                                *
 *                                                                                                                                  *
 ************************************************************************************************************************************/

#define GetDistanceBetweenPoints1D(%1,%2)				VectorSize((%1)-(%2),0.0,0.0)
#define GetDistanceBetweenPoints2D(%1,%2,%3,%4)			VectorSize((%1)-(%3),(%2)-(%4),0.0)
#define GetDistanceBetweenPoints3D(%1,%2,%3,%4,%5,%6)	VectorSize((%1)-(%4),(%2)-(%5),(%3)-(%6))

#define CalculatePercent(%0,%1)							(((%0)/(%1))*100.0)

#define ShiftDegreeToRadian(%0)							((%0)*((FLOAT_PI*2)/360.0))
#define ShiftDegreeToRadianEx(%0)						((360.0-CompRotationFloat(%0))*(-((FLOAT_PI*2)/360.0)))
#define ShiftDegreeToGrades(%0)							((%0)*(10.0/9.0))
#define ShiftRadianToDegree(%0)							((%0)/((FLOAT_PI*2)/360.0))
#define ShiftRadianToDegreeEx(%0) 						(CompRotationFloat(floatabs(((%0)/((FLOAT_PI*2)/360.0))+360.0)))
#define ShiftRadianToGrades(%0)							(ShiftDegreeToGrades(ShiftRadianToDegree(%0)))
#define ShiftGradesToDegree(%0)							((%0)*0.9)
#define ShiftGradesToRadian(%0)							(ShiftDegreeToRadian(ShiftGradesToDegree(%0)))

#define ShiftRotationToVector(%0,%1,%2,%3,%4)			(GetPointInFront3D(0.0,0.0,0.0,(%0),(%1),1.0,(%2),(%3),(%4)))

#define RecoilFloat(%0,%1)								(((%0) >= 0.0)?((%0)+(%1)):((%0)-(%1)))

//old code version made by Zoutdaxv (modified version)
#define GetRotationFor2Point2D(%0,%1,%2,%3,%4)			(CompRotationFloat((atan2((%3)-(%1),(%2)-(%0))-90.0),(%4)))

#define IsPointInCylinder2D(%0,%1,%2,%3,%4,%5,%6,%7)	IsPointInCylinder3D((%0),(%1),(%2),(%3),(%4),(%5),(%3),(%4),(%6),(%7))
#define GetRandomPointOnCircle(%0,%1,%2,%3,%4)			GetPointInFront2D((%0),(%1),Tryg3D_RandomFloat(0.0,360.0),(%2),(%3),(%4))
#define IsVehicleInRangeOfPoint(%0,%1,%2,%3,%4)			(GetVehicleDistanceFromPoint((%0),(%2),(%3),(%4)) <= (%1))

#define ShiftVectorToRotation(%0,%1,%2,%3,%4)			CompRotationFloat(-(acos(%2)-90.0),(%3)), CompRotationFloat((atan2((%1),(%0))-90.0),(%4))
#define IsPointInCircle(%0,%1,%2,%3,%4) 				(GetDistanceBetweenPoints2D((%0),(%1),(%2),(%3)) <= (%4))
#define IsPointInSphere(%0,%1,%2,%3,%4,%5,%6)			(GetDistanceBetweenPoints3D((%0),(%1),(%2),(%3),(%4),(%5)) <= (%6))
#define IsPointInRectangle(%1,%2,%3,%4,%5,%6)			(((%1) >= (%3) && (%1) <= (%5)) && ((%2) >= (%4) && (%2) <= (%6)))
#define IsPointInCube(%1,%2,%3,%4,%5,%6,%7,%8,%9)		(((%1) >= (%4) && (%1) <= (%7)) && ((%2) >= (%5) && (%2) <= (%8)) && ((%3) >= (%6) && (%3) <= (%9)))
#define GetPlayerCameraLookAt(%0,%1,%2,%3)				GetPointInFrontOfCamera3D((%0),(%1),(%2),(%3),5.0)
#define IsProbable(%0)									((random(100)+1) <= (%0))
#define GetVehicleFlags(%0)								GetVehicleFlagsByModel(GetVehicleModel(%0))
#define IsVehicleFlag(%0,%1)							((%0) & (%1))

//Universal boost
#define GetObjectDistanceFromPoint(%0,%1,%2,%3)					Item::GetDistanceFromPoint((%0),item_object,(%1),(%2),(%3))
#define IsObjectInRangeOfPoint(%0,%1,%2,%3,%4)					(Item::GetDistanceFromPoint((%0),item_object,(%2),(%3),(%4)) <= (%1))

#define GetPlayerObjectDistance(%1,%2)							Item::GetDistance((%1),item_player,(%1),item_object)
#define GetDistanceBetweenPlayers(%1,%2)						Item::GetDistance((%1),item_player,(%2),item_player)
#define GetDistanceBetweenVehicles(%1,%2)						Item::GetDistance((%1),item_vehicle,(%2),item_vehicle)
#define GetDistanceBetweenObjects(%1,%2)						Item::GetDistance((%1),item_object,(%2),item_object)
#define GetPlayerVehicleDistance(%1,%2)							Item::GetDistance((%1),item_player,(%2),item_object)

#define IsPlayerInCircle(%0,%1,%2,%3)							Item::InCircle((%0),item_player,(%1),(%2),(%3))
#define IsPlayerInCylinder3D(%0,%1,%2,%3,%4,%5,%6,%7)			Item::InCylinder3D((%0),item_player,(%1),(%2),(%3),(%4),(%5),(%6),(%7))
#define IsPlayerInCylinder2D(%0,%1,%2,%3,%4,%5)					Item::InCylinder2D((%0),item_player,(%1),(%2),(%3),(%4),(%5))
#define IsPlayerInSphere(%0,%1,%2,%3,%4)						Item::InSphere((%0),item_player,(%1),(%2),(%3),(%4))
#define IsPlayerInRectangle(%0,%1,%2,%3,%4)						Item::InRectangle((%0),item_player,(%1),(%2),(%3),(%4))
#define IsPlayerInCube(%0,%1,%2,%3,%4,%5,%6)					Item::InCube((%0),item_player,(%1),(%2),(%3),(%4),(%5),(%6))
#define IsPlayerInPolygon(%0,%1)								Item::InPolygon((%0),item_player,(%1))
#define IsPlayerInCircularSector(%0,%1,%2,%3,%4,%5)				Item::InCircularSector((%0),item_player,(%1),(%2),(%3),(%4),(%5))
#define IsPlayerInCone(%0,%1,%2,%3,%4,%5,%6,%7,%8)				Item::InCone((%0),item_player,(%1),(%2),(%3),(%4),(%5),(%6),(%7),(%8))
#define IsPlayerInCube3D(%0,%1,%2,%3,%4,%5,%6,%7,%8,%9)			Item::InCube3D((%0),item_player,(%1),(%2),(%3),(%4),(%5),(%6),(%7),(%8),(%9))
#define IsPlayerInEllipse(%0,%1,%2,%3,%4)						Item::InEllipse((%0),item_player,(%1),(%2),(%3),(%4))
#define IsPlayerInEllipticalCylinder2D(%0,%1,%2,%3,%4,%5,%6)	Item::InEllipticalCylinder2D((%0),item_player,(%1),(%2),(%3),(%4),(%5),(%6))
#define IsPlayerInSphericalSector(%0,%1,%2,%3,%4,%5,%6,%7,%8)	Item::InSphericalSector((%0),item_player,(%1),(%2),(%3),(%4),(%5),(%6),(%7),(%8))

#define GetArcPointsFloor3D(%0,%1,%2,%3,%4,%5,%6,%7)			GetArcPoints3D((%0),(%1),(%2),(%3),(%4),(%5),0.0,(%6),(%7))
#define GetArcPointsCellar3D(%0,%1,%2,%3,%4,%5,%6,%7)			GetArcPoints3D((%0),(%1),(%2),(%3),(%4),(%5),180.0,(%6),(%7))
#define GetArcPointsStarboard3D(%0,%1,%2,%3,%4,%5,%6,%7)		GetArcPoints3D((%0),(%1),(%2),(%3),(%4),(%5),90.0,(%6),(%7))
#define GetArcPointsLarboard3D(%0,%1,%2,%3,%4,%5,%6,%7)			GetArcPoints3D((%0),(%1),(%2),(%3),(%4),(%5),270.0,(%6),(%7))

#define GetArcPointsFloor2D(%0,%1,%2,%3,%4,%5,%6) 				GetArcPointsFloor3D((%0),(%1),(%2),(%3),(%4),(%2),(%5),(%6))
#define GetArcPointsCellar2D(%0,%1,%2,%3,%4,%5,%6)				GetArcPointsCellar3D((%0),(%1),(%2),(%3),(%4),(%2),(%5),(%6))
#define GetArcPointsLarboard2D(%0,%1,%2,%3,%4,%5,%6)			GetArcPointsLarboard3D((%0),(%1),(%2),(%3),(%4),(%2),(%5),(%6))
#define GetArcPointsStarboard2D(%0,%1,%2,%3,%4,%5,%6)			GetArcPointsStarboard3D((%0),(%1),(%2),(%3),(%4),(%2),(%5),(%6))
