/************************************************************************************************************************************
 *                                                                                                                                  *
 * Nero_3D Rotations Functions                                                                                                      *
 * Code anti-collision: YES                                                                                                         *
 *                                                                                                                                  *
 ************************************************************************************************************************************/
 
enum T3D:eulermode {
	// Proper / Classic Euler angles
	T3D:euler_xzx,
	T3D:euler_xyx,
	T3D:euler_yxy,
	T3D:euler_yzy,
	T3D:euler_zyz,
	T3D:euler_zxz,
	// Tait-Bryan angles
	T3D:euler_xzy,
	T3D:euler_xyz,
	T3D:euler_yxz,
	T3D:euler_yzx,
	T3D:euler_zyx, // pitch roll yaw
	T3D:euler_zxy // sa-mp
}

const T3D:eulermode: T3D:euler_default = T3D:euler_zxy;