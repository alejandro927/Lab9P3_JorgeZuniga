#include "Columna.h"

template <class T>
Columna<T>::Columna() 
{

}



template <class T>
void Columna<T>::addVector(T dato) {
	this->datos.push_back(dato);
}


template <class T>
int Columna<T>::tamano(){
	return this->datos.size();
}


template <class T>
void Columna<T>::modif(int posicion, T cambio){
	
	for(int i=0;i<datos.size();i++){
		
		if(posicion == i){
			datos[i] == cambio;
		}
		
	}
	
}

template <class T>
void Columna<T>::eliminar(int posicion){
	
	for(int i=0;i<datos.size();i++){
		
		if(posicion == i){
			datos[i].erase(datos.begin()+1);
		}
		
	}
	
}


template <class T>
Columna<T>* Columna<T>::sumar(Columna<T>* dato) {
	return dato;
}


template <class T>
T Columna<T>::min() {

}

template <class T>
T Columna<T>::max() {

}
