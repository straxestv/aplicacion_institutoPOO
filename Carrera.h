#include "Grupo.h"

class Carrera{
	
	private:
		
		string Nombre;
		Grupo *G;
		int NC;
	
	public:
		
		Carrera();
		Carrera(string, int);
		Carrera (const Carrera &);
		void Leer();
		void Imprimir();
		Carrera & operator = (const Carrera &);
		~Carrera();
		
	
};
