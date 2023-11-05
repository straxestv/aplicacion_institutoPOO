#include "CarreraMS.h"

class EscuelaMedSup{
      
      private:
			
			string Nombre;
			CarreraMS *C;
			int N_EMS;
	  
	  public:
			
			EscuelaMedSup();
			EscuelaMedSup(string, int);
			EscuelaMedSup(const EscuelaMedSup &);
			void Leer();
			void Imprimir();
			EscuelaMedSup & operator = (const EscuelaMedSup &);
			~EscuelaMedSup();

};
