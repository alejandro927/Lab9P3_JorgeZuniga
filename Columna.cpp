#include "Columna.h"

template <class T>
Columna<T> Columna::Columna() {

}

template <class T>
void addVector(T dato) {
	this->datos.push_back(dato);
}

/*
template <class T>
int tamano(T dato){
	return this->datos.size();
}


template <class T>
void modif(T dato){
	
}
*/

template <class T>
Columna<T> Columna<T>::sumar(Columna<T> dato) {
	return dato;
}


template <class T>
T Columna<T>::min() {

}

template <class T>
T Columna<T>::max() {

}