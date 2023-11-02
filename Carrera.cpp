#include "Carrera.h"

Carrera & Carrera :: operator = (const Carrera & C){
      
      if(this != &C){
		
		this->Nombre = C.Nombre;
		this->NC = C.NC;
		
		if(C.G != NULL){
		    
		    this->G = new Grupo[NC];
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

Carrera :: Carrera(const Carrera & C){

       Nombre = C.Nombre;
       NC = C.NC;
       
       if(C.G != NULL){
		
		  G = new Grupo[NC];
		  int i;
		  
		  for(i = 0; i < NC; i++){
		  
		    G[i] = C.G[i];
		  
		  }
	   
	   }else{
	    
	    G = C.G;
	    
		}

}

Carrera :: Carrera(string N, int nc){
     
     Nombre = N;
     NC = nc;
     
     if(NC != 0)
       G = new Grupo[NC];
     else
       G = NULL;

}

Carrera :: Carrera(){

      Nombre = "Sin asignar";
      G = NULL;
      NC = 0;

}

void Carrera :: Leer(){
	
    int i;
    
    if(Nombre == "Sin asignar"){
	
	   cout << "\n Carrera: ";
	   cin.ignore();
	   getline(cin, Nombre);
	
	}
    
    if( G == NULL){
		
		cout << "\n Digite el numero de grupos de la carrera " << Nombre << ": ";
		cin >> NC;
		
		G = new Grupo[NC];
		
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

void Carrera :: Imprimir(){

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

Carrera :: ~Carrera(){

    if(G != NULL){
	  delete[] G;
	}
	
	cout << "\n Se ejecuta destructor de carrera";

}








