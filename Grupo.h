#include "Alumno.h"

using namespace std;

class Grupo{
	
	private:
		
		string Nombre;
		Alumno *A;
		int NE;
	
	public:
		
		Grupo();
		Grupo(string, int);
		Grupo(const Grupo &);
		void Leer();
		void Imprimir();
		Grupo & operator = (const Grupo &);
		~Grupo();
	
};
