#include "AlumnoMS.h"

using namespace std;

class GrupoMS{
	
	private:
		
		string Nombre;
		AlumnoMS *A;
		int NE;
	
	public:
		
		GrupoMS();
		GrupoMS(string, int);
		GrupoMS(const GrupoMS &);
		void Leer();
		void Imprimir();
		GrupoMS & operator = (const GrupoMS &);
		~GrupoMS();
	
};
