#include "Instituto.h"

Instituto & Instituto :: operator = (const Instituto & I){
       
       if(this != &I){
		
		  this->Nombre = I.Nombre;
		  this->NESup = I.NESup;
		  this->NESup = I.NEMSup;
		  
		  if(I.ESup != NULL){
				
				this->ESup = new EscuelaSup[NESup];
				
				int i;
				
				for(i = 0; i < NESup; i++){
			       
			       this->ESup[i] = I.ESup[i];
			       
				}
		  }else{
		     
		     this->ESup = I.ESup;
		     
		   }
		   
		   //escuela medio superior
		 
		 if(I.EMSup != NULL){
				
				this->EMSup = new EscuelaMedSup[NEMSup];
				
				int i;
				
				for(i = 0; i < NEMSup; i++){
			       
			       this->EMSup[i] = I.EMSup[i];
			       
				}
		  }else{
		     
		     this->EMSup = I.EMSup;
		     
		   }
		   
		   return *this;
	   }
}

Instituto :: Instituto(const Instituto & I){
        
        Nombre = I.Nombre;
        NESup = I.NESup;
        NEMSup = I.NEMSup;
        
        if(I.ESup != NULL){
		
		   ESup = new EscuelaSup[NESup];
		   
		   int i;
		   
		   for(i = 0; i < NESup; i++){
				
				ESup[i] = I.ESup[i];
		  
		  }
		
		}else{
			
			ESup = I.ESup;
		 
		}
		
		if(I.EMSup != NULL){
		
		   EMSup = new EscuelaMedSup[NEMSup];
		   
		   int i;
		   
		   for(i = 0; i < NEMSup; i++){
				
				EMSup[i] = I.EMSup[i];
		  
		  }
		
		}else{
			
			EMSup = I.EMSup;
		 
		}
}

Instituto :: Instituto(string N, int nesup, int nemsup){
      
      Nombre = N;
      NESup = nesup;
      NEMSup = nemsup;
      
      if(NESup != 0)
         ESup = new EscuelaSup[NESup];
      else
        ESup = NULL;
        
      if(NEMSup != 0)
         EMSup = new EscuelaMedSup[NEMSup];
      else
        EMSup = NULL;

}

Instituto :: Instituto(){
    
    Nombre = "Sin asignar";
    NESup = 0;
    ESup = NULL;
    
    NEMSup = 0;
    EMSup = NULL;

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
	
	//ESCUELA MEDIO SUPERIOR
	
	if(EMSup == NULL){
		
		cout << "\n Ingrese el numero de escuelas de nivel medio superior con las que cuenta el instituto ";
		cin >> NEMSup;
		
		EMSup = new EscuelaMedSup[NESup];
		
		for(i = 0; i < NEMSup; i++){
		    
		    EMSup[i].Leer();
		
		}
		
	}else{
	
	  cout << "\n Ingrese el numero de escuelas de nivel medio superior con las que cuenta el instituto ";
	  
	      for(i = 0; i < NEMSup; i++){
				
				EMSup[i].Imprimir();
		
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
	 
	 //ESCUELA MEDIO SUPERIOR
	 
	 if(EMSup != NULL){
		
		for(i = 0; i < NEMSup; i++){
			
			EMSup[i].Imprimir();
		
		}	
			
	 }else{
	   
	   cout << "\n No se ingresaron los datos del instituto";
	   
	 }

}

Instituto :: ~Instituto(){
     
     if(ESup != NULL){
	  delete[] ESup;
	}
	
	if(EMSup != NULL){
	  delete[] EMSup;
	}
	
	cout << "\n Se ejecuta destructor de Instituto";

}















