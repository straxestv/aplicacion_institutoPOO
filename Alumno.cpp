#include "Alumno.h"

Alumno :: Alumno(){
	
	Nombre = "Sin asignar";
	Boleta = "Sin asignar";
	Promedio = 0.0;
	Correo = "Sin asignar";
	
}

Alumno :: Alumno(string Nom, string Bol, float Prom, string Cor){
	
	Nombre = Nom;
	Boleta = Bol;
	Promedio = Prom;
	Correo = Cor;
	
}

void Alumno :: Leer(){
	
	cout << "Ingrese el nombre del alumno: ";
	cin.ignore(); // no use fflush por que en mi pc me dice que no he declarado fflush y no me deja usarlo xdd
	getline(cin, Nombre);
	
	cout << "Ingrese la boleta del alumno: ";
    getline(cin, Boleta);
    
    cout << " Promedio del alumno: ";
    cin >> Promedio;
    
    cout << " Correo electronico del alumno; ";
    cin >> Correo;
	
}

void Alumno :: Imprimir(){
	
	cout << " ******************************************* " << endl;
	
	cout << endl << " ===== DATOS DEL ALUMNO ===== " << endl;
	
	cout << " \n Nombre del alumno: " << Nombre << endl;
	
	cout << " \n Boleta: " << Boleta << endl;
	
	cout << " \n Promedio: " << Promedio << endl;
	
	cout << " \n Correo electronico: " << Correo << endl;
	
	cout << " ********************************************* " << endl;
}

Alumno :: ~Alumno(){

    cout << " DESTRUCTOR ALUMNO " << endl;

}

