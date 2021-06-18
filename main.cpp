#include <iostream>
#include <string>
#include <time.h>
#include "Tabla.h"
#include <stdlib.h>
using namespace std;

int menu() {
	int opcion=0;
	cout<<"Menu"<<endl;
	cout<<"1) Agregar Registro"<<endl;
	cout<<"2) Modificar Registro"<<endl;
	cout<<"3) Eliminar Registro"<<endl;
	cout<<"4) Imprimir Tabla"<<endl;
	cout<<"5) Valor Maximo de una columna"<<endl;
	cout<<"6) Valor Minimo de una columna"<<endl;
	cout<<"7) Mostrar Datos"<<endl;
	cout<<"8) Salida"<<endl;
	cout<<"Ingrese su opcion:";
	cin>>opcion;
	return opcion;
}

int main(int argc, char** argv) {
	int opcion=0;
	Tabla* tab = new Tabla();
	
	srand(time(NULL));
	
	while(opcion != 8 ) {
		opcion = menu();
		switch(opcion) {
			case 1: {
				string nombre ="";
				string apellido="";
				int edad=0;
				int notaExamenP=0,notaAcumulativo=0,notaExamenF=0;


				cout<<"Ingrese el nombre:"<<endl;
				getline(cin,nombre);
				getline(cin,nombre);
				cout<<"Ingrese el apellido:"<<endl;
				getline(cin,apellido);
				cout<<"Ingrese la edad:"<<endl;
				cin>>edad;

				notaExamenP = rand()%100;
				notaAcumulativo = rand()%100;
				notaExamenF = rand()%100;
				tab->agregarDatos(nombre,apellido,edad,notaExamenP,notaAcumulativo,notaExamenF);
				break;
			}
			case 2: {
				tab->modificar();

				break;
			}
			case 3: {
				tab->eliminar();
				break;
			}
			case 4: {

				break;
			}
			case 5: {

				break;
			}
			case 6: {

				break;
			}
			case 7: {

				break;
			}
			case 8: {
				cout<<"Gracias por usar el programa!!!\nBuen dia!!!";
				break;
			}


		}

	}
	delete tab;
	return 0;
}
