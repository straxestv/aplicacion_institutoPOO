#include "EscuelaSup.h"

class Instituto{
      
      private:
			
		string Nombre;
		EscuelaSup *ESup;
		int NESup;
	  
	  public:
			
			Instituto();
			Instituto(string, int);
			Instituto(const Instituto &);
			void Leer();
			void Imprimir();
			Instituto & operator = (const Instituto &);
			~Instituto();
		
};
