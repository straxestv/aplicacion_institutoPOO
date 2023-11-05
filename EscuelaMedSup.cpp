#include "EscuelaMedSup.h"

EscuelaMedSup & EscuelaMedSup :: operator = ( const EscuelaMedSup & EMS){
         if(this != &EMS){
		    
		    this->Nombre = EMS.Nombre;
		    this->N_EMS = EMS.N_EMS;
		    
		    if(EMS.C != NULL){
			
			   this->C = new CarreraMS[N_EMS];
			   int i;
			   
			   for(i = 0; i < N_EMS; i++){
			      
			      this->C[i] = EMS.C[i];
			  
			  }
			
			}else{
			   
			   this->C = EMS.C;
			
			}
			
			return *this;
		  
		  }

}

EscuelaMedSup :: EscuelaMedSup(const EscuelaMedSup & EMS){
        
        Nombre = EMS.Nombre;
        N_EMS = EMS.N_EMS;
        
        if(EMS.C != NULL){
		  
		  C = new CarreraMS[N_EMS];
		  int i;
		  
		  for(i = 0; i < N_EMS; i++){
		     
		     C[i] = EMS.C[i];
		  
		  }
		  
		}else{
		  
		  C = EMS.C;
		  
		 }
}

EscuelaMedSup :: EscuelaMedSup(string N, int n_ems){
    
       Nombre = N;
       N_EMS = n_ems;
       
       if( N_EMS != 0)
       
          C = new CarreraMS[N_EMS];
       else
          C = NULL;

}

EscuelaMedSup :: EscuelaMedSup(){

    Nombre = "Sin asignar";
    C = NULL;
    N_EMS = 0;

}

void EscuelaMedSup :: Leer(){
     int i;
     
     if(Nombre == "Sin asignar"){
	     
	     cout << "\n ESCUELA: ";
	     cin.ignore();
	     getline(cin, Nombre);
	 
	 }
	 
	 if(C == NULL){
		
		cout << "\n Ingrese el numero de Carreras que tiene la escuela " << Nombre << ": ";
		cin >> N_EMS;
		
		C = new CarreraMS[N_EMS];
		
		for(i = 0; i < N_EMS; i++){
			
			C[i].Leer();
        
	    }
				
	}else{
	   
	   cout << "\n Ingrese el numero de carreras que tiene la escuela" << Nombre << ": ";
	      
	      for(i = 0; i < N_EMS; i++){
			
			C[i].Leer();
		  
		  }
	 }
}

void EscuelaMedSup :: Imprimir(){
    
    int i;
    
     cout << "\n\n Escuela: " << Nombre << endl;

     if(C != NULL){
			
		for(i = 0; i < N_EMS; i++){
		   
		   C[i].Imprimir();
		
		}
	 
	 }else{
	   
	   cout << "\n No se han ingresado los datos de la escuela ";
	   
	}
}

EscuelaMedSup :: ~EscuelaMedSup(){

    if(C != NULL){
	  delete[] C;
	}
	
	cout << "\n Se ejecuta destructor de EscuelaMedSup";

}
