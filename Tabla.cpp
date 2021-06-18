#include "Tabla.h"

Tabla::Tabla() {

}
Tabla::~Tabla() {

}

void Tabla::agregarDatos(string Nombre,string Apellido,int Edad,float ExamenParcial,float Acumulativo,float ExamenFinal) {
	//Columna<float>* x = notasExamenP->sumar(Acumulativo);
	nombres.dato.push_back(Nombre);
	apellidos.dato.push_back(Apellido);
	edades.dato.push_back(Edad);
	notasExamenP.dato.push_back(ExamenParcial);
	notasAcumulativo.dato.push_back(Acumulativo);
	notasExamenF.dato.push_back(ExamenFinal);
}

void Tabla::modificar() {

	int opcion=0;
	cout<<"Menu"<<endl;
	cout<<"1) Modificar el Nombre"<<endl;
	cout<<"2) Modificar el Apellido"<<endl;
	cout<<"3) Modificar la Edad"<<endl;
	cout<<"4) Modificar la nota del Examen parcial"<<endl;
	cout<<"5) Modificar la nota del acumulativo"<<endl;
	cout<<"6) Modificar la nota del Examen Final"<<endl;
	cout<<"Ingrese su opcion:";
	cin>>opcion;
	
	


}


void Tabla::mostrarDatos() {



}