#include "CarreraMS.h"

CarreraMS & CarreraMS :: operator = (const CarreraMS & C){
      
      if(this != &C){
		
		this->Nombre = C.Nombre;
		this->NC = C.NC;
		
		if(C.G != NULL){
		    
		    this->G = new GrupoMS[NC];
		    int i;
		    
		    for(i = 0; i < NC; i++){
			    
			    this->G[i] = C.G[i];
			
			}
		
		}else{
			
			this->G = C.G;
			
		 }
		return *this;
	  }

}

CarreraMS :: CarreraMS(const CarreraMS & C){

       Nombre = C.Nombre;
       NC = C.NC;
       
       if(C.G != NULL){
		
		  G = new GrupoMS[NC];
		  int i;
		  
		  for(i = 0; i < NC; i++){
		  
		    G[i] = C.G[i];
		  
		  }
	   
	   }else{
	    
	    G = C.G;
	    
		}

}

CarreraMS :: CarreraMS(string N, int nc){
     
     Nombre = N;
     NC = nc;
     
     if(NC != 0)
       G = new GrupoMS[NC];
     else
       G = NULL;

}

CarreraMS :: CarreraMS(){

      Nombre = "Sin asignar";
      G = NULL;
      NC = 0;

}

void CarreraMS :: Leer(){
	
    int i;
    
    if(Nombre == "Sin asignar"){
	
	   cout << "\n Carrera: ";
	   cin.ignore();
	   getline(cin, Nombre);
	
	}
    
    if( G == NULL){
		
		cout << "\n Digite el numero de grupos de la carrera " << Nombre << ": ";
		cin >> NC;
		
		G = new GrupoMS[NC];
		
		for(i = 0; i < NC; i++){
			
			G[i].Leer();
		
		}
		
	}else{
	  
	   cout << "\n Digite el numero de grupos de la carrera " << Nombre;
		       for(i = 0; i < NC; i++){
				   
				   G[i].Leer();
	    
		}
	
	}	

}

void CarreraMS :: Imprimir(){

     int i;
     
     cout << "\n\n Carrera: " << Nombre;
     
         if(G != NULL){
		 
		   for(i = 0; i < NC; i++){
			
			   G[i].Imprimir();
			
			}
		 
		 }else{
		  
		  cout << "\n No se han ingresado los datos de la carrera";
		  
		  }

}

CarreraMS :: ~CarreraMS(){

    if(G != NULL){
	  delete[] G;
	}
	
	cout << "\n Se ejecuta destructor de carrera";

}








