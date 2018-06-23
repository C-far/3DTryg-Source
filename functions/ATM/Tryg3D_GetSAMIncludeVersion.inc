Tryg3D::Function:: Tryg3D::GetSAMIncludeVersion(value,name[],maxdest = sizeof(name)){
	format(name,maxdest,"%d.%d.%d",(value / 10000),((value % 10000) / 100),((value % 10000) % 100));
}
