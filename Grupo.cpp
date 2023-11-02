#include "Grupo.h"

Grupo & Grupo :: operator = (const Grupo & G){
	
	if( this != &G) {
		
		    this->Nombre = G.Nombre;
		    this->NE = G.NE;
		    
		    if(G.A != NULL){
				
				      this->A = new Alumno[NE];
				      int i;
				      
				      for (i = 0; i < NE; i++){
							
							this->A[i] = G.A[i];
							
						}
				
				}
				
				else{
					
					this->A = G.A;
					
				}
		     
		     return *this;
		}

}

Grupo :: Grupo( const Grupo & G){
	
	Nombre = G.Nombre;
	NE = G.NE;
	
	if( G.A != NULL){
		
		A = new Alumno[NE];
		int i;
		
		for(i = 0; i < NE; i++){
			
			A[i] = G.A[i];
		
		}
		
	}
	else{
		
		A = G.A;
		
	}
	
}

Grupo :: Grupo(string N, int ne){
	
	Nombre = N;
	NE = ne;
	
	if(NE != 0)
	     A = new Alumno[NE];
	else
	     A = NULL;

}

Grupo :: Grupo(){
	
	Nombre = "Sin asignar";
	A = NULL;
	NE = 0;

}

void Grupo :: Leer(){
	
	int i;
	
	if (Nombre == "Sin asignar"){
		
		cout << "\n Escriba el nombre del grupo: ";
		cin.ignore();
		getline(cin, Nombre);
		
	}
        if( A == NULL){
		
		   cout << "\n Digite el numero de alumnos del grupo " << Nombre << ": ";
		   cin >> NE;
		   
		   A = new Alumno[NE];
		   
		   for(i = 0; i < NE; i++){
				
				A[i].Leer();
				
		   }
		
		}else{
		
		   cout << "\n Ingresa los Alumnos del grupo " << Nombre;
		       for(i = 0; i < NE; i++){
				   
				   A[i].Leer();
				
				}
		
		}
		

}

void Grupo :: Imprimir(){
	
	int i;
	cout << "\n\n Nombre del grupo: " << Nombre;
	     
	     if( A != NULL){
				
		   for(i = 0; i < NE; i++){
				
				A[i].Imprimir();
				
			}
		
		 }else{
		   cout << "\n No se han ingresaod los datos de este grupo ";
		 }
		 
}

Grupo :: ~Grupo(){

   if(A != NULL){
       delete[] A;
	}

cout << "\n Se ejecuta destructor de grupo";

}
