#include "EscuelaSup.h"

EscuelaSup & EscuelaSup :: operator = ( const EscuelaSup & ES){
         if(this != &ES){
		    
		    this->Nombre = ES.Nombre;
		    this->N_ES = ES.N_ES;
		    
		    if(ES.C != NULL){
			
			   this->C = new Carrera[N_ES];
			   int i;
			   
			   for(i = 0; i < N_ES; i++){
			      
			      this->C[i] = ES.C[i];
			  
			  }
			
			}else{
			   
			   this->C = ES.C;
			
			}
			
			return *this;
		  
		  }

}

EscuelaSup :: EscuelaSup(const EscuelaSup & ES){
        
        Nombre = ES.Nombre;
        N_ES = ES.N_ES;
        
        if(ES.C != NULL){
		  
		  C = new Carrera[N_ES];
		  int i;
		  
		  for(i = 0; i < N_ES; i++){
		     
		     C[i] = ES.C[i];
		  
		  }
		  
		}else{
		  
		  C = ES.C;
		  
		 }
}

EscuelaSup :: EscuelaSup(string N, int n_es){
    
       Nombre = N;
       N_ES = n_es;
       
       if( N_ES != 0)
       
          C = new Carrera[N_ES];
       else
          C = NULL;

}

EscuelaSup :: EscuelaSup(){

    Nombre = "Sin asignar";
    C = NULL;
    N_ES = 0;

}

void EscuelaSup :: Leer(){
     int i;
     
     if(Nombre == "Sin asignar"){
	     
	     cout << "\n ESCUELA: ";
	     cin.ignore();
	     getline(cin, Nombre);
	 
	 }
	 
	 if(C == NULL){
		
		cout << "\n Ingrese el numero de Carreras que tiene la escuela " << Nombre << ": ";
		cin >> N_ES;
		
		C = new Carrera[N_ES];
		
		for(i = 0; i < N_ES; i++){
			
			C[i].Leer();
        
	    }
				
	}else{
	   
	   cout << "\n Ingrese el numero de carreras que tiene la escuela" << Nombre << ": ";
	      
	      for(i = 0; i < N_ES; i++){
			
			C[i].Leer();
		  
		  }
	 }
}

void EscuelaSup :: Imprimir(){
    
    int i;
    
     cout << "\n\n Escuela: " << Nombre << endl;

     if(C != NULL){
			
		for(i = 0; i < N_ES; i++){
		   
		   C[i].Imprimir();
		
		}
	 
	 }else{
	   
	   cout << "\n No se han ingresado los datos de la escuela ";
	   
	}
}

EscuelaSup :: ~EscuelaSup(){

    if(C != NULL){
	  delete[] C;
	}
	
	cout << "\n Se ejecuta destructor de EscuelaSup";

}

















