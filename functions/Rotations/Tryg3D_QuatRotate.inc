//QuatRotate by Nero_3D
Tryg3D::Function:: Tryg3D::QuatRotate(Float:qw,Float:qx,Float:qy,Float:qz,Float:oX,Float:oY,Float:oZ,&Float:tx,&Float:ty,&Float:tz){
	// wikipedia suggest this formula (a x b - cross prudct)
	// v + 2*r x (r x v + w*v) | q = w,r
	// 15 muls, 15 adds, 9 saves, 42 loads
	// but I used this one because it more compact (a.b - dot product)
	// 2*((r.v)*r + (0.5 - (|r.r|^2))*v + w * (r x v)) | q = w,r
	// 22 muls, 12 adds, 5 saves, 38 loads
	new Float:dot = qx * oX + qy * oY + qz * oZ,
		Float:abs = qw * qw - 0.5;

	tx += 2.0 * (dot * qx + abs * oX + qw * (qz * oY - qy * oZ));
	ty += 2.0 * (dot * qy + abs * oY + qw * (qx * oZ - qz * oX));
	tz += 2.0 * (dot * qz + abs * oZ + qw * (qy * oX - qx * oY));
}