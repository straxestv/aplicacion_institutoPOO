#include "GrupoMS.h"

class CarreraMS{
	
	private:
		
		string Nombre;
		GrupoMS *G;
		int NC;
	
	public:
		
		CarreraMS();
		CarreraMS(string, int);
		CarreraMS (const CarreraMS &);
		void Leer();
		void Imprimir();
		CarreraMS & operator = (const CarreraMS &);
		~CarreraMS();
		
	
};
