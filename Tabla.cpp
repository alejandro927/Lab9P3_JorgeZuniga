#include "Tabla.h"

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

void Tabla::agregarDatos(string Nombre,string Apellido,int Edad,float ExamenParcial,float Acumulativo,float ExamenFinal) {

	this->nombres.push_back(Nombre);
	this->apellidos.push_back(Apellido);
	this->edades.push_back(Edad);
	this->notasExamenP.push_back(ExamenParcial);
	this->notasAcumulativo.push_back(Acumulativo);
	this->notasExamenF.push_back(ExamenFinal);

}



string getNombre(int posicion) {
	/*
		for(int i=0; i<nombres.dato.size(); i++) {
			if(opcion == i) {
				string nombre="";
				nombre = nombres[i];
				return nombre;
			}
		}
		*/
}

void setNombre(int posicion,string newName) {
	/*
		for(int i=0; i<nombres.dato.size(); i++) {
			if(posicion == i) {
				nombres[i] = newName;
			}
		}
	*/
}

string getApellido() {

}
void setApellido(int posicion,string newApellido) {
	/*
		for(int i=0; i<apellidos.dato.size(); i++) {
			if(posicion == i) {
				nombres[i] = newApellido;
			}
		}
	*/
}

int getEdad() {

}
void setEdad(int posicion,int newedad) {
	/*
		for(int i=0; i<edades.dato.size(); i++) {
			if(posicion == i) {
				nombres[i] = newedad;
			}
		}
	*/
}

void Tabla::modificar() {

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