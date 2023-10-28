#include <iostream>
#include <stdlib.h>

using namespace std;


class Alumno{

    private:
		
		string Nombre;
		string Boleta;
		float Promedio;
		string Correo;
		
	public:
		
		Alumno();
		Alumno(string, string, float, string);
		void Leer();
		void Imprimir();
		~Alumno();
	
};
