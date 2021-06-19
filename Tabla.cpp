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
srand(time(NULL));
	int opcion=0;
	cout<<"Menu"<<endl;
	cout<<"1) Modificar el Nombre"<<endl;
	cout<<"2) Modificar el Apellido"<<endl;
	cout<<"3) Modificar la Edad"<<endl;
	cout<<"4) Modificar la nota del examen parcial:"<<endl;
	cout<<"5) Modificar la nota del acumulativo:"<<endl;
	cout<<"6) Modificar la nota del examen final:"<<endl;
	cout<<"Ingrese su opcion:";
	cin>>opcion;
	//Tabla tab ;
	this->nombres->imprimirVector();
	cout<<endl;
	cout<<endl<<"Ingrese la posicion que desea modificar:";
	int posicion;
	cin>>posicion;
	while((posicion < 0) || (posicion > this->nombres->tamano())){
		cout<<"Posicion no valida ingrese otro:";
		cin>>posicion;
	}

	switch(opcion) {
		case 1: {
			cout<<"Ingrese el nuevo nombre:";
			string nombre="";
			getline(cin,nombre);
			getline(cin,nombre);
			this->nombres->modif(posicion,nombre);
			break;
		}
		case 2: {
			cout<<"Ingrese el nuevo apellido:";
			string apellido="";
			getline(cin,apellido);
			getline(cin,apellido);
			this->apellidos->modif(posicion,apellido);
			break;
		}
		case 3: {
			cout<<"Ingrese la nueva edad:";
			int edad;
			cin>>edad;
			this->edades->modif(posicion,edad);
			break;
		}
		case 4:{
			int notaExamenP=0;
			notaExamenP = rand()%100;
			this->notasExamenP->modif(posicion,notaExamenP);
		}
		break;
		case 5:{
			int notaAcumulativo=0;
			notaAcumulativo = rand()%100;\
			this->notasAcumulativo->modif(posicion,notaAcumulativo);
		}
		break;
		case 6:{
			int notaExamenF=0;
			notaExamenF = rand()%100;\
			this->notasExamenF->modif(posicion,notaExamenF);
			
		}
		break;
		
		default:
			cout<<"opcion no valida :v"<<endl;
	}


}

void Tabla::eliminar() {
	int posicion;
	this->nombres->imprimirVector();
	cout<<endl<<"Ingrese la posicion que desea eliminar:";
	cin>>posicion;
	while((posicion < 0) || (posicion > this->nombres->tamano())){
		cout<<"Posicion no valida ingrese otra:";
		cin>>posicion;
	}
	
	this->nombres->eliminar(posicion);
	this->apellidos->eliminar(posicion);
	this->edades->eliminar(posicion);
	this->notasExamenP->eliminar(posicion);
	this->notasAcumulativo->eliminar(posicion);
	this->notasExamenF->eliminar(posicion);
	
}

void Tabla::imprimirTabla(){
	this->nombres->imprimirVector();
}


void Tabla::mostrarDatos() {



}
