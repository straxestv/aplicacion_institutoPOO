#include "EscuelaSup.h"
#include "EscuelaMedSup.h"

class Instituto{
      
      private:
			
		string Nombre;
		EscuelaSup *ESup;
		EscuelaMedSup *EMSup;
		int NEMSup;
		int NESup;
	  
	  public:
			
			Instituto();
			Instituto(string, int, int);
			Instituto(const Instituto &);
			void Leer();
			void Imprimir();
			Instituto & operator = (const Instituto &);
			~Instituto();
		
};
