Tryg3D::Function:: IsPointInStream(Float:x,Float:y,Float:z,Stream:StreamData[Stream3D]){
	switch(StreamData[T3D:type]){
		case s_circle:			return IsPointInCircle(x,y,StreamData[T3D:X],StreamData[T3D:Y],StreamData[T3D:R]);
		case s_cylinder3d:		return IsPointInCylinder3D(x,y,z,StreamData[T3D:minX],StreamData[T3D:minY],StreamData[T3D:minZ],StreamData[T3D:maxX],StreamData[T3D:maxY],StreamData[T3D:maxZ],StreamData[T3D:R]);
		case s_cylinder2d:		return IsPointInCylinder2D(x,y,z,StreamData[T3D:X],StreamData[T3D:Y],StreamData[T3D:minZ],StreamData[T3D:maxZ],StreamData[T3D:R]);
		case s_sphere:			return IsPointInSphere(x,y,z,StreamData[T3D:X],StreamData[T3D:Y],StreamData[T3D:Z],StreamData[T3D:R]);
		case s_rectangle:		return IsPointInRectangle(x,y,StreamData[T3D:minX],StreamData[T3D:minY],StreamData[T3D:maxX],StreamData[T3D:maxY]);
		case s_cube2d:			return IsPointInCube(x,y,z,StreamData[T3D:minX],StreamData[T3D:minY],StreamData[T3D:minZ],StreamData[T3D:maxX],StreamData[T3D:maxY],StreamData[T3D:maxZ]);
		case s_circularsector:	return IsPointInCircularSector(x,y,StreamData[T3D:X],StreamData[T3D:Y],StreamData[T3D:minZ],StreamData[T3D:R],StreamData[T3D:maxZ]);
		case s_sphericalsector:	return IsPointInSphericalSector(x,y,z,StreamData[T3D:X],StreamData[T3D:Y],StreamData[T3D:Z],StreamData[T3D:minX],StreamData[T3D:minZ],StreamData[T3D:R],StreamData[T3D:maxX],StreamData[T3D:maxZ]);
		case s_cone:			return IsPointInCone3D(x,y,z,StreamData[T3D:minX],StreamData[T3D:minY],StreamData[T3D:minZ],StreamData[T3D:maxX],StreamData[T3D:maxY],StreamData[T3D:maxZ],StreamData[T3D:X],StreamData[T3D:Y]);
		case s_cube3d:			return IsPointInCube3D(x,y,z,StreamData[T3D:X],StreamData[T3D:Y],StreamData[T3D:Z],StreamData[T3D:minX],StreamData[T3D:minY],StreamData[T3D:minZ],StreamData[T3D:maxX],StreamData[T3D:maxY],StreamData[T3D:maxZ]);
		case s_ellipse:			return IsPointInEllipse(x,y,StreamData[T3D:X],StreamData[T3D:Y],StreamData[T3D:minX],StreamData[T3D:minY]);
		case s_ellipticalcyl2d: return IsPointInEllipticalCylinder2D(x,y,z,StreamData[T3D:X],StreamData[T3D:Y],StreamData[T3D:minZ],StreamData[T3D:maxZ],StreamData[T3D:minX],StreamData[T3D:minY]);
	}
	return 0;
}