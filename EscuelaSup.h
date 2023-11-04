#include "Carrera.h"

class EscuelaSup{
      
      private:
			
			string Nombre;
			Carrera *C;
			int N_ES;
	  
	  public:
			
			EscuelaSup();
			EscuelaSup(string, int);
			EscuelaSup(const EscuelaSup &);
			void Leer();
			void Imprimir();
			EscuelaSup & operator = (const EscuelaSup &);
			~EscuelaSup();

};
