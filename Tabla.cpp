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
	this->nombres->imprimirVectorNombre();
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
			float notaExamenP=0;
			notaExamenP = rand()%100;
			this->notasExamenP->modif(posicion,notaExamenP);
		}
		break;
		case 5:{
			float notaAcumulativo=0;
			notaAcumulativo = rand()%100;\
			this->notasAcumulativo->modif(posicion,notaAcumulativo);
		}
		break;
		case 6:{
			float notaExamenF=0;
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
	this->nombres->imprimirVectorNombre();
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
	cout<<"Eliminado exitosamente"<<endl;
}

void Tabla::imprimirTabla(){
	cout<<endl<<"====Nombres===="<<endl;
	this->nombres->imprimirVectorNombre();
	
	cout<<endl<<"====Apellidos===="<<endl;
	this->apellidos->imprimirVectorApellido();
	
	cout<<endl<<"====Edades===="<<endl;
	this->edades->imprimirVectorEdad();
	
	cout<<endl<<"====Nota examen parcial===="<<endl;
	this->notasExamenP->imprimirVectorNotaEP();
	
	cout<<endl<<"====Acumulativos===="<<endl;
	this->notasAcumulativo->imprimirVectorNotaAcum();
	
	cout<<endl<<"====Nota examen final===="<<endl;
	this->notasExamenF->imprimirVectorNotaEF();
}

//gets max
string Tabla::getNombreMaximo(){
	return this->nombres->min();
}

string Tabla::getApellidoMaximo(){
	return this->apellidos->min();
}

int Tabla::getEdadMaximo(){
	return this->edades->max();
}

float Tabla::getNotaEFMaximo(){
	return this->notasExamenF->max();
}
float Tabla::getNotaEPMaximo(){
	return this->notasExamenP->max();
}
float Tabla::getNotaAcumMaximo(){
	return this->notasAcumulativo->max();
}

//gets min
string Tabla::getNombreMin(){
	return this->nombres->max();
}

string Tabla::getApellidoMin(){
	return this->apellidos->max();
}

int Tabla::getEdadMin(){
	return this->edades->min();
}

float Tabla::getNotaEFMin(){
	return this->notasExamenF->min();
}
float Tabla::getNotaEPMin(){
	return this->notasExamenP->min();
}
float Tabla::getNotaAcumMin(){
	return this->notasAcumulativo->min();
}

void Tabla::max(){
	string nombre="",apellido="";
	int edad=0;
	float notaF=0,notaAcum=0,notaP=0;
	
	nombre = getNombreMaximo();
	apellido = getApellidoMaximo();
	
	edad = getEdadMaximo();
	
	notaP = getNotaEPMaximo();
	notaAcum = getNotaAcumMaximo();
	notaF = getNotaEFMaximo();
	
	cout<<"\nNombre maximo: "<<nombre;
	cout<<"\nApellido maximo: "<<apellido;
	cout<<"\nEdad maxima: "<<edad;
	cout<<"\nNota maxima de Examen Parcial: "<<notaP;
	cout<<"\nNota maxima de Acumulativo: "<<notaAcum;
	cout<<"\nNota maxima de Examen Final: "<<notaF<<endl;
}

void Tabla::min(){
	string nombre="",apellido="";
	int edad=0;
	float notaF=0,notaAcum=0,notaP=0;
	
	nombre = getNombreMin();
	apellido = getApellidoMin();
	edad = getEdadMin();
	notaP = getNotaEPMin();
	notaAcum = getNotaAcumMin();
	notaF = getNotaEFMin();
	
	cout<<"\nNombre minimo: "<<nombre;
	cout<<"\nApellido minimo: "<<apellido;
	cout<<"\nEdad minima: "<<edad;
	cout<<"\nNota minima de Examen Parcial: "<<notaP;
	cout<<"\nNota minima de Acumulativo: "<<notaAcum;
	cout<<"\nNota minima de Examen Final: "<<notaF<<endl;
}

void Tabla::mostrarDatos(){
	
    Columna<string>* aux = new Columna<string>;
    
    for (int i = 0 ; i < this->nombres->tamano(); i++ ){
    	//separar el nombre con el apellido por un espacio en blanco
	    aux->addVector(" ");
    }

	//se suman las notas para hacer la nota total
    Columna<float>* notatot = this->notasAcumulativo->sumar(this->notasExamenF);
    notatot = notatot->sumar(this->notasExamenP);
    
    
    //se une para hacer el nombre completo
    Columna<string>* nombrecompleto = this->nombres->sumar(aux);
    nombrecompleto = nombrecompleto->sumar(this->apellidos);
    
    for (int i = 0 ; i < this->nombres->tamano() ; i++ ){
        cout << "~Nombre Completo:" << nombrecompleto->getDato(i) << "   ~Nota Final:" << notatot->getDato(i) << endl;
    }
    delete aux;
	delete nombrecompleto;
	delete notatot;
}


