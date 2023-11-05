#include <iostream>
#include <stdlib.h>

using namespace std;


class AlumnoMS{

    private:
		
		string Nombre;
		string Boleta;
		float Promedio;
		string Correo;
		
	public:
		
		AlumnoMS();
		AlumnoMS(string, string, float, string);
		void Leer();
		void Imprimir();
		~AlumnoMS();
	
};
