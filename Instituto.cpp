#include "Instituto.h"

Instituto & Instituto :: operator = (const Instituto & I){
       
       if(this != &I){
		
		  this->Nombre = I.Nombre;
		  this->NESup = I.NESup;
		  
		  if(I.ESup != NULL){
				
				this->ESup = new EscuelaSup[NESup];
				
				int i;
				
				for(i = 0; i < NESup; i++){
			       
			       this->ESup[i] = I.ESup[i];
			       
				}
		  }else{
		     
		     this->ESup = I.ESup;
		     
		   }
		   
		   return *this;
	   }
}

Instituto :: Instituto(const Instituto & I){
        
        Nombre = I.Nombre;
        NESup = I.NESup;
        
        if(I.ESup != NULL){
		
		   ESup = new EscuelaSup[NESup];
		   
		   int i;
		   
		   for(i = 0; i < NESup; i++){
				
				ESup[i] = I.ESup[i];
		  
		  }
		
		}else{
			
			ESup = I.ESup;
		 
		}
}

Instituto :: Instituto(string N, int nesup){
      
      Nombre = N;
      NESup = nesup;
      
      if(NESup != 0)
         ESup = new EscuelaSup[NESup];
      else
        ESup = NULL;

}

Instituto :: Instituto(){
    
    Nombre = "Sin asignar";
    NESup = 0;
    ESup = NULL;

}

void Instituto :: Leer(){
    
    int i;
    
    if(Nombre == "Sin asignar"){
	   
	   cout << "\n Ingrese el nombre de la institucion: ";
	   cin.ignore();
	   getline(cin, Nombre);
	
	}
	
	if(ESup == NULL){
		
		cout << "\n Ingrese el numero de escuelas con las que cuenta el instituto ";
		cin >> NESup;
		
		ESup = new EscuelaSup[NESup];
		
		for(i = 0; i < NESup; i++){
		    
		    ESup[i].Leer();
		
		}
		
	}else{
	
	  cout << "\n Ingrese el numero de escuelas con las que cuenta el instituto ";
	  
	      for(i = 0; i < NESup; i++){
				
				ESup[i].Imprimir();
		
		}
	}
}

void Instituto :: Imprimir(){
     
     int i;
     
     cout << "*************** " << Nombre << " ***************" << endl;
     
     if(ESup != NULL){
		
		for(i = 0; i < NESup; i++){
			
			ESup[i].Imprimir();
		
		}	
			
	 }else{
	   
	   cout << "\n No se ingresaron los datos del instituto";
	   
	 }

}

Instituto :: ~Instituto(){
     
     if(ESup != NULL){
	  delete[] ESup;
	}
	
	cout << "\n Se ejecuta destructor de Instituto";

}















