#include "Tabla.h"
#include "Columna.cpp"

Tabla::Tabla() {

	this->nombres = new Columna<string>();
	this->apellidos = new Columna<string>();
	this->edades = new Columna<int>();
	this->notasAcumulativo = new Columna<float>();
	this->notasExamenF = new Columna<float>();
	this->notasExamenP = new Columna<float>();

}

Tabla::~Tabla() {

}

void Tabla::agregarDatos(string nombre,string apellido,int edad,float examenParcial,float acumulativo,float examenFinal) {

	this->nombres->addVector(nombre);
	this->apellidos->addVector(apellido);
	this->edades->addVector(edad);
	this->notasExamenP->addVector(examenParcial);
	this->notasAcumulativo->addVector(acumulativo);
	this->notasExamenF->addVector(examenFinal);
	
}


void Tabla::modificar() {
/*
	int opcion=0;
	cout<<"Menu"<<endl;
	cout<<"1) Modificar el Nombre"<<endl;
	cout<<"2) Modificar el Apellido"<<endl;
	cout<<"3) Modificar la Edad"<<endl;
	cout<<"Ingrese su opcion:";
	cin>>opcion;
	//Tabla tab ;
	for(int i=0; i<nombres.dato.size() ; i++) {
		//cout<<"Nombre:"<<tab.getNombre();
	}
	int posicion=0;
	cout<<"Ingrese la posicion que desea modificar:";
	cin>>posicion;

	switch(opcion) {
		case 1: {
			cout<<"Ingrese el nuevo nombre:";
			string nombre="";
			getline(cin,nombre);
			nombres[i].setNombre(posicion,nombre);
			break;
		}
		case 2: {
			cout<<"Ingrese el nuevo apellido:";
			string apellido="";
			getline(cin,apellido);
			nombres[i].setApellido(posicion,apellido);
			break;
		}
		case 3: {
			cout<<"Ingrese la nueva edad:";
			int edad;
			cin>>edad;
			nombres[i].setEdad(posicion,Edad);
			break;
		}
	}

*/
}

void Tabla::eliminar() {

	/*
	int opcion=0;
	cout<<"Ingrese la posicion que desea eliminar:";
	cin>>opcion;
	while(opcion < 0 || opcion > nombres.size()){
		cout<<"Numero no valido ingrese nuevamente:";
		cin>>opcion;
	}

	for(int i=0;i<nombres.size();i++){
		if(opcion == i){
			//aqui cod para eliminar
		}
	}
	cout<<"Eliminado exitoso!!";
	*/

}

void Tabla::mostrarDatos() {



}
