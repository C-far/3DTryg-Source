Tryg3D::Function:: Tryg3D::GetModules(&modules_count=0){
	modules_count = 0;
	new T3D:string[256], T3D:module_name[20];
	format(T3D:string,sizeof(T3D:string),"3D");
	for(new i = 0; i < _:(Tryg3D::Module); i++){
		if(Tryg3D::IsModuleLoaded(Tryg3D::Module:i)){
			Tryg3D::GetModuleName(Tryg3D::Module:i,T3D:module_name);
			format(T3D:string,sizeof(T3D:string),"%s:%s",T3D:string,T3D:module_name);
			modules_count++;
		}
	}
	return T3D:string;
}