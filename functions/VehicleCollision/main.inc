/************************************************************************************************************************************
 *                                                                                                                                  *
 * Vehicle Collision Functions                                                                                                      *
 *                                                                                                                                  *
 ************************************************************************************************************************************/

#define IsVehicleCollisionEnabled()				Tryg3D::VehicleCollisionSystem

#define IsToggledVehicleCollision(%0)			Tryg3D::VehicleCollisionUsed[(%0)]
#define ToggleVehicleCollision(%0,%1)			Tryg3D::VehicleCollisionUsed[(%0)] = (%1)

